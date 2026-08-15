#pragma once
// IWYU pragma private; include "Steamworks/EOverlayToStoreFlag.hpp"
#include "Steamworks/zzzz__EOverlayToStoreFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EOverlayToStoreFlag::EOverlayToStoreFlag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EOverlayToStoreFlag::EOverlayToStoreFlag()   {
}
constexpr ::Steamworks::EOverlayToStoreFlag  Steamworks::EOverlayToStoreFlag::k_EOverlayToStoreFlag_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EOverlayToStoreFlag  Steamworks::EOverlayToStoreFlag::k_EOverlayToStoreFlag_AddToCart{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EOverlayToStoreFlag  Steamworks::EOverlayToStoreFlag::k_EOverlayToStoreFlag_AddToCartAndShow{static_cast<int32_t>(0x2)};
