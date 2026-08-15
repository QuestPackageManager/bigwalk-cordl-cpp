#pragma once
// IWYU pragma private; include "MA/Flora/CPUCullingStats.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__CPUCullingStats_def.hpp"
// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawCommandCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CPUCullingStats::CPUCullingStats(::UnityEngine::EntityId  ViewId, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  FrameIndex, int32_t  VisibleChunkCount, int32_t  VisibleInstanceCount, int32_t  DrawInstanceCount, int32_t  DrawCommandCount) noexcept  {
this->ViewId = ViewId;
this->ViewType = ViewType;
this->FrameIndex = FrameIndex;
this->VisibleChunkCount = VisibleChunkCount;
this->VisibleInstanceCount = VisibleInstanceCount;
this->DrawInstanceCount = DrawInstanceCount;
this->DrawCommandCount = DrawCommandCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::CPUCullingStats::CPUCullingStats()   {
}
