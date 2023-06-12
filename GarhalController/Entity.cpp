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

// hazedumper namespace
using namespace hazedumper::netvars;
using namespace hazedumper::signatures;

auto Entity::getLocalPlayer() -> Entity {
    return Entity{Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, ClientAddress + dwLocalPlayer)};
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
    bool isDormant = Driver->ReadVirtualMemory<bool>(ProcessId, EntityAddress + m_bDormant, sizeof(uint8_t));
    return isDormant;
}

bool Entity::IsDefusing()
{
    bool Defusing = Driver->ReadVirtualMemory<bool>(ProcessId, EntityAddress + m_bIsDefusing, sizeof(uint8_t));
    return Defusing;
}

void Entity::SetFlashAlpha(float num)
{
    // No Flash if set to 0
    Driver->WriteVirtualMemory(ProcessId, EntityAddress + m_flFlashMaxAlpha, num, 8);
}

uint8_t Entity::getTeam()
{
    uint8_t OurTeam = Driver->ReadVirtualMemory<uint8_t>(ProcessId, EntityAddress + m_iTeamNum, sizeof(uint8_t));
    return OurTeam;
}

uint32_t Entity::getObserverTarget() {
    return Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + m_hObserverTarget);
}

uint32_t Entity::getObserverMode() {
    return Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + m_iObserverMode);
}

bool Entity::isInAir()
{
    uint32_t flags = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_fFlags, sizeof(uint32_t));
    return flags == 256 || flags == 258 || flags == 260 || flags == 262;
}

bool Entity::IsCrouching()
{
    uint32_t flags = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_fFlags, sizeof(uint32_t));
    return flags & FL_DUCKING;
}

uint8_t Entity::getHealth()
{
    uint8_t health = Driver->ReadVirtualMemory<uint8_t>(ProcessId, EntityAddress + m_iHealth, sizeof(uint8_t));
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
    //position(2) += Driver->ReadVirtualMemory<float>(ProcessId, EntityAddress + 0x10c, sizeof(float));
    return position;
}

Vector3 Entity::getFeetPosition()
{
    Vector3 position = Driver->ReadVirtualMemory<Vector3>(ProcessId, EntityAddress + m_vecOrigin, sizeof(Vector3));
    return position;
}

Vector3 Entity::getAimPunch()
{
    Vector3 aimPunch = Driver->ReadVirtualMemory<Vector3>(ProcessId, EntityAddress + m_aimPunchAngle, sizeof(Vector3));
    return aimPunch;
}

Vector3 Entity::getVelocity()
{
    Vector3 vel = Driver->ReadVirtualMemory<Vector3>(ProcessId, EntityAddress + m_vecVelocity, sizeof(Vector3));
    return vel;
}

/*Vector3 Entity::getBonePosition(uint32_t boneId)
{
	int boneBase = Driver->ReadVirtualMemory<int>(ProcessId, EntityAddress + m_dwBoneMatrix, sizeof(int));

	Vector3 bonePosition;
	bonePosition(0) = Driver->ReadVirtualMemory<float>(ProcessId, boneBase + 0x30 * boneId + 0x0C, sizeof(float));
	bonePosition(1) = Driver->ReadVirtualMemory<float>(ProcessId, boneBase + 0x30 * boneId + 0x1C, sizeof(float));
	bonePosition(2) = Driver->ReadVirtualMemory<float>(ProcessId, boneBase + 0x30 * boneId + 0x2C, sizeof(float));

	return bonePosition;
}*/

Vector3 Entity::GetBonePosition(uint32_t targetBone)
{
    uint32_t boneMatrixAddress = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_dwBoneMatrix, sizeof(uint32_t));
    BoneMatrix boneMatrix = Driver->ReadVirtualMemory<BoneMatrix>(
        ProcessId, boneMatrixAddress + sizeof(BoneMatrix) * targetBone, sizeof(BoneMatrix));
    return Vector3(boneMatrix.x, boneMatrix.y, boneMatrix.z);
}

