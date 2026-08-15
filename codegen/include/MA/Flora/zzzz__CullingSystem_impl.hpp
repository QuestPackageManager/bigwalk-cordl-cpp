#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystem.hpp"
#include "MA/Flora/zzzz__AnimatedCrossFadeData_impl.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_impl.hpp"
#include "MA/Flora/zzzz__BlockLocation_impl.hpp"
#include "MA/Flora/zzzz__CellIndex_impl.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__CullingGrid_impl.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_impl.hpp"
#include "MA/Flora/zzzz__CullingScratchBuffers_impl.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawBatch_impl.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_impl.hpp"
#include "MA/Flora/zzzz__DrawManager_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_impl.hpp"
#include "MA/Flora/zzzz__DrawVisibilityMask_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_impl.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestHandles_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequest_impl.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__OccluderHandles_impl.hpp"
#include "MA/Flora/zzzz__OccluderParameters_impl.hpp"
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_impl.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_impl.hpp"
#include "MA/Flora/zzzz__TemplateManager_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "MA/Flora/zzzz__CullingSystem_def.hpp"
#include "MA/Flora/zzzz__AnimatedCrossFadeData_def.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_def.hpp"
#include "MA/Flora/zzzz__CullingSystemSetup_def.hpp"
#include "MA/Flora/zzzz__CullingSystem_def.hpp"
#include "MA/Flora/zzzz__FloraAdditionalCameraSettings_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "MA/Flora/zzzz__GridCullCounts_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingPass_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestParameters_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequest_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "MA/Flora/zzzz__OccluderParameters_def.hpp"
#include "MA/Flora/zzzz__OcclusionContext_def.hpp"
#include "MA/Flora/zzzz__OcclusionCuller_def.hpp"
#include "MA/Flora/zzzz__ReceiverPlanes_def.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.get_IsIncludeEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsIncludeEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsIncludeEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.get_IsExcludeEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsExcludeEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsExcludeEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.get_IsIncludeEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsIncludeEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsIncludeEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.get_IsExcludeEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsExcludeEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsExcludeEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.InstanceIncluded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)(int32_t)>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::InstanceIncluded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"InstanceIncluded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)()>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem_IncludeExcludeListFilter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::CullingSystem_IncludeExcludeListFilter::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::CullingSystem_IncludeExcludeListFilter::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsIncludeEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsIncludeEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsExcludeEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsExcludeEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsIncludeEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsIncludeEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::get_IsExcludeEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"get_IsExcludeEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CullingSystem_IncludeExcludeListFilter::InstanceIncluded(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"InstanceIncluded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instanceIndex);
}
inline void MA::Flora::CullingSystem_IncludeExcludeListFilter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle MA::Flora::CullingSystem_IncludeExcludeListFilter::Dispose(::Unity::Jobs::JobHandle  dependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, dependencies);
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_IncludeExcludeListFilter::CullingSystem_IncludeExcludeListFilter()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::*)(int32_t)>(&::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::Execute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bfc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "IncludeExcludeListFilter", ty: "::MA::Flora::CullingSystem_IncludeExcludeListFilter", modifiers: "", def_value: Some("{}") }, CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "IncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::CullingSystem_GatherIncludeExcludeBitsJob(::MA::Flora::CullingSystem_IncludeExcludeListFilter  IncludeExcludeListFilter, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  InstanceIndices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances) noexcept  {
this->IncludeExcludeListFilter = IncludeExcludeListFilter;
this->Chunks = Chunks;
this->ChunkCounts = ChunkCounts;
this->InstanceIndices = InstanceIndices;
this->InstanceHandles = InstanceHandles;
this->IncludedInstances = IncludedInstances;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_GatherIncludeExcludeBitsJob::CullingSystem_GatherIncludeExcludeBitsJob()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::*)(int32_t)>(&::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814bfca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "AuthoringEntityIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::CullingSystem_GatherVisibleAuthoringEntityIds(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  AuthoringEntityIds) noexcept  {
this->Chunks = Chunks;
this->ChunkCounts = ChunkCounts;
this->InstanceHandles = InstanceHandles;
this->AuthoringEntityIds = AuthoringEntityIds;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_GatherVisibleAuthoringEntityIds::CullingSystem_GatherVisibleAuthoringEntityIds()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::*)(int32_t)>(&::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814bd550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "FilteredSceneObjects", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "IncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::CullingSystem_FilterChunksByAuthoringEntityId(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<bool>  FilteredSceneObjects, ::Unity::Collections::NativeArray_1<uint64_t>  IncludedInstances) noexcept  {
this->Chunks = Chunks;
this->ChunkCounts = ChunkCounts;
this->FilteredSceneObjects = FilteredSceneObjects;
this->IncludedInstances = IncludedInstances;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_FilterChunksByAuthoringEntityId::CullingSystem_FilterChunksByAuthoringEntityId()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_SetupFrustumCullingInputs.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_SetupFrustumCullingInputs::*)()>(&::MA::Flora::CullingSystem_SetupFrustumCullingInputs::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814c0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_SetupFrustumCullingInputs>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_SetupFrustumCullingInputs::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_SetupFrustumCullingInputs>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_SetupFrustumCullingInputs::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_SetupFrustumCullingInputs::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "LODBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Context", ty: "::UnityEngine::Rendering::BatchCullingContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReceiverPlanes", ty: "::MA::Flora::ReceiverPlanes*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReceiverSphereCuller", ty: "::MA::Flora::ReceiverSphereCuller*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrustumPlaneCuller", ty: "::MA::Flora::FrustumPlaneCuller*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScreenRelativeMetric", ty: "float_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodSelectionConstant", ty: "float_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_SetupFrustumCullingInputs::CullingSystem_SetupFrustumCullingInputs(float_t  LODBias, float_t  MeshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext*  Context, ::MA::Flora::ReceiverPlanes*  ReceiverPlanes, ::MA::Flora::ReceiverSphereCuller*  ReceiverSphereCuller, ::MA::Flora::FrustumPlaneCuller*  FrustumPlaneCuller, float_t*  ScreenRelativeMetric, float_t*  MeshLodSelectionConstant) noexcept  {
this->LODBias = LODBias;
this->MeshLodThreshold = MeshLodThreshold;
this->Context = Context;
this->ReceiverPlanes = ReceiverPlanes;
this->ReceiverSphereCuller = ReceiverSphereCuller;
this->FrustumPlaneCuller = FrustumPlaneCuller;
this->ScreenRelativeMetric = ScreenRelativeMetric;
this->MeshLodSelectionConstant = MeshLodSelectionConstant;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_SetupFrustumCullingInputs::CullingSystem_SetupFrustumCullingInputs()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_CullGrid.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_CullGrid::*)()>(&::MA::Flora::CullingSystem_CullGrid::Execute)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x1814b0750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CullGrid>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_CullGrid::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CullGrid>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_CullGrid::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_CullGrid::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "FrustumPlanePackets", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrustumSplitInfos", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightFacingFrustumPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReceiverSplitInfos", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "WorldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionBuffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "Blocks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockLocations", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Cells", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "CellInstanceCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CellChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutCellVisibility", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutCullingChunks", ty: "::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutCullingCounts", ty: "::MA::Flora::GridCullCounts*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_CullGrid::CullingSystem_CullGrid(::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  FrustumPlanePackets, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  FrustumSplitInfos, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  LightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  ReceiverSplitInfos, ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation, ::System::IntPtr  OcclusionBuffer, ::MA::Flora::NativeBitSet  Blocks, ::Unity::Collections::NativeArray_1<::MA::Flora::BlockLocation>  BlockLocations, ::MA::Flora::NativeBitSet  Cells, ::Unity::Collections::NativeArray_1<int32_t>  CellInstanceCount, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CellChunks, ::Unity::Collections::NativeArray_1<uint8_t>  OutCellVisibility, ::Unity::Collections::NativeList_1<::MA::Flora::CullingChunkIndex>  OutCullingChunks, ::MA::Flora::GridCullCounts*  OutCullingCounts) noexcept  {
this->FrustumPlanePackets = FrustumPlanePackets;
this->FrustumSplitInfos = FrustumSplitInfos;
this->LightFacingFrustumPlanes = LightFacingFrustumPlanes;
this->ReceiverSplitInfos = ReceiverSplitInfos;
this->WorldToLightSpaceRotation = WorldToLightSpaceRotation;
this->OcclusionBuffer = OcclusionBuffer;
this->Blocks = Blocks;
this->BlockLocations = BlockLocations;
this->Cells = Cells;
this->CellInstanceCount = CellInstanceCount;
this->CellChunks = CellChunks;
this->OutCellVisibility = OutCellVisibility;
this->OutCullingChunks = OutCullingChunks;
this->OutCullingCounts = OutCullingCounts;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_CullGrid::CullingSystem_CullGrid()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_CullChunks.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_CullChunks::*)(int32_t)>(&::MA::Flora::CullingSystem_CullChunks::Execute)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814b04e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CullChunks>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_CullChunks::Execute(int32_t  chunkDrawIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CullChunks>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunkDrawIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_CullChunks::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_CullChunks::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CellVisibility", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Chunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCells", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkFlags", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_CullChunks::CullingSystem_CullChunks(::UnityEngine::Rendering::BatchCullingViewType  ViewType, ::MA::Flora::DrawBinConfig  BinConfig, uint32_t  CullingLayerMask, ::Unity::Collections::NativeArray_1<uint8_t>  CellVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  Chunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::CellIndex>  ChunkCells, ::Unity::Collections::NativeArray_1<uint64_t>  ChunkFlags, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility) noexcept  {
this->ViewType = ViewType;
this->BinConfig = BinConfig;
this->CullingLayerMask = CullingLayerMask;
this->CellVisibility = CellVisibility;
this->Chunks = Chunks;
this->ChunkCounts = ChunkCounts;
this->ChunkCells = ChunkCells;
this->ChunkFlags = ChunkFlags;
this->ChunkArchetypes = ChunkArchetypes;
this->ChunkVisibility = ChunkVisibility;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_CullChunks::CullingSystem_CullChunks()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::*)()>(&::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::Execute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814c0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "VisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleInstances", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateChunkStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExactCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::CullingSystem_ReduceVisibleChunksByTemplate(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  ExactCounts) noexcept  {
this->VisibleChunks = VisibleChunks;
this->ChunkCounts = ChunkCounts;
this->ChunkArchetypes = ChunkArchetypes;
this->ChunkVisibility = ChunkVisibility;
this->TemplateVisibleChunks = TemplateVisibleChunks;
this->TemplateVisibleInstances = TemplateVisibleInstances;
this->TemplateVisibility = TemplateVisibility;
this->TemplateChunkStateFlags = TemplateChunkStateFlags;
this->ExactCounts = ExactCounts;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_ReduceVisibleChunksByTemplate::CullingSystem_ReduceVisibleChunksByTemplate()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::*)()>(&::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::Execute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814b00a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::CullingSystem_ComputeTemplateChunkOffsets(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets) noexcept  {
this->Templates = Templates;
this->TemplateVisibleChunks = TemplateVisibleChunks;
this->TemplateDrawChunkOffsets = TemplateDrawChunkOffsets;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_ComputeTemplateChunkOffsets::CullingSystem_ComputeTemplateChunkOffsets()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::*)()>(&::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814c05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateChunkWriteCursors", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunkSourceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::CullingSystem_OrderVisibleChunksByTemplate(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  VisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  TemplateChunkWriteCursors, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices) noexcept  {
this->Templates = Templates;
this->TemplateDrawChunkOffsets = TemplateDrawChunkOffsets;
this->VisibleChunks = VisibleChunks;
this->ChunkVisibility = ChunkVisibility;
this->ChunkArchetypes = ChunkArchetypes;
this->TemplateChunkWriteCursors = TemplateChunkWriteCursors;
this->OrderedVisibleChunks = OrderedVisibleChunks;
this->OrderedVisibleChunkSourceIndices = OrderedVisibleChunkSourceIndices;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_OrderVisibleChunksByTemplate::CullingSystem_OrderVisibleChunksByTemplate()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_BuildLightmapPartitions.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_BuildLightmapPartitions::*)()>(&::MA::Flora::CullingSystem_BuildLightmapPartitions::Execute)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1814af700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_BuildLightmapPartitions>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_BuildLightmapPartitions::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_BuildLightmapPartitions>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_BuildLightmapPartitions::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_BuildLightmapPartitions::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunkLightmapPartitions", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_BuildLightmapPartitions::CullingSystem_BuildLightmapPartitions(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<int32_t>  ChunkCounts, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts) noexcept  {
this->Templates = Templates;
this->TemplateDrawChunkOffsets = TemplateDrawChunkOffsets;
this->TemplateVisibleChunks = TemplateVisibleChunks;
this->OrderedVisibleChunks = OrderedVisibleChunks;
this->ChunkArchetypes = ChunkArchetypes;
this->ChunkCounts = ChunkCounts;
this->OrderedVisibleChunkLightmapPartitions = OrderedVisibleChunkLightmapPartitions;
this->TemplateLightmapPartitionCounts = TemplateLightmapPartitionCounts;
this->TemplateLightmapIndices = TemplateLightmapIndices;
this->TemplateLightmapVisibleInstanceCounts = TemplateLightmapVisibleInstanceCounts;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_BuildLightmapPartitions::CullingSystem_BuildLightmapPartitions()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::*)()>(&::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::Execute)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1814b0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateChunkStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleInstances", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateEmittedStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::CullingSystem_CountDrawCommandsPerTemplate(::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateChunkStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstances, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts) noexcept  {
this->Templates = Templates;
this->DrawBatches = DrawBatches;
this->BatchIDs = BatchIDs;
this->DrawBatchRangeIndices = DrawBatchRangeIndices;
this->TemplateDrawIndicesPerLod = TemplateDrawIndicesPerLod;
this->TemplateVisibility = TemplateVisibility;
this->TemplateChunkStateFlags = TemplateChunkStateFlags;
this->TemplateVisibleInstances = TemplateVisibleInstances;
this->TemplateLightmapPartitionCounts = TemplateLightmapPartitionCounts;
this->TemplateStateMask = TemplateStateMask;
this->TemplateEmittedStateFlags = TemplateEmittedStateFlags;
this->TemplateDrawCommandCounts = TemplateDrawCommandCounts;
this->RangeCommandCounts = RangeCommandCounts;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_CountDrawCommandsPerTemplate::CullingSystem_CountDrawCommandsPerTemplate()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::*)()>(&::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::Execute)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x1814afb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InputCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawBinOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutputCounts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::CullingSystem_ComputeOutputOffsetsAndCounts(::MA::Flora::DrawBinConfig  BinConfig, ::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  InputCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  OutputCounts) noexcept  {
this->BinConfig = BinConfig;
this->Templates = Templates;
this->TemplateVisibility = TemplateVisibility;
this->TemplateStateMask = TemplateStateMask;
this->TemplateVisibleChunks = TemplateVisibleChunks;
this->TemplateDrawChunkOffsets = TemplateDrawChunkOffsets;
this->TemplateLightmapPartitionCounts = TemplateLightmapPartitionCounts;
this->TemplateLightmapVisibleInstanceCounts = TemplateLightmapVisibleInstanceCounts;
this->TemplateDrawCommandCounts = TemplateDrawCommandCounts;
this->RangeCommandCounts = RangeCommandCounts;
this->InputCounts = InputCounts;
this->TemplateDrawBinOffsets = TemplateDrawBinOffsets;
this->TemplateDrawCommandOffsets = TemplateDrawCommandOffsets;
this->TemplateVisibleInstanceOffsets = TemplateVisibleInstanceOffsets;
this->RangeCommandOffsets = RangeCommandOffsets;
this->OutputCounts = OutputCounts;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_ComputeOutputOffsetsAndCounts::CullingSystem_ComputeOutputOffsetsAndCounts()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_ReorderIncludedInstanceBits.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_ReorderIncludedInstanceBits::*)(int32_t)>(&::MA::Flora::CullingSystem_ReorderIncludedInstanceBits::Execute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c0c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ReorderIncludedInstanceBits>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_ReorderIncludedInstanceBits::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_ReorderIncludedInstanceBits>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_ReorderIncludedInstanceBits::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_ReorderIncludedInstanceBits::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "OrderedVisibleChunkSourceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SourceIncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutputIncludedInstances", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_ReorderIncludedInstanceBits::CullingSystem_ReorderIncludedInstanceBits(::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkSourceIndices, ::Unity::Collections::NativeArray_1<uint64_t>  SourceIncludedInstances, ::Unity::Collections::NativeArray_1<uint64_t>  OutputIncludedInstances) noexcept  {
this->OrderedVisibleChunkSourceIndices = OrderedVisibleChunkSourceIndices;
this->SourceIncludedInstances = SourceIncludedInstances;
this->OutputIncludedInstances = OutputIncludedInstances;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_ReorderIncludedInstanceBits::CullingSystem_ReorderIncludedInstanceBits()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::*)(int32_t)>(&::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::Execute)> {
  constexpr static std::size_t size = 0xc50;
  constexpr static std::size_t addrs = 0x1814c17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::Execute(int32_t  templateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, templateIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibilityBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawArgsBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Templates", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBatches", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkArchetypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunks", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OrderedVisibleChunkLightmapPartitions", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibility", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateStateMask", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateEmittedStateFlags", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleChunks", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapPartitionCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateLightmapVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawChunkOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawBinOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingViewOutput", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::CullingSystem_WriteCullingOutputPerTemplate(::MA::Flora::DrawBinConfig  BinConfig, ::UnityEngine::GraphicsBufferHandle  VisibilityBufferHandle, ::UnityEngine::GraphicsBufferHandle  DrawArgsBufferHandle, ::MA::Flora::NativeBitSet  Templates, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawBatch>  DrawBatches, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  BatchIDs, ::Unity::Collections::NativeArray_1<::MA::Flora::ArchetypeIndex>  ChunkArchetypes, ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  OrderedVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  OrderedVisibleChunkLightmapPartitions, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  TemplateDrawIndicesPerLod, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  ChunkVisibility, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  TemplateVisibility, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateStateMask, ::Unity::Collections::NativeArray_1<uint8_t>  TemplateEmittedStateFlags, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleChunks, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapPartitionCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapIndices, ::Unity::Collections::NativeArray_1<int32_t>  TemplateLightmapVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawChunkOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawBinOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  TemplateVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput) noexcept  {
this->BinConfig = BinConfig;
this->VisibilityBufferHandle = VisibilityBufferHandle;
this->DrawArgsBufferHandle = DrawArgsBufferHandle;
this->Templates = Templates;
this->DrawBatches = DrawBatches;
this->BatchIDs = BatchIDs;
this->ChunkArchetypes = ChunkArchetypes;
this->OrderedVisibleChunks = OrderedVisibleChunks;
this->OrderedVisibleChunkLightmapPartitions = OrderedVisibleChunkLightmapPartitions;
this->TemplateDrawIndicesPerLod = TemplateDrawIndicesPerLod;
this->ChunkVisibility = ChunkVisibility;
this->TemplateVisibility = TemplateVisibility;
this->TemplateStateMask = TemplateStateMask;
this->TemplateEmittedStateFlags = TemplateEmittedStateFlags;
this->TemplateVisibleChunks = TemplateVisibleChunks;
this->TemplateLightmapPartitionCounts = TemplateLightmapPartitionCounts;
this->TemplateLightmapIndices = TemplateLightmapIndices;
this->TemplateLightmapVisibleInstanceCounts = TemplateLightmapVisibleInstanceCounts;
this->TemplateDrawCommandCounts = TemplateDrawCommandCounts;
this->TemplateDrawChunkOffsets = TemplateDrawChunkOffsets;
this->TemplateDrawBinOffsets = TemplateDrawBinOffsets;
this->TemplateDrawCommandOffsets = TemplateDrawCommandOffsets;
this->TemplateVisibleInstanceOffsets = TemplateVisibleInstanceOffsets;
this->CullingViewOutput = CullingViewOutput;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_WriteCullingOutputPerTemplate::CullingSystem_WriteCullingOutputPerTemplate()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_BuildDeterministicBatchCommands.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_BuildDeterministicBatchCommands::*)()>(&::MA::Flora::CullingSystem_BuildDeterministicBatchCommands::Execute)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814af3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_BuildDeterministicBatchCommands>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem_BuildDeterministicBatchCommands::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_BuildDeterministicBatchCommands>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::CullingSystem_BuildDeterministicBatchCommands::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::CullingSystem_BuildDeterministicBatchCommands::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "UsedDrawRangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingViewOutput", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBatchRangeIndices", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawRangeKeys", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCommandWriteCursors", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchCullingOutput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystem_BuildDeterministicBatchCommands::CullingSystem_BuildDeterministicBatchCommands(int32_t  UsedDrawRangeCount, ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingViewOutput, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeIndex>  DrawBatchRangeIndices, ::Unity::Collections::NativeArray_1<::MA::Flora::DrawRangeKey>  DrawRangeKeys, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandCounts, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandOffsets, ::Unity::Collections::NativeArray_1<int32_t>  RangeCommandWriteCursors, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>  BatchCullingOutput) noexcept  {
this->UsedDrawRangeCount = UsedDrawRangeCount;
this->CullingViewOutput = CullingViewOutput;
this->DrawBatchRangeIndices = DrawBatchRangeIndices;
this->DrawRangeKeys = DrawRangeKeys;
this->RangeCommandCounts = RangeCommandCounts;
this->RangeCommandOffsets = RangeCommandOffsets;
this->RangeCommandWriteCursors = RangeCommandWriteCursors;
this->BatchCullingOutput = BatchCullingOutput;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_BuildDeterministicBatchCommands::CullingSystem_BuildDeterministicBatchCommands()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_UpdateOccludersPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_UpdateOccludersPassData::*)()>(&::MA::Flora::CullingSystem_UpdateOccludersPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_UpdateOccludersPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::OcclusionCuller*& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_OcclusionCuller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr ::MA::Flora::OcclusionCuller* const& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_OcclusionCuller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr void MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionCuller = value;
}
constexpr ::MA::Flora::OccluderParameters& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::MA::Flora::OccluderParameters const& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_set_Parameters(::MA::Flora::OccluderParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_SubviewUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubviewUpdates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* const& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_SubviewUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubviewUpdates;
}
constexpr void MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_set_SubviewUpdates(::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubviewUpdates = value;
}
constexpr ::MA::Flora::OccluderHandles& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_Handles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handles;
}
constexpr ::MA::Flora::OccluderHandles const& MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_get_Handles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handles;
}
constexpr void MA::Flora::CullingSystem_UpdateOccludersPassData::__cordl_internal_set_Handles(::MA::Flora::OccluderHandles  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Handles = value;
}
inline void MA::Flora::CullingSystem_UpdateOccludersPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_UpdateOccludersPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem_UpdateOccludersPassData* MA::Flora::CullingSystem_UpdateOccludersPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem_UpdateOccludersPassData*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_UpdateOccludersPassData::CullingSystem_UpdateOccludersPassData()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::*)()>(&::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::OcclusionCuller*& MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_get_OcclusionCuller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr ::MA::Flora::OcclusionCuller* const& MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_get_OcclusionCuller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr void MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionCuller = value;
}
constexpr ::MA::Flora::OcclusionCullingDebugShaderVariables& MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_get_Constants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Constants;
}
constexpr ::MA::Flora::OcclusionCullingDebugShaderVariables const& MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_get_Constants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Constants;
}
constexpr void MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::__cordl_internal_set_Constants(::MA::Flora::OcclusionCullingDebugShaderVariables  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Constants = value;
}
inline void MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData* MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData::CullingSystem_OcclusionTestOverlaySetupPassData()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_OcclusionTestOverlayPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_OcclusionTestOverlayPassData::*)()>(&::MA::Flora::CullingSystem_OcclusionTestOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::OcclusionCuller*& MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_get_OcclusionCuller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr ::MA::Flora::OcclusionCuller* const& MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_get_OcclusionCuller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionCuller;
}
constexpr void MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_set_OcclusionCuller(::MA::Flora::OcclusionCuller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionCuller = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_get_DebugPyramid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPyramid;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_get_DebugPyramid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPyramid;
}
constexpr void MA::Flora::CullingSystem_OcclusionTestOverlayPassData::__cordl_internal_set_DebugPyramid(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugPyramid = value;
}
inline void MA::Flora::CullingSystem_OcclusionTestOverlayPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem_OcclusionTestOverlayPassData* MA::Flora::CullingSystem_OcclusionTestOverlayPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_OcclusionTestOverlayPassData::CullingSystem_OcclusionTestOverlayPassData()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_OcclusionOverlayPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_OcclusionOverlayPassData::*)()>(&::MA::Flora::CullingSystem_OcclusionOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_DepthPyramidTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DepthPyramidTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_DepthPyramidTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DepthPyramidTexture;
}
constexpr void MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_set_DepthPyramidTexture(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DepthPyramidTexture = value;
}
constexpr ::UnityEngine::Rect& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_Viewport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr ::UnityEngine::Rect const& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_Viewport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr void MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_set_Viewport(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Viewport = value;
}
constexpr int32_t& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_PassIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassIndex;
}
constexpr int32_t const& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_PassIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PassIndex;
}
constexpr void MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_set_PassIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PassIndex = value;
}
constexpr ::UnityEngine::Vector2& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_ValidRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidRange;
}
constexpr ::UnityEngine::Vector2 const& MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_get_ValidRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValidRange;
}
constexpr void MA::Flora::CullingSystem_OcclusionOverlayPassData::__cordl_internal_set_ValidRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValidRange = value;
}
inline void MA::Flora::CullingSystem_OcclusionOverlayPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_OcclusionOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem_OcclusionOverlayPassData* MA::Flora::CullingSystem_OcclusionOverlayPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem_OcclusionOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_OcclusionOverlayPassData::CullingSystem_OcclusionOverlayPassData()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem_DispatchIndirectCullingPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem_DispatchIndirectCullingPassData::*)()>(&::MA::Flora::CullingSystem_DispatchIndirectCullingPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::CullingSystem*& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_CullingSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingSystem;
}
constexpr ::MA::Flora::CullingSystem* const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_CullingSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingSystem;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_CullingSystem(::MA::Flora::CullingSystem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CullingSystem = value;
}
constexpr ::MA::Flora::IndirectCullingRequest*& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_Request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr ::MA::Flora::IndirectCullingRequest* const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_Request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_Request(::MA::Flora::IndirectCullingRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Request = value;
}
constexpr ::UnityEngine::Rendering::VolumeStack*& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_VolumeStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeStack;
}
constexpr ::UnityEngine::Rendering::VolumeStack* const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_VolumeStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeStack;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_VolumeStack(::UnityEngine::Rendering::VolumeStack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumeStack = value;
}
constexpr ::MA::Flora::IndirectCullingRequestHandles& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_DrawHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawHandles;
}
constexpr ::MA::Flora::IndirectCullingRequestHandles const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_DrawHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawHandles;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_DrawHandles(::MA::Flora::IndirectCullingRequestHandles  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawHandles = value;
}
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::UnityEngine::Rendering::OcclusionCullingSettings const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_Settings(::UnityEngine::Rendering::OcclusionCullingSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::MA::Flora::OccluderHandles& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_OccluderHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OccluderHandles;
}
constexpr ::MA::Flora::OccluderHandles const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_OccluderHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OccluderHandles;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_OccluderHandles(::MA::Flora::OccluderHandles  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OccluderHandles = value;
}
constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_OcclusionTestSubviewSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionTestSubviewSettings;
}
constexpr ::MA::Flora::InstanceOcclusionTestSubviewSettings const& MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_get_OcclusionTestSubviewSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionTestSubviewSettings;
}
constexpr void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::__cordl_internal_set_OcclusionTestSubviewSettings(::MA::Flora::InstanceOcclusionTestSubviewSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionTestSubviewSettings = value;
}
inline void MA::Flora::CullingSystem_DispatchIndirectCullingPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem_DispatchIndirectCullingPassData* MA::Flora::CullingSystem_DispatchIndirectCullingPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem_DispatchIndirectCullingPassData::CullingSystem_DispatchIndirectCullingPassData()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)()>(&::MA::Flora::CullingSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._BuildOcclusionDepth_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)(::MA::Flora::CullingSystem_UpdateOccludersPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::MA::Flora::CullingSystem___c::_BuildOcclusionDepth_b__24_0)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814c0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<BuildOcclusionDepth>b__24_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_UpdateOccludersPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._RenderOcclusionDebugTestOverlay_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::MA::Flora::CullingSystem___c::_RenderOcclusionDebugTestOverlay_b__27_0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814c1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugTestOverlay>b__27_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._RenderOcclusionDebugTestOverlay_b__27_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::MA::Flora::CullingSystem___c::_RenderOcclusionDebugTestOverlay_b__27_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814c15c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugTestOverlay>b__27_1", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._RenderOcclusionDebugDepthOverlay_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)(::MA::Flora::CullingSystem_OcclusionOverlayPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::MA::Flora::CullingSystem___c::_RenderOcclusionDebugDepthOverlay_b__29_0)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814c1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugDepthOverlay>b__29_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionOverlayPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem___c._DispatchCullingRequest_b__70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem___c::*)(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::MA::Flora::CullingSystem___c::_DispatchCullingRequest_b__70_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814c1170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<DispatchCullingRequest>b__70_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CullingSystem___c::setStaticF___9(::MA::Flora::CullingSystem___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::CullingSystem___c*, "<>9", ::MA::Flora::CullingSystem___c*>(std::forward<::MA::Flora::CullingSystem___c*>(value));
}
inline ::MA::Flora::CullingSystem___c* MA::Flora::CullingSystem___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::CullingSystem___c*, "<>9", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::setStaticF___9__24_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__24_0", ::MA::Flora::CullingSystem___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* MA::Flora::CullingSystem___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_UpdateOccludersPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__24_0", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::setStaticF___9__27_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__27_0", ::MA::Flora::CullingSystem___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* MA::Flora::CullingSystem___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__27_0", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::setStaticF___9__27_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__27_1", ::MA::Flora::CullingSystem___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* MA::Flora::CullingSystem___c::getStaticF___9__27_1()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__27_1", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::setStaticF___9__29_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__29_0", ::MA::Flora::CullingSystem___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* MA::Flora::CullingSystem___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_OcclusionOverlayPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__29_0", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::setStaticF___9__70_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__70_0", ::MA::Flora::CullingSystem___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* MA::Flora::CullingSystem___c::getStaticF___9__70_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*,::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__70_0", ::MA::Flora::CullingSystem___c*>();
}
inline void MA::Flora::CullingSystem___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::CullingSystem___c::_BuildOcclusionDepth_b__24_0(::MA::Flora::CullingSystem_UpdateOccludersPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<BuildOcclusionDepth>b__24_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_UpdateOccludersPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void MA::Flora::CullingSystem___c::_RenderOcclusionDebugTestOverlay_b__27_0(::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugTestOverlay>b__27_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionTestOverlaySetupPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void MA::Flora::CullingSystem___c::_RenderOcclusionDebugTestOverlay_b__27_1(::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugTestOverlay>b__27_1", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionTestOverlayPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void MA::Flora::CullingSystem___c::_RenderOcclusionDebugDepthOverlay_b__29_0(::MA::Flora::CullingSystem_OcclusionOverlayPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<RenderOcclusionDebugDepthOverlay>b__29_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_OcclusionOverlayPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void MA::Flora::CullingSystem___c::_DispatchCullingRequest_b__70_0(::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem___c*>(),
                        {"<DispatchCullingRequest>b__70_0", {}, {::i2c::type_of<::MA::Flora::CullingSystem_DispatchIndirectCullingPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::MA::Flora::CullingSystem___c* MA::Flora::CullingSystem___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem___c::CullingSystem___c()   {
}
//  Writing Method size for method: ::MA::Flora::CullingSystem.GetPickingIncludeExcludeListFilterForCurrentCullingCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingSystem_IncludeExcludeListFilter (::MA::Flora::CullingSystem::*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>)>(&::MA::Flora::CullingSystem::GetPickingIncludeExcludeListFilterForCurrentCullingCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"GetPickingIncludeExcludeListFilterForCurrentCullingCallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.PrepareOcclusionForCullingDispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderHandles (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>, ::MA::Flora::OccluderHandles)>(&::MA::Flora::CullingSystem::PrepareOcclusionForCullingDispatch)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"PrepareOcclusionForCullingDispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::MA::Flora::OccluderHandles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.UpdateOcclusionSilhouettePlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::EntityId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(&::MA::Flora::CullingSystem::UpdateOcclusionSilhouettePlanes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814b8f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateOcclusionSilhouettePlanes", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.PrepareOcclusionForCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::OcclusionContext>, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>)>(&::MA::Flora::CullingSystem::PrepareOcclusionForCulling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814b7e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"PrepareOcclusionForCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.BuildOcclusionDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::MA::Flora::OccluderParameters, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(&::MA::Flora::CullingSystem::BuildOcclusionDepth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814b2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.RenderOcclusionDebugTestOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId)>(&::MA::Flora::CullingSystem::RenderOcclusionDebugTestOverlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814b8380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.RenderOcclusionDebugDepthOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId, ::UnityEngine::Vector2, float_t)>(&::MA::Flora::CullingSystem::RenderOcclusionDebugDepthOverlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814b7e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugDepthOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.BuildOcclusionDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::MA::Flora::OccluderParameters, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(&::MA::Flora::CullingSystem::BuildOcclusionDepth)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x1814b28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.RenderOcclusionDebugTestOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::EntityId, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::MA::Flora::CullingSystem::RenderOcclusionDebugTestOverlay)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x1814b83b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.RenderOcclusionDebugDepthOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::EntityId, ::UnityEngine::Vector2, float_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::MA::Flora::CullingSystem::RenderOcclusionDebugDepthOverlay)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1814b7ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugDepthOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::MA::Flora::CullingSystemSetup, ::UnityEngine::Rendering::BatchRendererGroup*, ::MA::Flora::InstanceContext)>(&::MA::Flora::CullingSystem::_ctor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1814b92c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::CullingSystemSetup>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)()>(&::MA::Flora::CullingSystem::Dispose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814b45e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.UpdateAmbientLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(bool)>(&::MA::Flora::CullingSystem::UpdateAmbientLighting)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1814b8b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateAmbientLighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.BeginContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)()>(&::MA::Flora::CullingSystem::BeginContextRendering)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814b26e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BeginContextRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.BeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Camera*)>(&::MA::Flora::CullingSystem::BeginCameraRendering)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814b2570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.EndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Camera*)>(&::MA::Flora::CullingSystem::EndCameraRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814b4760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"EndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.EndContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)()>(&::MA::Flora::CullingSystem::EndContextRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814b4770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"EndContextRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.GetPerformBatchCullingProfilerMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (*)(::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::CullingSystem::GetPerformBatchCullingProfilerMarker)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814b4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"GetPerformBatchCullingProfilerMarker", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.OnPerformBatchCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(&::MA::Flora::CullingSystem::OnPerformBatchCulling)> {
  constexpr static std::size_t size = 0x3290;
  constexpr static std::size_t addrs = 0x1814b49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"OnPerformBatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.OnBatchCullingComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(int32_t)>(&::MA::Flora::CullingSystem::OnBatchCullingComplete)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814b4870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"OnBatchCullingComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.DispatchQueuedCullingRequests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::VolumeStack*, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(&::MA::Flora::CullingSystem::DispatchQueuedCullingRequests)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814b4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchQueuedCullingRequests", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.DispatchCullingRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::VolumeStack*, ::MA::Flora::IndirectCullingRequest*, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(&::MA::Flora::CullingSystem::DispatchCullingRequest)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1814b3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchCullingRequest", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::MA::Flora::IndirectCullingRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.DispatchQueuedCullingRequests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VolumeStack*, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(&::MA::Flora::CullingSystem::DispatchQueuedCullingRequests)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814b4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchQueuedCullingRequests", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.DispatchCullingRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VolumeStack*, ::MA::Flora::IndirectCullingRequest*, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>, ::MA::Flora::OccluderHandles)>(&::MA::Flora::CullingSystem::DispatchCullingRequest)> {
  constexpr static std::size_t size = 0xd50;
  constexpr static std::size_t addrs = 0x1814b3140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchCullingRequest", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::MA::Flora::IndirectCullingRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::MA::Flora::OccluderHandles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.AllocateIndirectCullingOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::IndirectCullingOutput (*)(int32_t, ::by_ref<::MA::Flora::CullingLayoutCounts>, bool)>(&::MA::Flora::CullingSystem::AllocateIndirectCullingOutput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814b2480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"AllocateIndirectCullingOutput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingLayoutCounts>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.AllocateCullingRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::IndirectCullingRequest* (::MA::Flora::CullingSystem::*)(::by_ref<::MA::Flora::IndirectCullingRequestParameters>)>(&::MA::Flora::CullingSystem::AllocateCullingRequest)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814b2300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"AllocateCullingRequest", {}, {::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingRequestParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.CleanupStaleCullingRequests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)()>(&::MA::Flora::CullingSystem::CleanupStaleCullingRequests)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814b3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"CleanupStaleCullingRequests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.UpdateViewAnimatedCrossFadeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AnimatedCrossFadeData (::MA::Flora::CullingSystem::*)(::MA::Flora::IndirectCullingRequest*)>(&::MA::Flora::CullingSystem::UpdateViewAnimatedCrossFadeData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814b8fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateViewAnimatedCrossFadeData", {}, {::i2c::type_of<::MA::Flora::IndirectCullingRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingSystem.CleanupStaleAnimatedCrossFadeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingSystem::*)()>(&::MA::Flora::CullingSystem::CleanupStaleAnimatedCrossFadeData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814b2fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"CleanupStaleAnimatedCrossFadeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>& MA::Flora::CullingSystem::__cordl_internal_get_m_InstanceManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceManager;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> const& MA::Flora::CullingSystem::__cordl_internal_get_m_InstanceManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceManager;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_InstanceManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceManager = value;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>& MA::Flora::CullingSystem::__cordl_internal_get_m_CullingGrid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGrid;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> const& MA::Flora::CullingSystem::__cordl_internal_get_m_CullingGrid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGrid;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingGrid = value;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>& MA::Flora::CullingSystem::__cordl_internal_get_m_DrawManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawManager;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager> const& MA::Flora::CullingSystem::__cordl_internal_get_m_DrawManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawManager;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_DrawManager(::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DrawManager = value;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>& MA::Flora::CullingSystem::__cordl_internal_get_m_TemplateManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemplateManager;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager> const& MA::Flora::CullingSystem::__cordl_internal_get_m_TemplateManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemplateManager;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_TemplateManager(::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TemplateManager = value;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>& MA::Flora::CullingSystem::__cordl_internal_get_m_InstanceBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceBuffer;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer> const& MA::Flora::CullingSystem::__cordl_internal_get_m_InstanceBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceBuffer;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_InstanceBuffer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceBuffer = value;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>& MA::Flora::CullingSystem::__cordl_internal_get_m_StreamingSphereManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingSphereManager;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager> const& MA::Flora::CullingSystem::__cordl_internal_get_m_StreamingSphereManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingSphereManager;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_StreamingSphereManager(::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StreamingSphereManager = value;
}
constexpr float_t& MA::Flora::CullingSystem::__cordl_internal_get_m_OriginalCrossFadeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalCrossFadeDuration;
}
constexpr float_t const& MA::Flora::CullingSystem::__cordl_internal_get_m_OriginalCrossFadeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalCrossFadeDuration;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_OriginalCrossFadeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalCrossFadeDuration = value;
}
constexpr ::Unity::Collections::NativeHashMap_2<int32_t,int32_t>& MA::Flora::CullingSystem::__cordl_internal_get_m_AnimatedCrossFadeViewMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimatedCrossFadeViewMap;
}
constexpr ::Unity::Collections::NativeHashMap_2<int32_t,int32_t> const& MA::Flora::CullingSystem::__cordl_internal_get_m_AnimatedCrossFadeViewMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimatedCrossFadeViewMap;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_AnimatedCrossFadeViewMap(::Unity::Collections::NativeHashMap_2<int32_t,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimatedCrossFadeViewMap = value;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>& MA::Flora::CullingSystem::__cordl_internal_get_m_AnimatedCrossFadeDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimatedCrossFadeDatas;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData> const& MA::Flora::CullingSystem::__cordl_internal_get_m_AnimatedCrossFadeDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimatedCrossFadeDatas;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_AnimatedCrossFadeDatas(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::AnimatedCrossFadeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimatedCrossFadeDatas = value;
}
constexpr ::MA::Flora::FloraRenderPipeline*& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPipeline;
}
constexpr ::MA::Flora::FloraRenderPipeline* const& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPipeline;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_RenderPipeline(::MA::Flora::FloraRenderPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderPipeline = value;
}
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2& MA::Flora::CullingSystem::__cordl_internal_get_m_CachedAmbientProbe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAmbientProbe;
}
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2 const& MA::Flora::CullingSystem::__cordl_internal_get_m_CachedAmbientProbe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedAmbientProbe;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_CachedAmbientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedAmbientProbe = value;
}
constexpr int32_t& MA::Flora::CullingSystem::__cordl_internal_get_m_FrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr int32_t const& MA::Flora::CullingSystem::__cordl_internal_get_m_FrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_FrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameIndex = value;
}
constexpr int32_t& MA::Flora::CullingSystem::__cordl_internal_get_m_NextCullingViewRequestID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextCullingViewRequestID;
}
constexpr int32_t const& MA::Flora::CullingSystem::__cordl_internal_get_m_NextCullingViewRequestID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextCullingViewRequestID;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_NextCullingViewRequestID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextCullingViewRequestID = value;
}
constexpr ::ArrayW<::MA::Flora::IndirectCullingRequest*>& MA::Flora::CullingSystem::__cordl_internal_get_m_CullingViewRequestPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingViewRequestPool;
}
constexpr ::ArrayW<::MA::Flora::IndirectCullingRequest*> const& MA::Flora::CullingSystem::__cordl_internal_get_m_CullingViewRequestPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingViewRequestPool;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_CullingViewRequestPool(::ArrayW<::MA::Flora::IndirectCullingRequest*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingViewRequestPool = value;
}
constexpr ::ArrayW<::MA::Flora::CullingScratchBuffers*>& MA::Flora::CullingSystem::__cordl_internal_get_m_ScratchBufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchBufferPool;
}
constexpr ::ArrayW<::MA::Flora::CullingScratchBuffers*> const& MA::Flora::CullingSystem::__cordl_internal_get_m_ScratchBufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchBufferPool;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_ScratchBufferPool(::ArrayW<::MA::Flora::CullingScratchBuffers*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScratchBufferPool = value;
}
constexpr ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*& MA::Flora::CullingSystem::__cordl_internal_get_m_QueuedCullingRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QueuedCullingRequests;
}
constexpr ::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>* const& MA::Flora::CullingSystem::__cordl_internal_get_m_QueuedCullingRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QueuedCullingRequests;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_QueuedCullingRequests(::System::Collections::Generic::Queue_1<::MA::Flora::IndirectCullingRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_QueuedCullingRequests = value;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*& MA::Flora::CullingSystem::__cordl_internal_get_m_ContextCullingRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextCullingRequests;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>* const& MA::Flora::CullingSystem::__cordl_internal_get_m_ContextCullingRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContextCullingRequests;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_ContextCullingRequests(::System::Collections::Generic::List_1<::MA::Flora::IndirectCullingRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContextCullingRequests = value;
}
constexpr ::UnityW<::MA::Flora::FloraAdditionalCameraSettings>& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraSettings;
}
constexpr ::UnityW<::MA::Flora::FloraAdditionalCameraSettings> const& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraSettings;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_RenderingCameraSettings(::UnityW<::MA::Flora::FloraAdditionalCameraSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderingCameraSettings = value;
}
constexpr bool& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraIsSceneView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraIsSceneView;
}
constexpr bool const& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraIsSceneView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraIsSceneView;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_RenderingCameraIsSceneView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderingCameraIsSceneView = value;
}
constexpr bool& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraWantsGPUOcclusionCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraWantsGPUOcclusionCulling;
}
constexpr bool const& MA::Flora::CullingSystem::__cordl_internal_get_m_RenderingCameraWantsGPUOcclusionCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderingCameraWantsGPUOcclusionCulling;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_RenderingCameraWantsGPUOcclusionCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderingCameraWantsGPUOcclusionCulling = value;
}
constexpr ::MA::Flora::OcclusionCuller*& MA::Flora::CullingSystem::__cordl_internal_get_m_OcclusionCuller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionCuller;
}
constexpr ::MA::Flora::OcclusionCuller* const& MA::Flora::CullingSystem::__cordl_internal_get_m_OcclusionCuller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionCuller;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_OcclusionCuller(::MA::Flora::OcclusionCuller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OcclusionCuller = value;
}
constexpr ::MA::Flora::IndirectCullingPass*& MA::Flora::CullingSystem::__cordl_internal_get_m_IndirectCullingPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingPass;
}
constexpr ::MA::Flora::IndirectCullingPass* const& MA::Flora::CullingSystem::__cordl_internal_get_m_IndirectCullingPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingPass;
}
constexpr void MA::Flora::CullingSystem::__cordl_internal_set_m_IndirectCullingPass(::MA::Flora::IndirectCullingPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndirectCullingPass = value;
}
inline void MA::Flora::CullingSystem::setStaticF_CameraPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "CameraPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_CameraPerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "CameraPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline void MA::Flora::CullingSystem::setStaticF_LightPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "LightPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_LightPerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "LightPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline void MA::Flora::CullingSystem::setStaticF_PickingPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "PickingPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_PickingPerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "PickingPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline void MA::Flora::CullingSystem::setStaticF_SelectionOutlinePerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "SelectionOutlinePerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_SelectionOutlinePerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "SelectionOutlinePerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline void MA::Flora::CullingSystem::setStaticF_FilteringPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "FilteringPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_FilteringPerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "FilteringPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline void MA::Flora::CullingSystem::setStaticF_UnknownPerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UnknownPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::getStaticF_UnknownPerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UnknownPerformBatchCullingMarker", ::MA::Flora::CullingSystem*>();
}
inline ::MA::Flora::CullingSystem_IncludeExcludeListFilter MA::Flora::CullingSystem::GetPickingIncludeExcludeListFilterForCurrentCullingCallback(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cullingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"GetPickingIncludeExcludeListFilterForCurrentCullingCallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingSystem_IncludeExcludeListFilter>(this, ___internal_method, cullingContext);
}
inline ::MA::Flora::OccluderHandles MA::Flora::CullingSystem::PrepareOcclusionForCullingDispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  occlusionTestSubviewSettings, ::MA::Flora::OccluderHandles  occluderHandles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"PrepareOcclusionForCullingDispatch", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::MA::Flora::OccluderHandles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderHandles>(this, ___internal_method, cmd, viewId, settings, occlusionTestSubviewSettings, occluderHandles);
}
inline void MA::Flora::CullingSystem::UpdateOcclusionSilhouettePlanes(::UnityEngine::EntityId  viewId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateOcclusionSilhouettePlanes", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewId, planes);
}
inline void MA::Flora::CullingSystem::PrepareOcclusionForCulling(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  testSubviewSettings, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"PrepareOcclusionForCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, occlusionContext, settings, testSubviewSettings, cs);
}
inline bool MA::Flora::CullingSystem::BuildOcclusionDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, input, subviews);
}
inline void MA::Flora::CullingSystem::RenderOcclusionDebugTestOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewId);
}
inline void MA::Flora::CullingSystem::RenderOcclusionDebugDepthOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugDepthOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewId, positionScreen, maxHeight);
}
inline bool MA::Flora::CullingSystem::BuildOcclusionDepth(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderGraph, input, subviews);
}
inline void MA::Flora::CullingSystem::RenderOcclusionDebugTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::EntityId  viewId, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, viewId, colorBuffer);
}
inline void MA::Flora::CullingSystem::RenderOcclusionDebugDepthOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  colorBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"RenderOcclusionDebugDepthOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, viewId, positionScreen, maxHeight, colorBuffer);
}
inline void MA::Flora::CullingSystem::_ctor(::MA::Flora::CullingSystemSetup  cullingSystemSetup, ::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::CullingSystemSetup>(), ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingSystemSetup, batchRendererGroup, instanceContext);
}
inline void MA::Flora::CullingSystem::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::CullingSystem::UpdateAmbientLighting(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateAmbientLighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline void MA::Flora::CullingSystem::BeginContextRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BeginContextRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::CullingSystem::BeginCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"BeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void MA::Flora::CullingSystem::EndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"EndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void MA::Flora::CullingSystem::EndContextRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"EndContextRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::CullingSystem::GetPerformBatchCullingProfilerMarker(::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"GetPerformBatchCullingProfilerMarker", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(nullptr, ___internal_method, viewType);
}
inline ::Unity::Jobs::JobHandle MA::Flora::CullingSystem::OnPerformBatchCulling(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cc, ::UnityEngine::Rendering::BatchCullingOutput  cullingOutput, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"OnPerformBatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, rendererGroup, cc, cullingOutput, userContext);
}
inline void MA::Flora::CullingSystem::OnBatchCullingComplete(int32_t  cullingRequestID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"OnBatchCullingComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingRequestID);
}
inline void MA::Flora::CullingSystem::DispatchQueuedCullingRequests(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchQueuedCullingRequests", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, volumeStack, settings, occlusionSubviews);
}
inline void MA::Flora::CullingSystem::DispatchCullingRequest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::MA::Flora::IndirectCullingRequest*  request, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchCullingRequest", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::MA::Flora::IndirectCullingRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, volumeStack, request, settings, occlusionSubviews);
}
inline void MA::Flora::CullingSystem::DispatchQueuedCullingRequests(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  indirectCullingSettings, ::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>  occlusionSubviews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchQueuedCullingRequests", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Rendering::SubviewOcclusionTest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, volumeStack, indirectCullingSettings, occlusionSubviews);
}
inline void MA::Flora::CullingSystem::DispatchCullingRequest(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::MA::Flora::IndirectCullingRequest*  request, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  occlusionTestSubviewSettings, ::MA::Flora::OccluderHandles  occluderHandles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"DispatchCullingRequest", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::MA::Flora::IndirectCullingRequest*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::MA::Flora::OccluderHandles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, volumeStack, request, settings, occlusionTestSubviewSettings, occluderHandles);
}
inline ::MA::Flora::IndirectCullingOutput MA::Flora::CullingSystem::AllocateIndirectCullingOutput(int32_t  drawTemplateCapacity, ::by_ref<::MA::Flora::CullingLayoutCounts>  counts, bool  allocateDebugBinCapacities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"AllocateIndirectCullingOutput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::CullingLayoutCounts>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::IndirectCullingOutput>(nullptr, ___internal_method, drawTemplateCapacity, counts, allocateDebugBinCapacities);
}
inline ::MA::Flora::IndirectCullingRequest* MA::Flora::CullingSystem::AllocateCullingRequest(::by_ref<::MA::Flora::IndirectCullingRequestParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"AllocateCullingRequest", {}, {::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingRequestParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::IndirectCullingRequest*>(this, ___internal_method, parameters);
}
inline void MA::Flora::CullingSystem::CleanupStaleCullingRequests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"CleanupStaleCullingRequests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::AnimatedCrossFadeData MA::Flora::CullingSystem::UpdateViewAnimatedCrossFadeData(::MA::Flora::IndirectCullingRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"UpdateViewAnimatedCrossFadeData", {}, {::i2c::type_of<::MA::Flora::IndirectCullingRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AnimatedCrossFadeData>(this, ___internal_method, request);
}
inline void MA::Flora::CullingSystem::CleanupStaleAnimatedCrossFadeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingSystem*>(),
                        {"CleanupStaleAnimatedCrossFadeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem* MA::Flora::CullingSystem::New_ctor(::MA::Flora::CullingSystemSetup  cullingSystemSetup, ::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::InstanceContext  instanceContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingSystem*>(cullingSystemSetup, batchRendererGroup, instanceContext));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::CullingSystem::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::CullingSystem::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystem::CullingSystem()   {
}
