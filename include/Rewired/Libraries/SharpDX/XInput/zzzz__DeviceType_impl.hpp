#pragma once
// IWYU pragma private; include "Rewired/Libraries/SharpDX/XInput/DeviceType.hpp"
#include "Rewired/Libraries/SharpDX/XInput/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Libraries::SharpDX::XInput::DeviceType::DeviceType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Libraries::SharpDX::XInput::DeviceType::DeviceType()   {
}
constexpr ::Rewired::Libraries::SharpDX::XInput::DeviceType  Rewired::Libraries::SharpDX::XInput::DeviceType::Gamepad{static_cast<uint8_t>(0x1u)};
