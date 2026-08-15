#pragma once
// IWYU pragma private; include "Rewired/Config/ThrottleCalibrationMode.hpp"
#include "Rewired/Config/zzzz__ThrottleCalibrationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::ThrottleCalibrationMode::ThrottleCalibrationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::ThrottleCalibrationMode::ThrottleCalibrationMode()   {
}
constexpr ::Rewired::Config::ThrottleCalibrationMode  Rewired::Config::ThrottleCalibrationMode::ZeroToOne{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::ThrottleCalibrationMode  Rewired::Config::ThrottleCalibrationMode::NegativeOneToOne{static_cast<int32_t>(0x1)};
