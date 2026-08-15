#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBottleneck.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck::PerformanceBottleneck(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck::PerformanceBottleneck()   {
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  UnityEngine::AdaptivePerformance::PerformanceBottleneck::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  UnityEngine::AdaptivePerformance::PerformanceBottleneck::CPU{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  UnityEngine::AdaptivePerformance::PerformanceBottleneck::GPU{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  UnityEngine::AdaptivePerformance::PerformanceBottleneck::TargetFrameRate{static_cast<int32_t>(0x3)};
