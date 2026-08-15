#pragma once
// IWYU pragma private; include "GlobalNamespace/PropRegistry.hpp"
#include "GlobalNamespace/zzzz__PropRegistry_def.hpp"
#include "GlobalNamespace/zzzz__AnimMoment_def.hpp"
// Ctor Parameters [CppParam { name: "textStrokeAnimation", ty: "::UnityW<::GlobalNamespace::AnimMoment>", modifiers: "", def_value: Some("{}") }, CppParam { name: "textEraseAnimation", ty: "::UnityW<::GlobalNamespace::AnimMoment>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropRegistry::PropRegistry(::UnityW<::GlobalNamespace::AnimMoment>  textStrokeAnimation, ::UnityW<::GlobalNamespace::AnimMoment>  textEraseAnimation) noexcept  {
this->textStrokeAnimation = textStrokeAnimation;
this->textEraseAnimation = textEraseAnimation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropRegistry::PropRegistry()   {
}
