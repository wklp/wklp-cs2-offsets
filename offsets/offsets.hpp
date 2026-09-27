// language: C++, MSVC
// offsets.hpp — fusion dump a2x + extra wklp
// deux namespaces : cs2_dumper::offsets::client_dll (ton dump)
//                  + wklp_offsets (extras pour le recoil)

#pragma once
#include <cstddef>
#include <cstdint>

// ═══════════════════════════════════════════════════════════════════
//   DUMP A2X — 2026-09-27
// ═══════════════════════════════════════════════════════════════════
namespace cs2_dumper {
    namespace offsets {
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput       = 0x2575BB0;
            constexpr std::ptrdiff_t dwEntityList      = 0x27151A8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x27151A8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2120;
            constexpr std::ptrdiff_t dwGameRules       = 0x255C8D8;
            constexpr std::ptrdiff_t dwGlobalVars      = 0x222BF88;
            constexpr std::ptrdiff_t dwGlowManager     = 0x255C8F0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2537628;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x25606D8;
            constexpr std::ptrdiff_t dwPlantedC4       = 0x24C9290;
            constexpr std::ptrdiff_t dwPrediction      = 0x25605E0;
            constexpr std::ptrdiff_t dwViewAngles      = 0x2576238;
            constexpr std::ptrdiff_t dwViewMatrix      = 0x2565A20;
            constexpr std::ptrdiff_t dwViewRender      = 0x25662E0;
            constexpr std::ptrdiff_t dwWeaponC4        = 0x24C4550;
        }
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber     = 0x61D1E8;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x91B1C0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x398;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C143F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight    = 0x91F544;
            constexpr std::ptrdiff_t dwWindowWidth     = 0x91F540;
        }
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem     = 0x46BC0;
        }
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes       = 0x1B0FD0;
        }
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem     = 0x535340;
        }
    }
}

// ═══════════════════════════════════════════════════════════════════
//   EXTRAS WKLP — schemas + boutons lus depuis client_dll.hpp
// ═══════════════════════════════════════════════════════════════════
namespace wklp_offsets {
    // ── C_CSPlayerPawn (schemas depuis client_dll.hpp a2x)
    constexpr std::ptrdiff_t m_iShotsFired        = 0x1EB4;
    constexpr std::ptrdiff_t m_pAimPunchServices  = 0x1598;

    // ── CCSPlayer_AimPunchServices
    //    m_predictableBaseAngle   = 0x50
    //    m_unpredictableBaseAngle = 0xA4
    constexpr std::ptrdiff_t OFF_PUNCH_PRED       = 0x50;
    constexpr std::ptrdiff_t OFF_PUNCH_UNPRED     = 0xA4;
}
