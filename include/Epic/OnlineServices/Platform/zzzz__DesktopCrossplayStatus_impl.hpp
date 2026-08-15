#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatus.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus::DesktopCrossplayStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus::DesktopCrossplayStatus()   {
}
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::Ok{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::ApplicationNotBootstrapped{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::ServiceNotInstalled{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::ServiceStartFailed{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::ServiceNotRunning{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::OverlayDisabled{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::OverlayNotInstalled{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::OverlayTrustCheckFailed{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Epic::OnlineServices::Platform::DesktopCrossplayStatus::OverlayLoadFailed{static_cast<int32_t>(0x8)};
