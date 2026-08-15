#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdMapReference.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "GlobalNamespace/zzzz__GourdMapReference_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "saveablePropName", ty: "::GlobalNamespace::SaveablePropName", modifiers: "", def_value: Some("{}") }, CppParam { name: "landmark", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flagAnchor", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GourdMapReference::GourdMapReference(::GlobalNamespace::SaveablePropName  saveablePropName, ::UnityW<::UnityEngine::Transform>  landmark, ::UnityW<::UnityEngine::Transform>  flagAnchor) noexcept  {
this->saveablePropName = saveablePropName;
this->landmark = landmark;
this->flagAnchor = flagAnchor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdMapReference::GourdMapReference()   {
}
