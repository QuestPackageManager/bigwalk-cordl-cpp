#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformManagementFlags.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::IntegratedPlatformManagementFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::IntegratedPlatformManagementFlags()   {
}
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::Disabled{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::LibraryManagedByApplication{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::LibraryManagedBySDK{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::DisablePresenceMirroring{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::DisableSDKManagedSessions{static_cast<int32_t>(0x10)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::PreferEOSIdentity{static_cast<int32_t>(0x20)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::PreferIntegratedIdentity{static_cast<int32_t>(0x40)};
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags::ApplicationManagedIdentityLogin{static_cast<int32_t>(0x80)};
