#pragma once
// IWYU pragma private; include "UnityEngine/RigidbodySleepMode2D.hpp"
#include "UnityEngine/zzzz__RigidbodySleepMode2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RigidbodySleepMode2D::RigidbodySleepMode2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RigidbodySleepMode2D::RigidbodySleepMode2D()   {
}
constexpr ::UnityEngine::RigidbodySleepMode2D  UnityEngine::RigidbodySleepMode2D::NeverSleep{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RigidbodySleepMode2D  UnityEngine::RigidbodySleepMode2D::StartAwake{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RigidbodySleepMode2D  UnityEngine::RigidbodySleepMode2D::StartAsleep{static_cast<int32_t>(0x2)};
