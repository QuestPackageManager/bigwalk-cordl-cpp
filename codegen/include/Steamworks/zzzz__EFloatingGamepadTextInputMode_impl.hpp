#pragma once
// IWYU pragma private; include "Steamworks/EFloatingGamepadTextInputMode.hpp"
#include "Steamworks/zzzz__EFloatingGamepadTextInputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EFloatingGamepadTextInputMode::EFloatingGamepadTextInputMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EFloatingGamepadTextInputMode::EFloatingGamepadTextInputMode()   {
}
constexpr ::Steamworks::EFloatingGamepadTextInputMode  Steamworks::EFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeSingleLine{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EFloatingGamepadTextInputMode  Steamworks::EFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeMultipleLines{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EFloatingGamepadTextInputMode  Steamworks::EFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeEmail{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EFloatingGamepadTextInputMode  Steamworks::EFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeNumeric{static_cast<int32_t>(0x3)};
