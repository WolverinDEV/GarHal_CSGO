#pragma comment(lib,"ntdll.lib")
#pragma warning(disable : 26451) // Bug in VS according to Stackoverflow.

#include "kernelinterface.hpp"
#include "offsets.hpp"
#include "data.hpp"
#include <iostream>
#include "Aimbot.hpp"
#include "Engine.hpp"
#include "Entity.hpp"
#include <Windows.h>
#include <optional>
#include "csgo_settings.hpp"
#include "imgui_extensions.h"
#include "utils.hpp"
#include "./memory.hpp"
#include "./netvar.h"
#include "./netvars.h"
#include "./overlay.h"

// hazedumper namespace
using namespace hazedumper::netvars;
using namespace hazedumper::signatures;

// Declarations
inline Aimbot aim;
DWORD ProcessId, ClientAddress, ClientSize, EngineAddress, EngineSize;
std::unique_ptr<KeInterface> Driver{nullptr};

[[noreturn]]
void TriggerBotThread()
{
    while (true)
    {
        if (!csgo_settings::TriggerBot)
        {
            Sleep(100);
            continue;
        }

        if (!engine::IsInGame())
        {
            Sleep(500);
            continue;
        }

        if (!aim.localPlayer.isValidPlayer())
        {
            continue;
        }

        //uint32_t LocalPlayer = Driver->ReadVirtualMemory<uint32_t>(ProcessId, ClientAddress + dwLocalPlayer, sizeof(uint32_t));
        Entity LocalPlayerEnt = aim.localPlayer;

        if (csgo_settings::TriggerBotKey == 0 || ImGui::IsCustomKeyPressed(csgo_settings::TriggerBotKey, true))
        {
            bool usable = false;
            uint16_t weaponid = LocalPlayerEnt.GetCurrentWeaponID();
            const int size = *(&csgo_settings::selectedWeaponIds + 1) - csgo_settings::selectedWeaponIds;
            for (int i(0); i < size; ++i)
            {
                std::string weaponName = csgo_settings::weaponIdHelper[i];
                int matchingWeaponId = csgo_settings::weaponIds[weaponName];
                // This index is selected in the combo &
                if (csgo_settings::selectedWeaponIds[i] && weaponid == matchingWeaponId)
                {
                    usable = true;
                    break;
                }
            }

            if (usable)
            {
                aim.TriggerBot();
            }
        }

        Sleep(2);
    }
}

typedef struct player_info_s
{
    char _pad1[0x10];
    char name[80];//80
    char _pad2[0x64];
    char _pad3[0x17B];

} player_info_t;

std::array<const char*, 20> kRankNames{
        "Not ranked",
        "Silver I",
        "Silver II",
        "Silver III",
        "Silver IV",
        "Silver Elite",
        "Silver Elite Master",

        "Gold Nova I",
        "Gold Nova II",
        "Gold Nova III",
        "Gold Nova Master",
        "Master Guardian I",
        "Master Guardian II",

        "Master Guardian Elite",
        "Distinguished Master Guardian",
        "Legendary Eagle",
        "Legendary Eagle Master",
        "Supreme Master First Class",
        "The Global Elite",

        "<< invalid >>"
};

class EntityList {
        struct EntityIterator {
            explicit EntityIterator() noexcept : index{0}, end_index{0} {}
            explicit EntityIterator(size_t index, size_t end_index) noexcept : index{index}, end_index{end_index} {}

            auto operator++() noexcept -> EntityIterator& {
                while(++this->index < this->end_index) {
                    if(!this->current_entity().isValid()) {
                        continue;
                    }

                    /* next valid player has been found */
                    return *this;
                }

                /* no more valid players available */
                return *this;
            }

            auto operator!=(const EntityIterator& other) const noexcept -> bool {
                return this->index != other.index;
            }

            auto operator*() const noexcept -> Entity {
                return this->current_entity();
            }

            [[nodiscard]]
            auto current_entity() const noexcept -> Entity {
                return Entity{
            Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + this->index * 0x10)
                };
            }

