#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAuthStatus.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAuthStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus::AntiCheatCommonClientAuthStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus::AntiCheatCommonClientAuthStatus()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus::LocalAuthComplete{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus::RemoteAuthComplete{static_cast<int32_t>(0x2)};
