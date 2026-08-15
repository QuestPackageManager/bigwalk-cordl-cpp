#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/RTCParticipantStatus.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCParticipantStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::RTCParticipantStatus::RTCParticipantStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::RTCParticipantStatus::RTCParticipantStatus()   {
}
constexpr ::Epic::OnlineServices::RTC::RTCParticipantStatus  Epic::OnlineServices::RTC::RTCParticipantStatus::Joined{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::RTC::RTCParticipantStatus  Epic::OnlineServices::RTC::RTCParticipantStatus::Left{static_cast<int32_t>(0x1)};
