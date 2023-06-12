#include "Engine.hpp"
#include "offsets.hpp"
#include "./memory.hpp"

// hazedumper namespace
using namespace hazedumper::netvars;
using namespace hazedumper::signatures;

bool engine::worldToScreen(const Vector3& from, Vector3& to)
{
    WorldToScreenMatrix matrix = Driver->ReadVirtualMemoryTV<WorldToScreenMatrix>(ProcessId,
                                                                                  ClientAddress + dwViewMatrix,
                                                                                  sizeof(WorldToScreenMatrix));

    const auto w = matrix(3, 0) * from(0) + matrix(3, 1) * from(1) + matrix(3, 2) * from(2) + matrix(3, 3);
    if (w < 0.001f)
        return false;

    to(0) = ImGui::GetIO().DisplaySize.x / 2.0f;
    to(1) = ImGui::GetIO().DisplaySize.y / 2.0f;
    to(0) *= 1.0f + (matrix(0, 0) * from(0) + matrix(0, 1) * from(1) + matrix(0, 2) * from(2) + matrix(0, 3)) / w;
    to(1) *= 1.0f - (matrix(1, 0) * from(0) + matrix(1, 1) * from(1) + matrix(1, 2) * from(2) + matrix(1, 3)) / w;

    return true;
}

bool engine::IsInGame()
{
    auto client_state = memory::dereference(EngineAddress, dwClientState);
    auto game_state = memory::read<uint8_t>(client_state + dwClientState_State).value_or(0);
    return GetGameState(game_state) == InGame;
}

GameState engine::GetGameState(uint8_t State)
{
	switch (State) {
		case 0: return Lobby;
        case 1: return Loading;
        case 2: return Connecting;
        case 5: return Connected;
        case 6: return InGame;
        default: return UnknownG;
    }
}

Vector3 engine::getViewAngles()
{
    uint32_t ClientState = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EngineAddress + dwClientState,
                                                                 sizeof(uint32_t));
    return Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, ClientState + dwClientState_ViewAngles, sizeof(Vector3));
}

void engine::setViewAngles(Vector3& viewAngles)
{
    uint32_t clientState = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EngineAddress + dwClientState,
                                                                 sizeof(uint32_t));
    Driver->WriteVirtualMemory<Vector3>(ProcessId, clientState + dwClientState_ViewAngles, viewAngles, sizeof(viewAngles));
}