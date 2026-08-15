#pragma once
// IWYU pragma private; include "UnityEngine/RigidbodyType2D.hpp"
#include "UnityEngine/zzzz__RigidbodyType2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RigidbodyType2D::RigidbodyType2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RigidbodyType2D::RigidbodyType2D()   {
}
constexpr ::UnityEngine::RigidbodyType2D  UnityEngine::RigidbodyType2D::Dynamic{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RigidbodyType2D  UnityEngine::RigidbodyType2D::Kinematic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RigidbodyType2D  UnityEngine::RigidbodyType2D::Static{static_cast<int32_t>(0x2)};
