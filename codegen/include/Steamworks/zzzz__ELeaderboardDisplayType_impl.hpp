#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardDisplayType.hpp"
#include "Steamworks/zzzz__ELeaderboardDisplayType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELeaderboardDisplayType::ELeaderboardDisplayType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELeaderboardDisplayType::ELeaderboardDisplayType()   {
}
constexpr ::Steamworks::ELeaderboardDisplayType  Steamworks::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELeaderboardDisplayType  Steamworks::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeNumeric{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELeaderboardDisplayType  Steamworks::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeTimeSeconds{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ELeaderboardDisplayType  Steamworks::ELeaderboardDisplayType::k_ELeaderboardDisplayTypeTimeMilliSeconds{static_cast<int32_t>(0x3)};
