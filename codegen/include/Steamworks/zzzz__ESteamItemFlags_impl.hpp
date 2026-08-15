#pragma once
// IWYU pragma private; include "Steamworks/ESteamItemFlags.hpp"
#include "Steamworks/zzzz__ESteamItemFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamItemFlags::ESteamItemFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamItemFlags::ESteamItemFlags()   {
}
constexpr ::Steamworks::ESteamItemFlags  Steamworks::ESteamItemFlags::k_ESteamItemNoTrade{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamItemFlags  Steamworks::ESteamItemFlags::k_ESteamItemRemoved{static_cast<int32_t>(0x100)};
constexpr ::Steamworks::ESteamItemFlags  Steamworks::ESteamItemFlags::k_ESteamItemConsumed{static_cast<int32_t>(0x200)};
