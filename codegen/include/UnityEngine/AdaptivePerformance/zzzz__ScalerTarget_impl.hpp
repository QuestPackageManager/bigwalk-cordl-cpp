#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ScalerTarget.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ScalerTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget::ScalerTarget(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget::ScalerTarget()   {
}
constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget  UnityEngine::AdaptivePerformance::ScalerTarget::CPU{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget  UnityEngine::AdaptivePerformance::ScalerTarget::GPU{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget  UnityEngine::AdaptivePerformance::ScalerTarget::FillRate{static_cast<int32_t>(0x4)};
