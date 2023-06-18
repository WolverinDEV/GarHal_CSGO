#pragma warning (disable : 26451)

#include "Entity.hpp"
#include <iostream>
#include <time.h>
#include "..\common\bsp\BSPStructure.hpp"
#include "csgo_settings.hpp"
#include "offsets.hpp"
#include "sdk.hpp"
#include "memory.hpp"
#include "./netvar.h"
#include "netvars.h"

// hazedumper namespace
using namespace hazedumper::netvars;
using namespace hazedumper::signatures;

auto Entity::getLocalPlayer() -> Entity {
    return Entity{memory::read<uint32_t>(ClientAddress + dwLocalPlayer).value_or(0)};
}

netvar::ClientClass Entity::get_class() const {
    return netvar::ClientClass{
            memory::dereference(this->EntityAddress,
                                0x08, // IClientNetworkable vtable
                                2 * 0x04, // GetClientClass
                                0x01 // MOV EAX <ClientClass ptr>
            )
    };
}

bool Entity::IsDormant()
{
    bool isDormant = Driver->ReadVirtualMemoryTV<bool>(ProcessId, EntityAddress + m_bDormant, sizeof(uint8_t));
    return isDormant;
}

bool Entity::IsDefusing()
{
    bool Defusing = Driver->ReadVirtualMemoryTV<bool>(ProcessId, EntityAddress + m_bIsDefusing, sizeof(uint8_t));
    return Defusing;
}

void Entity::SetFlashAlpha(float num)
{
    // No Flash if set to 0
    Driver->WriteVirtualMemory(ProcessId, EntityAddress + m_flFlashMaxAlpha, num, 8);
}

uint8_t Entity::getTeam()
{
    uint8_t OurTeam = Driver->ReadVirtualMemoryTV<uint8_t>(ProcessId, EntityAddress + m_iTeamNum, sizeof(uint8_t));
    return OurTeam;
}

entities::EntityHandle Entity::getObserverTarget() {
    return entities::EntityHandle{ Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + m_hObserverTarget) };
}

uint32_t Entity::getObserverMode() {
    return Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + m_iObserverMode);
}

bool Entity::isInAir()
{
    uint32_t flags = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_fFlags, sizeof(uint32_t));
    return flags == 256 || flags == 258 || flags == 260 || flags == 262;
}

bool Entity::IsCrouching()
{
    uint32_t flags = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_fFlags, sizeof(uint32_t));
    return flags & FL_DUCKING;
}

uint8_t Entity::getHealth()
{
    uint8_t health = Driver->ReadVirtualMemoryTV<uint8_t>(ProcessId, EntityAddress + m_iHealth, sizeof(uint8_t));
    return health;
}


void Entity::SetForceJump(uint8_t value)
{
    Driver->WriteVirtualMemory(ProcessId, ClientAddress + dwForceJump, value, sizeof(value));
}

bool Entity::isValid() {
    if(!this->EntityAddress) {
        return false;
    }

    return true;
}

bool Entity::isValidPlayer()
{
    if(!this->isValid()) {
        return false;
    }

    int health = getHealth();
    bool isDormant = IsDormant();

    /* 120 for Danger Zone */
    return health > 0 && health <= 120 && !isDormant;
}

Vector3 Entity::getAbsolutePosition()
{
    Vector3 position = getFeetPosition();
    //position(2) += Driver->ReadVirtualMemoryTV<float>(process_id, EntityAddress + 0x10c, sizeof(float));
    return position;
}

Vector3 Entity::getFeetPosition()
{
    Vector3 position = Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, EntityAddress + m_vecOrigin, sizeof(Vector3));
    return position;
}

Vector3 Entity::getAimPunch()
{
    Vector3 aimPunch = Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, EntityAddress + m_aimPunchAngle, sizeof(Vector3));
    return aimPunch;
}

Vector3 Entity::getVelocity()
{
    Vector3 vel = Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, EntityAddress + m_vecVelocity, sizeof(Vector3));
    return vel;
}