            size_t index;
            size_t end_index;
        };

        struct EntityListIterator {
            explicit EntityListIterator(const EntityList* handle) noexcept : handle{handle} {}

            [[nodiscard]]
            auto begin() const noexcept -> EntityIterator {
                return EntityIterator(0, this->handle->player_entity_list_size);
            }

            [[nodiscard]]
            auto end() const noexcept -> EntityIterator {
                return EntityIterator(this->handle->player_entity_list_size, this->handle->player_entity_list_size);
            }

            const EntityList* handle;
        };
    public:
    size_t entity_list_size{2048};
    size_t player_entity_list_size{64};

        [[nodiscard]]
        auto get_from_handle(uint32_t handle) const -> std::optional<Entity> {
            if((handle & 0xFFF) == 0xFFF) {
                return std::nullopt;
            }

            auto entity_index = (handle & 0xFFF) - 1;
            return this->get_from_index(entity_index);
        }

        [[nodiscard]]
        auto get_from_index(uint32_t index) const -> std::optional<Entity> {
            if(index > this->player_entity_list_size) {
                return std::nullopt;
            }

            Entity entity{
                Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + index * 0x10)
            };
            if(!entity.isValid()) {
                return std::nullopt;
            }

            return std::optional{entity};
        }

        auto get_entities(std::vector<Entity>& result) const -> bool {
            for (size_t i{0}; i < this->player_entity_list_size; i++) {
                Entity entity{
            Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + i * 0x10)
                };
                if(!entity.isValid()) {
                    continue;
                }

                result.push_back(entity);
            }

            return true;
        }

        template<typename T>
        [[nodiscard]]
        auto find_entity_of_type_t() const -> std::optional<T> {
            for (size_t i{0}; i < this->entity_list_size; i++) {
                auto entity = std::make_optional<Entity>(
                        Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + i * 0x10)
                );

                if(!entity->isValid()) {
                    continue;
                }

                auto klass = entity->get_class();

                if(T::kClassId == klass.get_class_id()) {
                    return std::make_optional<T>(entity->GetEntityAddress());
                }
            }

            return std::nullopt;
        }

        [[nodiscard]]
        auto find_entity_of_type(const netvar::ClientClass& klass) const -> std::optional<Entity> {
            for (size_t i{0}; i < this->entity_list_size; i++) {
                auto entity = std::make_optional<Entity>(
                        Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + i * 0x10)
                );

                if(!entity->isValid()) {
                    continue;
                }

                if(entity->get_class() != klass) {
                    continue;
                }

                return entity;
            }

            return std::nullopt;
        }

        [[nodiscard]]
        auto iterate_entities() const -> EntityListIterator {
            return EntityListIterator{this};
        }
};
EntityList entity_list;

class PlayerInfoHelper {
    public:
        void initialize() {
            this->dict_items = memory::dereference(EngineAddress, dwClientState, dwClientState_PlayerInfo, 0x40, 0x0C);
        }

        auto load_info(size_t player_index, player_info_t& result) const -> bool {
            if(!this->dict_items) {
                std::memset(&result, 0, sizeof(player_info_t));
                return false;
            }

            auto player_info_address = memory::dereference(this->dict_items, 0x28 + player_index * 0x34);
            return memory::read(player_info_address, result);
        }

    private:
        uint32_t dict_items{0};
};
PlayerInfoHelper player_info_helper;

