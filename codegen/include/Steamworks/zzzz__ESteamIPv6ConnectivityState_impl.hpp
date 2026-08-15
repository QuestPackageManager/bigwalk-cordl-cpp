#pragma once
// IWYU pragma private; include "Steamworks/ESteamIPv6ConnectivityState.hpp"
#include "Steamworks/zzzz__ESteamIPv6ConnectivityState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamIPv6ConnectivityState::ESteamIPv6ConnectivityState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamIPv6ConnectivityState::ESteamIPv6ConnectivityState()   {
}
constexpr ::Steamworks::ESteamIPv6ConnectivityState  Steamworks::ESteamIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Unknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamIPv6ConnectivityState  Steamworks::ESteamIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Good{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamIPv6ConnectivityState  Steamworks::ESteamIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Bad{static_cast<int32_t>(0x2)};
