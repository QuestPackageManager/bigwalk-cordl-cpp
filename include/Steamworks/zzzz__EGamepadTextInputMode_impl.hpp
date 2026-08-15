#pragma once
// IWYU pragma private; include "Steamworks/EGamepadTextInputMode.hpp"
#include "Steamworks/zzzz__EGamepadTextInputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EGamepadTextInputMode::EGamepadTextInputMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EGamepadTextInputMode::EGamepadTextInputMode()   {
}
constexpr ::Steamworks::EGamepadTextInputMode  Steamworks::EGamepadTextInputMode::k_EGamepadTextInputModeNormal{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EGamepadTextInputMode  Steamworks::EGamepadTextInputMode::k_EGamepadTextInputModePassword{static_cast<int32_t>(0x1)};
