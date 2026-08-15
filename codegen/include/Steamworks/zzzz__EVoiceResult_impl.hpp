#pragma once
// IWYU pragma private; include "Steamworks/EVoiceResult.hpp"
#include "Steamworks/zzzz__EVoiceResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EVoiceResult::EVoiceResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EVoiceResult::EVoiceResult()   {
}
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultOK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultNotInitialized{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultNotRecording{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultNoData{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultBufferTooSmall{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultDataCorrupted{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultRestricted{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultUnsupportedCodec{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultReceiverOutOfDate{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EVoiceResult  Steamworks::EVoiceResult::k_EVoiceResultReceiverDidNotAnswer{static_cast<int32_t>(0x9)};
