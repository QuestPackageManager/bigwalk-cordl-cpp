#pragma once
// IWYU pragma private; include "Steamworks/EDurationControlOnlineState.hpp"
#include "Steamworks/zzzz__EDurationControlOnlineState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EDurationControlOnlineState::EDurationControlOnlineState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EDurationControlOnlineState::EDurationControlOnlineState()   {
}
constexpr ::Steamworks::EDurationControlOnlineState  Steamworks::EDurationControlOnlineState::k_EDurationControlOnlineState_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EDurationControlOnlineState  Steamworks::EDurationControlOnlineState::k_EDurationControlOnlineState_Offline{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EDurationControlOnlineState  Steamworks::EDurationControlOnlineState::k_EDurationControlOnlineState_Online{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EDurationControlOnlineState  Steamworks::EDurationControlOnlineState::k_EDurationControlOnlineState_OnlineHighPri{static_cast<int32_t>(0x3)};