void UpdatePlayerESP() {
    overlay::vars::esp_entities.clear();
    if(!csgo_settings::player_esp) {
        return;
    }

    Entity LocalPlayerEnt = Entity::getLocalPlayer();
    Vector3 myPosition = LocalPlayerEnt.getAbsolutePosition();
    uint8_t OurTeam = LocalPlayerEnt.getTeam();

    overlay::vars::esp_entities.reserve(64);
    for(auto entity : entity_list.iterate_entities()) {
        if(!entity.isValidPlayer() || entity.IsDormant()) {
            continue;
        }

        Vector3 screenPos;
        Vector3 position = entity.getAbsolutePosition();
        if (!engine::worldToScreen(position, screenPos)) {
            continue;
        }
        entity.BuildBonePairs();

        auto& renderData = overlay::vars::esp_entities.emplace_back();
        renderData.x = screenPos.at(0);
        renderData.y = screenPos.at(1);
        renderData.inGameDistance = (position - myPosition).norm();
        if(entity.getTeam() == OurTeam) {
            renderData.color = ImVec4(0, 1, 0, .4);
        } else {
            renderData.color = ImVec4(1, 0, 0, .4);
        }

        Vector3 headScreenPos;
        if (engine::worldToScreen(entity.getHeadPosition(), headScreenPos))
        {
            renderData.headPos = ImVec2(headScreenPos.at(0), headScreenPos.at(1));
        }

        for (size_t y = 0; y < entity.CurrentBonePairs; ++y)
        {
            const auto& pair = entity.BonePairs[y];

            if (pair.first == pair.second || pair.first < 0 || pair.second < 0 || pair.first > 128 || pair.second > 128)
            {
                continue;
            }

            Vector3 boneScreenPos;
            Vector3 boneScreenPos2;
            if (engine::worldToScreen(entity.BonePositions[pair.first], boneScreenPos)
                && engine::worldToScreen(entity.BonePositions[pair.second], boneScreenPos2))
            {
                renderData.bones.emplace_back(ImVec2(boneScreenPos.at(0), boneScreenPos.at(1)),
                                              ImVec2(boneScreenPos2.at(0), boneScreenPos2.at(1)));
            }
        }
    }
}

void UpdateObserverList() {
    overlay::vars::observer_entries.clear();
    overlay::vars::observer_entries.reserve(64);

    auto local_player = Entity::getLocalPlayer();
    auto target_player = local_player;
    if(target_player.getObserverMode() != OBS_MODE_NONE && target_player.getObserverMode() != OBS_MODE_POI) {
        auto observe_target = entity_list.get_from_handle(target_player.getObserverTarget());
        if(observe_target.has_value()) {
            target_player = *observe_target;
        }
    }

    if(!target_player.isValidPlayer()) {
        return;
    }

    player_info_t player_info;
    for(auto entity : entity_list.iterate_entities()) {
        if(entity == target_player) {
            continue;
        }

        auto observer_mode = entity.getObserverMode();
        if(observer_mode == OBS_MODE_NONE || observer_mode == OBS_MODE_POI) {
            continue;
        }

        auto observer_target = entity_list.get_from_handle(entity.getObserverTarget());
        if(!observer_target.has_value()) {
            continue;
        }

        if(observer_target->GetEntityAddress() != target_player.GetEntityAddress()) {
            continue;
        }

        if(!player_info_helper.load_info(entity.GetEntityIndex(), player_info)) {
            /* 22, include the null terminator */
            memcpy(player_info.name, "Unknown (load failed)", 22);
        }

        overlay::vars::observer_entries.emplace_back(ObserverEntry{
                .name = std::string{player_info.name},
                .mode = entity.getObserverMode(),
                .is_local = entity == local_player
        });
    }
}

void UpdateBombVisuals() {

}

void PrintPlayerRanks() {
    auto PlayerResource = Driver->ReadVirtualMemory<uint32_t>(ProcessId, ClientAddress + dwPlayerResource, sizeof(uint32_t));
    player_info_t player_info;

    std::cout << "Player resource " << std::hex << PlayerResource << "\n";
    for(auto entry : entity_list.iterate_entities()) {
        auto entry_index = entry.GetEntityIndex();

        // TODO: I'm not sure what's wrong but the data does not match what we expect.
        auto Rank = Driver->ReadVirtualMemory<uint8_t>(ProcessId, PlayerResource + m_iCompetitiveRanking + (entry_index * 0x04), sizeof(uint8_t));
        auto Wins = Driver->ReadVirtualMemory<uint16_t>(ProcessId, PlayerResource + m_iCompetitiveWins + (entry_index * 0x04), sizeof(uint16_t));

        if(!player_info_helper.load_info(entry_index, player_info)) {
            /* 22, include the null terminator */
            memcpy(player_info.name, "Unknown (load failed)", 22);
        }

        if(Rank >= kRankNames.size()) {
            /* last rank is the "invalid" rank state */
            Rank = kRankNames.size() - 1;
        }

        std::cout << "===Player[" << entry_index << "]===" << std::endl;
        std::cout << player_info.name << std::endl;
        std::cout << kRankNames[Rank] << std::endl;
        std::cout << "Wins: " << Wins << std::endl;
        std::cout << std::endl;
    }
}

