#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineModification.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineModification::SplineModification(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineModification::SplineModification()   {
}
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::ClosedModified{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::KnotModified{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::KnotInserted{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::KnotRemoved{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Splines::SplineModification  UnityEngine::Splines::SplineModification::KnotReordered{static_cast<int32_t>(0x5)};
