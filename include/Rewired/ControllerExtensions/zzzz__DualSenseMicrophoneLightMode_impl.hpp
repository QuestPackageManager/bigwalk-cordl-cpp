#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseMicrophoneLightMode.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseMicrophoneLightMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode::DualSenseMicrophoneLightMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode::DualSenseMicrophoneLightMode()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  Rewired::ControllerExtensions::DualSenseMicrophoneLightMode::Off{static_cast<uint8_t>(0x0u)};
constexpr ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  Rewired::ControllerExtensions::DualSenseMicrophoneLightMode::On{static_cast<uint8_t>(0x1u)};
constexpr ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  Rewired::ControllerExtensions::DualSenseMicrophoneLightMode::Flash{static_cast<uint8_t>(0x2u)};
