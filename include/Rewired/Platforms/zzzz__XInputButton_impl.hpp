#pragma once
// IWYU pragma private; include "Rewired/Platforms/XInputButton.hpp"
#include "Rewired/Platforms/zzzz__XInputButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::XInputButton::XInputButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XInputButton::XInputButton()   {
}
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::A{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::B{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::X{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::Y{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::LeftShoulder{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::RightShoulder{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::LeftThumb{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::RightThumb{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::Start{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::Back{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::DPadUp{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::DPadRight{static_cast<int32_t>(0xc)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::DPadDown{static_cast<int32_t>(0xd)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::DPadLeft{static_cast<int32_t>(0xe)};
constexpr ::Rewired::Platforms::XInputButton  Rewired::Platforms::XInputButton::Guide{static_cast<int32_t>(0xf)};
