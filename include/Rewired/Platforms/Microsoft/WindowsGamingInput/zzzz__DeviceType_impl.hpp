#pragma once
// IWYU pragma private; include "Rewired/Platforms/Microsoft/WindowsGamingInput/DeviceType.hpp"
#include "Rewired/Platforms/Microsoft/WindowsGamingInput/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType::DeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType::DeviceType()   {
}
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType  Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType  Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType::Gamepad{static_cast<int32_t>(0x1)};
