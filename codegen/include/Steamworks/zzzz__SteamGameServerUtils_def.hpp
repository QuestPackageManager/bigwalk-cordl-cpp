#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerUtils)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EFloatingGamepadTextInputMode;
}
namespace Steamworks {
struct EGamepadTextInputLineMode;
}
namespace Steamworks {
struct EGamepadTextInputMode;
}
namespace Steamworks {
struct ENotificationPosition;
}
namespace Steamworks {
struct ESteamAPICallFailure;
}
namespace Steamworks {
struct ESteamIPv6ConnectivityProtocol;
}
namespace Steamworks {
struct ESteamIPv6ConnectivityState;
}
namespace Steamworks {
struct ETextFilteringContext;
}
namespace Steamworks {
struct EUniverse;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerUtils;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerUtils*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerUtils*, "Steamworks", "SteamGameServerUtils");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerUtils
class CORDL_TYPE SteamGameServerUtils : public ::System::Object {
public:
// Declarations
/// @brief Method BOverlayNeedsPresent, addr 0x1805abeb0, size 0x30, virtual false, abstract: false, final false
static inline bool BOverlayNeedsPresent() ;

/// @brief Method CheckFileSignature, addr 0x1805abee0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CheckFileSignature(::StringW  szFileName) ;

/// @brief Method DismissFloatingGamepadTextInput, addr 0x1805abfc0, size 0x30, virtual false, abstract: false, final false
static inline bool DismissFloatingGamepadTextInput() ;

/// @brief Method FilterText, addr 0x1805abff0, size 0x150, virtual false, abstract: false, final false
static inline int32_t FilterText(::Steamworks::ETextFilteringContext  eContext, ::Steamworks::CSteamID  sourceSteamID, ::StringW  pchInputMessage, ::by_ref<::StringW>  pchOutFilteredText, uint32_t  nByteSizeOutFilteredText) ;

/// @brief Method GetAPICallFailureReason, addr 0x1805ac140, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamAPICallFailure GetAPICallFailureReason(::Steamworks::SteamAPICall_t  hSteamAPICall) ;

/// @brief Method GetAPICallResult, addr 0x1805ac180, size 0x80, virtual false, abstract: false, final false
static inline bool GetAPICallResult(::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed) ;

/// @brief Method GetAppID, addr 0x1805ac200, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::AppId_t GetAppID() ;

/// @brief Method GetConnectedUniverse, addr 0x1805ac230, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EUniverse GetConnectedUniverse() ;

/// @brief Method GetCurrentBatteryPower, addr 0x1805ac260, size 0x30, virtual false, abstract: false, final false
static inline uint8_t GetCurrentBatteryPower() ;

/// @brief Method GetEnteredGamepadTextInput, addr 0x1805ac290, size 0x90, virtual false, abstract: false, final false
static inline bool GetEnteredGamepadTextInput(::by_ref<::StringW>  pchText, uint32_t  cchText) ;

/// @brief Method GetEnteredGamepadTextLength, addr 0x1805ac320, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetEnteredGamepadTextLength() ;

/// @brief Method GetIPCCallCount, addr 0x1805ac350, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetIPCCallCount() ;

/// @brief Method GetIPCountry, addr 0x1805ac380, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetIPCountry() ;

/// @brief Method GetIPv6ConnectivityState, addr 0x1805ac3c0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamIPv6ConnectivityState GetIPv6ConnectivityState(::Steamworks::ESteamIPv6ConnectivityProtocol  eProtocol) ;

/// @brief Method GetImageRGBA, addr 0x1805ac3f0, size 0x60, virtual false, abstract: false, final false
static inline bool GetImageRGBA(int32_t  iImage, ::ArrayW<uint8_t>  pubDest, int32_t  nDestBufferSize) ;

/// @brief Method GetImageSize, addr 0x1805ac450, size 0x60, virtual false, abstract: false, final false
static inline bool GetImageSize(int32_t  iImage, ::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight) ;

/// @brief Method GetSecondsSinceAppActive, addr 0x1805ac4b0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetSecondsSinceAppActive() ;

/// @brief Method GetSecondsSinceComputerActive, addr 0x1805ac4e0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetSecondsSinceComputerActive() ;

/// @brief Method GetServerRealTime, addr 0x1805ac510, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetServerRealTime() ;

/// @brief Method GetSteamUILanguage, addr 0x1805ac540, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetSteamUILanguage() ;

/// @brief Method InitFilterText, addr 0x1805ac580, size 0x30, virtual false, abstract: false, final false
static inline bool InitFilterText(uint32_t  unFilterOptions) ;

/// @brief Method IsAPICallCompleted, addr 0x1805ac5b0, size 0x50, virtual false, abstract: false, final false
static inline bool IsAPICallCompleted(::Steamworks::SteamAPICall_t  hSteamAPICall, ::by_ref<bool>  pbFailed) ;

/// @brief Method IsOverlayEnabled, addr 0x1805ac600, size 0x30, virtual false, abstract: false, final false
static inline bool IsOverlayEnabled() ;

/// @brief Method IsSteamChinaLauncher, addr 0x1805ac630, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamChinaLauncher() ;

/// @brief Method IsSteamInBigPictureMode, addr 0x1805ac660, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamInBigPictureMode() ;

/// @brief Method IsSteamRunningInVR, addr 0x1805ac690, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamRunningInVR() ;

/// @brief Method IsSteamRunningOnSteamDeck, addr 0x1805ac6c0, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamRunningOnSteamDeck() ;

/// @brief Method IsVRHeadsetStreamingEnabled, addr 0x1805ac6f0, size 0x30, virtual false, abstract: false, final false
static inline bool IsVRHeadsetStreamingEnabled() ;

/// @brief Method SetGameLauncherMode, addr 0x1805ac720, size 0x40, virtual false, abstract: false, final false
static inline void SetGameLauncherMode(bool  bLauncherMode) ;

/// @brief Method SetOverlayNotificationInset, addr 0x1805ac760, size 0x40, virtual false, abstract: false, final false
static inline void SetOverlayNotificationInset(int32_t  nHorizontalInset, int32_t  nVerticalInset) ;

/// @brief Method SetOverlayNotificationPosition, addr 0x1805ac7a0, size 0x30, virtual false, abstract: false, final false
static inline void SetOverlayNotificationPosition(::Steamworks::ENotificationPosition  eNotificationPosition) ;

/// @brief Method SetVRHeadsetStreamingEnabled, addr 0x1805ac7d0, size 0x40, virtual false, abstract: false, final false
static inline void SetVRHeadsetStreamingEnabled(bool  bEnabled) ;

/// @brief Method SetWarningMessageHook, addr 0x1805ac810, size 0x40, virtual false, abstract: false, final false
static inline void SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

/// @brief Method ShowFloatingGamepadTextInput, addr 0x1805ac850, size 0x70, virtual false, abstract: false, final false
static inline bool ShowFloatingGamepadTextInput(::Steamworks::EFloatingGamepadTextInputMode  eKeyboardMode, int32_t  nTextFieldXPosition, int32_t  nTextFieldYPosition, int32_t  nTextFieldWidth, int32_t  nTextFieldHeight) ;

/// @brief Method ShowGamepadTextInput, addr 0x1805ac8c0, size 0x190, virtual false, abstract: false, final false
static inline bool ShowGamepadTextInput(::Steamworks::EGamepadTextInputMode  eInputMode, ::Steamworks::EGamepadTextInputLineMode  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText) ;

/// @brief Method StartVRDashboard, addr 0x1805aca50, size 0x30, virtual false, abstract: false, final false
static inline void StartVRDashboard() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerUtils(SteamGameServerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerUtils(SteamGameServerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16373};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerUtils) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
