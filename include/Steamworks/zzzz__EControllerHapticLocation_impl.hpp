#pragma once
// IWYU pragma private; include "Steamworks/EControllerHapticLocation.hpp"
#include "Steamworks/zzzz__EControllerHapticLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EControllerHapticLocation::EControllerHapticLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EControllerHapticLocation::EControllerHapticLocation()   {
}
constexpr ::Steamworks::EControllerHapticLocation  Steamworks::EControllerHapticLocation::k_EControllerHapticLocation_Left{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EControllerHapticLocation  Steamworks::EControllerHapticLocation::k_EControllerHapticLocation_Right{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EControllerHapticLocation  Steamworks::EControllerHapticLocation::k_EControllerHapticLocation_Both{static_cast<int32_t>(0x3)};
