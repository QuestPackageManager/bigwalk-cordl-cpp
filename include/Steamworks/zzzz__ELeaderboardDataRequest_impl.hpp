#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardDataRequest.hpp"
#include "Steamworks/zzzz__ELeaderboardDataRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELeaderboardDataRequest::ELeaderboardDataRequest(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELeaderboardDataRequest::ELeaderboardDataRequest()   {
}
constexpr ::Steamworks::ELeaderboardDataRequest  Steamworks::ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobal{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELeaderboardDataRequest  Steamworks::ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobalAroundUser{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELeaderboardDataRequest  Steamworks::ELeaderboardDataRequest::k_ELeaderboardDataRequestFriends{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ELeaderboardDataRequest  Steamworks::ELeaderboardDataRequest::k_ELeaderboardDataRequestUsers{static_cast<int32_t>(0x3)};
