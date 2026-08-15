#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateElementSourceType.hpp"
#include "Rewired/zzzz__ControllerTemplateElementSourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerTemplateElementSourceType::ControllerTemplateElementSourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateElementSourceType::ControllerTemplateElementSourceType()   {
}
constexpr ::Rewired::ControllerTemplateElementSourceType  Rewired::ControllerTemplateElementSourceType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerTemplateElementSourceType  Rewired::ControllerTemplateElementSourceType::Button{static_cast<int32_t>(0x1)};
