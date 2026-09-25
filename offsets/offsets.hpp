// wklp cs2 offsets - general
// generated: 2026-09-15
// updated: 2026-09-25 (offsets alignés sur a2x/cs2-dumper)
#pragma once
#include <cstddef>
#include <cstdint>

namespace wklp_offsets {
    // --- Entity / Player ---
    constexpr std::ptrdiff_t m_Glow                    = 0xDE0;
    constexpr std::ptrdiff_t m_glowColorOverride       = 0x40;
    constexpr std::ptrdiff_t m_bGlowing                = 0x51;
    constexpr std::ptrdiff_t m_pCameraServices         = 0x1328;   // C_BasePlayerPawn::m_pCameraServices
    constexpr std::ptrdiff_t m_iFOV                    = 0x298;    // CCSPlayerBase_CameraServices::m_iFOV
    constexpr std::ptrdiff_t m_iFOVStart               = 0x29C;    // CCSPlayerBase_CameraServices::m_iFOVStart
    constexpr std::ptrdiff_t m_flFOVRate               = 0x2A4;    // CCSPlayerBase_CameraServices::m_flFOVRate
    constexpr std::ptrdiff_t m_flLastShotFOV           = 0x2AC;    // CCSPlayerBase_CameraServices::m_flLastShotFOV
    constexpr std::ptrdiff_t m_fFlags                  = 0x3F4;    // C_BaseEntity::m_fFlags
    constexpr std::ptrdiff_t m_iHealth                 = 0x34C;    // C_BaseEntity::m_iHealth
    constexpr std::ptrdiff_t m_iTeamNum                = 0x3E7;    // C_BaseEntity::m_iTeamNum
    constexpr std::ptrdiff_t m_hPlayerPawn             = 0x92C;    // CCSPlayerController::m_hPlayerPawn
    constexpr std::ptrdiff_t m_vOldOrigin              = 0x14A4;   // C_BasePlayerPawn::m_vOldOrigin
    constexpr std::ptrdiff_t m_vecViewOffset           = 0xF60;    // C_BaseModelEntity::m_vecViewOffset
    constexpr std::ptrdiff_t m_ArmorValue              = 0x1ECC;   // C_CSPlayerPawn::m_ArmorValue
    constexpr std::ptrdiff_t m_vecVelocity             = 0x430;    // C_BaseEntity::m_vecVelocity
    constexpr std::ptrdiff_t m_sSanitizedPlayerName    = 0x878;    // CCSPlayerController::m_sSanitizedPlayerName
    constexpr std::ptrdiff_t m_lifeState               = 0x354;    // C_BaseEntity::m_lifeState
    constexpr std::ptrdiff_t m_pWeaponServices         = 0x12F0;   // C_BasePlayerPawn::m_pWeaponServices
    constexpr std::ptrdiff_t m_hActiveWeapon           = 0x60;     // CPlayer_WeaponServices::m_hActiveWeapon
    constexpr std::ptrdiff_t m_hMyWeapons              = 0x48;     // CPlayer_WeaponServices::m_hMyWeapons
    constexpr std::ptrdiff_t m_pAimPunchServices       = 0x1598;   // C_CSPlayerPawn::m_pAimPunchServices
    constexpr std::ptrdiff_t m_iClip1                  = 0x1928;   // C_BasePlayerWeapon::m_iClip1
    constexpr std::ptrdiff_t m_flFlashMaxAlpha         = 0x150C;   // C_CSPlayerPawnBase::m_flFlashMaxAlpha
    constexpr std::ptrdiff_t m_flFlashDuration         = 0x1510;   // C_CSPlayerPawnBase::m_flFlashDuration
    constexpr std::ptrdiff_t m_flFlashBangTime         = 0x14FC;   // C_CSPlayerPawnBase::m_flFlashBangTime
    constexpr std::ptrdiff_t m_iIDEntIndex             = 0x36CC;   // C_CSPlayerPawn::m_iIDEntIndex
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin   = 0x1360;   // C_SmokeGrenadeProjectile::m_nSmokeEffectTickBegin
    constexpr std::ptrdiff_t m_bDidSmokeEffect         = 0x1364;   // C_SmokeGrenadeProjectile::m_bDidSmokeEffect
    constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x200; // CPlayer_CameraServices::m_hActivePostProcessingVolume
    constexpr std::ptrdiff_t m_flMinExposure           = 0x11A4;   // C_PostProcessingVolume::m_flMinExposure
    constexpr std::ptrdiff_t m_flMaxExposure           = 0x11A8;   // C_PostProcessingVolume::m_flMaxExposure
    constexpr std::ptrdiff_t m_bExposureControl        = 0x11BD;   // C_PostProcessingVolume::m_bExposureControl
    constexpr std::ptrdiff_t m_bIsScoped               = 0x1EA0;   // C_CSPlayerPawn::m_bIsScoped
    constexpr std::ptrdiff_t m_bResumeZoom             = 0x1EA1;   // C_CSPlayerPawn::m_bResumeZoom
    constexpr std::ptrdiff_t m_bOldIsScoped            = 0x1EDC;   // C_CSPlayerPawn::m_bOldIsScoped

