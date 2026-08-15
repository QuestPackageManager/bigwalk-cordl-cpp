#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/RTCDataStatus.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__RTCDataStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCData::RTCDataStatus::RTCDataStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::RTCDataStatus::RTCDataStatus()   {
}
constexpr ::Epic::OnlineServices::RTCData::RTCDataStatus  Epic::OnlineServices::RTCData::RTCDataStatus::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::RTCData::RTCDataStatus  Epic::OnlineServices::RTCData::RTCDataStatus::Enabled{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::RTCData::RTCDataStatus  Epic::OnlineServices::RTCData::RTCDataStatus::Disabled{static_cast<int32_t>(0x2)};
