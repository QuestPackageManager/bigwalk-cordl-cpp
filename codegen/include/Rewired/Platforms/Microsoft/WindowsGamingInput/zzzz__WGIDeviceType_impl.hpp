#pragma once
// IWYU pragma private; include "Rewired/Platforms/Microsoft/WindowsGamingInput/WGIDeviceType.hpp"
#include "Rewired/Platforms/Microsoft/WindowsGamingInput/zzzz__WGIDeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType::WGIDeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType::WGIDeviceType()   {
}
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType  Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType  Rewired::Platforms::Microsoft::WindowsGamingInput::WGIDeviceType::Gamepad{static_cast<int32_t>(0x1)};
