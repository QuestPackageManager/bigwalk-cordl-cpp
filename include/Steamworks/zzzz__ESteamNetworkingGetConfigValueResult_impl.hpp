#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingGetConfigValueResult.hpp"
#include "Steamworks/zzzz__ESteamNetworkingGetConfigValueResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult::ESteamNetworkingGetConfigValueResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult::ESteamNetworkingGetConfigValueResult()   {
}
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValue_BadValue{static_cast<int32_t>(0xffffffff)};
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValue_BadScopeObj{static_cast<int32_t>(0xfffffffe)};
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValue_BufferTooSmall{static_cast<int32_t>(0xfffffffd)};
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValue_OK{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValue_OKInherited{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingGetConfigValueResult  Steamworks::ESteamNetworkingGetConfigValueResult::k_ESteamNetworkingGetConfigValueResult__Force32Bit{static_cast<int32_t>(0x7fffffff)};
