#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/DeviceSubType.hpp"
#include "Rewired/Platforms/Windows/XInput/zzzz__DeviceSubType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType::DeviceSubType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType::DeviceSubType()   {
}
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::Gamepad{static_cast<uint8_t>(0x1u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::Wheel{static_cast<uint8_t>(0x2u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::ArcadeStick{static_cast<uint8_t>(0x3u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::FlightStick{static_cast<uint8_t>(0x4u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::DancePad{static_cast<uint8_t>(0x5u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::Guitar{static_cast<uint8_t>(0x6u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::GuitarAlternate{static_cast<uint8_t>(0x7u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::DrumKit{static_cast<uint8_t>(0x8u)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::GuitarBass{static_cast<uint8_t>(0xbu)};
constexpr ::Rewired::Platforms::Windows::XInput::DeviceSubType  Rewired::Platforms::Windows::XInput::DeviceSubType::ArcadePad{static_cast<uint8_t>(0x13u)};
