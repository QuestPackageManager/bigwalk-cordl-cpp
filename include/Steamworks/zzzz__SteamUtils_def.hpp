#pragma once
// IWYU pragma private; include "Steamworks/SteamUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUtils)
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
class SteamUtils;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamUtils*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUtils*, "Steamworks", "SteamUtils");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamUtils
class CORDL_TYPE SteamUtils : public ::System::Object {
public:
// Declarations
/// @brief Method BOverlayNeedsPresent, addr 0x1805bfe90, size 0x30, virtual false, abstract: false, final false
static inline bool BOverlayNeedsPresent() ;

/// @brief Method CheckFileSignature, addr 0x1805bfec0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CheckFileSignature(::StringW  szFileName) ;

/// @brief Method DismissFloatingGamepadTextInput, addr 0x1805bffa0, size 0x30, virtual false, abstract: false, final false
static inline bool DismissFloatingGamepadTextInput() ;

/// @brief Method FilterText, addr 0x1805bffd0, size 0x150, virtual false, abstract: false, final false
static inline int32_t FilterText(::Steamworks::ETextFilteringContext  eContext, ::Steamworks::CSteamID  sourceSteamID, ::StringW  pchInputMessage, ::by_ref<::StringW>  pchOutFilteredText, uint32_t  nByteSizeOutFilteredText) ;

/// @brief Method GetAPICallFailureReason, addr 0x1805c0120, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamAPICallFailure GetAPICallFailureReason(::Steamworks::SteamAPICall_t  hSteamAPICall) ;

/// @brief Method GetAPICallResult, addr 0x1805c0160, size 0x80, virtual false, abstract: false, final false
static inline bool GetAPICallResult(::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed) ;

/// @brief Method GetAppID, addr 0x1805c01e0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::AppId_t GetAppID() ;

/// @brief Method GetConnectedUniverse, addr 0x1805c0210, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EUniverse GetConnectedUniverse() ;

/// @brief Method GetCurrentBatteryPower, addr 0x1805c0240, size 0x30, virtual false, abstract: false, final false
static inline uint8_t GetCurrentBatteryPower() ;

/// @brief Method GetEnteredGamepadTextInput, addr 0x1805c0270, size 0x90, virtual false, abstract: false, final false
static inline bool GetEnteredGamepadTextInput(::by_ref<::StringW>  pchText, uint32_t  cchText) ;

/// @brief Method GetEnteredGamepadTextLength, addr 0x1805c0300, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetEnteredGamepadTextLength() ;

/// @brief Method GetIPCCallCount, addr 0x1805c0330, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetIPCCallCount() ;

/// @brief Method GetIPCountry, addr 0x1805c0360, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetIPCountry() ;

/// @brief Method GetIPv6ConnectivityState, addr 0x1805c03a0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamIPv6ConnectivityState GetIPv6ConnectivityState(::Steamworks::ESteamIPv6ConnectivityProtocol  eProtocol) ;

/// @brief Method GetImageRGBA, addr 0x1805c03d0, size 0x60, virtual false, abstract: false, final false
static inline bool GetImageRGBA(int32_t  iImage, ::ArrayW<uint8_t>  pubDest, int32_t  nDestBufferSize) ;

/// @brief Method GetImageSize, addr 0x1805c0430, size 0x60, virtual false, abstract: false, final false
static inline bool GetImageSize(int32_t  iImage, ::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight) ;

/// @brief Method GetSecondsSinceAppActive, addr 0x1805c0490, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetSecondsSinceAppActive() ;

/// @brief Method GetSecondsSinceComputerActive, addr 0x1805c04c0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetSecondsSinceComputerActive() ;

/// @brief Method GetServerRealTime, addr 0x1805c04f0, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetServerRealTime() ;

/// @brief Method GetSteamUILanguage, addr 0x1805c0520, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetSteamUILanguage() ;

/// @brief Method InitFilterText, addr 0x1805c0560, size 0x30, virtual false, abstract: false, final false
static inline bool InitFilterText(uint32_t  unFilterOptions) ;

/// @brief Method IsAPICallCompleted, addr 0x1805c0590, size 0x50, virtual false, abstract: false, final false
static inline bool IsAPICallCompleted(::Steamworks::SteamAPICall_t  hSteamAPICall, ::by_ref<bool>  pbFailed) ;

/// @brief Method IsOverlayEnabled, addr 0x1805c05e0, size 0x30, virtual false, abstract: false, final false
static inline bool IsOverlayEnabled() ;

/// @brief Method IsSteamChinaLauncher, addr 0x1805c0610, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamChinaLauncher() ;

/// @brief Method IsSteamInBigPictureMode, addr 0x1805c0640, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamInBigPictureMode() ;

/// @brief Method IsSteamRunningInVR, addr 0x1805c0670, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamRunningInVR() ;

/// @brief Method IsSteamRunningOnSteamDeck, addr 0x1805c06a0, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamRunningOnSteamDeck() ;

/// @brief Method IsVRHeadsetStreamingEnabled, addr 0x1805c06d0, size 0x30, virtual false, abstract: false, final false
static inline bool IsVRHeadsetStreamingEnabled() ;

/// @brief Method SetGameLauncherMode, addr 0x1805c0700, size 0x40, virtual false, abstract: false, final false
static inline void SetGameLauncherMode(bool  bLauncherMode) ;

/// @brief Method SetOverlayNotificationInset, addr 0x1805c0740, size 0x40, virtual false, abstract: false, final false
static inline void SetOverlayNotificationInset(int32_t  nHorizontalInset, int32_t  nVerticalInset) ;

/// @brief Method SetOverlayNotificationPosition, addr 0x1805c0780, size 0x30, virtual false, abstract: false, final false
static inline void SetOverlayNotificationPosition(::Steamworks::ENotificationPosition  eNotificationPosition) ;

/// @brief Method SetVRHeadsetStreamingEnabled, addr 0x1805c07b0, size 0x40, virtual false, abstract: false, final false
static inline void SetVRHeadsetStreamingEnabled(bool  bEnabled) ;

/// @brief Method SetWarningMessageHook, addr 0x1805c07f0, size 0x40, virtual false, abstract: false, final false
static inline void SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

/// @brief Method ShowFloatingGamepadTextInput, addr 0x1805c0830, size 0x70, virtual false, abstract: false, final false
static inline bool ShowFloatingGamepadTextInput(::Steamworks::EFloatingGamepadTextInputMode  eKeyboardMode, int32_t  nTextFieldXPosition, int32_t  nTextFieldYPosition, int32_t  nTextFieldWidth, int32_t  nTextFieldHeight) ;

/// @brief Method ShowGamepadTextInput, addr 0x1805c08a0, size 0x190, virtual false, abstract: false, final false
static inline bool ShowGamepadTextInput(::Steamworks::EGamepadTextInputMode  eInputMode, ::Steamworks::EGamepadTextInputLineMode  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText) ;

/// @brief Method StartVRDashboard, addr 0x1805c0a30, size 0x30, virtual false, abstract: false, final false
static inline void StartVRDashboard() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamUtils(SteamUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamUtils(SteamUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamUtils) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
