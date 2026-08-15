#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/SanctionAppealReason.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason::SanctionAppealReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason::SanctionAppealReason()   {
}
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Epic::OnlineServices::Sanctions::SanctionAppealReason::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Epic::OnlineServices::Sanctions::SanctionAppealReason::IncorrectSanction{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Epic::OnlineServices::Sanctions::SanctionAppealReason::CompromisedAccount{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Epic::OnlineServices::Sanctions::SanctionAppealReason::UnfairPunishment{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Epic::OnlineServices::Sanctions::SanctionAppealReason::AppealForForgiveness{static_cast<int32_t>(0x4)};
