#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WrappedPlatformFlags.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::WrappedPlatformFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::WrappedPlatformFlags()   {
}
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::None{static_cast<int32_t>(0x0)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::LoadingInEditor{static_cast<int32_t>(0x1)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::DisableOverlay{static_cast<int32_t>(0x2)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::DisableSocialOverlay{static_cast<int32_t>(0x4)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::Reserved1{static_cast<int32_t>(0x8)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::WindowsEnableOverlayD3D9{static_cast<int32_t>(0x10)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::WindowsEnableOverlayD3D10{static_cast<int32_t>(0x20)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::WindowsEnableOverlayOpengl{static_cast<int32_t>(0x40)};
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags::ConsoleEnableOverlayAutomaticUnloading{static_cast<int32_t>(0x80)};
