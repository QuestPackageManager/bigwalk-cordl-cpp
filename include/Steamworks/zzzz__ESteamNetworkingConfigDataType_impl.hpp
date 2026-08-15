#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigDataType.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigDataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingConfigDataType::ESteamNetworkingConfigDataType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingConfigDataType::ESteamNetworkingConfigDataType()   {
}
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfig_Int32{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfig_Int64{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfig_Float{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfig_String{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfig_Ptr{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::ESteamNetworkingConfigDataType  Steamworks::ESteamNetworkingConfigDataType::k_ESteamNetworkingConfigDataType__Force32Bit{static_cast<int32_t>(0x7fffffff)};
