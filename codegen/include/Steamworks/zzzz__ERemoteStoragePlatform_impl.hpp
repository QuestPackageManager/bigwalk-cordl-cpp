#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStoragePlatform.hpp"
#include "Steamworks/zzzz__ERemoteStoragePlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ERemoteStoragePlatform::ERemoteStoragePlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ERemoteStoragePlatform::ERemoteStoragePlatform()   {
}
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformWindows{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformOSX{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformPS3{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformLinux{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformSwitch{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformAndroid{static_cast<int32_t>(0x20)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformIOS{static_cast<int32_t>(0x40)};
constexpr ::Steamworks::ERemoteStoragePlatform  Steamworks::ERemoteStoragePlatform::k_ERemoteStoragePlatformAll{static_cast<int32_t>(0xffffffff)};
