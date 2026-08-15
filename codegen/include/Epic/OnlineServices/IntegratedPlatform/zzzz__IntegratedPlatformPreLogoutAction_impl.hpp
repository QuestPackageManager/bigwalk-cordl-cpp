#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformPreLogoutAction.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformPreLogoutAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction::IntegratedPlatformPreLogoutAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction::IntegratedPlatformPreLogoutAction()   {
}
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction::ProcessLogoutImmediately{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction::DeferLogout{static_cast<int32_t>(0x1)};
