#pragma once
// IWYU pragma private; include "Rewired/Platforms/DirectInputAxis.hpp"
#include "Rewired/Platforms/zzzz__DirectInputAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::DirectInputAxis::DirectInputAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::DirectInputAxis::DirectInputAxis()   {
}
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::X{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::Z{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::RotationX{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::RotationY{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::RotationZ{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::Slider0{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::Slider1{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::VelocityX{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::VelocityY{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::VelocityZ{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularVelocityX{static_cast<int32_t>(0xc)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularVelocityY{static_cast<int32_t>(0xd)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularVelocityZ{static_cast<int32_t>(0xe)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::VelocitySlider0{static_cast<int32_t>(0xf)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::VelocitySlider1{static_cast<int32_t>(0x10)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AccelerationX{static_cast<int32_t>(0x11)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AccelerationY{static_cast<int32_t>(0x12)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AccelerationZ{static_cast<int32_t>(0x13)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularAccelerationX{static_cast<int32_t>(0x14)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularAccelerationY{static_cast<int32_t>(0x15)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AngularAccelerationZ{static_cast<int32_t>(0x16)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AccelerationSlider0{static_cast<int32_t>(0x17)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::AccelerationSlider1{static_cast<int32_t>(0x18)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::ForceX{static_cast<int32_t>(0x19)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::ForceY{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::ForceZ{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::TorqueX{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::TorqueY{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::TorqueZ{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::ForceSlider0{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::Platforms::DirectInputAxis  Rewired::Platforms::DirectInputAxis::ForceSlider1{static_cast<int32_t>(0x20)};
