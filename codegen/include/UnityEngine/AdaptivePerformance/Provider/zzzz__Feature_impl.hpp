#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/Feature.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature::Feature(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature::Feature()   {
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::WarningLevel{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::TemperatureLevel{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::TemperatureTrend{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::CpuPerformanceLevel{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::GpuPerformanceLevel{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::PerformanceLevelControl{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::GpuFrameTime{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::CpuFrameTime{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::OverallFrameTime{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::CpuPerformanceBoost{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::GpuPerformanceBoost{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::ClusterInfo{static_cast<int32_t>(0x800)};
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature  UnityEngine::AdaptivePerformance::Provider::Feature::PerformanceMode{static_cast<int32_t>(0x1000)};
