// wklp cs2 offsets - general
// updated: 2026-10-05 - a2x cs2-dumper verified
#pragma once
#include <cstddef>
#include <cstdint>

namespace wklp_offsets {
    // ===== Base entity / player =====
    constexpr std::ptrdiff_t m_fFlags              = 0x3F4;
    constexpr std::ptrdiff_t m_iHealth             = 0x34C;
    constexpr std::ptrdiff_t m_iTeamNum            = 0x3E7;
    constexpr std::ptrdiff_t m_lifeState           = 0x354;
    constexpr std::ptrdiff_t m_vOldOrigin          = 0x14A4;
    constexpr std::ptrdiff_t m_vecVelocity         = 0x430;
    constexpr std::ptrdiff_t m_hOwnerEntity        = 0x520;
    constexpr std::ptrdiff_t m_hGroundEntity       = 0x530;

    // ===== Player pawn =====
    constexpr std::ptrdiff_t m_vecViewOffset       = 0xF60;
    constexpr std::ptrdiff_t m_ArmorValue          = 0x1ECC;
    constexpr std::ptrdiff_t m_pWeaponServices     = 0x12F0;
    constexpr std::ptrdiff_t m_pObserverServices   = 0x1308;
    constexpr std::ptrdiff_t m_pAimPunchServices   = 0x1598;
    constexpr std::ptrdiff_t m_iShotsFired         = 0x1EB4;
    constexpr std::ptrdiff_t m_iIDEntIndex         = 0x36CC;
    constexpr std::ptrdiff_t m_angEyeAngles        = 0x35F0;

    // ===== Flash =====
    constexpr std::ptrdiff_t m_flFlashBangTime     = 0x14FC;
    constexpr std::ptrdiff_t m_flFlashMaxAlpha     = 0x150C;
    constexpr std::ptrdiff_t m_flFlashDuration     = 0x1510;

    // ===== Scope =====
    constexpr std::ptrdiff_t m_bIsScoped           = 0x1EA0;
    constexpr std::ptrdiff_t m_bResumeZoom         = 0x1EA1;
    constexpr std::ptrdiff_t m_bOldIsScoped        = 0x1EDC;

    // ===== Camera =====
    constexpr std::ptrdiff_t m_pCameraServices     = 0x1328;
    constexpr std::ptrdiff_t m_iFOV                = 0x298;
    constexpr std::ptrdiff_t m_iFOVStart           = 0x29C;
    constexpr std::ptrdiff_t m_flFOVRate           = 0x2A4;
    constexpr std::ptrdiff_t m_flLastShotFOV       = 0x2AC;
    constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x200;
    constexpr std::ptrdiff_t m_flMinExposure       = 0x11A4;
    constexpr std::ptrdiff_t m_flMaxExposure       = 0x11A8;
    constexpr std::ptrdiff_t m_bExposureControl    = 0x11BD;

    // ===== Weapon =====
    constexpr std::ptrdiff_t m_hActiveWeapon       = 0x60;
    constexpr std::ptrdiff_t m_hMyWeapons          = 0x48;
    constexpr std::ptrdiff_t m_iClip1              = 0x1928;
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA;
    constexpr std::ptrdiff_t m_iItemIDHigh         = 0x1D0;

    // ===== Weapon skins =====
    constexpr std::ptrdiff_t m_AttributeManager    = 0x1290;
    constexpr std::ptrdiff_t m_Item                = 0x50;
    constexpr std::ptrdiff_t m_AttributeList       = 0x208;
    constexpr std::ptrdiff_t m_Attributes          = 0x8;
    constexpr std::ptrdiff_t m_nFallbackPaintKit   = 0x18A8;
    constexpr std::ptrdiff_t m_nFallbackSeed       = 0x18AC;
    constexpr std::ptrdiff_t m_flFallbackWear      = 0x18B0;
    constexpr std::ptrdiff_t m_nFallbackStatTrak   = 0x18B4;

    // ===== Player name =====
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x878;

    // ===== Money / K/D (via controller) =====
    constexpr std::ptrdiff_t m_pInGameMoneyServices    = 0x818;  // CCSPlayerController -> CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x828;  // CCSPlayerController -> CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_iAccount                = 0x40;   // CCSPlayerController_InGameMoneyServices
    constexpr std::ptrdiff_t m_perRoundStats           = 0x40;   // CCSPlayerController_ActionTrackingServices -> C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    constexpr std::ptrdiff_t m_iKills                  = 0x30;   // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iDeaths                 = 0x34;   // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iAssists                = 0x38;   // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iDamage                 = 0x3C;   // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iMVPs                   = 0x970;  // CCSPlayerController

    // ===== Observer =====
    constexpr std::ptrdiff_t m_hObserverTarget     = 0x4C;
    constexpr std::ptrdiff_t m_iObserverMode       = 0x48;

    // ===== Glow =====
    constexpr std::ptrdiff_t m_Glow                = 0xDE8;
    constexpr std::ptrdiff_t m_glowColorOverride   = 0x40;
    constexpr std::ptrdiff_t m_bGlowing            = 0x51;
    constexpr std::ptrdiff_t m_iGlowType           = 0x30;
    constexpr std::ptrdiff_t m_iGlowTeam           = 0x34;
    constexpr std::ptrdiff_t m_nGlowRange          = 0x38;
    constexpr std::ptrdiff_t m_nGlowRangeMin       = 0x3C;
    constexpr std::ptrdiff_t m_flGlowTime          = 0x48;
    constexpr std::ptrdiff_t m_flGlowStartTime     = 0x4C;

    // ===== Model =====
    constexpr std::ptrdiff_t m_pGameSceneNode      = 0x330;
    constexpr std::ptrdiff_t m_modelState          = 0x140;
    constexpr std::ptrdiff_t m_MeshGroupMask       = 0x208;
    constexpr std::ptrdiff_t m_pDirtyModelData     = 0xD8;
    constexpr std::ptrdiff_t m_DirtyMeshGroupMask  = 0x10;

    // ===== Entity =====
    constexpr std::ptrdiff_t m_pEntity             = 0x10;
    constexpr std::ptrdiff_t m_designerName        = 0x20;
    constexpr std::ptrdiff_t m_clrRender           = 0xCA0;

    // ===== Smoke =====
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1360;
    constexpr std::ptrdiff_t m_bDidSmokeEffect       = 0x1364;
    constexpr std::ptrdiff_t m_vSmokeDetonationPos   = 0x1378;
    constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x13A9;
    constexpr std::ptrdiff_t m_bSmokeEffectSpawned   = 0x13AA;

    // ===== Molotov / Inferno =====
    constexpr std::ptrdiff_t m_fireCount       = 0x1A48;  // C_Inferno
    constexpr std::ptrdiff_t m_firePositions   = 0x1108;  // C_Inferno (VectorWS[64])

    // ===== Punch =====
    constexpr std::ptrdiff_t OFF_PUNCH_PRED   = 0x50;
    constexpr std::ptrdiff_t OFF_PUNCH_UNPRED = 0xA4;

    // ===== Misc =====
    constexpr std::ptrdiff_t m_pChild          = 0x40;
    constexpr std::ptrdiff_t m_pNextSibling    = 0x48;
    constexpr std::ptrdiff_t m_pOwner          = 0x30;
    constexpr std::ptrdiff_t m_hHudModelArms   = 0x1DA8;
}
