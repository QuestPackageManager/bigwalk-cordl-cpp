#pragma once
// IWYU pragma private; include "UnityEngine/Splines/DistanceToInterpolation.hpp"
#include "UnityEngine/Splines/zzzz__DistanceToInterpolation_def.hpp"
inline void UnityEngine::Splines::DistanceToInterpolation::setStaticF_Invalid(::UnityEngine::Splines::DistanceToInterpolation  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::DistanceToInterpolation, "Invalid", ::UnityEngine::Splines::DistanceToInterpolation>(std::forward<::UnityEngine::Splines::DistanceToInterpolation>(value));
}
inline ::UnityEngine::Splines::DistanceToInterpolation UnityEngine::Splines::DistanceToInterpolation::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::DistanceToInterpolation, "Invalid", ::UnityEngine::Splines::DistanceToInterpolation>();
}
// Ctor Parameters [CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "T", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::DistanceToInterpolation::DistanceToInterpolation(float_t  Distance, float_t  T) noexcept  {
this->Distance = Distance;
this->T = T;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::DistanceToInterpolation::DistanceToInterpolation()   {
}
