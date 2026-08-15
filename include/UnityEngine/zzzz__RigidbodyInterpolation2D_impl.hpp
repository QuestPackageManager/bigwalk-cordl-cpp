#pragma once
// IWYU pragma private; include "UnityEngine/RigidbodyInterpolation2D.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RigidbodyInterpolation2D::RigidbodyInterpolation2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RigidbodyInterpolation2D::RigidbodyInterpolation2D()   {
}
constexpr ::UnityEngine::RigidbodyInterpolation2D  UnityEngine::RigidbodyInterpolation2D::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RigidbodyInterpolation2D  UnityEngine::RigidbodyInterpolation2D::Interpolate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RigidbodyInterpolation2D  UnityEngine::RigidbodyInterpolation2D::Extrapolate{static_cast<int32_t>(0x2)};
