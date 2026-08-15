#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseOtherLightBrightness.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseOtherLightBrightness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness::DualSenseOtherLightBrightness(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness::DualSenseOtherLightBrightness()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  Rewired::ControllerExtensions::DualSenseOtherLightBrightness::Low{static_cast<uint8_t>(0x0u)};
constexpr ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  Rewired::ControllerExtensions::DualSenseOtherLightBrightness::Medium{static_cast<uint8_t>(0x1u)};
constexpr ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  Rewired::ControllerExtensions::DualSenseOtherLightBrightness::High{static_cast<uint8_t>(0x2u)};
