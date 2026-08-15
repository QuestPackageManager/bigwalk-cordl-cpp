#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceControlMode.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode::PerformanceControlMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode::PerformanceControlMode()   {
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode  UnityEngine::AdaptivePerformance::PerformanceControlMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode  UnityEngine::AdaptivePerformance::PerformanceControlMode::Manual{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode  UnityEngine::AdaptivePerformance::PerformanceControlMode::System{static_cast<int32_t>(0x2)};
