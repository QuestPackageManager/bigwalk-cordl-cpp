#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/Status.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::Status::Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::Status::Status()   {
}
constexpr ::Epic::OnlineServices::Presence::Status  Epic::OnlineServices::Presence::Status::Offline{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Presence::Status  Epic::OnlineServices::Presence::Status::Online{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Presence::Status  Epic::OnlineServices::Presence::Status::Away{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Presence::Status  Epic::OnlineServices::Presence::Status::ExtendedAway{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Presence::Status  Epic::OnlineServices::Presence::Status::DoNotDisturb{static_cast<int32_t>(0x4)};