// Get address of client.dll, engine.dll, and PID.
void SetupAddresses() {
    bool PrintOnce = false;
    while(true) {
        ProcessId = Driver->GetTargetPid();
        ClientAddress = Driver->GetClientModule();
        EngineAddress = Driver->GetEngineModule();
        ClientSize = Driver->GetClientModuleSize();
        EngineSize = Driver->GetEngineModuleSize();

        if(ProcessId != 0 && ClientAddress != 0 && EngineAddress != 0 && ClientSize != 0 && EngineSize!= 0) {
            break;
        }

        if (!PrintOnce)
        {
            std::cout << "Waiting for CSGO... " << std::endl;
            PrintOnce = true;
        }
    }
}

float scaleDamageArmor(float flDamage, int armor_value)
{
    float flArmorRatio = 0.5f;
    float flArmorBonus = 0.5f;
    if (armor_value > 0) {
        float flNew = flDamage * flArmorRatio;
        float flArmor = (flDamage - flNew) * flArmorBonus;

        if (flArmor > static_cast<float>(armor_value)) {
            flArmor = static_cast<float>(armor_value) * (1.f / flArmorBonus);
            flNew = flDamage - flArmor;
        }

        flDamage = flNew;
    }
    return flDamage;
}

struct GlobalVars {
    float real_time;
    int frame_count;
    float absolute_frame_time;
    float absolute_frame_start_time_stddev;
    float cur_time;
    float frame_time;
    int max_clients;
    int tick_count;
    float interval_per_tick;
    float interpolation_amount;
};

