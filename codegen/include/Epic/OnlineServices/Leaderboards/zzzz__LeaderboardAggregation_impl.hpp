#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardAggregation.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation::LeaderboardAggregation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation::LeaderboardAggregation()   {
}
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Epic::OnlineServices::Leaderboards::LeaderboardAggregation::Min{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Epic::OnlineServices::Leaderboards::LeaderboardAggregation::Max{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Epic::OnlineServices::Leaderboards::LeaderboardAggregation::Sum{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Epic::OnlineServices::Leaderboards::LeaderboardAggregation::Latest{static_cast<int32_t>(0x3)};
