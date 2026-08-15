#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailLayer.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBitSet_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailLayer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailLayer_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1814f6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob.FromToRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::FromToRotation)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814f6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob>(),
                        {"FromToRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline ::Unity::Mathematics::quaternion MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::FromToRotation(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob>(),
                        {"FromToRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TerrainPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignToGround", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrototypeScale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailTransforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailNormals", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::TerrainDetailLayer_BuildDetailInstancesJob(::Unity::Mathematics::float3  TerrainPosition, float_t  AlignToGround, ::Unity::Mathematics::float3  PrototypeScale, ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>  DetailTransforms, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  DetailNormals, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  InstanceLocalToWorld) noexcept  {
this->TerrainPosition = TerrainPosition;
this->AlignToGround = AlignToGround;
this->PrototypeScale = PrototypeScale;
this->DetailTransforms = DetailTransforms;
this->DetailNormals = DetailNormals;
this->InstanceLocalToWorld = InstanceLocalToWorld;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob::TerrainDetailLayer_BuildDetailInstancesJob()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer_PatchBuildResult.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailLayer_PatchBuildResult::*)()>(&::MA::Flora::TerrainDetailLayer_PatchBuildResult::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_PatchBuildResult>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer_PatchBuildResult.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer_PatchBuildResult::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::TerrainDetailLayer_PatchBuildResult::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181500b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_PatchBuildResult>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::TerrainDetailLayer_PatchBuildResult::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_PatchBuildResult>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailLayer_PatchBuildResult::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer_PatchBuildResult>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputDeps);
}
// Ctor Parameters [CppParam { name: "PatchIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RemoveCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AddCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UpdateCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BuildHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailLayer_PatchBuildResult::TerrainDetailLayer_PatchBuildResult(int32_t  PatchIndex, int32_t  RemoveCount, int32_t  AddCount, int32_t  UpdateCount, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  LocalToWorlds, ::Unity::Jobs::JobHandle  BuildHandle) noexcept  {
this->PatchIndex = PatchIndex;
this->RemoveCount = RemoveCount;
this->AddCount = AddCount;
this->UpdateCount = UpdateCount;
this->LocalToWorlds = LocalToWorlds;
this->BuildHandle = BuildHandle;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailLayer_PatchBuildResult::TerrainDetailLayer_PatchBuildResult()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>, int32_t)>(&::MA::Flora::TerrainDetailLayer::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181504290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)()>(&::MA::Flora::TerrainDetailLayer::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181503370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.SetEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)()>(&::MA::Flora::TerrainDetailLayer::SetEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181504090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)()>(&::MA::Flora::TerrainDetailLayer::Reset)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1815033c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)()>(&::MA::Flora::TerrainDetailLayer::SetDirty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181504040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer::SetDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181504070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.HasDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailLayer::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer::HasDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814680d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"HasDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.ClearDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer::ClearDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181503240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ClearDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.ResizePatchesIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailLayer::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer::ResizePatchesIfNeeded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815036c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ResizePatchesIfNeeded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.ClearPatchInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailLayer::*)(int32_t)>(&::MA::Flora::TerrainDetailLayer::ClearPatchInstances)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181503260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ClearPatchInstances", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.ScheduleBuildPatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TerrainDetailLayer_PatchBuildResult (::MA::Flora::TerrainDetailLayer::*)(::by_ref<::MA::Flora::TerrainSnapshot>, int32_t)>(&::MA::Flora::TerrainDetailLayer::ScheduleBuildPatch)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x181503750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ScheduleBuildPatch", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailLayer.SetPrototype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailLayer::*)(::MA::Flora::TerrainDetailPrototype)>(&::MA::Flora::TerrainDetailLayer::SetPrototype)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815040d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetPrototype", {}, {::i2c::type_of<::MA::Flora::TerrainDetailPrototype>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDetailLayer::_ctor(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  instanceManager, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceManager, layerIndex);
}
inline void MA::Flora::TerrainDetailLayer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailLayer::SetEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailLayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailLayer::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailLayer::SetDirty(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline bool MA::Flora::TerrainDetailLayer::HasDirty(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"HasDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, patchIndex);
}
inline void MA::Flora::TerrainDetailLayer::ClearDirty(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ClearDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline bool MA::Flora::TerrainDetailLayer::ResizePatchesIfNeeded(int32_t  patchesPerEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ResizePatchesIfNeeded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, patchesPerEdge);
}
inline void MA::Flora::TerrainDetailLayer::ClearPatchInstances(int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ClearPatchInstances", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, patchIndex);
}
inline ::MA::Flora::TerrainDetailLayer_PatchBuildResult MA::Flora::TerrainDetailLayer::ScheduleBuildPatch(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, int32_t  patchIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"ScheduleBuildPatch", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TerrainDetailLayer_PatchBuildResult>(*this, ___internal_method, terrain, patchIndex);
}
inline bool MA::Flora::TerrainDetailLayer::SetPrototype(::MA::Flora::TerrainDetailPrototype  newPrototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailLayer>(),
                        {"SetPrototype", {}, {::i2c::type_of<::MA::Flora::TerrainDetailPrototype>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, newPrototype);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainDetailLayer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainDetailLayer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "InstanceData", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Prototype", ty: "::MA::Flora::TerrainDetailPrototype", modifiers: "", def_value: Some("{}") }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchCountPerEdge", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstancesPerPatch", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PatchesDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailLayer::TerrainDetailLayer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  InstanceData, ::MA::Flora::TerrainDetailPrototype  Prototype, int32_t  LayerIndex, int32_t  PatchCountPerEdge, int32_t  PatchCount, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  InstancesPerPatch, ::MA::Flora::NativeBitSet  PatchesDirty) noexcept  {
this->InstanceData = InstanceData;
this->Prototype = Prototype;
this->LayerIndex = LayerIndex;
this->PatchCountPerEdge = PatchCountPerEdge;
this->PatchCount = PatchCount;
this->InstancesPerPatch = InstancesPerPatch;
this->PatchesDirty = PatchesDirty;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailLayer::TerrainDetailLayer()   {
}
