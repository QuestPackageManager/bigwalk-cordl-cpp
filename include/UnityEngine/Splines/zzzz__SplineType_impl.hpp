#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineType.hpp"
#include "UnityEngine/Splines/zzzz__SplineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineType::SplineType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineType::SplineType()   {
}
constexpr ::UnityEngine::Splines::SplineType  UnityEngine::Splines::SplineType::CatmullRom{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Splines::SplineType  UnityEngine::Splines::SplineType::Bezier{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Splines::SplineType  UnityEngine::Splines::SplineType::Linear{static_cast<uint8_t>(0x2u)};
