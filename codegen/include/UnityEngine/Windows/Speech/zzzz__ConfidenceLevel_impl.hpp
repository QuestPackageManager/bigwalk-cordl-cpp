#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/ConfidenceLevel.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel::ConfidenceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel::ConfidenceLevel()   {
}
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel  UnityEngine::Windows::Speech::ConfidenceLevel::High{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel  UnityEngine::Windows::Speech::ConfidenceLevel::Medium{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel  UnityEngine::Windows::Speech::ConfidenceLevel::Low{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Windows::Speech::ConfidenceLevel  UnityEngine::Windows::Speech::ConfidenceLevel::Rejected{static_cast<int32_t>(0x3)};
