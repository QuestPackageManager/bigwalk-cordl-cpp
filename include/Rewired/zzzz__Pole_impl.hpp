#pragma once
// IWYU pragma private; include "Rewired/Pole.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Pole::Pole(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Pole::Pole()   {
}
constexpr ::Rewired::Pole  Rewired::Pole::Positive{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Pole  Rewired::Pole::Negative{static_cast<int32_t>(0x1)};
