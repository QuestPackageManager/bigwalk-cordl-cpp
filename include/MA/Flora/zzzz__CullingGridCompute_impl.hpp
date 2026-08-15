#pragma once
// IWYU pragma private; include "MA/Flora/CullingGridCompute.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "MA/Flora/zzzz__CullingGridCompute_def.hpp"
#include "MA/Flora/zzzz__CullingGridCompute_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
inline void MA::Flora::CullingGridCompute_Compute::setStaticF_CullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "CullingGridCS", ::MA::Flora::CullingGridCompute_Compute*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::CullingGridCompute_Compute::getStaticF_CullingGridCS()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "CullingGridCS", ::MA::Flora::CullingGridCompute_Compute*>();
}
inline void MA::Flora::CullingGridCompute_Compute::setStaticF_UpdateChunkInfosKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UpdateChunkInfosKernel", ::MA::Flora::CullingGridCompute_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_Compute::getStaticF_UpdateChunkInfosKernel()  {
return ::cordl_internals::getStaticField<int32_t, "UpdateChunkInfosKernel", ::MA::Flora::CullingGridCompute_Compute*>();
}
inline void MA::Flora::CullingGridCompute_Compute::setStaticF_UpdateChunkFlagsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UpdateChunkFlagsKernel", ::MA::Flora::CullingGridCompute_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_Compute::getStaticF_UpdateChunkFlagsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "UpdateChunkFlagsKernel", ::MA::Flora::CullingGridCompute_Compute*>();
}
inline void MA::Flora::CullingGridCompute_Compute::setStaticF_UpdateIndirectPagesKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UpdateIndirectPagesKernel", ::MA::Flora::CullingGridCompute_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_Compute::getStaticF_UpdateIndirectPagesKernel()  {
return ::cordl_internals::getStaticField<int32_t, "UpdateIndirectPagesKernel", ::MA::Flora::CullingGridCompute_Compute*>();
}
inline void MA::Flora::CullingGridCompute_Compute::setStaticF_UpdateChunkAttributesKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UpdateChunkAttributesKernel", ::MA::Flora::CullingGridCompute_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_Compute::getStaticF_UpdateChunkAttributesKernel()  {
return ::cordl_internals::getStaticField<int32_t, "UpdateChunkAttributesKernel", ::MA::Flora::CullingGridCompute_Compute*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_Compute::CullingGridCompute_Compute()   {
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__BatchCullingAddresses(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BatchCullingAddresses", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__BatchCullingAddresses()  {
return ::cordl_internals::getStaticField<int32_t, "_BatchCullingAddresses", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ArchetypeData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ArchetypeData", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ArchetypeData()  {
return ::cordl_internals::getStaticField<int32_t, "_ArchetypeData", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__TemplateData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TemplateData", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__TemplateData()  {
return ::cordl_internals::getStaticField<int32_t, "_TemplateData", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__BlockData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlockData", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__BlockData()  {
return ::cordl_internals::getStaticField<int32_t, "_BlockData", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkInfos(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkInfos", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkInfos()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkInfos", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkCells(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkCells()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkBatches(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkBatches()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkAttributes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkAttributes()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingIndirectOffsets(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingIndirectOffsets", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingIndirectOffsets()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingIndirectOffsets", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkPacketCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkPacketCount", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkPacketCount()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkPacketCount", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkPackets(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkPackets", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkPackets()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkPackets", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkCellsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkCellsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkCellsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkCellsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkInfosRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkInfosRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkInfosRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkInfosRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkBatchesRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkBatchesRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkBatchesRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkBatchesRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkFlagChannelCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkFlagChannelCount", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkFlagChannelCount()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkFlagChannelCount", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkFlagsUpdateCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkFlagsUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkFlagsUpdateCount()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkFlagsUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkFlagIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkFlagIndices", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkFlagIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkFlagIndices", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkFlagUpdates(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkFlagUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkFlagUpdates()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkFlagUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkFlagsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkFlagsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkFlagsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkFlagsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__IndirectPageUpdateCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndirectPageUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__IndirectPageUpdateCount()  {
return ::cordl_internals::getStaticField<int32_t, "_IndirectPageUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__IndirectPageUpdates(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndirectPageUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__IndirectPageUpdates()  {
return ::cordl_internals::getStaticField<int32_t, "_IndirectPageUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__IndirectOffsetUpdates(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndirectOffsetUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__IndirectOffsetUpdates()  {
return ::cordl_internals::getStaticField<int32_t, "_IndirectOffsetUpdates", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__IndirectInstanceOffsetsRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndirectInstanceOffsetsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__IndirectInstanceOffsetsRW()  {
return ::cordl_internals::getStaticField<int32_t, "_IndirectInstanceOffsetsRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__ChunkAttributeUpdateCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkAttributeUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__ChunkAttributeUpdateCount()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkAttributeUpdateCount", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__AttributeCellChunkIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AttributeCellChunkIndices", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__AttributeCellChunkIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_AttributeCellChunkIndices", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
inline void MA::Flora::CullingGridCompute_LocalNameID::setStaticF__CullingChunkAttributesRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkAttributesRW", ::MA::Flora::CullingGridCompute_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::CullingGridCompute_LocalNameID::getStaticF__CullingChunkAttributesRW()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkAttributesRW", ::MA::Flora::CullingGridCompute_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_LocalNameID::CullingGridCompute_LocalNameID()   {
}
inline void MA::Flora::CullingGridCompute_Profiling::setStaticF_UpdateChunks(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateChunks", ::MA::Flora::CullingGridCompute_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGridCompute_Profiling::getStaticF_UpdateChunks()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateChunks", ::MA::Flora::CullingGridCompute_Profiling*>();
}
inline void MA::Flora::CullingGridCompute_Profiling::setStaticF_ScatterIndirectPages(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterIndirectPages", ::MA::Flora::CullingGridCompute_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGridCompute_Profiling::getStaticF_ScatterIndirectPages()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterIndirectPages", ::MA::Flora::CullingGridCompute_Profiling*>();
}
inline void MA::Flora::CullingGridCompute_Profiling::setStaticF_UpdateChunkAttributes(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateChunkAttributes", ::MA::Flora::CullingGridCompute_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGridCompute_Profiling::getStaticF_UpdateChunkAttributes()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateChunkAttributes", ::MA::Flora::CullingGridCompute_Profiling*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_Profiling::CullingGridCompute_Profiling()   {
}
// Ctor Parameters [CppParam { name: "PacketCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkPacketBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCellBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkBatchBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkInfoParams::CullingGridCompute_UpdateChunkInfoParams(int32_t  PacketCount, ::UnityEngine::GraphicsBuffer*  ChunkPacketBuffer, ::UnityEngine::GraphicsBuffer*  ChunkCellBuffer, ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer, ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer) noexcept  {
this->PacketCount = PacketCount;
this->ChunkPacketBuffer = ChunkPacketBuffer;
this->ChunkCellBuffer = ChunkCellBuffer;
this->ChunkInfoBuffer = ChunkInfoBuffer;
this->ChunkBatchBuffer = ChunkBatchBuffer;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkInfoParams::CullingGridCompute_UpdateChunkInfoParams()   {
}
// Ctor Parameters [CppParam { name: "UpdateCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChannelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkFlagUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkFlagIndexBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkFlagBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams::CullingGridCompute_UpdateChunkFlagsParams(int32_t  UpdateCount, int32_t  ChannelCount, ::UnityEngine::GraphicsBuffer*  ChunkFlagUpdateBuffer, ::UnityEngine::GraphicsBuffer*  ChunkFlagIndexBuffer, ::UnityEngine::GraphicsBuffer*  ChunkFlagBuffer) noexcept  {
this->UpdateCount = UpdateCount;
this->ChannelCount = ChannelCount;
this->ChunkFlagUpdateBuffer = ChunkFlagUpdateBuffer;
this->ChunkFlagIndexBuffer = ChunkFlagIndexBuffer;
this->ChunkFlagBuffer = ChunkFlagBuffer;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams::CullingGridCompute_UpdateChunkFlagsParams()   {
}
// Ctor Parameters [CppParam { name: "IndirectPageUpdateCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndirectPageUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndirectOffsetUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams::CullingGridCompute_UpdateIndirectPagesParams(int32_t  IndirectPageUpdateCount, ::UnityEngine::GraphicsBuffer*  IndirectPageUpdateBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetUpdateBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer) noexcept  {
this->IndirectPageUpdateCount = IndirectPageUpdateCount;
this->IndirectPageUpdateBuffer = IndirectPageUpdateBuffer;
this->IndirectOffsetUpdateBuffer = IndirectOffsetUpdateBuffer;
this->IndirectOffsetBuffer = IndirectOffsetBuffer;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams::CullingGridCompute_UpdateIndirectPagesParams()   {
}
// Ctor Parameters [CppParam { name: "AttributeUpdateCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CellChunkIndices", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainAddressBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ArchetypeDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkBatchBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkAttributeBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams::CullingGridCompute_UpdateChunkAttributesParams(int32_t  AttributeUpdateCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>  CellChunkIndices, ::UnityEngine::GraphicsBuffer*  InstanceBuffer, ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer, ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer, ::UnityEngine::GraphicsBuffer*  BlockDataBuffer, ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer, ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer, ::UnityEngine::GraphicsBuffer*  ChunkAttributeBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer) noexcept  {
this->AttributeUpdateCount = AttributeUpdateCount;
this->CellChunkIndices = CellChunkIndices;
this->InstanceBuffer = InstanceBuffer;
this->BatchDomainAddressBuffer = BatchDomainAddressBuffer;
this->ArchetypeDataBuffer = ArchetypeDataBuffer;
this->TemplateDataBuffer = TemplateDataBuffer;
this->BlockDataBuffer = BlockDataBuffer;
this->ChunkBatchBuffer = ChunkBatchBuffer;
this->ChunkInfoBuffer = ChunkInfoBuffer;
this->ChunkAttributeBuffer = ChunkAttributeBuffer;
this->IndirectOffsetBuffer = IndirectOffsetBuffer;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams::CullingGridCompute_UpdateChunkAttributesParams()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGridCompute.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::CullingGridCompute::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814b1ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGridCompute.DispatchUpdateChunkInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkInfoParams>)>(&::MA::Flora::CullingGridCompute::DispatchUpdateChunkInfo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b1ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkInfo", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkInfoParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGridCompute.DispatchUpdateChunkFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams>)>(&::MA::Flora::CullingGridCompute::DispatchUpdateChunkFlags)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b1b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGridCompute.DispatchScatterIndirectPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams>)>(&::MA::Flora::CullingGridCompute::DispatchScatterIndirectPages)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814b1630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchScatterIndirectPages", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGridCompute.DispatchUpdateChunkAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams>)>(&::MA::Flora::CullingGridCompute::DispatchUpdateChunkAttributes)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1814b17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkAttributes", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGridCompute::Initialize(::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, resources);
}
inline void MA::Flora::CullingGridCompute::DispatchUpdateChunkInfo(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkInfoParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkInfo", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkInfoParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, input);
}
inline void MA::Flora::CullingGridCompute::DispatchUpdateChunkFlags(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, input);
}
inline void MA::Flora::CullingGridCompute::DispatchScatterIndirectPages(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchScatterIndirectPages", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, input);
}
inline void MA::Flora::CullingGridCompute::DispatchUpdateChunkAttributes(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGridCompute*>(),
                        {"DispatchUpdateChunkAttributes", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, input);
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGridCompute::CullingGridCompute()   {
}
