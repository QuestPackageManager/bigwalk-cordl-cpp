#pragma once
// IWYU pragma private; include "Steamworks/EP2PSend.hpp"
#include "Steamworks/zzzz__EP2PSend_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EP2PSend::EP2PSend(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EP2PSend::EP2PSend()   {
}
constexpr ::Steamworks::EP2PSend  Steamworks::EP2PSend::k_EP2PSendUnreliable{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EP2PSend  Steamworks::EP2PSend::k_EP2PSendUnreliableNoDelay{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EP2PSend  Steamworks::EP2PSend::k_EP2PSendReliable{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EP2PSend  Steamworks::EP2PSend::k_EP2PSendReliableWithBuffering{static_cast<int32_t>(0x3)};
