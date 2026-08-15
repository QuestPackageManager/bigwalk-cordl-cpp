#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageType.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::AntiCheatCommonPlayerTakeDamageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::AntiCheatCommonPlayerTakeDamageType()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::PointDamage{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::RadialDamage{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType::DamageOverTime{static_cast<int32_t>(0x3)};
