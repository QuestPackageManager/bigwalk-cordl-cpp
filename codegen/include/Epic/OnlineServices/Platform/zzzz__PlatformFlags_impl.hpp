#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/PlatformFlags.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::PlatformFlags::PlatformFlags(uint64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::PlatformFlags::PlatformFlags()   {
}
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::None{static_cast<uint64_t>(0x0u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::LoadingInEditor{static_cast<uint64_t>(0x1u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::DisableOverlay{static_cast<uint64_t>(0x2u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::DisableSocialOverlay{static_cast<uint64_t>(0x4u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::Reserved1{static_cast<uint64_t>(0x8u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::WindowsEnableOverlayD3D9{static_cast<uint64_t>(0x10u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::WindowsEnableOverlayD3D10{static_cast<uint64_t>(0x20u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::WindowsEnableOverlayOpengl{static_cast<uint64_t>(0x40u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::ConsoleEnableOverlayAutomaticUnloading{static_cast<uint64_t>(0x80u)};
constexpr ::Epic::OnlineServices::Platform::PlatformFlags  Epic::OnlineServices::Platform::PlatformFlags::EnableOverlayDebugLogging{static_cast<uint64_t>(0x100u)};
