#pragma once
// IWYU pragma private; include "Steamworks/ESteamAPICallFailure.hpp"
#include "Steamworks/zzzz__ESteamAPICallFailure_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamAPICallFailure::ESteamAPICallFailure(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamAPICallFailure::ESteamAPICallFailure()   {
}
constexpr ::Steamworks::ESteamAPICallFailure  Steamworks::ESteamAPICallFailure::k_ESteamAPICallFailureNone{static_cast<int32_t>(0xffffffff)};
constexpr ::Steamworks::ESteamAPICallFailure  Steamworks::ESteamAPICallFailure::k_ESteamAPICallFailureSteamGone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamAPICallFailure  Steamworks::ESteamAPICallFailure::k_ESteamAPICallFailureNetworkFailure{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamAPICallFailure  Steamworks::ESteamAPICallFailure::k_ESteamAPICallFailureInvalidHandle{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamAPICallFailure  Steamworks::ESteamAPICallFailure::k_ESteamAPICallFailureMismatchedCallback{static_cast<int32_t>(0x3)};
