#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/LifecycleChangeType.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__LifecycleChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::LifecycleChangeType::LifecycleChangeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::LifecycleChangeType::LifecycleChangeType()   {
}
constexpr ::UnityEngine::AdaptivePerformance::LifecycleChangeType  UnityEngine::AdaptivePerformance::LifecycleChangeType::Created{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::LifecycleChangeType  UnityEngine::AdaptivePerformance::LifecycleChangeType::Destroyed{static_cast<int32_t>(0x1)};
