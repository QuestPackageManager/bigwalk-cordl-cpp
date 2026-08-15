#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectStates.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectState_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectStates_def.hpp"
// Ctor Parameters [CppParam { name: "leftTrigger", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectState", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightTrigger", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectState", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates::DualSenseTriggerEffectStates(::Rewired::ControllerExtensions::DualSenseTriggerEffectState  leftTrigger, ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  rightTrigger) noexcept  {
this->leftTrigger = leftTrigger;
this->rightTrigger = rightTrigger;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates::DualSenseTriggerEffectStates()   {
}
