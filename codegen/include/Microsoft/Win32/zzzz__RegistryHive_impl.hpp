#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryHive.hpp"
#include "Microsoft/Win32/zzzz__RegistryHive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Microsoft::Win32::RegistryHive::RegistryHive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryHive::RegistryHive()   {
}
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::ClassesRoot{static_cast<int32_t>(0x80000000)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::CurrentUser{static_cast<int32_t>(0x80000001)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::LocalMachine{static_cast<int32_t>(0x80000002)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::Users{static_cast<int32_t>(0x80000003)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::PerformanceData{static_cast<int32_t>(0x80000004)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::CurrentConfig{static_cast<int32_t>(0x80000005)};
constexpr ::Microsoft::Win32::RegistryHive  Microsoft::Win32::RegistryHive::DynData{static_cast<int32_t>(0x80000006)};
