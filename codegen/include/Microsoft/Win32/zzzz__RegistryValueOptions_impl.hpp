#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryValueOptions.hpp"
#include "Microsoft/Win32/zzzz__RegistryValueOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Microsoft::Win32::RegistryValueOptions::RegistryValueOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryValueOptions::RegistryValueOptions()   {
}
constexpr ::Microsoft::Win32::RegistryValueOptions  Microsoft::Win32::RegistryValueOptions::None{static_cast<int32_t>(0x0)};
constexpr ::Microsoft::Win32::RegistryValueOptions  Microsoft::Win32::RegistryValueOptions::DoNotExpandEnvironmentNames{static_cast<int32_t>(0x1)};
