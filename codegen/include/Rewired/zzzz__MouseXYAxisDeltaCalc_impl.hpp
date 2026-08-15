#pragma once
// IWYU pragma private; include "Rewired/MouseXYAxisDeltaCalc.hpp"
#include "Rewired/zzzz__MouseXYAxisDeltaCalc_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::MouseXYAxisDeltaCalc::MouseXYAxisDeltaCalc(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::MouseXYAxisDeltaCalc::MouseXYAxisDeltaCalc()   {
}
constexpr ::Rewired::MouseXYAxisDeltaCalc  Rewired::MouseXYAxisDeltaCalc::Normal{static_cast<int32_t>(0x0)};
constexpr ::Rewired::MouseXYAxisDeltaCalc  Rewired::MouseXYAxisDeltaCalc::ScreenWidth{static_cast<int32_t>(0x1)};
constexpr ::Rewired::MouseXYAxisDeltaCalc  Rewired::MouseXYAxisDeltaCalc::ScreenHeight{static_cast<int32_t>(0x2)};
