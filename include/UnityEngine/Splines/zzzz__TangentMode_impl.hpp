#pragma once
// IWYU pragma private; include "UnityEngine/Splines/TangentMode.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::TangentMode::TangentMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::TangentMode::TangentMode()   {
}
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::TangentMode::AutoSmooth{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::TangentMode::Linear{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::TangentMode::Mirrored{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::TangentMode::Continuous{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Splines::TangentMode  UnityEngine::Splines::TangentMode::Broken{static_cast<int32_t>(0x4)};
