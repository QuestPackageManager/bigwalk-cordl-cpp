#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageResult.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::AntiCheatCommonPlayerTakeDamageResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::AntiCheatCommonPlayerTakeDamageResult()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::DownedDeprecated{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::EliminatedDeprecated{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::NormalToDowned{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::NormalToEliminated{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult::DownedToEliminated{static_cast<int32_t>(0x5)};
