#pragma once
// IWYU pragma private; include "Steamworks/ESteamIPType.hpp"
#include "Steamworks/zzzz__ESteamIPType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamIPType::ESteamIPType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamIPType::ESteamIPType()   {
}
constexpr ::Steamworks::ESteamIPType  Steamworks::ESteamIPType::k_ESteamIPTypeIPv4{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamIPType  Steamworks::ESteamIPType::k_ESteamIPTypeIPv6{static_cast<int32_t>(0x1)};
