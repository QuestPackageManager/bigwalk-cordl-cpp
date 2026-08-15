#pragma once
// IWYU pragma private; include "Rewired/Platforms/XInputAxis.hpp"
#include "Rewired/Platforms/zzzz__XInputAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::XInputAxis::XInputAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XInputAxis::XInputAxis()   {
}
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::LeftThumbX{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::LeftThumbY{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::RightThumbX{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::RightThumbY{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::LeftTrigger{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Platforms::XInputAxis  Rewired::Platforms::XInputAxis::RightTrigger{static_cast<int32_t>(0x6)};
