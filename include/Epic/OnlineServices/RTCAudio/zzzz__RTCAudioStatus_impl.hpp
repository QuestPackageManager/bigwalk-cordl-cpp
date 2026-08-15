#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioStatus.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus::RTCAudioStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus::RTCAudioStatus()   {
}
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  Epic::OnlineServices::RTCAudio::RTCAudioStatus::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  Epic::OnlineServices::RTCAudio::RTCAudioStatus::Enabled{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  Epic::OnlineServices::RTCAudio::RTCAudioStatus::Disabled{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  Epic::OnlineServices::RTCAudio::RTCAudioStatus::AdminDisabled{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  Epic::OnlineServices::RTCAudio::RTCAudioStatus::NotListeningDisabled{static_cast<int32_t>(0x4)};