void Entity::BuildBonePairs()
{
    // Update StudioHdr
    uint32_t studioHdr = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_pStudioHdr, sizeof(uint32_t));
    StudioHdrAddress = Driver->ReadVirtualMemory<uint32_t>(ProcessId, studioHdr, sizeof(uint32_t));
    StudioHdrSt = Driver->ReadVirtualMemory<StudioHdr>(ProcessId, StudioHdrAddress, sizeof(StudioHdr));
    
    // Update and collect hitboxes
    StudioHitBoxSet = Driver->ReadVirtualMemory<StudioHitboxSet>(ProcessId, StudioHdrAddress + StudioHdrSt.hitboxsetindex, sizeof(StudioHitboxSet));

    for (size_t i = 0; i < StudioHitBoxSet.numhitboxes; ++i)
    {
        StudioHitBoxes[i] = Driver->ReadVirtualMemory<StudioBBox>(ProcessId, StudioHdrAddress + StudioHdrSt.hitboxsetindex
            + StudioHitBoxSet.hitboxindex + i * sizeof(StudioBBox), sizeof(StudioBBox));
    }

    // Collect all StudioBones
    for (size_t i = 0; i < StudioHdrSt.numbones; ++i)
    {
        StudioBones[i] = Driver->ReadVirtualMemory<StudioBone>(ProcessId, StudioHdrAddress + StudioHdrSt.boneindex + i * sizeof(StudioBone), sizeof(StudioBone));
    }

    // Collect all bone positions
    uint32_t boneMatrixAddress = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_dwBoneMatrix, sizeof(uint32_t));
    const int size = *(&BonePositions + 1) - BonePositions;
    
    for (size_t i = 0; i < size; ++i)
    {
        BoneMatrix boneMatrix = Driver->ReadVirtualMemory<BoneMatrix>(ProcessId, boneMatrixAddress + sizeof(BoneMatrix) * i, sizeof(BoneMatrix));
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
    Vector3 Origin = Driver->ReadVirtualMemory<Vector3>(ProcessId, EntityAddress + m_vecOrigin, sizeof(Vector3));
    Vector3 ViewOffset = Driver->ReadVirtualMemory<Vector3>(ProcessId, EntityAddress + m_vecViewOffset, sizeof(Vector3));
    Vector3 LocalEyeOrigin = Origin + ViewOffset;
    if (this->IsCrouching())
    {
        LocalEyeOrigin(1) = LocalEyeOrigin(1) - 1.5f;
    }

    return LocalEyeOrigin;
}

uint16_t Entity::getCrosshairId()
{
    return Driver->ReadVirtualMemory<uint16_t>(ProcessId, EntityAddress + m_iCrosshairId, sizeof(uint16_t));
}

uint8_t Entity::getForceAttack()
{
    return Driver->ReadVirtualMemory<uint8_t>(ProcessId, EntityAddress + dwForceAttack, sizeof(uint8_t));
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
    return Driver->ReadVirtualMemory<uint16_t>(ProcessId, EntityAddress + m_iShotsFired, sizeof(uint16_t));
}

uint32_t Entity::GetEntityAddress()
{
    return EntityAddress;
}

uint32_t Entity::GetEntityIndex() {
    return Driver->ReadVirtualMemoryT<uint32_t>(ProcessId, EntityAddress + 0x64) - 1;
}

uint32_t Entity::GetGlowIndex()
{
    uint32_t GlowIndex = Driver->ReadVirtualMemory<uint32_t>(ProcessId, EntityAddress + m_iGlowIndex, sizeof(uint32_t));
    return GlowIndex;
}

DWORD Entity::GetWeaponHandle()
{
    return Driver->ReadVirtualMemory<DWORD>(ProcessId, EntityAddress + m_hActiveWeapon, sizeof(DWORD));
}

uint16_t Entity::GetWeaponIndex()
{
    return GetWeaponHandle() & 0xFFF;
}

DWORD Entity::GetCurrentWeapon()
{
    return Driver->ReadVirtualMemory<DWORD>(ProcessId, ClientAddress + dwEntityList + (GetWeaponIndex() - 1) * 0x10,
                                           sizeof(DWORD));
}

uint16_t Entity::GetCurrentWeaponID()
{
    return Driver->ReadVirtualMemory<uint16_t>(ProcessId, GetCurrentWeapon() + m_iItemDefinitionIndex, sizeof(uint16_t));
}

void Entity::SetCorrectGlowStruct(uint8_t OurTeam, uint32_t GlowObject)
{
    uint8_t ReadTeam = this->getTeam();
    bool Defusing = this->IsDefusing();

    GlowStruct EGlow;
    EGlow = Driver->ReadVirtualMemory<GlowStruct>(ProcessId, GlowObject + (this->GetGlowIndex() * 0x38) + 0x4,
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
