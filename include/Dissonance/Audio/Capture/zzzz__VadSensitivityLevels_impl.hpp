#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/VadSensitivityLevels.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels::VadSensitivityLevels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels::VadSensitivityLevels()   {
}
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels  Dissonance::Audio::Capture::VadSensitivityLevels::LowSensitivity{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels  Dissonance::Audio::Capture::VadSensitivityLevels::MediumSensitivity{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels  Dissonance::Audio::Capture::VadSensitivityLevels::HighSensitivity{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels  Dissonance::Audio::Capture::VadSensitivityLevels::VeryHighSensitivity{static_cast<int32_t>(0x3)};
