#pragma once
// IWYU pragma private; include "Rewired/BoolOption.hpp"
#include "Rewired/zzzz__BoolOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::BoolOption::BoolOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::BoolOption::BoolOption()   {
}
constexpr ::Rewired::BoolOption  Rewired::BoolOption::Default{static_cast<int32_t>(0x0)};
constexpr ::Rewired::BoolOption  Rewired::BoolOption::True{static_cast<int32_t>(0x1)};
constexpr ::Rewired::BoolOption  Rewired::BoolOption::False{static_cast<int32_t>(0x2)};
