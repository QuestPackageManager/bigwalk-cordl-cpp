#pragma once
// IWYU pragma private; include "MA/Flora/CullingGrid.hpp"
#include "MA/Flora/zzzz__AABB_impl.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__BlockData_impl.hpp"
#include "MA/Flora/zzzz__BlockIndex_impl.hpp"
#include "MA/Flora/zzzz__BlockLocation_impl.hpp"
#include "MA/Flora/zzzz__CellBucketIndex_impl.hpp"
#include "MA/Flora/zzzz__CellBucketKey_impl.hpp"
#include "MA/Flora/zzzz__CellIndex_impl.hpp"
#include "MA/Flora/zzzz__CellLocation_impl.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__CullingChunkUpdatePacket_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__InstanceTag_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkBatch_impl.hpp"
#include "MA/Flora/zzzz__TemplateManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__BlockIndex_def.hpp"
#include "MA/Flora/zzzz__BlockLocation_def.hpp"
#include "MA/Flora/zzzz__CellBucketIndex_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "MA/Flora/zzzz__CellLocation_def.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingFlagChannel_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceFilter_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTypeMask_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__InstanceInChunk_def.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkBatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashSet_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_SourceFilterMode::CullingGrid_SourceFilterMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_SourceFilterMode::CullingGrid_SourceFilterMode()   {
}
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::None{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::AuthoringOnly{static_cast<uint8_t>(0x1u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::IdentityOnly{static_cast<uint8_t>(0x2u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::RenderOnly{static_cast<uint8_t>(0x3u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::AuthoringAndIdentity{static_cast<uint8_t>(0x4u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::AuthoringAndRender{static_cast<uint8_t>(0x5u)};
constexpr ::MA::Flora::CullingGrid_SourceFilterMode  MA::Flora::CullingGrid_SourceFilterMode::General{static_cast<uint8_t>(0x6u)};
//  Writing Method size for method: ::MA::Flora::CullingGrid_TestSelectionPlanesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_TestSelectionPlanesJob::*)()>(&::MA::Flora::CullingGrid_TestSelectionPlanesJob::Execute)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1814ae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestSelectionPlanesJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_TestSelectionPlanesJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestSelectionPlanesJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingGrid_TestSelectionPlanesJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingGrid_TestSelectionPlanesJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "IncludeTags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExcludeTags", ty: "::MA::Flora::InstanceTag", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrustumPackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceAABBs", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::AABB>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_TestSelectionPlanesJob::CullingGrid_TestSelectionPlanesJob(::MA::Flora::InstanceTag  IncludeTags, ::MA::Flora::InstanceTag  ExcludeTags, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPackets, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::AABB>  InstanceAABBs, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  Result) noexcept  {
this->IncludeTags = IncludeTags;
this->ExcludeTags = ExcludeTags;
this->FrustumPackets = FrustumPackets;
this->ActiveBlocks = ActiveBlocks;
this->BlockLocations = BlockLocations;
this->ActiveCells = ActiveCells;
this->CullingChunks = CullingChunks;
this->ChunkArchetypes = ChunkArchetypes;
this->ChunkCounts = ChunkCounts;
this->InstanceAABBs = InstanceAABBs;
this->InstanceHandles = InstanceHandles;
this->Result = Result;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_TestSelectionPlanesJob::CullingGrid_TestSelectionPlanesJob()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_TestCellsSphereJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_TestCellsSphereJob::*)()>(&::MA::Flora::CullingGrid_TestCellsSphereJob::Execute)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x1814adec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestCellsSphereJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_TestCellsSphereJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestCellsSphereJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingGrid_TestCellsSphereJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingGrid_TestCellsSphereJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Sphere", ty: "::UnityEngine::BoundingSphere", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "IntersectingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_TestCellsSphereJob::CullingGrid_TestCellsSphereJob(::UnityEngine::BoundingSphere  Sphere, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  IntersectingChunks) noexcept  {
this->Sphere = Sphere;
this->ActiveBlocks = ActiveBlocks;
this->BlockLocations = BlockLocations;
this->ActiveCells = ActiveCells;
this->CullingChunks = CullingChunks;
this->IntersectingChunks = IntersectingChunks;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_TestCellsSphereJob::CullingGrid_TestCellsSphereJob()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_TestCellsBoxJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_TestCellsBoxJob::*)()>(&::MA::Flora::CullingGrid_TestCellsBoxJob::Execute)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x1814ad960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestCellsBoxJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_TestCellsBoxJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_TestCellsBoxJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingGrid_TestCellsBoxJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingGrid_TestCellsBoxJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TestAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveBlocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveCells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OverlappingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_TestCellsBoxJob::CullingGrid_TestCellsBoxJob(::MA::Flora::AABB  TestAABB, ::MA::Flora::NativeBitSet  ActiveBlocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  ActiveCells, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OverlappingChunks) noexcept  {
this->TestAABB = TestAABB;
this->ActiveBlocks = ActiveBlocks;
this->BlockLocations = BlockLocations;
this->ActiveCells = ActiveCells;
this->CullingChunks = CullingChunks;
this->OverlappingChunks = OverlappingChunks;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_TestCellsBoxJob::CullingGrid_TestCellsBoxJob()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_BuildChunkFlags.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_BuildChunkFlags::*)(int32_t)>(&::MA::Flora::CullingGrid_BuildChunkFlags::Execute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18149c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildChunkFlags>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_BuildChunkFlags::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildChunkFlags>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingGrid_BuildChunkFlags::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingGrid_BuildChunkFlags::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceFlippedWinding", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHasMovedThisFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHasMovedLastFrame", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCPUFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkGPUFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_BuildChunkFlags::CullingGrid_BuildChunkFlags(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  ChunkInstanceIndices, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceFlippedWinding, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedThisFrame, ::Unity::Collections::NativeArray_1<uint8_t>  InstanceHasMovedLastFrame, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkCPUFlags, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkGPUFlags) noexcept  {
this->Chunks = Chunks;
this->ChunkCounts = ChunkCounts;
this->ChunkInstanceIndices = ChunkInstanceIndices;
this->InstanceFlippedWinding = InstanceFlippedWinding;
this->InstanceHasMovedThisFrame = InstanceHasMovedThisFrame;
this->InstanceHasMovedLastFrame = InstanceHasMovedLastFrame;
this->ChunkCPUFlags = ChunkCPUFlags;
this->ChunkGPUFlags = ChunkGPUFlags;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_BuildChunkFlags::CullingGrid_BuildChunkFlags()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_BuildChunkUpdatePackets.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_BuildChunkUpdatePackets::*)(int32_t)>(&::MA::Flora::CullingGrid_BuildChunkUpdatePackets::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildChunkUpdatePackets>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_BuildChunkUpdatePackets::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildChunkUpdatePackets>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingGrid_BuildChunkUpdatePackets::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingGrid_BuildChunkUpdatePackets::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkBatchDomains", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkUpdatePackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkUpdatePacket>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_BuildChunkUpdatePackets::CullingGrid_BuildChunkUpdatePackets(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  ChunkBatchDomains, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  ChunkBatches, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkUpdatePacket>  ChunkUpdatePackets) noexcept  {
this->Chunks = Chunks;
this->ChunkCells = ChunkCells;
this->ChunkArchetypes = ChunkArchetypes;
this->ChunkBatchDomains = ChunkBatchDomains;
this->ChunkBatches = ChunkBatches;
this->ChunkUpdatePackets = ChunkUpdatePackets;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_BuildChunkUpdatePackets::CullingGrid_BuildChunkUpdatePackets()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_BuildIndirectOffsets.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid_BuildIndirectOffsets::*)(int32_t)>(&::MA::Flora::CullingGrid_BuildIndirectOffsets::Execute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18149c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildIndirectOffsets>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid_BuildIndirectOffsets::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_BuildIndirectOffsets>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingGrid_BuildIndirectOffsets::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingGrid_BuildIndirectOffsets::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "IndirectChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkIndirectPageIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PersistentIndirectOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScatterIndirectOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_BuildIndirectOffsets::CullingGrid_BuildIndirectOffsets(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  IndirectChunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  ChunkIndirectPageIndex, ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices, ::Unity::Collections::NativeArray_1<int32_t>  PersistentIndirectOffsets, ::Unity::Collections::NativeArray_1<int32_t>  ScatterIndirectOffsets) noexcept  {
this->IndirectChunks = IndirectChunks;
this->ChunkCounts = ChunkCounts;
this->ChunkIndirectPageIndex = ChunkIndirectPageIndex;
this->InstanceIndices = InstanceIndices;
this->PersistentIndirectOffsets = PersistentIndirectOffsets;
this->ScatterIndirectOffsets = ScatterIndirectOffsets;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_BuildIndirectOffsets::CullingGrid_BuildIndirectOffsets()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk (*)()>(&::MA::Flora::CullingGrid_InstanceBatchInCullingChunk::get_Empty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk MA::Flora::CullingGrid_InstanceBatchInCullingChunk::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Chunk", ty: "::MA::Flora::CullingChunkIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk::CullingGrid_InstanceBatchInCullingChunk(::MA::Flora::CullingChunkIndex  Chunk, int32_t  Start, int32_t  Count) noexcept  {
this->Chunk = Chunk;
this->Start = Start;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk::CullingGrid_InstanceBatchInCullingChunk()   {
}
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetSourceFilterMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingGrid_SourceFilterMode (*)(::MA::Flora::FloraInstanceFilter)>(&::MA::Flora::CullingGrid::GetSourceFilterMode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814a3d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetSourceFilterMode", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.TryGetInstanceSourceIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceHandle, ::by_ref<::UnityEngine::EntityId>, ::by_ref<::UnityEngine::EntityId>)>(&::MA::Flora::CullingGrid::TryGetInstanceSourceIds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814a67a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"TryGetInstanceSourceIds", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::EntityId>>(), ::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesIdentitySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceHandle, ::UnityEngine::EntityId)>(&::MA::Flora::CullingGrid::MatchesIdentitySource)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a4e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesIdentitySource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceHandle, ::UnityEngine::EntityId)>(&::MA::Flora::CullingGrid::MatchesRenderSource)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a4f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesRenderSource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesSourceFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceFilter, ::MA::Flora::CullingGrid_SourceFilterMode)>(&::MA::Flora::CullingGrid::MatchesSourceFilter)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814a5030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesSourceFilter", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesIdentitySources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceHandle, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>)>(&::MA::Flora::CullingGrid::MatchesIdentitySources)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814a4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesIdentitySources", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesChunkFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::FloraInstanceFilter)>(&::MA::Flora::CullingGrid::MatchesChunkFilter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814a4d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesChunkFilter", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindCandidateChunksIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindCandidateChunksIntersectingSphere)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814a0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindCandidateChunksIntersectingSphere", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindCandidateChunksIntersectingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindCandidateChunksIntersectingBox)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18149fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindCandidateChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ChunkHasMatchingSphereInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::UnityEngine::BoundingSphere, ::MA::Flora::FloraInstanceFilter, ::MA::Flora::CullingGrid_SourceFilterMode)>(&::MA::Flora::CullingGrid::ChunkHasMatchingSphereInstance)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18149e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingSphereInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ChunkHasMatchingSphereInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::UnityEngine::BoundingSphere, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>)>(&::MA::Flora::CullingGrid::ChunkHasMatchingSphereInstance)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18149e320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingSphereInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ChunkHasMatchingBoxInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::AABB, ::MA::Flora::FloraInstanceFilter, ::MA::Flora::CullingGrid_SourceFilterMode)>(&::MA::Flora::CullingGrid::ChunkHasMatchingBoxInstance)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x18149dff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingBoxInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ChunkHasMatchingBoxInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::AABB, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>)>(&::MA::Flora::CullingGrid::ChunkHasMatchingBoxInstance)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18149dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingBoxInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MatchesTypeMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::InstanceTag, ::MA::Flora::FloraInstanceTypeMask)>(&::MA::Flora::CullingGrid::MatchesTypeMask)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814a5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesTypeMask", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::FloraInstanceTypeMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CullInstancesInSelectionPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::CullInstancesInSelectionPlanes)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18149eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CullInstancesInSelectionPlanes", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingSphere)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814a0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingSphere)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1814a1040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingSphere)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1814a0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingSphere)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1814a2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingSphereMatching)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x1814a25b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::UnityEngine::BoundingSphere, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingSphereMatching)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x1814a2030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingBox)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814a0750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingBox)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814a0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindChunksIntersectingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindChunksIntersectingBox)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1814a0410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingBox)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1814a1c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBox", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingBoxMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::MA::Flora::FloraInstanceFilter, ::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingBoxMatching)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1814a17b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBoxMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FindInstancesIntersectingBoxMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::CullingGrid::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::MA::Flora::AABB, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::CullingGrid::FindInstancesIntersectingBoxMatching)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1814a12c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBoxMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.UpdateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>)>(&::MA::Flora::CullingGrid::UpdateInstances)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x1814a6bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.UpdateChunkBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PackedCullingChunkBatch (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::UpdateChunkBatch)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814a68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateChunkBatch", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ScheduleUploads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::ScheduleUploads)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814a6340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ScheduleUploadsWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::CullingGrid*)>(&::MA::Flora::CullingGrid::ScheduleUploadsWithBurst)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814a6340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploadsWithBurst", {}, {::i2c::type_of<::MA::Flora::CullingGrid*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ScheduleUploadsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::ScheduleUploadsInternal)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x1814a59a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploadsInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GrowBuffersIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::GrowBuffersIfNeeded)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814a3dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GrowBuffersIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.DispatchUploads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::MA::Flora::CullingGrid::DispatchUploads)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x18149f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DispatchUploads", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CellLevelForSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::MA::Flora::CullingGrid::CellLevelForSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellLevelForSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CellSizeForLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::MA::Flora::CullingGrid::CellSizeForLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellSizeForLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RcpCellSizeForLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::MA::Flora::CullingGrid::RcpCellSizeForLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814a5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RcpCellSizeForLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.LocationForPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::CullingGrid::LocationForPosition)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18149b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationForPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.LocationForAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::CullingGrid::LocationForAABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a4c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationForAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.LocationPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::int4)>(&::MA::Flora::CullingGrid::LocationPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationPosition", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.LocalToLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4, int32_t)>(&::MA::Flora::CullingGrid::LocalToLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814a4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocalToLevel", {}, {::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CellToBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::Unity::Mathematics::int4)>(&::MA::Flora::CullingGrid::CellToBlock)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18149dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellToBlock", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MinBlockCellCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int4)>(&::MA::Flora::CullingGrid::MinBlockCellCoord)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814a5370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MinBlockCellCoord", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.MaxBlockCellCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(::Unity::Mathematics::int4)>(&::MA::Flora::CullingGrid::MaxBlockCellCoord)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814a5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MaxBlockCellCoord", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_BlockAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_BlockAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_BlockLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_BlockLocations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockLocations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_CellAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_CellAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_CellInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_CellInstanceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_CellChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_CellChunks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkCells
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkCells)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCells", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkArchetypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkArchetypes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkArchetypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_AllocatedChunkCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_AllocatedChunkCount)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814a71b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_AllocatedChunkCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkInstanceIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkInstanceIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkInstanceIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_BlockDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_BlockDataBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockDataBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkCellBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkCellBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCellBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkInfoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkInfoBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkInfoBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkFlagBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkFlagBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkFlagBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkBatchBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkBatchBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkBatchBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_ChunkAttributeBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_ChunkAttributeBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkAttributeBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_IndirectOffsetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_IndirectOffsetBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_IndirectOffsetBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_Self
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingGrid* (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_Self)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_Self", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::InstanceContext, ::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::CullingGrid::Initialize)> {
  constexpr static std::size_t size = 0xd20;
  constexpr static std::size_t addrs = 0x1814a3f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::Dispose)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18149fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.get_FrameVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::get_FrameVersion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814a72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_FrameVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.UpdateContentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::UpdateContentVersion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814a6b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateContentVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetLocationForAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellLocation (::MA::Flora::CullingGrid::*)(::MA::Flora::AABB)>(&::MA::Flora::CullingGrid::GetLocationForAABB)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18149b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetLocationForAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.SetBlockDataDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::BlockIndex)>(&::MA::Flora::CullingGrid::SetBlockDataDirty)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814a6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetBlockDataDirty", {}, {::i2c::type_of<::MA::Flora::BlockIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetOrCreateBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BlockIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::BlockLocation)>(&::MA::Flora::CullingGrid::GetOrCreateBlock)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1814a35d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateBlock", {}, {::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.DestroyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::BlockIndex)>(&::MA::Flora::CullingGrid::DestroyBlock)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18149efd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DestroyBlock", {}, {::i2c::type_of<::MA::Flora::BlockIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetOrCreateCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::CellLocation)>(&::MA::Flora::CullingGrid::GetOrCreateCell)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814a3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateCell", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.DestroyCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellIndex)>(&::MA::Flora::CullingGrid::DestroyCell)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18149f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DestroyCell", {}, {::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AddInstancesToBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, int32_t)>(&::MA::Flora::CullingGrid::AddInstancesToBucket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RemoveInstancesFromBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, int32_t)>(&::MA::Flora::CullingGrid::RemoveInstancesFromBucket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814a55d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetDataChunkIndexForInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ChunkIndex (*)(int32_t)>(&::MA::Flora::CullingGrid::GetDataChunkIndexForInstance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814a33c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetDataChunkIndexForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetDataInstanceInChunkForInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInChunk (*)(int32_t)>(&::MA::Flora::CullingGrid::GetDataInstanceInChunkForInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetDataInstanceInChunkForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetBatchOffsetForInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::MA::Flora::CullingGrid::GetBatchOffsetForInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a3130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetBatchOffsetForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FreeIndirectPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::FreeIndirectPage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a30c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FreeIndirectPage", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AllocateIndirectPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::AllocateIndirectPage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18149d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AllocateIndirectPage", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetOrCreateCellBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellBucketIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::CellIndex)>(&::MA::Flora::CullingGrid::GetOrCreateCellBucket)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814a38b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateCellBucket", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.FreeCellBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex)>(&::MA::Flora::CullingGrid::FreeCellBucket)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814a2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FreeCellBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.BucketAddChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::BucketAddChunk)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18149d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketAddChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.BucketRemoveChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::BucketRemoveChunk)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18149d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketRemoveChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.BucketAddChunkToFreeSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::BucketAddChunkToFreeSlots)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18149d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketAddChunkToFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.BucketRemoveChunkWithFreeSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::BucketRemoveChunkWithFreeSlots)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18149d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketRemoveChunkWithFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.SetChunkInfoDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::SetChunkInfoDirty)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814a66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkInfoDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.SetChunkFlagsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::SetChunkFlagsDirty)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814a65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkFlagsDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.SetChunkAttributesDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::SetChunkAttributesDirty)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814a6440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkAttributesDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.UpdateChunkBatchDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::BatchDomainIndex)>(&::MA::Flora::CullingGrid::UpdateChunkBatchDomain)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a6870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateChunkBatchDomain", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetChunkBatchDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchDomainIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::GetChunkBatchDomain)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814a31a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkBatchDomain", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AllocateChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingChunkIndex (::MA::Flora::CullingGrid::*)()>(&::MA::Flora::CullingGrid::AllocateChunk)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18149d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AllocateChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetInstanceIndicesInChunkRW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::GetInstanceIndicesInChunkRW)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetInstanceIndicesInChunkRW", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetInstanceIndicesInChunkRO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::GetInstanceIndicesInChunkRO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149b720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetInstanceIndicesInChunkRO", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetChunkFlagChannelRW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<uint64_t> (::MA::Flora::CullingGrid::*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::CullingFlagChannel)>(&::MA::Flora::CullingGrid::GetChunkFlagChannelRW)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkFlagChannelRW", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::CullingFlagChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CellAddChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::CellAddChunk)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18149d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellAddChunk", {}, {::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.CellRemoveChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::CellRemoveChunk)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18149dad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellRemoveChunk", {}, {::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetCleanChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingChunkIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex)>(&::MA::Flora::CullingGrid::GetCleanChunk)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814a3290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetCleanChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.ReleaseChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex)>(&::MA::Flora::CullingGrid::ReleaseChunk)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814a53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ReleaseChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetChunkWithFreeSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingChunkIndex (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex)>(&::MA::Flora::CullingGrid::GetChunkWithFreeSlots)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814a31d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkWithFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.SetChunkCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex, int32_t)>(&::MA::Flora::CullingGrid::SetChunkCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814a6520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkCount", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.GetFirstInstanceBatchInChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk (::MA::Flora::CullingGrid::*)(int32_t, int32_t)>(&::MA::Flora::CullingGrid::GetFirstInstanceBatchInChunk)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814a33f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetFirstInstanceBatchInChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AddInstancesToChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::AddInstancesToChunk)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18149cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RemoveInstancesFromChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk)>(&::MA::Flora::CullingGrid::RemoveInstancesFromChunk)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814a5610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RemoveInstancesFromChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CullingChunkIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::RemoveInstancesFromChunk)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a5880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AddInstancesToBucket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::CellIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::AddInstancesToBucket)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18149caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToBucket", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.AddInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(::MA::Flora::ArchetypeIndex, int32_t, int32_t)>(&::MA::Flora::CullingGrid::AddInstances)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x18149cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstances", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RemoveInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(int32_t, int32_t)>(&::MA::Flora::CullingGrid::RemoveInstances)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814a58d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstances", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingGrid.RemapInstanceIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingGrid::*)(int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::CullingGrid::RemapInstanceIndices)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814a5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemapInstanceIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingGrid::setStaticF_UpdateInstancesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateInstancesMarker", ::MA::Flora::CullingGrid>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGrid::getStaticF_UpdateInstancesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateInstancesMarker", ::MA::Flora::CullingGrid>();
}
inline void MA::Flora::CullingGrid::setStaticF_ScheduleUploadsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScheduleUploadsMarker", ::MA::Flora::CullingGrid>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGrid::getStaticF_ScheduleUploadsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScheduleUploadsMarker", ::MA::Flora::CullingGrid>();
}
inline void MA::Flora::CullingGrid::setStaticF_DispatchUploadsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "DispatchUploadsMarker", ::MA::Flora::CullingGrid>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingGrid::getStaticF_DispatchUploadsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "DispatchUploadsMarker", ::MA::Flora::CullingGrid>();
}
inline void MA::Flora::CullingGrid::setStaticF_MinCellCoord(::Unity::Mathematics::int3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::int3, "MinCellCoord", ::MA::Flora::CullingGrid>(std::forward<::Unity::Mathematics::int3>(value));
}
inline ::Unity::Mathematics::int3 MA::Flora::CullingGrid::getStaticF_MinCellCoord()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::int3, "MinCellCoord", ::MA::Flora::CullingGrid>();
}
inline void MA::Flora::CullingGrid::setStaticF_MaxCellCoord(::Unity::Mathematics::int3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::int3, "MaxCellCoord", ::MA::Flora::CullingGrid>(std::forward<::Unity::Mathematics::int3>(value));
}
inline ::Unity::Mathematics::int3 MA::Flora::CullingGrid::getStaticF_MaxCellCoord()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::int3, "MaxCellCoord", ::MA::Flora::CullingGrid>();
}
inline ::MA::Flora::CullingGrid_SourceFilterMode MA::Flora::CullingGrid::GetSourceFilterMode(::MA::Flora::FloraInstanceFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetSourceFilterMode", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingGrid_SourceFilterMode>(nullptr, ___internal_method, filter);
}
inline bool MA::Flora::CullingGrid::TryGetInstanceSourceIds(::MA::Flora::FloraInstanceHandle  instance, ::by_ref<::UnityEngine::EntityId>  identitySourceId, ::by_ref<::UnityEngine::EntityId>  renderSourceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"TryGetInstanceSourceIds", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::EntityId>>(), ::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance, identitySourceId, renderSourceId);
}
inline bool MA::Flora::CullingGrid::MatchesIdentitySource(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  identitySourceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesIdentitySource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance, identitySourceId);
}
inline bool MA::Flora::CullingGrid::MatchesRenderSource(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  renderSourceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesRenderSource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance, renderSourceId);
}
inline bool MA::Flora::CullingGrid::MatchesSourceFilter(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesSourceFilter", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance, filter, mode);
}
inline bool MA::Flora::CullingGrid::MatchesIdentitySources(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesIdentitySources", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance, identitySourceIds);
}
inline bool MA::Flora::CullingGrid::MatchesChunkFilter(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::FloraInstanceFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesChunkFilter", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, chunk, filter);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindCandidateChunksIntersectingSphere(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindCandidateChunksIntersectingSphere", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, filter, sphere, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindCandidateChunksIntersectingBox(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindCandidateChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, filter, testAABB, allocator);
}
inline bool MA::Flora::CullingGrid::ChunkHasMatchingSphereInstance(::MA::Flora::CullingChunkIndex  chunk, ::UnityEngine::BoundingSphere  sphere, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  filterMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingSphereInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, chunk, sphere, filter, filterMode);
}
inline bool MA::Flora::CullingGrid::ChunkHasMatchingSphereInstance(::MA::Flora::CullingChunkIndex  chunk, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingSphereInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, chunk, sphere, identitySourceIds);
}
inline bool MA::Flora::CullingGrid::ChunkHasMatchingBoxInstance(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::AABB  testAABB, ::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::CullingGrid_SourceFilterMode  filterMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingBoxInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::CullingGrid_SourceFilterMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, chunk, testAABB, filter, filterMode);
}
inline bool MA::Flora::CullingGrid::ChunkHasMatchingBoxInstance(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::AABB  testAABB, ::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>  identitySourceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ChunkHasMatchingBoxInstance", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::NativeParallelHashSet_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, chunk, testAABB, identitySourceIds);
}
inline bool MA::Flora::CullingGrid::MatchesTypeMask(::MA::Flora::InstanceTag  archetypeTags, ::MA::Flora::FloraInstanceTypeMask  typeMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MatchesTypeMask", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::FloraInstanceTypeMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, archetypeTags, typeMask);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::CullInstancesInSelectionPlanes(::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CullInstancesInSelectionPlanes", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, includeTags, excludeTags, planes, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, sphere, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingSphere(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, filter, sphere, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingSphere(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceEntityIds, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingSphere", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, sourceEntityIds, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, filter, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingSphereMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, prefabGameObjectIDs, sphere, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingBox(::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, testAABB, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingBox(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, filter, testAABB, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::FindChunksIntersectingBox(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceEntityIds, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindChunksIntersectingBox", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method, sourceEntityIds, testAABB, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingBox(::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBox", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, testAABB, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingBoxMatching(::MA::Flora::FloraInstanceFilter  filter, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBoxMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, filter, testAABB, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::CullingGrid::FindInstancesIntersectingBoxMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::MA::Flora::AABB  testAABB, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FindInstancesIntersectingBoxMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, prefabGameObjectIDs, testAABB, allocator);
}
inline void MA::Flora::CullingGrid::UpdateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>  instanceChunksToUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::ChunkIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceChunksToUpdate);
}
inline ::MA::Flora::PackedCullingChunkBatch MA::Flora::CullingGrid::UpdateChunkBatch(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateChunkBatch", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PackedCullingChunkBatch>(*this, ___internal_method, chunk);
}
inline void MA::Flora::CullingGrid::ScheduleUploads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::CullingGrid::ScheduleUploadsWithBurst(::MA::Flora::CullingGrid*  cullingGrid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploadsWithBurst", {}, {::i2c::type_of<::MA::Flora::CullingGrid*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingGrid);
}
inline void MA::Flora::CullingGrid::ScheduleUploadsInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ScheduleUploadsInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::CullingGrid::GrowBuffersIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GrowBuffersIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::CullingGrid::DispatchUploads(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DispatchUploads", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd);
}
inline int32_t MA::Flora::CullingGrid::CellLevelForSize(float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellLevelForSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline float_t MA::Flora::CullingGrid::CellSizeForLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellSizeForLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, level);
}
inline float_t MA::Flora::CullingGrid::RcpCellSizeForLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RcpCellSizeForLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, level);
}
inline ::Unity::Mathematics::int4 MA::Flora::CullingGrid::LocationForPosition(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationForPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, position, size);
}
inline ::Unity::Mathematics::int4 MA::Flora::CullingGrid::LocationForAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationForAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, center, extent);
}
inline ::Unity::Mathematics::float3 MA::Flora::CullingGrid::LocationPosition(::Unity::Mathematics::int4  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocationPosition", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, location);
}
inline ::Unity::Mathematics::int4 MA::Flora::CullingGrid::LocalToLevel(::Unity::Mathematics::int4  location, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"LocalToLevel", {}, {::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, location, level);
}
inline ::Unity::Mathematics::int4 MA::Flora::CullingGrid::CellToBlock(::Unity::Mathematics::int4  cell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellToBlock", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, cell);
}
inline ::Unity::Mathematics::int3 MA::Flora::CullingGrid::MinBlockCellCoord(::Unity::Mathematics::int4  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MinBlockCellCoord", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, block);
}
inline ::Unity::Mathematics::int3 MA::Flora::CullingGrid::MaxBlockCellCoord(::Unity::Mathematics::int4  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"MaxBlockCellCoord", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, block);
}
inline ::MA::Flora::NativeBitSet MA::Flora::CullingGrid::get_BlockAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation> MA::Flora::CullingGrid::get_BlockLocations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockLocations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::CullingGrid::get_CellAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::CullingGrid::get_CellInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> MA::Flora::CullingGrid::get_CellChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_CellChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::CullingGrid::get_ChunkAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::CullingGrid::get_ChunkCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex> MA::Flora::CullingGrid::get_ChunkCells()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCells", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex> MA::Flora::CullingGrid::get_ChunkArchetypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkArchetypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>>(*this, ___internal_method);
}
inline int32_t MA::Flora::CullingGrid::get_AllocatedChunkCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_AllocatedChunkCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> MA::Flora::CullingGrid::get_ChunkFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::CullingGrid::get_ChunkInstanceIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkInstanceIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_BlockDataBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_BlockDataBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_ChunkCellBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkCellBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_ChunkInfoBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkInfoBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_ChunkFlagBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkFlagBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_ChunkBatchBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkBatchBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_ChunkAttributeBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_ChunkAttributeBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::CullingGrid::get_IndirectOffsetBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_IndirectOffsetBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
inline ::MA::Flora::CullingGrid* MA::Flora::CullingGrid::get_Self()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_Self", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingGrid*>(*this, ___internal_method);
}
inline void MA::Flora::CullingGrid::Initialize(::MA::Flora::InstanceContext  instanceContext, ::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext, resources);
}
inline void MA::Flora::CullingGrid::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint32_t MA::Flora::CullingGrid::get_FrameVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"get_FrameVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void MA::Flora::CullingGrid::UpdateContentVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateContentVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::CellLocation MA::Flora::CullingGrid::GetLocationForAABB(::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetLocationForAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellLocation>(*this, ___internal_method, aabb);
}
inline void MA::Flora::CullingGrid::SetBlockDataDirty(::MA::Flora::BlockIndex  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetBlockDataDirty", {}, {::i2c::type_of<::MA::Flora::BlockIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, block);
}
inline ::MA::Flora::BlockIndex MA::Flora::CullingGrid::GetOrCreateBlock(::MA::Flora::BlockLocation  blockLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateBlock", {}, {::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BlockIndex>(*this, ___internal_method, blockLocation);
}
inline void MA::Flora::CullingGrid::DestroyBlock(::MA::Flora::BlockIndex  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DestroyBlock", {}, {::i2c::type_of<::MA::Flora::BlockIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, block);
}
inline ::MA::Flora::CellIndex MA::Flora::CullingGrid::GetOrCreateCell(::MA::Flora::CellLocation  cellLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateCell", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellIndex>(*this, ___internal_method, cellLocation);
}
inline void MA::Flora::CullingGrid::DestroyCell(::MA::Flora::CellIndex  cell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"DestroyCell", {}, {::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cell);
}
inline void MA::Flora::CullingGrid::AddInstancesToBucket(::MA::Flora::CellBucketIndex  bucket, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, instanceCount);
}
inline void MA::Flora::CullingGrid::RemoveInstancesFromBucket(::MA::Flora::CellBucketIndex  bucket, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, instanceCount);
}
inline ::MA::Flora::ChunkIndex MA::Flora::CullingGrid::GetDataChunkIndexForInstance(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetDataChunkIndexForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ChunkIndex>(nullptr, ___internal_method, instanceIndex);
}
inline ::MA::Flora::InstanceInChunk MA::Flora::CullingGrid::GetDataInstanceInChunkForInstance(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetDataInstanceInChunkForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInChunk>(nullptr, ___internal_method, instanceIndex);
}
inline int32_t MA::Flora::CullingGrid::GetBatchOffsetForInstance(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetBatchOffsetForInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instanceIndex);
}
inline void MA::Flora::CullingGrid::FreeIndirectPage(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FreeIndirectPage", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
inline int32_t MA::Flora::CullingGrid::AllocateIndirectPage(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AllocateIndirectPage", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, chunk);
}
inline ::MA::Flora::CellBucketIndex MA::Flora::CullingGrid::GetOrCreateCellBucket(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetOrCreateCellBucket", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellBucketIndex>(*this, ___internal_method, archetype, cell);
}
inline void MA::Flora::CullingGrid::FreeCellBucket(::MA::Flora::CellBucketIndex  bucket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"FreeCellBucket", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket);
}
inline void MA::Flora::CullingGrid::BucketAddChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketAddChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk);
}
inline void MA::Flora::CullingGrid::BucketRemoveChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketRemoveChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk);
}
inline void MA::Flora::CullingGrid::BucketAddChunkToFreeSlots(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketAddChunkToFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk);
}
inline void MA::Flora::CullingGrid::BucketRemoveChunkWithFreeSlots(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"BucketRemoveChunkWithFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk);
}
inline void MA::Flora::CullingGrid::SetChunkInfoDirty(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkInfoDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
inline void MA::Flora::CullingGrid::SetChunkFlagsDirty(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkFlagsDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
inline void MA::Flora::CullingGrid::SetChunkAttributesDirty(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkAttributesDirty", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
inline void MA::Flora::CullingGrid::UpdateChunkBatchDomain(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::BatchDomainIndex  batchDomainIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"UpdateChunkBatchDomain", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk, batchDomainIndex);
}
inline ::MA::Flora::BatchDomainIndex MA::Flora::CullingGrid::GetChunkBatchDomain(::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkBatchDomain", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchDomainIndex>(*this, ___internal_method, chunk);
}
inline ::MA::Flora::CullingChunkIndex MA::Flora::CullingGrid::AllocateChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AllocateChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingChunkIndex>(*this, ___internal_method);
}
inline int32_t* MA::Flora::CullingGrid::GetInstanceIndicesInChunkRW(::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetInstanceIndicesInChunkRW", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, chunk, indexInChunk, count);
}
inline int32_t* MA::Flora::CullingGrid::GetInstanceIndicesInChunkRO(::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetInstanceIndicesInChunkRO", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, chunk, indexInChunk, count);
}
inline ::by_ref<uint64_t> MA::Flora::CullingGrid::GetChunkFlagChannelRW(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::CullingFlagChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkFlagChannelRW", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::CullingFlagChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<uint64_t>>(*this, ___internal_method, chunk, channel);
}
inline void MA::Flora::CullingGrid::CellAddChunk(::MA::Flora::CellIndex  cell, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellAddChunk", {}, {::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cell, chunk);
}
inline void MA::Flora::CullingGrid::CellRemoveChunk(::MA::Flora::CellIndex  cell, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"CellRemoveChunk", {}, {::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cell, chunk);
}
inline ::MA::Flora::CullingChunkIndex MA::Flora::CullingGrid::GetCleanChunk(::MA::Flora::CellBucketIndex  bucket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetCleanChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingChunkIndex>(*this, ___internal_method, bucket);
}
inline void MA::Flora::CullingGrid::ReleaseChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"ReleaseChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk);
}
inline ::MA::Flora::CullingChunkIndex MA::Flora::CullingGrid::GetChunkWithFreeSlots(::MA::Flora::CellBucketIndex  bucket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetChunkWithFreeSlots", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingChunkIndex>(*this, ___internal_method, bucket);
}
inline void MA::Flora::CullingGrid::SetChunkCount(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  newCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"SetChunkCount", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk, newCount);
}
inline ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk MA::Flora::CullingGrid::GetFirstInstanceBatchInChunk(int32_t  instanceOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"GetFirstInstanceBatchInChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>(*this, ___internal_method, instanceOffset, count);
}
inline void MA::Flora::CullingGrid::AddInstancesToChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  instanceOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk, instanceOffset, count);
}
inline void MA::Flora::CullingGrid::RemoveInstancesFromChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingGrid_InstanceBatchInCullingChunk  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingGrid_InstanceBatchInCullingChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, batch);
}
inline void MA::Flora::CullingGrid::RemoveInstancesFromChunk(::MA::Flora::CellBucketIndex  bucket, ::MA::Flora::CullingChunkIndex  chunk, int32_t  indexInChunk, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstancesFromChunk", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bucket, chunk, indexInChunk, count);
}
inline void MA::Flora::CullingGrid::AddInstancesToBucket(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell, int32_t  instanceOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstancesToBucket", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, archetype, cell, instanceOffset, count);
}
inline void MA::Flora::CullingGrid::AddInstances(::MA::Flora::ArchetypeIndex  archetype, int32_t  instanceOffset, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"AddInstances", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, archetype, instanceOffset, instanceCount);
}
inline void MA::Flora::CullingGrid::RemoveInstances(int32_t  instanceOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemoveInstances", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceOffset, count);
}
inline void MA::Flora::CullingGrid::RemapInstanceIndices(int32_t  baseInstanceIndex, int32_t  srcIndex, int32_t  dstIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingGrid>(),
                        {"RemapInstanceIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, baseInstanceIndex, srcIndex, dstIndex, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::CullingGrid::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::CullingGrid::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RcpCellSizes", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextBlockIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockDataDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeBlocks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::BlockLocation,::MA::Flora::BlockIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedBlockIndex", ty: "::MA::Flora::BlockIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedBlockLocation", ty: "::MA::Flora::BlockLocation", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CellAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CellHeadersDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CellChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CellInstanceCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedCellIndex", ty: "::MA::Flora::CellIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedCellLocation", ty: "::MA::Flora::CellLocation", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextBucketIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeBuckets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CellBucketIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::CellBucketKey,::MA::Flora::CellBucketIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketLodCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketChunksWithFreeSlots", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedBucketIndex", ty: "::MA::Flora::CellBucketIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CachedBucketKey", ty: "::MA::Flora::CellBucketKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextCullingChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkDynamic", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkUncullable", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkInfoDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkFlagsDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkAttributesDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkBucket", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellBucketIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkCell", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkArchetype", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkBatch", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkBatchDomain", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndirectPageIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndexInCellList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndexInTemplateList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndexInBucketList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndexInBucketFreeSlotList", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IndirectInstanceOffsets", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeIndirectInstancePages", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContentVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContentVersionApplied", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContentVersionScheduled", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlockDataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkCellBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkInfoBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkFlagBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkBatchBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkAttributeBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IndirectOffsetBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreDispatchHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingBlockIndexUpdates", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingBlockDataUpdates", ty: "::Unity::Collections::NativeList_1<::MA::Flora::BlockData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingChunkUpdatePackets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkUpdatePacket>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingChunkFlagIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingChunkFlagUpdates", ty: "::Unity::Collections::NativeList_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingChunkAttributesUpdates", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueuedIndirectChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingIndirectPageUpdates", ty: "::Unity::Collections::NativeList_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingIndirectOffsetUpdates", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingGrid::CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  m_TemplateManager, ::Unity::Collections::NativeArray_1<float_t>  m_RcpCellSizes, int32_t  m_NextBlockIndex, ::MA::Flora::NativeBitSet  m_BlockAllocated, ::MA::Flora::NativeBitSet  m_BlockDataDirty, ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_FreeBlocks, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::BlockLocation,::MA::Flora::BlockIndex>  m_BlockHash, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  m_BlockLocations, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockData>  m_BlockData, ::MA::Flora::BlockIndex  m_CachedBlockIndex, ::MA::Flora::BlockLocation  m_CachedBlockLocation, ::MA::Flora::NativeBitSet  m_CellAllocated, ::MA::Flora::NativeBitSet  m_CellHeadersDirty, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CellChunks, ::Unity::Collections::NativeArray_1<int32_t>  m_CellInstanceCount, ::MA::Flora::CellIndex  m_CachedCellIndex, ::MA::Flora::CellLocation  m_CachedCellLocation, int32_t  m_NextBucketIndex, ::MA::Flora::NativeBitSet  m_BucketAllocated, ::Unity::Collections::NativeList_1<::MA::Flora::CellBucketIndex>  m_FreeBuckets, ::Unity::Collections::NativeParallelHashMap_2<::MA::Flora::CellBucketKey,::MA::Flora::CellBucketIndex>  m_BucketHash, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_BucketCells, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_BucketArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  m_BucketLodCounts, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_BucketChunksWithFreeSlots, ::MA::Flora::CellBucketIndex  m_CachedBucketIndex, ::MA::Flora::CellBucketKey  m_CachedBucketKey, int32_t  m_NextCullingChunkIndex, ::MA::Flora::NativeBitSet  m_ChunkAllocated, ::MA::Flora::NativeBitSet  m_ChunkDynamic, ::MA::Flora::NativeBitSet  m_ChunkUncullable, ::MA::Flora::NativeBitSet  m_ChunkInfoDirty, ::MA::Flora::NativeBitSet  m_ChunkFlagsDirty, ::MA::Flora::NativeBitSet  m_ChunkAttributesDirty, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_FreeChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CellBucketIndex>  m_ChunkBucket, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkCount, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  m_ChunkCell, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  m_ChunkArchetype, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedCullingChunkBatch>  m_ChunkBatch, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainIndex>  m_ChunkBatchDomain, ::Unity::Collections::NativeArray_1<uint64_t>  m_ChunkFlags, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndirectPageIndex, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInCellList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInTemplateList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkIndexInBucketFreeSlotList, ::Unity::Collections::NativeArray_1<int32_t>  m_ChunkInstanceIndices, ::Unity::Collections::NativeList_1<int32_t>  m_IndirectInstanceOffsets, ::Unity::Collections::NativeList_1<int32_t>  m_FreeIndirectInstancePages, uint32_t  m_ContentVersion, uint32_t  m_ContentVersionApplied, uint32_t  m_ContentVersionScheduled, ::MA::Flora::GraphicsBufferRef  m_BlockDataBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkCellBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkInfoBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkFlagBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkBatchBuffer, ::MA::Flora::GraphicsBufferRef  m_ChunkAttributeBuffer, ::MA::Flora::GraphicsBufferRef  m_IndirectOffsetBuffer, ::Unity::Jobs::JobHandle  m_PreDispatchHandle, ::Unity::Collections::NativeList_1<::MA::Flora::BlockIndex>  m_PendingBlockIndexUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::BlockData>  m_PendingBlockDataUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkUpdatePacket>  m_PendingChunkUpdatePackets, ::Unity::Collections::NativeList_1<int32_t>  m_PendingChunkFlagIndices, ::Unity::Collections::NativeList_1<uint64_t>  m_PendingChunkFlagUpdates, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int2>  m_PendingChunkAttributesUpdates, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  m_QueuedIndirectChunks, ::Unity::Collections::NativeList_1<uint32_t>  m_PendingIndirectPageUpdates, ::Unity::Collections::NativeList_1<int32_t>  m_PendingIndirectOffsetUpdates) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_InstanceBuffer = m_InstanceBuffer;
this->m_TemplateManager = m_TemplateManager;
this->m_RcpCellSizes = m_RcpCellSizes;
this->m_NextBlockIndex = m_NextBlockIndex;
this->m_BlockAllocated = m_BlockAllocated;
this->m_BlockDataDirty = m_BlockDataDirty;
this->m_FreeBlocks = m_FreeBlocks;
this->m_BlockHash = m_BlockHash;
this->m_BlockLocations = m_BlockLocations;
this->m_BlockData = m_BlockData;
this->m_CachedBlockIndex = m_CachedBlockIndex;
this->m_CachedBlockLocation = m_CachedBlockLocation;
this->m_CellAllocated = m_CellAllocated;
this->m_CellHeadersDirty = m_CellHeadersDirty;
this->m_CellChunks = m_CellChunks;
this->m_CellInstanceCount = m_CellInstanceCount;
this->m_CachedCellIndex = m_CachedCellIndex;
this->m_CachedCellLocation = m_CachedCellLocation;
this->m_NextBucketIndex = m_NextBucketIndex;
this->m_BucketAllocated = m_BucketAllocated;
this->m_FreeBuckets = m_FreeBuckets;
this->m_BucketHash = m_BucketHash;
this->m_BucketCells = m_BucketCells;
this->m_BucketArchetypes = m_BucketArchetypes;
this->m_BucketLodCounts = m_BucketLodCounts;
this->m_BucketChunks = m_BucketChunks;
this->m_BucketChunksWithFreeSlots = m_BucketChunksWithFreeSlots;
this->m_CachedBucketIndex = m_CachedBucketIndex;
this->m_CachedBucketKey = m_CachedBucketKey;
this->m_NextCullingChunkIndex = m_NextCullingChunkIndex;
this->m_ChunkAllocated = m_ChunkAllocated;
this->m_ChunkDynamic = m_ChunkDynamic;
this->m_ChunkUncullable = m_ChunkUncullable;
this->m_ChunkInfoDirty = m_ChunkInfoDirty;
this->m_ChunkFlagsDirty = m_ChunkFlagsDirty;
this->m_ChunkAttributesDirty = m_ChunkAttributesDirty;
this->m_FreeChunks = m_FreeChunks;
this->m_ChunkBucket = m_ChunkBucket;
this->m_ChunkCount = m_ChunkCount;
this->m_ChunkCell = m_ChunkCell;
this->m_ChunkArchetype = m_ChunkArchetype;
this->m_ChunkBatch = m_ChunkBatch;
this->m_ChunkBatchDomain = m_ChunkBatchDomain;
this->m_ChunkFlags = m_ChunkFlags;
this->m_ChunkIndirectPageIndex = m_ChunkIndirectPageIndex;
this->m_ChunkIndexInCellList = m_ChunkIndexInCellList;
this->m_ChunkIndexInTemplateList = m_ChunkIndexInTemplateList;
this->m_ChunkIndexInBucketList = m_ChunkIndexInBucketList;
this->m_ChunkIndexInBucketFreeSlotList = m_ChunkIndexInBucketFreeSlotList;
this->m_ChunkInstanceIndices = m_ChunkInstanceIndices;
this->m_IndirectInstanceOffsets = m_IndirectInstanceOffsets;
this->m_FreeIndirectInstancePages = m_FreeIndirectInstancePages;
this->m_ContentVersion = m_ContentVersion;
this->m_ContentVersionApplied = m_ContentVersionApplied;
this->m_ContentVersionScheduled = m_ContentVersionScheduled;
this->m_BlockDataBuffer = m_BlockDataBuffer;
this->m_ChunkCellBuffer = m_ChunkCellBuffer;
this->m_ChunkInfoBuffer = m_ChunkInfoBuffer;
this->m_ChunkFlagBuffer = m_ChunkFlagBuffer;
this->m_ChunkBatchBuffer = m_ChunkBatchBuffer;
this->m_ChunkAttributeBuffer = m_ChunkAttributeBuffer;
this->m_IndirectOffsetBuffer = m_IndirectOffsetBuffer;
this->m_PreDispatchHandle = m_PreDispatchHandle;
this->m_PendingBlockIndexUpdates = m_PendingBlockIndexUpdates;
this->m_PendingBlockDataUpdates = m_PendingBlockDataUpdates;
this->m_PendingChunkUpdatePackets = m_PendingChunkUpdatePackets;
this->m_PendingChunkFlagIndices = m_PendingChunkFlagIndices;
this->m_PendingChunkFlagUpdates = m_PendingChunkFlagUpdates;
this->m_PendingChunkAttributesUpdates = m_PendingChunkAttributesUpdates;
this->m_QueuedIndirectChunks = m_QueuedIndirectChunks;
this->m_PendingIndirectPageUpdates = m_PendingIndirectPageUpdates;
this->m_PendingIndirectOffsetUpdates = m_PendingIndirectOffsetUpdates;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingGrid::CullingGrid()   {
}
