#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerViewStats.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerViewStats_def.hpp"
// Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstancesOnCPU", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstancesOnGPU", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visiblePrimitivesOnCPU", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visiblePrimitivesOnGPU", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommands", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceCullerViewStats::InstanceCullerViewStats(::UnityEngine::Rendering::BatchCullingViewType  viewType, int32_t  viewInstanceID, int32_t  splitIndex, int32_t  visibleInstancesOnCPU, int32_t  visibleInstancesOnGPU, int32_t  visiblePrimitivesOnCPU, int32_t  visiblePrimitivesOnGPU, int32_t  drawCommands) noexcept  {
this->viewType = viewType;
this->viewInstanceID = viewInstanceID;
this->splitIndex = splitIndex;
this->visibleInstancesOnCPU = visibleInstancesOnCPU;
this->visibleInstancesOnGPU = visibleInstancesOnGPU;
this->visiblePrimitivesOnCPU = visiblePrimitivesOnCPU;
this->visiblePrimitivesOnGPU = visiblePrimitivesOnGPU;
this->drawCommands = drawCommands;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullerViewStats::InstanceCullerViewStats()   {
}
