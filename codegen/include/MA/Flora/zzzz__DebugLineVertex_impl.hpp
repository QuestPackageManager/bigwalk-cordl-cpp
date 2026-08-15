#pragma once
// IWYU pragma private; include "MA/Flora/DebugLineVertex.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "MA/Flora/zzzz__DebugLineVertex_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugLineVertex::DebugLineVertex(::UnityEngine::Vector3  position, float_t  weight, ::UnityEngine::Vector4  color) noexcept  {
this->position = position;
this->weight = weight;
this->color = color;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugLineVertex::DebugLineVertex()   {
}
