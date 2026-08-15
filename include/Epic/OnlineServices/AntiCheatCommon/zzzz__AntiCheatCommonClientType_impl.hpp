#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType::AntiCheatCommonClientType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType::AntiCheatCommonClientType()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType::ProtectedClient{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType::UnprotectedClient{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType::AIBot{static_cast<int32_t>(0x2)};
