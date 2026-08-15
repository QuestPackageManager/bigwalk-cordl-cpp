#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/KWSPermissionStatus.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::KWSPermissionStatus::KWSPermissionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::KWSPermissionStatus::KWSPermissionStatus()   {
}
constexpr ::Epic::OnlineServices::KWS::KWSPermissionStatus  Epic::OnlineServices::KWS::KWSPermissionStatus::Granted{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::KWS::KWSPermissionStatus  Epic::OnlineServices::KWS::KWSPermissionStatus::Rejected{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::KWS::KWSPermissionStatus  Epic::OnlineServices::KWS::KWSPermissionStatus::Pending{static_cast<int32_t>(0x2)};
