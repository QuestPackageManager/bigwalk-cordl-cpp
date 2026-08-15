#pragma once
// IWYU pragma private; include "Rewired/ControllerElementType.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerElementType::ControllerElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementType::ControllerElementType()   {
}
constexpr ::Rewired::ControllerElementType  Rewired::ControllerElementType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerElementType  Rewired::ControllerElementType::Button{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerElementType  Rewired::ControllerElementType::CompoundElement{static_cast<int32_t>(0x64)};
