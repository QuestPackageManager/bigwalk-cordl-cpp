#pragma once
// IWYU pragma private; include "Dissonance/CommActivationMode.hpp"
#include "Dissonance/zzzz__CommActivationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::CommActivationMode::CommActivationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::CommActivationMode::CommActivationMode()   {
}
constexpr ::Dissonance::CommActivationMode  Dissonance::CommActivationMode::None{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::CommActivationMode  Dissonance::CommActivationMode::VoiceActivation{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::CommActivationMode  Dissonance::CommActivationMode::PushToTalk{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::CommActivationMode  Dissonance::CommActivationMode::Open{static_cast<int32_t>(0x3)};
