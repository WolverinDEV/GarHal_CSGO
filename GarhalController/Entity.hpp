#pragma once
#include "data.hpp"

namespace netvar {
    struct ClientClass;
}

// TODO:
// - Seperate different entity functionality into own classes
// - do not store any data
class Entity
{
private:
    uint32_t EntityAddress = 0;
    uint32_t StudioHdrAddress = 0;
    StudioHdr StudioHdrSt = {};
    StudioHitboxSet StudioHitBoxSet = {};
    StudioBBox StudioHitBoxes[MAX_STUDIO_BONES];
    StudioBone StudioBones[MAX_STUDIO_BONES];
public:
    static auto getLocalPlayer() -> Entity;

    Vector3 BonePositions[MAX_STUDIO_BONES];
    std::pair<int, int> BonePairs[MAX_STUDIO_BONES];
    uint8_t CurrentBonePairs = 0;

    netvar::ClientClass get_class() const;

    //Vector3 getBonePosition(uint32_t boneId);
    Vector3 getAbsolutePosition();
    Vector3 getFeetPosition();
    Vector3 getAimPunch();
    Vector3 getVelocity();
    Vector3 getHeadPosition();
    Vector3 GetBonePosition(uint32_t targetBone);

    DWORD GetWeaponHandle();
    DWORD GetCurrentWeapon();
	
    uint32_t GetEntityAddress();
        uint32_t GetEntityIndex();
    uint32_t GetGlowIndex();
    uint16_t GetCurrentWeaponID();
    uint16_t GetWeaponIndex();
    uint16_t getCrosshairId();
    uint16_t getShotsFired();
    uint8_t getHealth();
    uint8_t getForceAttack();
    uint8_t getTeam();
    uint32_t getObserverTarget();
    uint32_t getObserverMode();
    void BuildBonePairs();
    void SetFlashAlpha(float num);
    void SetForceJump(uint8_t value);
    void setForceAttack(uint8_t value);
    void setForceAttack2(uint8_t value);
    void shoot();
    void SetCorrectGlowStruct(uint8_t LocalPlayerTeam, uint32_t GlowObject);
	
    bool IsDormant();
    bool IsDefusing();
    bool isInAir();
    bool isValid();
    bool isValidPlayer();
    bool IsCrouching();

    auto operator!=(const Entity& /* other */) const noexcept -> bool;
    inline auto operator==(const Entity& other) const noexcept -> bool {
        return this->EntityAddress == other.EntityAddress;
    }

    inline auto operator=(Entity& other) noexcept -> Entity& {
        this->EntityAddress = other.EntityAddress;
        return *this;
    }

    inline auto operator=(const Entity& other) noexcept -> Entity& {
        this->EntityAddress = other.EntityAddress;
        return *this;
    }

    Entity();
    Entity(uint32_t EntityAddress);
    ~Entity();
};