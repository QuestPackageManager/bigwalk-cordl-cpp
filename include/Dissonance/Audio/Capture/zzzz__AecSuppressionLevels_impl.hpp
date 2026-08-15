#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AecSuppressionLevels.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels::AecSuppressionLevels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels::AecSuppressionLevels()   {
}
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels  Dissonance::Audio::Capture::AecSuppressionLevels::Disabled{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels  Dissonance::Audio::Capture::AecSuppressionLevels::Low{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels  Dissonance::Audio::Capture::AecSuppressionLevels::Moderate{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels  Dissonance::Audio::Capture::AecSuppressionLevels::High{static_cast<int32_t>(0x2)};
