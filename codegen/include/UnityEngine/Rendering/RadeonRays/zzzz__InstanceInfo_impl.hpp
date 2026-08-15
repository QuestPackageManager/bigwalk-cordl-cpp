#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/InstanceInfo.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__InstanceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "blasOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableTriangleCulling", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "invertTriangleCulling", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "userInstanceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOpaque", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToLocalTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RadeonRays::InstanceInfo::InstanceInfo(int32_t  blasOffset, int32_t  instanceMask, int32_t  vertexOffset, int32_t  indexOffset, uint32_t  disableTriangleCulling, uint32_t  invertTriangleCulling, uint32_t  userInstanceID, int32_t  isOpaque, ::UnityEngine::Rendering::RadeonRays::Transform  worldToLocalTransform, ::UnityEngine::Rendering::RadeonRays::Transform  localToWorldTransform) noexcept  {
this->blasOffset = blasOffset;
this->instanceMask = instanceMask;
this->vertexOffset = vertexOffset;
this->indexOffset = indexOffset;
this->disableTriangleCulling = disableTriangleCulling;
this->invertTriangleCulling = invertTriangleCulling;
this->userInstanceID = userInstanceID;
this->isOpaque = isOpaque;
this->worldToLocalTransform = worldToLocalTransform;
this->localToWorldTransform = localToWorldTransform;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::InstanceInfo::InstanceInfo()   {
}
