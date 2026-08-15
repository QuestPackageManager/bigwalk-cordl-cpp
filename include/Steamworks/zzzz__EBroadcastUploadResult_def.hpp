#pragma once
// IWYU pragma private; include "Steamworks/EBroadcastUploadResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EBroadcastUploadResult)
// Forward declare root types
namespace Steamworks {
struct EBroadcastUploadResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::EBroadcastUploadResult);
DEFINE_IL2CPP_CLASS(::Steamworks::EBroadcastUploadResult, "Steamworks", "EBroadcastUploadResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EBroadcastUploadResult
struct CORDL_TYPE EBroadcastUploadResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EBroadcastUploadResult_Unwrapped
enum struct __EBroadcastUploadResult_Unwrapped : int32_t {
__E_k_EBroadcastUploadResultNone = static_cast<int32_t>(0x0),
__E_k_EBroadcastUploadResultOK = static_cast<int32_t>(0x1),
__E_k_EBroadcastUploadResultInitFailed = static_cast<int32_t>(0x2),
__E_k_EBroadcastUploadResultFrameFailed = static_cast<int32_t>(0x3),
__E_k_EBroadcastUploadResultTimeout = static_cast<int32_t>(0x4),
__E_k_EBroadcastUploadResultBandwidthExceeded = static_cast<int32_t>(0x5),
__E_k_EBroadcastUploadResultLowFPS = static_cast<int32_t>(0x6),
__E_k_EBroadcastUploadResultMissingKeyFrames = static_cast<int32_t>(0x7),
__E_k_EBroadcastUploadResultNoConnection = static_cast<int32_t>(0x8),
__E_k_EBroadcastUploadResultRelayFailed = static_cast<int32_t>(0x9),
__E_k_EBroadcastUploadResultSettingsChanged = static_cast<int32_t>(0xa),
__E_k_EBroadcastUploadResultMissingAudio = static_cast<int32_t>(0xb),
__E_k_EBroadcastUploadResultTooFarBehind = static_cast<int32_t>(0xc),
__E_k_EBroadcastUploadResultTranscodeBehind = static_cast<int32_t>(0xd),
__E_k_EBroadcastUploadResultNotAllowedToPlay = static_cast<int32_t>(0xe),
__E_k_EBroadcastUploadResultBusy = static_cast<int32_t>(0xf),
__E_k_EBroadcastUploadResultBanned = static_cast<int32_t>(0x10),
__E_k_EBroadcastUploadResultAlreadyActive = static_cast<int32_t>(0x11),
__E_k_EBroadcastUploadResultForcedOff = static_cast<int32_t>(0x12),
__E_k_EBroadcastUploadResultAudioBehind = static_cast<int32_t>(0x13),
__E_k_EBroadcastUploadResultShutdown = static_cast<int32_t>(0x14),
__E_k_EBroadcastUploadResultDisconnect = static_cast<int32_t>(0x15),
__E_k_EBroadcastUploadResultVideoInitFailed = static_cast<int32_t>(0x16),
__E_k_EBroadcastUploadResultAudioInitFailed = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EBroadcastUploadResult_Unwrapped () const noexcept {
return static_cast<__EBroadcastUploadResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EBroadcastUploadResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EBroadcastUploadResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EBroadcastUploadResultAlreadyActive value: I32(17)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultAlreadyActive;

/// @brief Field k_EBroadcastUploadResultAudioBehind value: I32(19)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultAudioBehind;

/// @brief Field k_EBroadcastUploadResultAudioInitFailed value: I32(23)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultAudioInitFailed;

/// @brief Field k_EBroadcastUploadResultBandwidthExceeded value: I32(5)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultBandwidthExceeded;

/// @brief Field k_EBroadcastUploadResultBanned value: I32(16)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultBanned;

/// @brief Field k_EBroadcastUploadResultBusy value: I32(15)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultBusy;

/// @brief Field k_EBroadcastUploadResultDisconnect value: I32(21)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultDisconnect;

/// @brief Field k_EBroadcastUploadResultForcedOff value: I32(18)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultForcedOff;

/// @brief Field k_EBroadcastUploadResultFrameFailed value: I32(3)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultFrameFailed;

/// @brief Field k_EBroadcastUploadResultInitFailed value: I32(2)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultInitFailed;

/// @brief Field k_EBroadcastUploadResultLowFPS value: I32(6)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultLowFPS;

/// @brief Field k_EBroadcastUploadResultMissingAudio value: I32(11)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultMissingAudio;

/// @brief Field k_EBroadcastUploadResultMissingKeyFrames value: I32(7)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultMissingKeyFrames;

/// @brief Field k_EBroadcastUploadResultNoConnection value: I32(8)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultNoConnection;

/// @brief Field k_EBroadcastUploadResultNone value: I32(0)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultNone;

/// @brief Field k_EBroadcastUploadResultNotAllowedToPlay value: I32(14)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultNotAllowedToPlay;

/// @brief Field k_EBroadcastUploadResultOK value: I32(1)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultOK;

/// @brief Field k_EBroadcastUploadResultRelayFailed value: I32(9)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultRelayFailed;

/// @brief Field k_EBroadcastUploadResultSettingsChanged value: I32(10)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultSettingsChanged;

/// @brief Field k_EBroadcastUploadResultShutdown value: I32(20)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultShutdown;

/// @brief Field k_EBroadcastUploadResultTimeout value: I32(4)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultTimeout;

/// @brief Field k_EBroadcastUploadResultTooFarBehind value: I32(12)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultTooFarBehind;

/// @brief Field k_EBroadcastUploadResultTranscodeBehind value: I32(13)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultTranscodeBehind;

/// @brief Field k_EBroadcastUploadResultVideoInitFailed value: I32(22)
static ::Steamworks::EBroadcastUploadResult const k_EBroadcastUploadResultVideoInitFailed;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EBroadcastUploadResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EBroadcastUploadResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
