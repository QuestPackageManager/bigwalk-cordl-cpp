#pragma once
// IWYU pragma private; include "MA/Flora/GPUCullingStats.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__GPUCullingStats_def.hpp"
// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleDraws", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleInstances", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccludedInstances", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GPUCullingStats::GPUCullingStats(::UnityEngine::EntityId  ViewId, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  FrameIndex, int32_t  VisibleDraws, int32_t  VisibleInstances, int32_t  OccludedInstances) noexcept  {
this->ViewId = ViewId;
this->ViewType = ViewType;
this->FrameIndex = FrameIndex;
this->VisibleDraws = VisibleDraws;
this->VisibleInstances = VisibleInstances;
this->OccludedInstances = OccludedInstances;
}
// Ctor Parameters []
constexpr ::MA::Flora::GPUCullingStats::GPUCullingStats()   {
}
