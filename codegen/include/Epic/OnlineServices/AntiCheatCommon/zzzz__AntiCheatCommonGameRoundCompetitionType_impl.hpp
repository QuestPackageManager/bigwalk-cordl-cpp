#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonGameRoundCompetitionType.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonGameRoundCompetitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::AntiCheatCommonGameRoundCompetitionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::AntiCheatCommonGameRoundCompetitionType()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::Casual{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::Ranked{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType::Competitive{static_cast<int32_t>(0x3)};
