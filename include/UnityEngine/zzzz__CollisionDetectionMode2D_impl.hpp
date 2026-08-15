#pragma once
// IWYU pragma private; include "UnityEngine/CollisionDetectionMode2D.hpp"
#include "UnityEngine/zzzz__CollisionDetectionMode2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionDetectionMode2D::CollisionDetectionMode2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionDetectionMode2D::CollisionDetectionMode2D()   {
}
constexpr ::UnityEngine::CollisionDetectionMode2D  UnityEngine::CollisionDetectionMode2D::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionDetectionMode2D  UnityEngine::CollisionDetectionMode2D::Discrete{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionDetectionMode2D  UnityEngine::CollisionDetectionMode2D::Continuous{static_cast<int32_t>(0x1)};
