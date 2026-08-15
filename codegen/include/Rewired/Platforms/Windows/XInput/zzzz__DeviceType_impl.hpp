#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/DeviceType.hpp"
#include "Rewired/Platforms/Windows/XInput/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::XInput::DeviceType::DeviceType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::XInput::DeviceType::DeviceType()   {
}
constexpr ::Rewired::Platforms::Windows::XInput::DeviceType  Rewired::Platforms::Windows::XInput::DeviceType::Gamepad{static_cast<uint8_t>(0x1u)};
