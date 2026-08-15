#pragma once
// IWYU pragma private; include "Steamworks/EBroadcastUploadResult.hpp"
#include "Steamworks/zzzz__EBroadcastUploadResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EBroadcastUploadResult::EBroadcastUploadResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EBroadcastUploadResult::EBroadcastUploadResult()   {
}
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultOK{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultInitFailed{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultFrameFailed{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultTimeout{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultBandwidthExceeded{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultLowFPS{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultMissingKeyFrames{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultNoConnection{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultRelayFailed{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultSettingsChanged{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultMissingAudio{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultTooFarBehind{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultTranscodeBehind{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultNotAllowedToPlay{static_cast<int32_t>(0xe)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultBusy{static_cast<int32_t>(0xf)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultBanned{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultAlreadyActive{static_cast<int32_t>(0x11)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultForcedOff{static_cast<int32_t>(0x12)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultAudioBehind{static_cast<int32_t>(0x13)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultShutdown{static_cast<int32_t>(0x14)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultDisconnect{static_cast<int32_t>(0x15)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultVideoInitFailed{static_cast<int32_t>(0x16)};
constexpr ::Steamworks::EBroadcastUploadResult  Steamworks::EBroadcastUploadResult::k_EBroadcastUploadResultAudioInitFailed{static_cast<int32_t>(0x17)};
