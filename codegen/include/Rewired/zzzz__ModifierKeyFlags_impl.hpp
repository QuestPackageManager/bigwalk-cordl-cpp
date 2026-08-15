#pragma once
// IWYU pragma private; include "Rewired/ModifierKeyFlags.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ModifierKeyFlags::ModifierKeyFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ModifierKeyFlags::ModifierKeyFlags()   {
}
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::LeftControl{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::RightControl{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::LeftAlt{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::RightAlt{static_cast<int32_t>(0x8)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::LeftShift{static_cast<int32_t>(0x10)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::RightShift{static_cast<int32_t>(0x20)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::LeftCommand{static_cast<int32_t>(0x40)};
constexpr ::Rewired::ModifierKeyFlags  Rewired::ModifierKeyFlags::RightCommand{static_cast<int32_t>(0x80)};
