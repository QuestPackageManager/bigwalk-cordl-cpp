#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopVideoProvider.hpp"
#include "Steamworks/zzzz__EWorkshopVideoProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EWorkshopVideoProvider::EWorkshopVideoProvider(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EWorkshopVideoProvider::EWorkshopVideoProvider()   {
}
constexpr ::Steamworks::EWorkshopVideoProvider  Steamworks::EWorkshopVideoProvider::k_EWorkshopVideoProviderNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EWorkshopVideoProvider  Steamworks::EWorkshopVideoProvider::k_EWorkshopVideoProviderYoutube{static_cast<int32_t>(0x1)};
