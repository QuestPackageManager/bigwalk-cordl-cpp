#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingFakeIPType.hpp"
#include "Steamworks/zzzz__ESteamNetworkingFakeIPType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingFakeIPType::ESteamNetworkingFakeIPType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingFakeIPType::ESteamNetworkingFakeIPType()   {
}
constexpr ::Steamworks::ESteamNetworkingFakeIPType  Steamworks::ESteamNetworkingFakeIPType::k_ESteamNetworkingFakeIPType_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetworkingFakeIPType  Steamworks::ESteamNetworkingFakeIPType::k_ESteamNetworkingFakeIPType_NotFake{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingFakeIPType  Steamworks::ESteamNetworkingFakeIPType::k_ESteamNetworkingFakeIPType_GlobalIPv4{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingFakeIPType  Steamworks::ESteamNetworkingFakeIPType::k_ESteamNetworkingFakeIPType_LocalIPv4{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingFakeIPType  Steamworks::ESteamNetworkingFakeIPType::k_ESteamNetworkingFakeIPType__Force32Bit{static_cast<int32_t>(0x7fffffff)};
