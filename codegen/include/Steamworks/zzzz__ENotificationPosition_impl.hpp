#pragma once
// IWYU pragma private; include "Steamworks/ENotificationPosition.hpp"
#include "Steamworks/zzzz__ENotificationPosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ENotificationPosition::ENotificationPosition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ENotificationPosition::ENotificationPosition()   {
}
constexpr ::Steamworks::ENotificationPosition  Steamworks::ENotificationPosition::k_EPositionTopLeft{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ENotificationPosition  Steamworks::ENotificationPosition::k_EPositionTopRight{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ENotificationPosition  Steamworks::ENotificationPosition::k_EPositionBottomLeft{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ENotificationPosition  Steamworks::ENotificationPosition::k_EPositionBottomRight{static_cast<int32_t>(0x3)};
