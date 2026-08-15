#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingAvailability.hpp"
#include "Steamworks/zzzz__ESteamNetworkingAvailability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingAvailability::ESteamNetworkingAvailability(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingAvailability::ESteamNetworkingAvailability()   {
}
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_CannotTry{static_cast<int32_t>(0xffffff9a)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Failed{static_cast<int32_t>(0xffffff9b)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Previously{static_cast<int32_t>(0xffffff9c)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Retrying{static_cast<int32_t>(0xfffffff6)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_NeverTried{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Waiting{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Attempting{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Current{static_cast<int32_t>(0x64)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability_Unknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetworkingAvailability  Steamworks::ESteamNetworkingAvailability::k_ESteamNetworkingAvailability__Force32bit{static_cast<int32_t>(0x7fffffff)};
