#pragma once
// IWYU pragma private; include "Steamworks/ESteamPartyBeaconLocationType.hpp"
#include "Steamworks/zzzz__ESteamPartyBeaconLocationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamPartyBeaconLocationType::ESteamPartyBeaconLocationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamPartyBeaconLocationType::ESteamPartyBeaconLocationType()   {
}
constexpr ::Steamworks::ESteamPartyBeaconLocationType  Steamworks::ESteamPartyBeaconLocationType::k_ESteamPartyBeaconLocationType_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamPartyBeaconLocationType  Steamworks::ESteamPartyBeaconLocationType::k_ESteamPartyBeaconLocationType_ChatGroup{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamPartyBeaconLocationType  Steamworks::ESteamPartyBeaconLocationType::k_ESteamPartyBeaconLocationType_Max{static_cast<int32_t>(0x2)};
