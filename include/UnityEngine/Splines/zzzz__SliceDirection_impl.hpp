#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SliceDirection.hpp"
#include "UnityEngine/Splines/zzzz__SliceDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SliceDirection::SliceDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SliceDirection::SliceDirection()   {
}
constexpr ::UnityEngine::Splines::SliceDirection  UnityEngine::Splines::SliceDirection::Forward{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Splines::SliceDirection  UnityEngine::Splines::SliceDirection::Backward{static_cast<int32_t>(0x1)};
