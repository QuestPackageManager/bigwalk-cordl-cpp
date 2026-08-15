#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/StateAction.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdaptivePerformance::StateAction::StateAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::StateAction::StateAction()   {
}
constexpr ::UnityEngine::AdaptivePerformance::StateAction  UnityEngine::AdaptivePerformance::StateAction::Stale{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdaptivePerformance::StateAction  UnityEngine::AdaptivePerformance::StateAction::Increase{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdaptivePerformance::StateAction  UnityEngine::AdaptivePerformance::StateAction::Decrease{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdaptivePerformance::StateAction  UnityEngine::AdaptivePerformance::StateAction::FastDecrease{static_cast<int32_t>(0x3)};