/*Vector3 Entity::getBonePosition(uint32_t boneId)
{
	int boneBase = Driver->ReadVirtualMemory<int>(process_id, EntityAddress + m_dwBoneMatrix, sizeof(int));

	Vector3 bonePosition;
	bonePosition(0) = Driver->ReadVirtualMemory<float>(process_id, boneBase + 0x30 * boneId + 0x0C, sizeof(float));
	bonePosition(1) = Driver->ReadVirtualMemory<float>(process_id, boneBase + 0x30 * boneId + 0x1C, sizeof(float));
	bonePosition(2) = Driver->ReadVirtualMemoryTV<float>(process_id, boneBase + 0x30 * boneId + 0x2C, sizeof(float));

	return bonePosition;
}*/

Vector3 Entity::GetBonePosition(uint32_t targetBone)
{
    uint32_t boneMatrixAddress = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_dwBoneMatrix,
                                                                       sizeof(uint32_t));
    BoneMatrix boneMatrix = Driver->ReadVirtualMemoryTV<BoneMatrix>(
            ProcessId, boneMatrixAddress + sizeof(BoneMatrix) * targetBone, sizeof(BoneMatrix));
    return Vector3(boneMatrix.x, boneMatrix.y, boneMatrix.z);
}

void Entity::BuildBonePairs()
{
    // Update StudioHdr
    uint32_t studioHdr = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_pStudioHdr,
                                                               sizeof(uint32_t));
    StudioHdrAddress = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, studioHdr, sizeof(uint32_t));
    StudioHdrSt = Driver->ReadVirtualMemoryTV<StudioHdr>(ProcessId, StudioHdrAddress, sizeof(StudioHdr));
    
    // Update and collect hitboxes
    StudioHitBoxSet = Driver->ReadVirtualMemoryTV<StudioHitboxSet>(ProcessId,
                                                                   StudioHdrAddress + StudioHdrSt.hitboxsetindex,
                                                                   sizeof(StudioHitboxSet));

    for (size_t i = 0; i < StudioHitBoxSet.numhitboxes; ++i)
    {
        StudioHitBoxes[i] = Driver->ReadVirtualMemoryTV<StudioBBox>(ProcessId,
                                                                    StudioHdrAddress + StudioHdrSt.hitboxsetindex
                                                                    + StudioHitBoxSet.hitboxindex +
                                                                    i * sizeof(StudioBBox), sizeof(StudioBBox));
    }

    // Collect all StudioBones
    for (size_t i = 0; i < StudioHdrSt.numbones; ++i)
    {
        StudioBones[i] = Driver->ReadVirtualMemoryTV<StudioBone>(ProcessId, StudioHdrAddress + StudioHdrSt.boneindex +
                                                                            i * sizeof(StudioBone), sizeof(StudioBone));
    }

    // Collect all bone positions
    uint32_t boneMatrixAddress = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_dwBoneMatrix,
                                                                       sizeof(uint32_t));
    const int size = *(&BonePositions + 1) - BonePositions;
    
    for (size_t i = 0; i < size; ++i)
    {
        BoneMatrix boneMatrix = Driver->ReadVirtualMemoryTV<BoneMatrix>(ProcessId,
                                                                        boneMatrixAddress + sizeof(BoneMatrix) * i,
                                                                        sizeof(BoneMatrix));
        BonePositions[i] = Vector3(boneMatrix.x, boneMatrix.y, boneMatrix.z);
    }

    // Build bone pairs
    int pairs = 0;
    for (size_t i = 0; i < StudioHitBoxSet.numhitboxes; ++i)
    {
        const StudioBBox& hitbox = StudioHitBoxes[i];
        const StudioBone& bone = StudioBones[hitbox.bone];
        // Sanity check
        if (bone.parent >= 0 && bone.parent < StudioHdrSt.numbones)
        {
            BonePairs[pairs] = std::make_pair(hitbox.bone, bone.parent);
            pairs++;
        }
        CurrentBonePairs = pairs;
    }
}

Vector3 Entity::getHeadPosition()
{
    Vector3 Origin = Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, EntityAddress + m_vecOrigin, sizeof(Vector3));
    Vector3 ViewOffset = Driver->ReadVirtualMemoryTV<Vector3>(ProcessId, EntityAddress + m_vecViewOffset,
                                                              sizeof(Vector3));
    Vector3 LocalEyeOrigin = Origin + ViewOffset;
    if (this->IsCrouching())
    {
        LocalEyeOrigin(1) = LocalEyeOrigin(1) - 1.5f;
    }

    return LocalEyeOrigin;
}

