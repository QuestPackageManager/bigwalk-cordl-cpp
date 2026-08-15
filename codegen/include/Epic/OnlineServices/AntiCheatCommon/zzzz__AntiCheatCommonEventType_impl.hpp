#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventType.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType::AntiCheatCommonEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType::AntiCheatCommonEventType()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType::GameEvent{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType::PlayerEvent{static_cast<int32_t>(0x2)};
