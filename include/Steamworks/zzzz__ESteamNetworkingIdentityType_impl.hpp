#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingIdentityType.hpp"
#include "Steamworks/zzzz__ESteamNetworkingIdentityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingIdentityType::ESteamNetworkingIdentityType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingIdentityType::ESteamNetworkingIdentityType()   {
}
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_SteamID{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_IPAddress{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_GenericString{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_GenericBytes{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_UnknownType{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamNetworkingIdentityType  Steamworks::ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType__Force32bit{static_cast<int32_t>(0x7fffffff)};
