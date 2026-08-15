#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageSource.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::AntiCheatCommonPlayerTakeDamageSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::AntiCheatCommonPlayerTakeDamageSource()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::Player{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::NonPlayerCharacter{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource::World{static_cast<int32_t>(0x3)};
