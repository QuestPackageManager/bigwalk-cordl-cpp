#pragma once
// IWYU pragma private; include "Rewired/MouseOtherAxisMode.hpp"
#include "Rewired/zzzz__MouseOtherAxisMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::MouseOtherAxisMode::MouseOtherAxisMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::MouseOtherAxisMode::MouseOtherAxisMode()   {
}
constexpr ::Rewired::MouseOtherAxisMode  Rewired::MouseOtherAxisMode::MouseAxis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::MouseOtherAxisMode  Rewired::MouseOtherAxisMode::DigitalAxis{static_cast<int32_t>(0x1)};
