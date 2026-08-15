#pragma once
// IWYU pragma private; include "Steamworks/AudioPlayback_Status.hpp"
#include "Steamworks/zzzz__AudioPlayback_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::AudioPlayback_Status::AudioPlayback_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::AudioPlayback_Status::AudioPlayback_Status()   {
}
constexpr ::Steamworks::AudioPlayback_Status  Steamworks::AudioPlayback_Status::AudioPlayback_Undefined{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::AudioPlayback_Status  Steamworks::AudioPlayback_Status::AudioPlayback_Playing{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::AudioPlayback_Status  Steamworks::AudioPlayback_Status::AudioPlayback_Paused{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::AudioPlayback_Status  Steamworks::AudioPlayback_Status::AudioPlayback_Idle{static_cast<int32_t>(0x3)};
