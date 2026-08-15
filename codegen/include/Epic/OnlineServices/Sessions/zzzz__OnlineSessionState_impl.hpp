#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnlineSessionState.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState::OnlineSessionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState::OnlineSessionState()   {
}
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::NoSession{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Creating{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Pending{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Starting{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::InProgress{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Ending{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Ended{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::Sessions::OnlineSessionState  Epic::OnlineServices::Sessions::OnlineSessionState::Destroying{static_cast<int32_t>(0x7)};
