#pragma once
// IWYU pragma private; include "GlobalNamespace/ScatterFrequencyMultiplierData.hpp"
#include "GlobalNamespace/zzzz__ScatterFrequencyMultiplierData_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "ScatterContainer", ty: "::UnityW<::GlobalNamespace::AudioScatterContainer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Curve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LPMin", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ScatterFrequencyMultiplierData::ScatterFrequencyMultiplierData(::UnityW<::GlobalNamespace::AudioScatterContainer>  ScatterContainer, ::UnityEngine::AnimationCurve*  Curve, float_t  LPMin) noexcept  {
this->ScatterContainer = ScatterContainer;
this->Curve = Curve;
this->LPMin = LPMin;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScatterFrequencyMultiplierData::ScatterFrequencyMultiplierData()   {
}
