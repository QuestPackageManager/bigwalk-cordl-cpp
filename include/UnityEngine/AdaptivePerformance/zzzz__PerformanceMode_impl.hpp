#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceMode.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode::PerformanceMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode::PerformanceMode()   {
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::Standard{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::Optimize{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::CPU{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::GPU{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceMode  UnityEngine::AdaptivePerformance::PerformanceMode::Battery{static_cast<int32_t>(0x5)};
