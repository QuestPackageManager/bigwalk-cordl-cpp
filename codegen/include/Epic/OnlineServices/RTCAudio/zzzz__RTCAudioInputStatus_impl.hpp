#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioInputStatus.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioInputStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::RTCAudioInputStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::RTCAudioInputStatus()   {
}
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus  Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::Idle{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus  Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::Recording{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus  Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::RecordingSilent{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus  Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::RecordingDisconnected{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus  Epic::OnlineServices::RTCAudio::RTCAudioInputStatus::Failed{static_cast<int32_t>(0x4)};
