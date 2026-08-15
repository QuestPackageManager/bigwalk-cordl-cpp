#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseVibrationMode.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseVibrationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseVibrationMode::DualSenseVibrationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseVibrationMode::DualSenseVibrationMode()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseVibrationMode  Rewired::ControllerExtensions::DualSenseVibrationMode::Advanced{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerExtensions::DualSenseVibrationMode  Rewired::ControllerExtensions::DualSenseVibrationMode::Compatible{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerExtensions::DualSenseVibrationMode  Rewired::ControllerExtensions::DualSenseVibrationMode::Compatible2{static_cast<int32_t>(0x3)};
