#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailManager.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__IntProfilerCounter_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__ParallelBitArray_impl.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailLayer_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailManager_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailLayer_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailManager_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_def.hpp"
#include "MA/Flora/zzzz__TerrainSystemSettings_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
// Ctor Parameters [CppParam { name: "PatchesLoaded", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchesUnloaded", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchesRebuilt", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstancesCreated", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstancesDestroyed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstancesUpdated", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StructuralApplyPhases", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats::TerrainDetailManager_DetailStreamingFrameStats(int32_t  PatchesLoaded, int32_t  PatchesUnloaded, int32_t  PatchesRebuilt, int32_t  InstancesCreated, int32_t  InstancesDestroyed, int32_t  InstancesUpdated, int32_t  StructuralApplyPhases) noexcept  {
this->PatchesLoaded = PatchesLoaded;
this->PatchesUnloaded = PatchesUnloaded;
this->PatchesRebuilt = PatchesRebuilt;
this->InstancesCreated = InstancesCreated;
this->InstancesDestroyed = InstancesDestroyed;
this->InstancesUpdated = InstancesUpdated;
this->StructuralApplyPhases = StructuralApplyPhases;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats::TerrainDetailManager_DetailStreamingFrameStats()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager_RasterizeSpheresJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager_RasterizeSpheresJob::*)(int32_t)>(&::MA::Flora::TerrainDetailManager_RasterizeSpheresJob::Execute)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18150c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_RasterizeSpheresJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager_RasterizeSpheresJob.CircleIntersectsAABB2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2, float_t, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::MA::Flora::TerrainDetailManager_RasterizeSpheresJob::CircleIntersectsAABB2D)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181509e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_RasterizeSpheresJob>(),
                        {"CircleIntersectsAABB2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailManager_RasterizeSpheresJob::Execute(int32_t  sphereIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_RasterizeSpheresJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sphereIndex);
}
inline bool MA::Flora::TerrainDetailManager_RasterizeSpheresJob::CircleIntersectsAABB2D(::Unity::Mathematics::float2  center, float_t  radiusSq, ::Unity::Mathematics::float2  min, ::Unity::Mathematics::float2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_RasterizeSpheresJob>(),
                        {"CircleIntersectsAABB2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, radiusSq, min, max);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::TerrainDetailManager_RasterizeSpheresJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::TerrainDetailManager_RasterizeSpheresJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TerrainOrigin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchSizeXZ", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchCountPerEdge", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StreamingSpheres", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchesInRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailManager_RasterizeSpheresJob::TerrainDetailManager_RasterizeSpheresJob(::Unity::Mathematics::float3  TerrainOrigin, ::Unity::Mathematics::float2  PatchSizeXZ, int32_t  PatchCountPerEdge, float_t  DetailDistance, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  StreamingSpheres, ::MA::Flora::ParallelBitArray  PatchesInRange) noexcept  {
this->TerrainOrigin = TerrainOrigin;
this->PatchSizeXZ = PatchSizeXZ;
this->PatchCountPerEdge = PatchCountPerEdge;
this->DetailDistance = DetailDistance;
this->StreamingSpheres = StreamingSpheres;
this->PatchesInRange = PatchesInRange;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailManager_RasterizeSpheresJob::TerrainDetailManager_RasterizeSpheresJob()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::*)(int32_t)>(&::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::Execute)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18150ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::Execute(int32_t  chunkIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunkIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "InRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "Loaded", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "ToLoad", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "ToUnload", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::TerrainDetailManager_ComputePatchLoadChangesJob(::MA::Flora::ParallelBitArray  InRange, ::MA::Flora::ParallelBitArray  Loaded, ::MA::Flora::ParallelBitArray  ToLoad, ::MA::Flora::ParallelBitArray  ToUnload) noexcept  {
this->InRange = InRange;
this->Loaded = Loaded;
this->ToLoad = ToLoad;
this->ToUnload = ToUnload;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailManager_ComputePatchLoadChangesJob::TerrainDetailManager_ComputePatchLoadChangesJob()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(::MA::Flora::InstanceContext)>(&::MA::Flora::TerrainDetailManager::_ctor)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1815086a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.EnsureProfilerCountersCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TerrainDetailManager::EnsureProfilerCountersCreated)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1815057d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"EnsureProfilerCountersCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.PublishProfilerCounters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::PublishProfilerCounters)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181505ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"PublishProfilerCounters", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.GetRemainingBudget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::TerrainDetailManager::GetRemainingBudget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181505a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetRemainingBudget", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ShouldDeferStructuralWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::TerrainDetailManager::ShouldDeferStructuralWork)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181507ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ShouldDeferStructuralWork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181505660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ResetTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::ResetTrackingState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181506080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ResetTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ClearQueuedPatchWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::ClearQueuedPatchWork)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815054c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ClearQueuedPatchWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.PatchHasDirtyLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailManager::*)(int32_t)>(&::MA::Flora::TerrainDetailManager::PatchHasDirtyLayers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181505c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"PatchHasDirtyLayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ClearPatchDirtyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(int32_t)>(&::MA::Flora::TerrainDetailManager::ClearPatchDirtyState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181505430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ClearPatchDirtyState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.EnqueuePatchForWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(int32_t)>(&::MA::Flora::TerrainDetailManager::EnqueuePatchForWork)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181505750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"EnqueuePatchForWork", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.MarkPatchDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(int32_t)>(&::MA::Flora::TerrainDetailManager::MarkPatchDirty)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181505ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"MarkPatchDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.QueueLoadedDirtyPatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::QueueLoadedDirtyPatches)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181505f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"QueueLoadedDirtyPatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.TryTakeNextDirtyLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailManager::*)(int32_t, ::by_ref<int32_t>)>(&::MA::Flora::TerrainDetailManager::TryTakeNextDirtyLayer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181507d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"TryTakeNextDirtyLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.CompactWorkQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::CompactWorkQueue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815055a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"CompactWorkQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.TryDequeuePatchForWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailManager::*)(::by_ref<int32_t>)>(&::MA::Flora::TerrainDetailManager::TryDequeuePatchForWork)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181507bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"TryDequeuePatchForWork", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.GetStructuralCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>)>(&::MA::Flora::TerrainDetailManager::GetStructuralCost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181505aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetStructuralCost", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.GetPatchInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailManager::*)(int32_t)>(&::MA::Flora::TerrainDetailManager::GetPatchInstanceCount)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181505970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetPatchInstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ApplyQueuedUnloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(::Unity::Collections::NativeList_1<int32_t>, ::by_ref<::MA::Flora::TerrainSystemSettings>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::ApplyQueuedUnloads)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x181504df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ApplyQueuedUnloads", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181505510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.SetEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::SetEmpty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181507b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.UpdateLayerPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>)>(&::MA::Flora::TerrainDetailManager::UpdateLayerPrototypes)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181507e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"UpdateLayerPrototypes", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ResizePatchesIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(int32_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::TerrainDetailManager::ResizePatchesIfNeeded)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181506170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ResizePatchesIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)()>(&::MA::Flora::TerrainDetailManager::SetDirty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181507a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::TerrainDetailManager::SetDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181507b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ApplyCreatesAndDestroysOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailManager::*)(::by_ref<::MA::Flora::TerrainDetailLayer>, ::by_ref<::MA::Flora::TerrainSnapshot>, ::Unity::Collections::NativeList_1<::MA::Flora::TerrainDetailLayer_PatchBuildResult>, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::ApplyCreatesAndDestroysOnMainThread)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x1815045b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ApplyCreatesAndDestroysOnMainThread", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ScheduleUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::TerrainDetailManager::*)(::by_ref<::MA::Flora::TerrainDetailLayer>, ::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::TerrainDetailManager::ScheduleUpdates)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181507820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleUpdates", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ScheduleUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::TerrainDetailManager::*)(::by_ref<::MA::Flora::TerrainSnapshot>, ::MA::Flora::TerrainSystemSettings, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::ScheduleUpdate)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x181507490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleUpdate", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.UpdateLoadAndUnloadQueues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailManager::*)(bool, ::by_ref<::MA::Flora::TerrainSystemSettings>, ::Unity::Collections::NativeList_1<int32_t>, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::UpdateLoadAndUnloadQueues)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1815080e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"UpdateLoadAndUnloadQueues", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ScheduleQueuedPatchWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::TerrainDetailManager::*)(::by_ref<::MA::Flora::TerrainSnapshot>, bool, ::by_ref<::MA::Flora::TerrainSystemSettings>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::Unity::Collections::NativeList_1<int32_t>, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>)>(&::MA::Flora::TerrainDetailManager::ScheduleQueuedPatchWork)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x181506930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleQueuedPatchWork", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailManager.ScheduleMarkPatchesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::TerrainDetailManager::*)(::by_ref<::MA::Flora::TerrainSnapshot>)>(&::MA::Flora::TerrainDetailManager::ScheduleMarkPatchesInRange)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x181506470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleMarkPatchesInRange", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailManager::setStaticF_ComputeDetailTransformsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ComputeDetailTransformsMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_ComputeDetailTransformsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ComputeDetailTransformsMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_SampleTerrainNormalsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "SampleTerrainNormalsMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_SampleTerrainNormalsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "SampleTerrainNormalsMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_UpdateMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_UpdateMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_UpdateLoadedPatchesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateLoadedPatchesMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_UpdateLoadedPatchesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateLoadedPatchesMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_MarkPatchesInRangeMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkPatchesInRangeMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_MarkPatchesInRangeMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkPatchesInRangeMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_BuildWaitMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "BuildWaitMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_BuildWaitMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "BuildWaitMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_ApplyDestroysMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ApplyDestroysMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_ApplyDestroysMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ApplyDestroysMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_ApplyCreatesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ApplyCreatesMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_ApplyCreatesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ApplyCreatesMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_ScheduleLocalToWorldUpdatesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScheduleLocalToWorldUpdatesMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_ScheduleLocalToWorldUpdatesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScheduleLocalToWorldUpdatesMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_ApplyStructuralPhaseMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ApplyStructuralPhaseMarker", ::MA::Flora::TerrainDetailManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainDetailManager::getStaticF_ApplyStructuralPhaseMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ApplyStructuralPhaseMarker", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_PatchesLoadedCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesLoadedCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_PatchesLoadedCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesLoadedCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_PatchesUnloadedCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesUnloadedCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_PatchesUnloadedCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesUnloadedCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_PatchesRebuiltCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesRebuiltCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_PatchesRebuiltCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_PatchesRebuiltCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_InstancesCreatedCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesCreatedCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_InstancesCreatedCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesCreatedCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_InstancesDestroyedCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesDestroyedCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_InstancesDestroyedCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesDestroyedCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_InstancesUpdatedCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesUpdatedCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_InstancesUpdatedCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_InstancesUpdatedCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::setStaticF_s_StructuralApplyPhaseCounter(::MA::Flora::IntProfilerCounter  value)  {
::cordl_internals::setStaticField<::MA::Flora::IntProfilerCounter, "s_StructuralApplyPhaseCounter", ::MA::Flora::TerrainDetailManager>(std::forward<::MA::Flora::IntProfilerCounter>(value));
}
inline ::MA::Flora::IntProfilerCounter MA::Flora::TerrainDetailManager::getStaticF_s_StructuralApplyPhaseCounter()  {
return ::cordl_internals::getStaticField<::MA::Flora::IntProfilerCounter, "s_StructuralApplyPhaseCounter", ::MA::Flora::TerrainDetailManager>();
}
inline void MA::Flora::TerrainDetailManager::_ctor(::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext);
}
inline void MA::Flora::TerrainDetailManager::EnsureProfilerCountersCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"EnsureProfilerCountersCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::PublishProfilerCounters(::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"PublishProfilerCounters", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stats);
}
inline int32_t MA::Flora::TerrainDetailManager::GetRemainingBudget(int32_t  budgetPerFrame, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetRemainingBudget", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, budgetPerFrame, usedCount);
}
inline bool MA::Flora::TerrainDetailManager::ShouldDeferStructuralWork(int32_t  structuralBudgetPerFrame, int32_t  remainingStructuralBudgetForBuild, int32_t  structuralCost, int32_t  structuralInstancesUsed, int32_t  scheduledStructuralCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ShouldDeferStructuralWork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, structuralBudgetPerFrame, remainingStructuralBudgetForBuild, structuralCost, structuralInstancesUsed, scheduledStructuralCost);
}
inline void MA::Flora::TerrainDetailManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::ResetTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ResetTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::ClearQueuedPatchWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ClearQueuedPatchWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::TerrainDetailManager::PatchHasDirtyLayers(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"PatchHasDirtyLayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailManager::ClearPatchDirtyState(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ClearPatchDirtyState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailManager::EnqueuePatchForWork(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"EnqueuePatchForWork", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailManager::MarkPatchDirty(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"MarkPatchDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailManager::QueueLoadedDirtyPatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"QueueLoadedDirtyPatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::TerrainDetailManager::TryTakeNextDirtyLayer(int32_t  patchIndex, ::by_ref<int32_t>  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"TryTakeNextDirtyLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, patchIndex, layerIndex);
}
inline void MA::Flora::TerrainDetailManager::CompactWorkQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"CompactWorkQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::TerrainDetailManager::TryDequeuePatchForWork(::by_ref<int32_t>  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"TryDequeuePatchForWork", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, patchIndex);
}
inline int32_t MA::Flora::TerrainDetailManager::GetStructuralCost(::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetStructuralCost", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result);
}
inline int32_t MA::Flora::TerrainDetailManager::GetPatchInstanceCount(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"GetPatchInstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailManager::ApplyQueuedUnloads(::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ApplyQueuedUnloads", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchesToUnload, settings, unloadedCells, structuralInstancesUsed, stats);
}
inline void MA::Flora::TerrainDetailManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::SetEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::UpdateLayerPrototypes(::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>  prototypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"UpdateLayerPrototypes", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prototypes);
}
inline void MA::Flora::TerrainDetailManager::ResizePatchesIfNeeded(int32_t  patchCountPerEdge, ::Unity::Mathematics::float3  terrainPosition, ::Unity::Mathematics::float3  terrainSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ResizePatchesIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchCountPerEdge, terrainPosition, terrainSize);
}
inline void MA::Flora::TerrainDetailManager::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailManager::SetDirty(::UnityEngine::TerrainChangedFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flags);
}
inline int32_t MA::Flora::TerrainDetailManager::ApplyCreatesAndDestroysOnMainThread(::by_ref<::MA::Flora::TerrainDetailLayer>  layer, ::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::Unity::Collections::NativeList_1<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  patchResults, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ApplyCreatesAndDestroysOnMainThread", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, layer, terrain, patchResults, stats);
}
inline ::Unity::Jobs::JobHandle MA::Flora::TerrainDetailManager::ScheduleUpdates(::by_ref<::MA::Flora::TerrainDetailLayer>  layer, ::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>  result, ::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleUpdates", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailLayer_PatchBuildResult>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, layer, result, inputDeps);
}
inline ::Unity::Jobs::JobHandle MA::Flora::TerrainDetailManager::ScheduleUpdate(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::MA::Flora::TerrainSystemSettings  settings, ::by_ref<int32_t>  builtCells, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleUpdate", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, terrain, settings, builtCells, unloadedCells, structuralInstancesUsed, stats);
}
inline void MA::Flora::TerrainDetailManager::UpdateLoadAndUnloadQueues(bool  allowLoads, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"UpdateLoadAndUnloadQueues", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allowLoads, settings, patchesToUnload, stats);
}
inline ::Unity::Jobs::JobHandle MA::Flora::TerrainDetailManager::ScheduleQueuedPatchWork(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, bool  allowBuilds, ::by_ref<::MA::Flora::TerrainSystemSettings>  settings, ::by_ref<int32_t>  builtCells, ::by_ref<int32_t>  unloadedCells, ::by_ref<int32_t>  structuralInstancesUsed, ::Unity::Collections::NativeList_1<int32_t>  patchesToUnload, ::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleQueuedPatchWork", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailManager_DetailStreamingFrameStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, terrain, allowBuilds, settings, builtCells, unloadedCells, structuralInstancesUsed, patchesToUnload, stats);
}
inline ::Unity::Jobs::JobHandle MA::Flora::TerrainDetailManager::ScheduleMarkPatchesInRange(::by_ref<::MA::Flora::TerrainSnapshot>  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailManager>(),
                        {"ScheduleMarkPatchesInRange", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, terrain);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainDetailManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainDetailManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Layers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailLayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesInRange", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesLoaded", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesToLoad", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesToUnload", ty: "::MA::Flora::ParallelBitArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesOutOfRangeTime", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchNextLayerIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchesQueuedForWork", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WorkQueue", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WorkQueueHead", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PatchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ScheduledMarkInRangeJob", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WasWithinDetailsRange", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Hidden", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailManager::TerrainDetailManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailLayer>  m_Layers, ::MA::Flora::ParallelBitArray  m_PatchesInRange, ::MA::Flora::ParallelBitArray  m_PatchesLoaded, ::MA::Flora::ParallelBitArray  m_PatchesToLoad, ::MA::Flora::ParallelBitArray  m_PatchesToUnload, ::Unity::Collections::NativeArray_1<float_t>  m_PatchesOutOfRangeTime, ::Unity::Collections::NativeArray_1<int32_t>  m_PatchNextLayerIndex, ::MA::Flora::NativeBitSet  m_PatchesQueuedForWork, ::Unity::Collections::NativeList_1<int32_t>  m_WorkQueue, int32_t  m_WorkQueueHead, int32_t  m_PatchCount, bool  m_ScheduledMarkInRangeJob, bool  m_WasWithinDetailsRange, bool  m_Hidden) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_StreamingManager = m_StreamingManager;
this->m_Layers = m_Layers;
this->m_PatchesInRange = m_PatchesInRange;
this->m_PatchesLoaded = m_PatchesLoaded;
this->m_PatchesToLoad = m_PatchesToLoad;
this->m_PatchesToUnload = m_PatchesToUnload;
this->m_PatchesOutOfRangeTime = m_PatchesOutOfRangeTime;
this->m_PatchNextLayerIndex = m_PatchNextLayerIndex;
this->m_PatchesQueuedForWork = m_PatchesQueuedForWork;
this->m_WorkQueue = m_WorkQueue;
this->m_WorkQueueHead = m_WorkQueueHead;
this->m_PatchCount = m_PatchCount;
this->m_ScheduledMarkInRangeJob = m_ScheduledMarkInRangeJob;
this->m_WasWithinDetailsRange = m_WasWithinDetailsRange;
this->m_Hidden = m_Hidden;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailManager::TerrainDetailManager()   {
}
