#pragma once
// IWYU pragma private; include "Dissonance/AudioQuality.hpp"
#include "Dissonance/zzzz__AudioQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::AudioQuality::AudioQuality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::AudioQuality::AudioQuality()   {
}
constexpr ::Dissonance::AudioQuality  Dissonance::AudioQuality::Low{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::AudioQuality  Dissonance::AudioQuality::Medium{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::AudioQuality  Dissonance::AudioQuality::High{static_cast<int32_t>(0x2)};
