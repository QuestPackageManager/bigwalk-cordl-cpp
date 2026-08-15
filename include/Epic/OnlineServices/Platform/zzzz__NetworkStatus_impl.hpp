#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/NetworkStatus.hpp"
#include "Epic/OnlineServices/Platform/zzzz__NetworkStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::NetworkStatus::NetworkStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::NetworkStatus::NetworkStatus()   {
}
constexpr ::Epic::OnlineServices::Platform::NetworkStatus  Epic::OnlineServices::Platform::NetworkStatus::Disabled{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Platform::NetworkStatus  Epic::OnlineServices::Platform::NetworkStatus::Offline{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Platform::NetworkStatus  Epic::OnlineServices::Platform::NetworkStatus::Online{static_cast<int32_t>(0x2)};
