#pragma once
// IWYU pragma private; include "Steamworks/EChatSteamIDInstanceFlags.hpp"
#include "Steamworks/zzzz__EChatSteamIDInstanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EChatSteamIDInstanceFlags::EChatSteamIDInstanceFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EChatSteamIDInstanceFlags::EChatSteamIDInstanceFlags()   {
}
constexpr ::Steamworks::EChatSteamIDInstanceFlags  Steamworks::EChatSteamIDInstanceFlags::k_EChatAccountInstanceMask{static_cast<int32_t>(0xfff)};
constexpr ::Steamworks::EChatSteamIDInstanceFlags  Steamworks::EChatSteamIDInstanceFlags::k_EChatInstanceFlagClan{static_cast<int32_t>(0x80000)};
constexpr ::Steamworks::EChatSteamIDInstanceFlags  Steamworks::EChatSteamIDInstanceFlags::k_EChatInstanceFlagLobby{static_cast<int32_t>(0x40000)};
constexpr ::Steamworks::EChatSteamIDInstanceFlags  Steamworks::EChatSteamIDInstanceFlags::k_EChatInstanceFlagMMSLobby{static_cast<int32_t>(0x20000)};
