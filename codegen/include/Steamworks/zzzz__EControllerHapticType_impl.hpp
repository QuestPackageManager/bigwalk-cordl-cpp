#pragma once
// IWYU pragma private; include "Steamworks/EControllerHapticType.hpp"
#include "Steamworks/zzzz__EControllerHapticType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EControllerHapticType::EControllerHapticType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EControllerHapticType::EControllerHapticType()   {
}
constexpr ::Steamworks::EControllerHapticType  Steamworks::EControllerHapticType::k_EControllerHapticType_Off{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EControllerHapticType  Steamworks::EControllerHapticType::k_EControllerHapticType_Tick{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EControllerHapticType  Steamworks::EControllerHapticType::k_EControllerHapticType_Click{static_cast<int32_t>(0x2)};