    // --- Scene / Model ---
    constexpr std::ptrdiff_t m_pGameSceneNode          = 0x330;    // C_BaseEntity::m_pGameSceneNode
    constexpr std::ptrdiff_t m_modelState              = 0x140;    // CSkeletonInstance::m_modelState
    constexpr std::ptrdiff_t m_pEntity                 = 0x10;     // CEntityInstance::m_pEntity
    constexpr std::ptrdiff_t m_designerName            = 0x20;     // CEntityIdentity::m_designerName
    constexpr std::ptrdiff_t m_clrRender               = 0xCA0;    // C_BaseModelEntity::m_clrRender

    // --- Aim Punch ---
    constexpr std::ptrdiff_t OFF_PUNCH_PRED            = 0x50;     // CCSPlayer_AimPunchServices::m_predictableBaseAngle
    constexpr std::ptrdiff_t OFF_PUNCH_UNPRED          = 0xA4;     // CCSPlayer_AimPunchServices::m_unpredictableBaseAngle

    // --- Econ / Skins ---
    constexpr std::ptrdiff_t m_AttributeManager        = 0x1290;   // C_EconEntity::m_AttributeManager
    constexpr std::ptrdiff_t m_Item                    = 0x50;     // C_AttributeContainer::m_Item
    constexpr std::ptrdiff_t m_AttributeList           = 0x208;    // C_EconItemView::m_AttributeList
    constexpr std::ptrdiff_t m_Attributes              = 0x8;      // CAttributeList::m_Attributes
    constexpr std::ptrdiff_t m_iItemDefinitionIndex    = 0x1BA;    // C_EconItemView::m_iItemDefinitionIndex
    constexpr std::ptrdiff_t m_iItemIDHigh             = 0x1D0;    // C_EconItemView::m_iItemIDHigh
    constexpr std::ptrdiff_t m_nFallbackPaintKit       = 0x18A8;   // C_EconEntity::m_nFallbackPaintKit
    constexpr std::ptrdiff_t m_nFallbackSeed           = 0x18AC;   // C_EconEntity::m_nFallbackSeed
    constexpr std::ptrdiff_t m_flFallbackWear          = 0x18B0;   // C_EconEntity::m_flFallbackWear
    constexpr std::ptrdiff_t m_nFallbackStatTrak       = 0x18B4;   // C_EconEntity::m_nFallbackStatTrak
    constexpr std::ptrdiff_t m_hHudModelArms           = 0x1DA8;   // C_CSPlayerPawn::m_hHudModelArms
    constexpr std::ptrdiff_t m_hOwnerEntity            = 0x520;    // C_BaseEntity::m_hOwnerEntity

    // --- Scene hierarchy ---
    constexpr std::ptrdiff_t m_pChild                  = 0x40;     // CGameSceneNode::m_pChild
    constexpr std::ptrdiff_t m_pNextSibling            = 0x48;     // CGameSceneNode::m_pNextSibling
    constexpr std::ptrdiff_t m_pOwner                  = 0x30;     // CGameSceneNode::m_pOwner
    constexpr std::ptrdiff_t m_MeshGroupMask           = 0x208;    // CModelState::m_MeshGroupMask
    constexpr std::ptrdiff_t m_pDirtyModelData         = 0xD8;
    constexpr std::ptrdiff_t m_DirtyMeshGroupMask      = 0x10;
}
