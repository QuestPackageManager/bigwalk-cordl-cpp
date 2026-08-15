#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectState.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState::DualSenseTriggerEffectState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState::DualSenseTriggerEffectState()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::Off{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::FeedbackIdle{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::FeedbackApplyingForce{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::WeaponIdle{static_cast<int32_t>(0x3)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::WeaponFiring{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::WeaponFired{static_cast<int32_t>(0x5)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::VibrationIdle{static_cast<int32_t>(0x6)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  Rewired::ControllerExtensions::DualSenseTriggerEffectState::VibrationVibrating{static_cast<int32_t>(0x7)};
