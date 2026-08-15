#pragma once
// IWYU pragma private; include "Rewired/Platforms/RawInputAxis.hpp"
#include "Rewired/Platforms/zzzz__RawInputAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::RawInputAxis::RawInputAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::RawInputAxis::RawInputAxis()   {
}
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::X{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::Z{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::RotationX{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::RotationY{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::RotationZ{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::Slider0{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::Slider1{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::VelocityX{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::VelocityY{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::VelocityZ{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Platforms::RawInputAxis  Rewired::Platforms::RawInputAxis::Other{static_cast<int32_t>(0x3e8)};
