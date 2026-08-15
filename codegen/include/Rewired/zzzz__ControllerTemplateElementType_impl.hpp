#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateElementType.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerTemplateElementType::ControllerTemplateElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateElementType::ControllerTemplateElementType()   {
}
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Button{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::ThumbStick{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::DPad{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Stick{static_cast<int32_t>(0x5)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Throttle{static_cast<int32_t>(0x6)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Hat{static_cast<int32_t>(0x7)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Yoke{static_cast<int32_t>(0x8)};
constexpr ::Rewired::ControllerTemplateElementType  Rewired::ControllerTemplateElementType::Stick6D{static_cast<int32_t>(0x9)};