int main(int argc, char* argv[], char* envp[])
{
    std::string error{};

    Driver = std::make_unique<KeInterface>(R"(\\.\garhalop)");
    if(!Driver->IsValid()) {
        std::string message;
        if(utils::IsProcessElevated(GetCurrentProcess())) {
        }

        std::cout << "Could not connect to kernel interface. May run as administrator?\n";
        MessageBoxA(nullptr, "Could not connect to kernel interface. May run as administrator?", "Garhal", MB_OK | MB_ICONWARNING);
        return 0x1;
    }

    std::string random = utils::GenerateStr(20);
    SetConsoleTitleA(random.c_str());

    // Get address of client.dll, engine.dll, and PID.
    SetupAddresses();
    std::cout << "Addresses look good. Starting..." << std::endl;
    std::cout << "Safe GarHal made by DreTaX and WolverinDEV" << std::endl;

    std::cout << "==== Memory Addresses ====" << std::endl;
    std::cout << "ProcessID: " << ProcessId << std::endl;
    std::cout << "ClientAddress: " << std::hex << ClientAddress << std::endl;
    std::cout << "EngineAddress: " << std::hex << EngineAddress << std::endl;
    std::cout << "ClientSize: " << std::hex << ClientSize << std::endl;
    std::cout << "dwGetAllClasses: " << std::hex << (dwGetAllClasses) << std::endl;
    if(!netvar::dump_all(error)) {
        std::cout << "failed to dump net vars: " << error << "\n";
        return 1;
    }

    std::cout << "==== Config Values ====" << std::endl;
    std::cout << "AimbotState: " << static_cast<unsigned>(csgo_settings::AimbotState) << std::endl;
    std::cout << "AimbotKey: " << static_cast<unsigned>(csgo_settings::AimbotKey) << std::endl;
    std::cout << "AimbotTarget: " << static_cast<unsigned>(csgo_settings::AimbotTarget) << std::endl;
    std::cout << "AimbotBullets: " << static_cast<unsigned>(csgo_settings::AimbotBullets) << std::endl;
    std::cout << "player_esp: " << std::boolalpha << csgo_settings::player_esp << std::endl;
    std::cout << "TriggerBot: " << std::boolalpha << csgo_settings::TriggerBot << std::endl;
    std::cout << "TriggerBotKey: " << static_cast<unsigned>(csgo_settings::TriggerBotKey) << std::endl;
    std::cout << "TriggerBotDelay: " << std::boolalpha << csgo_settings::TriggerBotDelay << std::endl;

    auto class_base_entity = netvar::find_class("CBaseEntity");
    if(!class_base_entity.has_value()) {
        std::cout << "Failed to find CBaseEntity\n";
        return 1;
    }

    auto class_planted_c4 = netvar::find_class("CPlantedC4");
    if(!class_planted_c4.has_value()) {
        std::cout << "Failed to find CPlantedC4\n";
        return 1;
    }

    if(true) {
        for(size_t index{0}; index < 2048; index++) {
            auto entity_address = Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwEntityList + index * 0x10);
            if(!entity_address) {
                //std::cout << index << " no entity\n";
                continue;
            }

            auto client_class_address = memory::dereference(entity_address,
                0x08, // IClientNetworkable vtable
                2 * 0x04, // GetClientClass
                0x01 // MOV EAX <ClientClass ptr>
            );

            netvar::ClientClass client_class{client_class_address};

            if(client_class.get_name().find("Bomb") == std::string::npos) {
                //continue;
            }
            std::cout << std::dec << index << " (" << std::hex << entity_address << ")" << " client class ptr: " << std::hex << client_class.address << " (" << client_class.get_name() << ")" << "\n";
        }
        //return 0;
    }

    player_info_helper.initialize();
    PrintPlayerRanks();

    // load settings
    csgo_settings::ReadConfig("settings.json");
    if(!overlay::initialize(error)) {
        std::cout << "Failed to create overlay: " << error << std::endl;
        MessageBoxA(nullptr, ("Failed to create overlay: " + error + "!").c_str(), "Garhal", MB_OK | MB_ICONWARNING);
        return 0x1;
    }

    // Prep parser
    hazedumper::BSPParser bspParser;
    aim = Aimbot(&bspParser);

    std::thread TriggerBotT(TriggerBotThread);

    Driver->RequestProtection();
    std::cout << "enter loop\n";
    while (true)
    {
        if (!engine::IsInGame())
        {
            Sleep(500);
            continue;
        }

        auto bomb = entity_list.find_entity_of_type_t<entities::CPlantedC4>();
        if(bomb.has_value()) {
            auto local_player = entities::CCSPlayer{ Entity::getLocalPlayer().GetEntityAddress() };
            auto player_position = local_player.get_origin();

            std::cout << "Have bomb entity:\n";
            auto bomb_position = bomb->get_origin();
            //std::cout << "  x: " << bomb_position.x << " y: " << bomb_position.y << " z: " << bomb_position.z << "\n";

            auto distance = (bomb_position - player_position).magnitude();
            std::cout << "Distance: " << distance << "\n";

            {
                const auto damagePercentage = 1.0f;

                auto flDamage = 500.f; // 500 - default, if radius is not written on the map https://i.imgur.com/mUSaTHj.png
                auto flBombRadius = flDamage * 3.5f;
                auto fSigma = flBombRadius / 3.0f;
                auto fGaussianFalloff = exp(-distance * distance / (2.0f * fSigma * fSigma));
                auto flAdjustedDamage = flDamage * fGaussianFalloff * damagePercentage;

                flAdjustedDamage = scaleDamageArmor(flAdjustedDamage, local_player.get_armor_value());

                GlobalVars globals{};
                (void) memory::read(EngineAddress + dwGlobalVars, globals);
                auto bomb_blow = bomb->get_c4_blow();

                std::cout << std::dec << "Damage: " << flAdjustedDamage << " Time: " << (bomb_blow - globals.cur_time) << " Armor: " << local_player.get_armor_value() << " Heavy: " << local_player.has_heavy_armor() << "\n";
            }
        }

        Entity LocalPlayerEnt = Entity::getLocalPlayer();
        if (aim.localPlayer.GetEntityAddress() != LocalPlayerEnt.GetEntityAddress())
        {
            aim.localPlayer = LocalPlayerEnt;
        }

        UpdatePlayerESP();
        UpdateObserverList();

        // Render all
        overlay::poll_input();
        overlay::render_frame();

        if (csgo_settings::AimbotState == 1)
        {
            if (ImGui::IsCustomKeyPressed(csgo_settings::AimbotKey, true))
            {
                aim.aimAssist();
            }
            else
            {
                aim.resetSensitivity();
            }
        }
        else if (csgo_settings::AimbotState == 2)
        {
            if (ImGui::IsCustomKeyPressed(csgo_settings::AimbotKey, true))
            {
                aim.aimBot();
            }
        }


        //Sleep(3);
    }
}
