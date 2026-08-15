#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Instance.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Instance_def.hpp"
// Ctor Parameters [CppParam { name: "meshAccelStructOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshAccelStructLeavesOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "triangleCullingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "invertTriangleCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "userInstanceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOpaque", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RadeonRays::Instance::Instance(uint32_t  meshAccelStructOffset, uint32_t  instanceMask, uint32_t  vertexOffset, uint32_t  meshAccelStructLeavesOffset, bool  triangleCullingEnabled, bool  invertTriangleCulling, uint32_t  userInstanceID, bool  isOpaque, ::UnityEngine::Rendering::RadeonRays::Transform  localToWorldTransform) noexcept  {
this->meshAccelStructOffset = meshAccelStructOffset;
this->instanceMask = instanceMask;
this->vertexOffset = vertexOffset;
this->meshAccelStructLeavesOffset = meshAccelStructLeavesOffset;
this->triangleCullingEnabled = triangleCullingEnabled;
this->invertTriangleCulling = invertTriangleCulling;
this->userInstanceID = userInstanceID;
this->isOpaque = isOpaque;
this->localToWorldTransform = localToWorldTransform;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::Instance::Instance()   {
}
