#pragma once
// IWYU pragma private; include "Steamworks/EDurationControlNotification.hpp"
#include "Steamworks/zzzz__EDurationControlNotification_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EDurationControlNotification::EDurationControlNotification(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EDurationControlNotification::EDurationControlNotification()   {
}
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_1Hour{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_3Hours{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_HalfProgress{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_NoProgress{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_ExitSoon_3h{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_ExitSoon_5h{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EDurationControlNotification  Steamworks::EDurationControlNotification::k_EDurationControlNotification_ExitSoon_Night{static_cast<int32_t>(0x7)};
