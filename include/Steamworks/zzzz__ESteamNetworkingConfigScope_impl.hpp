#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigScope.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingConfigScope::ESteamNetworkingConfigScope(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingConfigScope::ESteamNetworkingConfigScope()   {
}
constexpr ::Steamworks::ESteamNetworkingConfigScope  Steamworks::ESteamNetworkingConfigScope::k_ESteamNetworkingConfig_Global{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingConfigScope  Steamworks::ESteamNetworkingConfigScope::k_ESteamNetworkingConfig_SocketsInterface{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingConfigScope  Steamworks::ESteamNetworkingConfigScope::k_ESteamNetworkingConfig_ListenSocket{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingConfigScope  Steamworks::ESteamNetworkingConfigScope::k_ESteamNetworkingConfig_Connection{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamNetworkingConfigScope  Steamworks::ESteamNetworkingConfigScope::k_ESteamNetworkingConfigScope__Force32Bit{static_cast<int32_t>(0x7fffffff)};
