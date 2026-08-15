#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryView.hpp"
#include "Microsoft/Win32/zzzz__RegistryView_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Microsoft::Win32::RegistryView::RegistryView(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryView::RegistryView()   {
}
constexpr ::Microsoft::Win32::RegistryView  Microsoft::Win32::RegistryView::Default{static_cast<int32_t>(0x0)};
constexpr ::Microsoft::Win32::RegistryView  Microsoft::Win32::RegistryView::Registry64{static_cast<int32_t>(0x100)};
constexpr ::Microsoft::Win32::RegistryView  Microsoft::Win32::RegistryView::Registry32{static_cast<int32_t>(0x200)};
