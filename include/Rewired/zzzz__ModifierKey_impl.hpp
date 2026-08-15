#pragma once
// IWYU pragma private; include "Rewired/ModifierKey.hpp"
#include "Rewired/zzzz__ModifierKey_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ModifierKey::ModifierKey(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ModifierKey::ModifierKey()   {
}
constexpr ::Rewired::ModifierKey  Rewired::ModifierKey::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ModifierKey  Rewired::ModifierKey::Control{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ModifierKey  Rewired::ModifierKey::Alt{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ModifierKey  Rewired::ModifierKey::Shift{static_cast<int32_t>(0x3)};
constexpr ::Rewired::ModifierKey  Rewired::ModifierKey::Command{static_cast<int32_t>(0x4)};
