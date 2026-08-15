#pragma once
// IWYU pragma private; include "MA/Flora/TerrainTreeManager.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__TreeInstance_impl.hpp"
#include "MA/Flora/zzzz__TerrainTreeManager_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_def.hpp"
#include "MA/Flora/zzzz__TerrainTreeManager_def.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::*)()>(&::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18150a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "LayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::TerrainTreeManager_BuildTreeIndicesJob(int32_t  LayerCount, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances, ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer) noexcept  {
this->LayerCount = LayerCount;
this->TreeInstances = TreeInstances;
this->TreeIndicesByLayer = TreeIndicesByLayer;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob::TerrainTreeManager_BuildTreeIndicesJob()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::*)(int32_t)>(&::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x18150a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::Execute(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreePrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "TransformsByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::TerrainTreeManager_BuildTreeTransformsJob(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  Size, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances, ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  TransformsByLayer) noexcept  {
this->Position = Position;
this->Size = Size;
this->TreePrototypes = TreePrototypes;
this->TreeInstances = TreeInstances;
this->TreeIndicesByLayer = TreeIndicesByLayer;
this->TransformsByLayer = TransformsByLayer;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob::TerrainTreeManager_BuildTreeTransformsJob()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(::MA::Flora::InstanceContext)>(&::MA::Flora::TerrainTreeManager::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181512b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)()>(&::MA::Flora::TerrainTreeManager::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181511b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.GetTreeInstanceHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::TerrainTreeManager::*)(int32_t)>(&::MA::Flora::TerrainTreeManager::GetTreeInstanceHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181511bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.GetTreeInstanceHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::TerrainTreeManager::*)(::Unity::Collections::Allocator)>(&::MA::Flora::TerrainTreeManager::GetTreeInstanceHandles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181511c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)()>(&::MA::Flora::TerrainTreeManager::SetDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181511d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::TerrainTreeManager::SetDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181511d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)()>(&::MA::Flora::TerrainTreeManager::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181511b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.ClearLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(int32_t)>(&::MA::Flora::TerrainTreeManager::ClearLayer)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181511820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"ClearLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.SetEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)()>(&::MA::Flora::TerrainTreeManager::SetEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181511da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(::by_ref<::MA::Flora::TerrainSnapshot>)>(&::MA::Flora::TerrainTreeManager::Update)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0x181512340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.UpdatePrototypeLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(::by_ref<::MA::Flora::TerrainSnapshot>, ::by_ref<::MA::Flora::TerrainTreePrototype>, int32_t)>(&::MA::Flora::TerrainTreeManager::UpdatePrototypeLayer)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x181511dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"UpdatePrototypeLayer", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainTreePrototype>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreeManager.InvalidateTreeInstanceMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreeManager::*)(::MA::Flora::NativeBuffer_1<int32_t>)>(&::MA::Flora::TerrainTreeManager::InvalidateTreeInstanceMappings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181511ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"InvalidateTreeInstanceMappings", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainTreeManager::setStaticF_UpdateMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateMarker", ::MA::Flora::TerrainTreeManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainTreeManager::getStaticF_UpdateMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateMarker", ::MA::Flora::TerrainTreeManager>();
}
inline void MA::Flora::TerrainTreeManager::_ctor(::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext);
}
inline void MA::Flora::TerrainTreeManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::TerrainTreeManager::GetTreeInstanceHandle(int32_t  treeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(*this, ___internal_method, treeIndex);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::TerrainTreeManager::GetTreeInstanceHandles(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, allocator);
}
inline void MA::Flora::TerrainTreeManager::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainTreeManager::SetDirty(::UnityEngine::TerrainChangedFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flags);
}
inline void MA::Flora::TerrainTreeManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainTreeManager::ClearLayer(int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"ClearLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layer);
}
inline void MA::Flora::TerrainTreeManager::SetEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"SetEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainTreeManager::Update(::by_ref<::MA::Flora::TerrainSnapshot>  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain);
}
inline void MA::Flora::TerrainTreeManager::UpdatePrototypeLayer(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::by_ref<::MA::Flora::TerrainTreePrototype>  treePrototype, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"UpdatePrototypeLayer", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSnapshot>>(), ::i2c::type_of<::by_ref<::MA::Flora::TerrainTreePrototype>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, treePrototype, layerIndex);
}
inline void MA::Flora::TerrainTreeManager::InvalidateTreeInstanceMappings(::MA::Flora::NativeBuffer_1<int32_t>  treeIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreeManager>(),
                        {"InvalidateTreeInstanceMappings", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, treeIndices);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainTreeManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainTreeManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TreeInstances", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TreePrototypes", ty: "::Unity::Collections::NativeList_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstancesByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalToWorldByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TreesChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Hidden", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainTreeManager::TerrainTreeManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  m_TreeInstances, ::Unity::Collections::NativeList_1<::MA::Flora::TerrainTreePrototype>  m_TreePrototypes, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_InstancesByLayer, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  m_LocalToWorldByLayer, ::MA::Flora::NativeBufferArray_1<int32_t>  m_TreeIndicesByLayer, bool  m_TreesChanged, bool  m_Hidden) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_TreeInstances = m_TreeInstances;
this->m_TreePrototypes = m_TreePrototypes;
this->m_InstancesByLayer = m_InstancesByLayer;
this->m_LocalToWorldByLayer = m_LocalToWorldByLayer;
this->m_TreeIndicesByLayer = m_TreeIndicesByLayer;
this->m_TreesChanged = m_TreesChanged;
this->m_Hidden = m_Hidden;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainTreeManager::TerrainTreeManager()   {
}
