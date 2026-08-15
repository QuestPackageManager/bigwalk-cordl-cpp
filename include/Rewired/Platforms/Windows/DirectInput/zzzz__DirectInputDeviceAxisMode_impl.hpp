#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputDeviceAxisMode.hpp"
#include "Rewired/Platforms/Windows/DirectInput/zzzz__DirectInputDeviceAxisMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode::DirectInputDeviceAxisMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode::DirectInputDeviceAxisMode()   {
}
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode  Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode::Absolute{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode  Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode::Relative{static_cast<int32_t>(0x1)};
