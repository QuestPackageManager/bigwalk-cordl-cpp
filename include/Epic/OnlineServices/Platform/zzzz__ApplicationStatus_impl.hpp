#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ApplicationStatus.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ApplicationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus::ApplicationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus::ApplicationStatus()   {
}
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus  Epic::OnlineServices::Platform::ApplicationStatus::BackgroundConstrained{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus  Epic::OnlineServices::Platform::ApplicationStatus::BackgroundUnconstrained{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus  Epic::OnlineServices::Platform::ApplicationStatus::BackgroundSuspended{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Platform::ApplicationStatus  Epic::OnlineServices::Platform::ApplicationStatus::Foreground{static_cast<int32_t>(0x3)};
