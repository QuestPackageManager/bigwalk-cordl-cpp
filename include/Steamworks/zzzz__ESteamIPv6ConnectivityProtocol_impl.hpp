#pragma once
// IWYU pragma private; include "Steamworks/ESteamIPv6ConnectivityProtocol.hpp"
#include "Steamworks/zzzz__ESteamIPv6ConnectivityProtocol_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamIPv6ConnectivityProtocol::ESteamIPv6ConnectivityProtocol(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamIPv6ConnectivityProtocol::ESteamIPv6ConnectivityProtocol()   {
}
constexpr ::Steamworks::ESteamIPv6ConnectivityProtocol  Steamworks::ESteamIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamIPv6ConnectivityProtocol  Steamworks::ESteamIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_HTTP{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamIPv6ConnectivityProtocol  Steamworks::ESteamIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_UDP{static_cast<int32_t>(0x2)};
