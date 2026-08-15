#pragma once
// IWYU pragma private; include "Steamworks/EDenyReason.hpp"
#include "Steamworks/zzzz__EDenyReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EDenyReason::EDenyReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EDenyReason::EDenyReason()   {
}
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyInvalidVersion{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyGeneric{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyNotLoggedOn{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyNoLicense{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyCheater{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyLoggedInElseWhere{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyUnknownText{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyIncompatibleAnticheat{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyMemoryCorruption{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenyIncompatibleSoftware{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenySteamConnectionLost{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenySteamConnectionError{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenySteamResponseTimedOut{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenySteamValidationStalled{static_cast<int32_t>(0xe)};
constexpr ::Steamworks::EDenyReason  Steamworks::EDenyReason::k_EDenySteamOwnerLeftGuestUser{static_cast<int32_t>(0xf)};
