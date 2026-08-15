#pragma once
// IWYU pragma private; include "Steamworks/EGamepadTextInputLineMode.hpp"
#include "Steamworks/zzzz__EGamepadTextInputLineMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EGamepadTextInputLineMode::EGamepadTextInputLineMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EGamepadTextInputLineMode::EGamepadTextInputLineMode()   {
}
constexpr ::Steamworks::EGamepadTextInputLineMode  Steamworks::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeSingleLine{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EGamepadTextInputLineMode  Steamworks::EGamepadTextInputLineMode::k_EGamepadTextInputLineModeMultipleLines{static_cast<int32_t>(0x1)};
