#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerType.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerType::DualSenseTriggerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerType::DualSenseTriggerType()   {
}
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerType  Rewired::ControllerExtensions::DualSenseTriggerType::Left{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerType  Rewired::ControllerExtensions::DualSenseTriggerType::Right{static_cast<int32_t>(0x1)};
