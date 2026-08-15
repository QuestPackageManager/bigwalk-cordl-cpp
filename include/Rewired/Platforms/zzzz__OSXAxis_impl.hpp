#pragma once
// IWYU pragma private; include "Rewired/Platforms/OSXAxis.hpp"
#include "Rewired/Platforms/zzzz__OSXAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::OSXAxis::OSXAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::OSXAxis::OSXAxis()   {
}
constexpr ::Rewired::Platforms::OSXAxis  Rewired::Platforms::OSXAxis::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::OSXAxis  Rewired::Platforms::OSXAxis::X{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::OSXAxis  Rewired::Platforms::OSXAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::OSXAxis  Rewired::Platforms::OSXAxis::Other{static_cast<int32_t>(0x3)};
