#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/RawInput/DeviceType.hpp"
#include "Rewired/Platforms/Windows/RawInput/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType::DeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType::DeviceType()   {
}
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::Joystick{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::Gamepad{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::Keyboard{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::Mouse{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::MultiAxisController{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::Windows::RawInput::DeviceType  Rewired::Platforms::Windows::RawInput::DeviceType::Unknown{static_cast<int32_t>(0x5)};
