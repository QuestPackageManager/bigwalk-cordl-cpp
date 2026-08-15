#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/WarningLevel.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__WarningLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::WarningLevel::WarningLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::WarningLevel::WarningLevel()   {
}
constexpr ::UnityEngine::AdaptivePerformance::WarningLevel  UnityEngine::AdaptivePerformance::WarningLevel::NoWarning{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::WarningLevel  UnityEngine::AdaptivePerformance::WarningLevel::ThrottlingImminent{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::WarningLevel  UnityEngine::AdaptivePerformance::WarningLevel::Throttling{static_cast<int32_t>(0x2)};
