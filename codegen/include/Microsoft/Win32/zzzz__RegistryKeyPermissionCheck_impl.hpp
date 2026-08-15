#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryKeyPermissionCheck.hpp"
#include "Microsoft/Win32/zzzz__RegistryKeyPermissionCheck_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck::RegistryKeyPermissionCheck(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck::RegistryKeyPermissionCheck()   {
}
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck  Microsoft::Win32::RegistryKeyPermissionCheck::Default{static_cast<int32_t>(0x0)};
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck  Microsoft::Win32::RegistryKeyPermissionCheck::ReadSubTree{static_cast<int32_t>(0x1)};
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck  Microsoft::Win32::RegistryKeyPermissionCheck::ReadWriteSubTree{static_cast<int32_t>(0x2)};