uint16_t Entity::getCrosshairId()
{
    return Driver->ReadVirtualMemoryTV<uint16_t>(ProcessId, EntityAddress + m_iCrosshairId, sizeof(uint16_t));
}

uint8_t Entity::getForceAttack()
{
    return Driver->ReadVirtualMemoryTV<uint8_t>(ProcessId, EntityAddress + dwForceAttack, sizeof(uint8_t));
}

void Entity::setForceAttack(uint8_t value)
{
    Driver->WriteVirtualMemory(ProcessId, EntityAddress + dwForceAttack, value, sizeof(value));
}

void Entity::setForceAttack2(uint8_t value)
{
    Driver->WriteVirtualMemory(ProcessId, EntityAddress + dwForceAttack2, value, sizeof(value));
}

void Entity::shoot()
{
    if (csgo_settings::TriggerBot && csgo_settings::TriggerBotDelay)
    {
        srand(time(NULL));
        uint16_t rnd = rand() % (csgo_settings::TriggerBotDelayMax - csgo_settings::TriggerBotDelayMin + 1) +
            csgo_settings::TriggerBotDelayMin;
        Sleep(rnd);
    }

    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    Sleep(1);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    /*uint8_t forceAttack = getForceAttack();
    if (forceAttack == 4) 
    {
        setForceAttack(5);
    }
    else 
    {
        setForceAttack(4);
    }*/
}

uint16_t Entity::getShotsFired()
{
    return Driver->ReadVirtualMemoryTV<uint16_t>(ProcessId, EntityAddress + m_iShotsFired, sizeof(uint16_t));
}

uint32_t Entity::GetEntityAddress()
{
    return EntityAddress;
}

uint32_t Entity::GetEntityIndex() {
    return Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + 0x64);
}

uint32_t Entity::GetGlowIndex()
{
    uint32_t GlowIndex = Driver->ReadVirtualMemoryTV<uint32_t>(ProcessId, EntityAddress + m_iGlowIndex,
                                                               sizeof(uint32_t));
    return GlowIndex;
}

DWORD Entity::GetWeaponHandle()
{
    return Driver->ReadVirtualMemoryTV<DWORD>(ProcessId, EntityAddress + m_hActiveWeapon, sizeof(DWORD));
}

uint16_t Entity::GetWeaponIndex()
{
    return GetWeaponHandle() & 0xFFF;
}

DWORD Entity::GetCurrentWeapon()
{
    return Driver->ReadVirtualMemoryTV<DWORD>(ProcessId, ClientAddress + dwEntityList + (GetWeaponIndex() - 1) * 0x10,
                                              sizeof(DWORD));
}

uint16_t Entity::GetCurrentWeaponID()
{
    return Driver->ReadVirtualMemoryTV<uint16_t>(ProcessId, GetCurrentWeapon() + m_iItemDefinitionIndex,
                                                 sizeof(uint16_t));
}

void Entity::SetCorrectGlowStruct(uint8_t OurTeam, uint32_t GlowObject)
{
    uint8_t ReadTeam = this->getTeam();
    bool Defusing = this->IsDefusing();

    GlowStruct EGlow;
    EGlow = Driver->ReadVirtualMemoryTV<GlowStruct>(ProcessId, GlowObject + (this->GetGlowIndex() * 0x38) + 0x4,
                                                    sizeof(GlowStruct));
    EGlow.alpha = 0.5f;
    EGlow.renderWhenOccluded = true;
    EGlow.renderWhenUnOccluded = false;

    if (OurTeam != ReadTeam)
    {
        EGlow.red = 255.0f;
        EGlow.green = 0.0f;
        EGlow.blue = 0.0f;

        if (Defusing)
        {
            EGlow.green = 60.0f;
        }
    }
    else
    {
        EGlow.red = 0.0f;
        EGlow.green = 0.0f;
        EGlow.blue = 255.0f;

        if (Defusing)
        {
            EGlow.green = 60.0f;
        }
    }

    Driver->WriteVirtualMemory(ProcessId, GlowObject + (this->GetGlowIndex() * 0x38) + 0x4, EGlow, sizeof(EGlow));
}

auto Entity::operator!=(const Entity& other) const noexcept -> bool {
    return this->EntityAddress != other.EntityAddress;
}


Entity::Entity(uint32_t EntityAddress)
{
    this->EntityAddress = EntityAddress;
}

Entity::Entity()
{
}

Entity::~Entity()
{
}
