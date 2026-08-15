#pragma once
// IWYU pragma private; include "GlobalNamespace/PropCustomHome.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PropCustomHome_def.hpp"
// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropCustomHome::PropCustomHome(::GlobalNamespace::PropGroup  propGroup, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) noexcept  {
this->propGroup = propGroup;
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropCustomHome::PropCustomHome()   {
}
