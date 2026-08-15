#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/zzzz__ComputeShader_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingPass_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingParams_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingPass_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF_CullingViewShaderVariables(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CullingViewShaderVariables", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF_CullingViewShaderVariables()  {
return ::cordl_internals::getStaticField<int32_t, "CullingViewShaderVariables", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__BlockData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlockData", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__BlockData()  {
return ::cordl_internals::getStaticField<int32_t, "_BlockData", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkCells(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkCells()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkInfos(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkInfos", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkInfos()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkInfos", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkFlags(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkFlags", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkFlags()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkFlags", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkFlagChannelCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkFlagChannelCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkFlagChannelCount()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkFlagChannelCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkBatches(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkBatches()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingChunkAttributes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingChunkAttributes()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingIndirectOffsets(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingIndirectOffsets", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingIndirectOffsets()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingIndirectOffsets", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__ArchetypeData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ArchetypeData", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__ArchetypeData()  {
return ::cordl_internals::getStaticField<int32_t, "_ArchetypeData", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__BatchCullingAddresses(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BatchCullingAddresses", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__BatchCullingAddresses()  {
return ::cordl_internals::getStaticField<int32_t, "_BatchCullingAddresses", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__TemplateData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TemplateData", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__TemplateData()  {
return ::cordl_internals::getStaticField<int32_t, "_TemplateData", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__TemplateDraws(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TemplateDraws", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__TemplateDraws()  {
return ::cordl_internals::getStaticField<int32_t, "_TemplateDraws", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawChunks(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawChunks", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawChunks()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawChunks", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__MaxChunkCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MaxChunkCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__MaxChunkCount()  {
return ::cordl_internals::getStaticField<int32_t, "_MaxChunkCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__MaxWorkGroupCountX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MaxWorkGroupCountX", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__MaxWorkGroupCountX()  {
return ::cordl_internals::getStaticField<int32_t, "_MaxWorkGroupCountX", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__MaxWorkGroupCountY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MaxWorkGroupCountY", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__MaxWorkGroupCountY()  {
return ::cordl_internals::getStaticField<int32_t, "_MaxWorkGroupCountY", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroupArgsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroupArgsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroupArgsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroupArgsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroupCounterRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroupCounterRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroupCounterRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroupCounterRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroupArgs(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroupArgs", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroupArgs()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroupArgs", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroupCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroupCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroupCount()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroupCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroupsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroupsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroupsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroupsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__CullingWorkGroups(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingWorkGroups", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__CullingWorkGroups()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingWorkGroups", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawBins(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawBins", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawBins()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawBins", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawBinCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawBinCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawBinCount()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawBinCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawInfos(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawInfos", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawInfos()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawInfos", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawCount()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DrawArgsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DrawArgsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DrawArgsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_DrawArgsRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DensityCullingEnabled(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DensityCullingEnabled", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DensityCullingEnabled()  {
return ::cordl_internals::getStaticField<int32_t, "_DensityCullingEnabled", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__InstanceMultiplierShift(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InstanceMultiplierShift", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__InstanceMultiplierShift()  {
return ::cordl_internals::getStaticField<int32_t, "_InstanceMultiplierShift", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__InstanceVisibilityRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InstanceVisibilityRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__InstanceVisibilityRW()  {
return ::cordl_internals::getStaticField<int32_t, "_InstanceVisibilityRW", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugLODIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugLODIndex", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugLODIndex()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugLODIndex", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugLODMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugLODMode", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugLODMode()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugLODMode", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugDispatchCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugDispatchCounter", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugDispatchCounter()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugDispatchCounter", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugCounterEnabled(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugCounterEnabled", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugCounterEnabled()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugCounterEnabled", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugDrawVisibility(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugDrawVisibility", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugDrawVisibility()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugDrawVisibility", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugShadingMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugShadingMode", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugShadingMode()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugShadingMode", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugErrorCapacity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugErrorCapacity", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugErrorCapacity()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugErrorCapacity", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugErrorBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugErrorBuffer", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugErrorBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugErrorBuffer", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__DebugErrorCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DebugErrorCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__DebugErrorCount()  {
return ::cordl_internals::getStaticField<int32_t, "_DebugErrorCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__IncludedChunkCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IncludedChunkCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__IncludedChunkCount()  {
return ::cordl_internals::getStaticField<int32_t, "_IncludedChunkCount", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__IncludedInstances(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IncludedInstances", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__IncludedInstances()  {
return ::cordl_internals::getStaticField<int32_t, "_IncludedInstances", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
inline void MA::Flora::IndirectCullingPass_LocalNameID::setStaticF__EditorViewPass(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_EditorViewPass", ::MA::Flora::IndirectCullingPass_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::IndirectCullingPass_LocalNameID::getStaticF__EditorViewPass()  {
return ::cordl_internals::getStaticField<int32_t, "_EditorViewPass", ::MA::Flora::IndirectCullingPass_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass_LocalNameID::IndirectCullingPass_LocalNameID()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingPass_SceneViewPass::IndirectCullingPass_SceneViewPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass_SceneViewPass::IndirectCullingPass_SceneViewPass()   {
}
constexpr ::MA::Flora::IndirectCullingPass_SceneViewPass  MA::Flora::IndirectCullingPass_SceneViewPass::Normal{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::IndirectCullingPass_SceneViewPass  MA::Flora::IndirectCullingPass_SceneViewPass::Picking{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::IndirectCullingPass_SceneViewPass  MA::Flora::IndirectCullingPass_SceneViewPass::SelectionOutline{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass_ChunkCullingPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass_ChunkCullingPass::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::IndirectCullingPass_ChunkCullingPass::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814c2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_ChunkCullingPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::IndirectCullingPass_ChunkCullingPass::setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_ChunkCullingPass>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass_ChunkCullingPass::getStaticF_Marker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_ChunkCullingPass>();
}
inline void MA::Flora::IndirectCullingPass_ChunkCullingPass::_ctor(::UnityEngine::ComputeShader*  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_ChunkCullingPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InitCullingWorkGroupArgsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InitCullingWorkGroupsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullChunksKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SanitizeWorkGroupArgsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UseOcclusionKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewIsLightKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugOcclusion", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewIsEditorKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass::IndirectCullingPass_ChunkCullingPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  InitCullingWorkGroupArgsKernel, int32_t  InitCullingWorkGroupsKernel, int32_t  CullChunksKernel, int32_t  SanitizeWorkGroupArgsKernel, ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword, ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword, ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled, ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword) noexcept  {
this->ComputeShader = ComputeShader;
this->InitCullingWorkGroupArgsKernel = InitCullingWorkGroupArgsKernel;
this->InitCullingWorkGroupsKernel = InitCullingWorkGroupsKernel;
this->CullChunksKernel = CullChunksKernel;
this->SanitizeWorkGroupArgsKernel = SanitizeWorkGroupArgsKernel;
this->UseOcclusionKeyword = UseOcclusionKeyword;
this->ViewIsLightKeyword = ViewIsLightKeyword;
this->DebugOcclusion = DebugOcclusion;
this->DebugEnabled = DebugEnabled;
this->ViewIsEditorKeyword = ViewIsEditorKeyword;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass::IndirectCullingPass_ChunkCullingPass()   {
}
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass_InstanceCullingPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass_InstanceCullingPass::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::IndirectCullingPass_InstanceCullingPass::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814cdbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_InstanceCullingPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::IndirectCullingPass_InstanceCullingPass::setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_InstanceCullingPass>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass_InstanceCullingPass::getStaticF_Marker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_InstanceCullingPass>();
}
inline void MA::Flora::IndirectCullingPass_InstanceCullingPass::_ctor(::UnityEngine::ComputeShader*  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_InstanceCullingPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullInstancesKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UseOcclusionKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewIsLightKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugOcclusion", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewIsEditorKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass::IndirectCullingPass_InstanceCullingPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  CullInstancesKernel, ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword, ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword, ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled, ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword) noexcept  {
this->ComputeShader = ComputeShader;
this->CullInstancesKernel = CullInstancesKernel;
this->UseOcclusionKeyword = UseOcclusionKeyword;
this->ViewIsLightKeyword = ViewIsLightKeyword;
this->DebugOcclusion = DebugOcclusion;
this->DebugEnabled = DebugEnabled;
this->ViewIsEditorKeyword = ViewIsEditorKeyword;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass::IndirectCullingPass_InstanceCullingPass()   {
}
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814d3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::getStaticF_Marker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "Marker", ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass>();
}
inline void MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::_ctor(::UnityEngine::ComputeShader*  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ResetDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScatterDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::IndirectCullingPass_ScatterDrawArgsPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  ResetDrawArgsKernel, int32_t  ScatterDrawArgsKernel, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled) noexcept  {
this->ComputeShader = ComputeShader;
this->ResetDrawArgsKernel = ResetDrawArgsKernel;
this->ScatterDrawArgsKernel = ScatterDrawArgsKernel;
this->DebugEnabled = DebugEnabled;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass::IndirectCullingPass_ScatterDrawArgsPass()   {
}
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.GetDispatchMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (*)(::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::IndirectCullingPass::GetDispatchMarker)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814cbdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"GetDispatchMarker", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass::*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::IndirectCullingPass::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814cbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::IndirectCullingParams>)>(&::MA::Flora::IndirectCullingPass::Dispatch)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814cbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.DispatchCullChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::IndirectCullingParams>)>(&::MA::Flora::IndirectCullingPass::DispatchCullChunks)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x1814caef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchCullChunks", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.DispatchCullInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::IndirectCullingParams>)>(&::MA::Flora::IndirectCullingPass::DispatchCullInstances)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1814cb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchCullInstances", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.DispatchScatterDrawArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::IndirectCullingParams>)>(&::MA::Flora::IndirectCullingPass::DispatchScatterDrawArgs)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814cba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchScatterDrawArgs", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.SetViewConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::by_ref<::MA::Flora::IndirectCullingParams>)>(&::MA::Flora::IndirectCullingPass::SetViewConstants)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814cbdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"SetViewConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.ConfigureOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::by_ref<::MA::Flora::IndirectCullingParams>, ::UnityEngine::Rendering::LocalKeyword, ::UnityEngine::Rendering::LocalKeyword)>(&::MA::Flora::IndirectCullingPass::ConfigureOcclusion)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814cad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureOcclusion", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.ConfigureLightView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::by_ref<::MA::Flora::IndirectCullingParams>, ::UnityEngine::Rendering::LocalKeyword)>(&::MA::Flora::IndirectCullingPass::ConfigureLightView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814cad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureLightView", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.ConfigureEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::by_ref<::MA::Flora::IndirectCullingParams>, ::UnityEngine::Rendering::LocalKeyword)>(&::MA::Flora::IndirectCullingPass::ConfigureEditor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureEditor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingPass.ConfigureDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::by_ref<::MA::Flora::IndirectCullingParams>, ::UnityEngine::Rendering::LocalKeyword)>(&::MA::Flora::IndirectCullingPass::ConfigureDebug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_ChunkCullingPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChunkCullingPass;
}
constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass const& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_ChunkCullingPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChunkCullingPass;
}
constexpr void MA::Flora::IndirectCullingPass::__cordl_internal_set_m_ChunkCullingPass(::MA::Flora::IndirectCullingPass_ChunkCullingPass  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChunkCullingPass = value;
}
constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_InstanceCullingPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceCullingPass;
}
constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass const& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_InstanceCullingPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceCullingPass;
}
constexpr void MA::Flora::IndirectCullingPass::__cordl_internal_set_m_InstanceCullingPass(::MA::Flora::IndirectCullingPass_InstanceCullingPass  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceCullingPass = value;
}
constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_ScatterDrawArgsPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScatterDrawArgsPass;
}
constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass const& MA::Flora::IndirectCullingPass::__cordl_internal_get_m_ScatterDrawArgsPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScatterDrawArgsPass;
}
constexpr void MA::Flora::IndirectCullingPass::__cordl_internal_set_m_ScatterDrawArgsPass(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScatterDrawArgsPass = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ComputeShader>>& MA::Flora::IndirectCullingPass::__cordl_internal_get_ShadersWithOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShadersWithOcclusion;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ComputeShader>> const& MA::Flora::IndirectCullingPass::__cordl_internal_get_ShadersWithOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShadersWithOcclusion;
}
constexpr void MA::Flora::IndirectCullingPass::__cordl_internal_set_ShadersWithOcclusion(::ArrayW<::UnityW<::UnityEngine::ComputeShader>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShadersWithOcclusion = value;
}
inline void MA::Flora::IndirectCullingPass::setStaticF_CameraVisibilityMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "CameraVisibilityMarker", ::MA::Flora::IndirectCullingPass*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::getStaticF_CameraVisibilityMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "CameraVisibilityMarker", ::MA::Flora::IndirectCullingPass*>();
}
inline void MA::Flora::IndirectCullingPass::setStaticF_LightVisibilityMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "LightVisibilityMarker", ::MA::Flora::IndirectCullingPass*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::getStaticF_LightVisibilityMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "LightVisibilityMarker", ::MA::Flora::IndirectCullingPass*>();
}
inline void MA::Flora::IndirectCullingPass::setStaticF_PickingVisibilityMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "PickingVisibilityMarker", ::MA::Flora::IndirectCullingPass*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::getStaticF_PickingVisibilityMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "PickingVisibilityMarker", ::MA::Flora::IndirectCullingPass*>();
}
inline void MA::Flora::IndirectCullingPass::setStaticF_SelectionOutlineVisibilityMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "SelectionOutlineVisibilityMarker", ::MA::Flora::IndirectCullingPass*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::getStaticF_SelectionOutlineVisibilityMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "SelectionOutlineVisibilityMarker", ::MA::Flora::IndirectCullingPass*>();
}
inline void MA::Flora::IndirectCullingPass::setStaticF_UnknownVisibilityMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UnknownVisibilityMarker", ::MA::Flora::IndirectCullingPass*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::getStaticF_UnknownVisibilityMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UnknownVisibilityMarker", ::MA::Flora::IndirectCullingPass*>();
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::IndirectCullingPass::GetDispatchMarker(::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"GetDispatchMarker", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(nullptr, ___internal_method, viewType);
}
inline void MA::Flora::IndirectCullingPass::_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runtimeResources);
}
inline void MA::Flora::IndirectCullingPass::Dispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input);
}
inline void MA::Flora::IndirectCullingPass::DispatchCullChunks(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchCullChunks", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input);
}
inline void MA::Flora::IndirectCullingPass::DispatchCullInstances(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchCullInstances", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input);
}
inline void MA::Flora::IndirectCullingPass::DispatchScatterDrawArgs(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"DispatchScatterDrawArgs", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input);
}
inline void MA::Flora::IndirectCullingPass::SetViewConstants(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, ::by_ref<::MA::Flora::IndirectCullingParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"SetViewConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, input);
}
inline void MA::Flora::IndirectCullingPass::ConfigureOcclusion(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  occlusionKeyword, ::UnityEngine::Rendering::LocalKeyword  debugOcclusionKeyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureOcclusion", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, kernel, input, occlusionKeyword, debugOcclusionKeyword);
}
inline void MA::Flora::IndirectCullingPass::ConfigureLightView(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  lightKeyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureLightView", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, kernel, input, lightKeyword);
}
inline void MA::Flora::IndirectCullingPass::ConfigureEditor(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  editorViewKeyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureEditor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, kernel, input, editorViewKeyword);
}
inline void MA::Flora::IndirectCullingPass::ConfigureDebug(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  enableDebugKeyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingPass*>(),
                        {"ConfigureDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingParams>>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, kernel, input, enableDebugKeyword);
}
inline ::MA::Flora::IndirectCullingPass* MA::Flora::IndirectCullingPass::New_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::IndirectCullingPass*>(runtimeResources));
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingPass::IndirectCullingPass()   {
}
