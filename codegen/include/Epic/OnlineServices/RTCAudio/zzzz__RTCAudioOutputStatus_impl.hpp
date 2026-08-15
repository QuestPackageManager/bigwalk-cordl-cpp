#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioOutputStatus.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioOutputStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus::RTCAudioOutputStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus::RTCAudioOutputStatus()   {
}
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus  Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus::Idle{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus  Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus::Playing{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus  Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus::Failed{static_cast<int32_t>(0x2)};
