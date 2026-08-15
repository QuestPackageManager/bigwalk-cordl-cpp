#pragma once
// IWYU pragma private; include "Rewired/DeadZone2DType.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::DeadZone2DType::DeadZone2DType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::DeadZone2DType::DeadZone2DType()   {
}
constexpr ::Rewired::DeadZone2DType  Rewired::DeadZone2DType::Radial{static_cast<int32_t>(0x1)};
constexpr ::Rewired::DeadZone2DType  Rewired::DeadZone2DType::Axial{static_cast<int32_t>(0x2)};
