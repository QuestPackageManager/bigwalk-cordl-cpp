#pragma once
// IWYU pragma private; include "Rewired/MouseXYAxisMode.hpp"
#include "Rewired/zzzz__MouseXYAxisMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::MouseXYAxisMode::MouseXYAxisMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::MouseXYAxisMode::MouseXYAxisMode()   {
}
constexpr ::Rewired::MouseXYAxisMode  Rewired::MouseXYAxisMode::MouseAxis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::MouseXYAxisMode  Rewired::MouseXYAxisMode::DigitalAxis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::MouseXYAxisMode  Rewired::MouseXYAxisMode::ScreenPositionDelta{static_cast<int32_t>(0x3)};
constexpr ::Rewired::MouseXYAxisMode  Rewired::MouseXYAxisMode::Speed{static_cast<int32_t>(0x4)};
