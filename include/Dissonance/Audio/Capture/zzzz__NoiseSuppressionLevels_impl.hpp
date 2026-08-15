#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/NoiseSuppressionLevels.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels::NoiseSuppressionLevels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels::NoiseSuppressionLevels()   {
}
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels  Dissonance::Audio::Capture::NoiseSuppressionLevels::Disabled{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels  Dissonance::Audio::Capture::NoiseSuppressionLevels::Low{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels  Dissonance::Audio::Capture::NoiseSuppressionLevels::Moderate{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels  Dissonance::Audio::Capture::NoiseSuppressionLevels::High{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels  Dissonance::Audio::Capture::NoiseSuppressionLevels::VeryHigh{static_cast<int32_t>(0x3)};
