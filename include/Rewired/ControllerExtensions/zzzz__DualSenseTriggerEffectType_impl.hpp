#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectType.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType::DualSenseTriggerEffectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType::DualSenseTriggerEffectType()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::Off{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::Feedback{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::Weapon{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::Vibration{static_cast<int32_t>(0x3)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::MultiplePositionFeedback{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::SlopeFeedback{static_cast<int32_t>(0x5)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired::ControllerExtensions::DualSenseTriggerEffectType::MultiplePositionVibration{static_cast<int32_t>(0x6)};
