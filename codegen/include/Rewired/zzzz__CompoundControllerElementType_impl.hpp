#pragma once
// IWYU pragma private; include "Rewired/CompoundControllerElementType.hpp"
#include "Rewired/zzzz__CompoundControllerElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::CompoundControllerElementType::CompoundControllerElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::CompoundControllerElementType::CompoundControllerElementType()   {
}
constexpr ::Rewired::CompoundControllerElementType  Rewired::CompoundControllerElementType::Axis2D{static_cast<int32_t>(0x0)};
constexpr ::Rewired::CompoundControllerElementType  Rewired::CompoundControllerElementType::DPad{static_cast<int32_t>(0xa)};
constexpr ::Rewired::CompoundControllerElementType  Rewired::CompoundControllerElementType::Hat{static_cast<int32_t>(0xb)};
