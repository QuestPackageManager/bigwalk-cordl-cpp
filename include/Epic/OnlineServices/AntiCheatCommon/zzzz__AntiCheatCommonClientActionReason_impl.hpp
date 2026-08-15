#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientActionReason.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientActionReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::AntiCheatCommonClientActionReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::AntiCheatCommonClientActionReason()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::InternalError{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::InvalidMessage{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::AuthenticationFailed{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::NullClient{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::HeartbeatTimeout{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::ClientViolation{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::BackendViolation{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::TemporaryCooldown{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::TemporaryBanned{static_cast<int32_t>(0x9)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason::PermanentBanned{static_cast<int32_t>(0xa)};
