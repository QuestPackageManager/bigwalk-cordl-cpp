#pragma once
// IWYU pragma private; include "MA/Flora/InstanceRendererManager.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__InstanceRendererIndex_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "MA/Flora/zzzz__InstanceRendererManager_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceRenderer_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__InstanceRendererIndex_def.hpp"
#include "MA/Flora/zzzz__InstanceRendererManager_def.hpp"
#include "MA/InternalBridge/zzzz__UnityTransformDispatchData_def.hpp"
#include "MA/InternalBridge/zzzz__UnityTypeDispatchData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager_GetInstanceHandles.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager_GetInstanceHandles::*)(int32_t)>(&::MA::Flora::InstanceRendererManager_GetInstanceHandles::Execute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18147f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager_GetInstanceHandles>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::InstanceRendererManager_GetInstanceHandles::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager_GetInstanceHandles>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  MA::Flora::InstanceRendererManager_GetInstanceHandles::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* MA::Flora::InstanceRendererManager_GetInstanceHandles::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ChangedIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RendererIndexHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OutLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRendererManager_GetInstanceHandles::InstanceRendererManager_GetInstanceHandles(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  ChangedIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  LocalToWorldMatrices, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  RendererIndexHash, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  OutHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  OutLocalToWorlds) noexcept  {
this->ChangedIds = ChangedIds;
this->LocalToWorldMatrices = LocalToWorldMatrices;
this->RendererIndexHash = RendererIndexHash;
this->InstanceHandles = InstanceHandles;
this->OutHandles = OutHandles;
this->OutLocalToWorlds = OutLocalToWorlds;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRendererManager_GetInstanceHandles::InstanceRendererManager_GetInstanceHandles()   {
}
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager_RemoveInvalidHandles.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager_RemoveInvalidHandles::*)()>(&::MA::Flora::InstanceRendererManager_RemoveInvalidHandles::Execute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181486040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager_RemoveInvalidHandles>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::InstanceRendererManager_RemoveInvalidHandles::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager_RemoveInvalidHandles>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::InstanceRendererManager_RemoveInvalidHandles::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::InstanceRendererManager_RemoveInvalidHandles::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NewLength", ty: "int32_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRendererManager_RemoveInvalidHandles::InstanceRendererManager_RemoveInvalidHandles(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, int32_t*  NewLength) noexcept  {
this->InstanceHandles = InstanceHandles;
this->NewLength = NewLength;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRendererManager_RemoveInvalidHandles::InstanceRendererManager_RemoveInvalidHandles()   {
}
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::MA::Flora::InstanceContext)>(&::MA::Flora::InstanceRendererManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181484430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)()>(&::MA::Flora::InstanceRendererManager::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181483750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.GetGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::InstanceRendererManager::*)(::MA::Flora::InstanceRendererIndex)>(&::MA::Flora::InstanceRendererManager::GetGameObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814837d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetGameObject", {}, {::i2c::type_of<::MA::Flora::InstanceRendererIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.GetRenderSourceObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::MA::Flora::InstanceRendererManager::GetRenderSourceObjects)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181483aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetRenderSourceObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.GetInstanceRendererObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::MA::Flora::InstanceRendererManager::GetInstanceRendererObjects)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181483830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetInstanceRendererObjects", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.OnRendererChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::MA::InternalBridge::UnityTypeDispatchData)>(&::MA::Flora::InstanceRendererManager::OnRendererChanged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181483c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"OnRendererChanged", {}, {::i2c::type_of<::MA::InternalBridge::UnityTypeDispatchData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.OnTransformDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::by_ref<::MA::InternalBridge::UnityTransformDispatchData>)>(&::MA::Flora::InstanceRendererManager::OnTransformDataChanged)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181483de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"OnTransformDataChanged", {}, {::i2c::type_of<::by_ref<::MA::InternalBridge::UnityTransformDispatchData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceRendererManager::*)(::MA::Flora::FloraInstanceRenderer*)>(&::MA::Flora::InstanceRendererManager::Register)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181484120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Register", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRendererManager::*)(::MA::Flora::FloraInstanceRenderer*)>(&::MA::Flora::InstanceRendererManager::Destroy)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814835c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRendererManager.EntityIdAsIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::EntityId)>(&::MA::Flora::InstanceRendererManager::EntityIdAsIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181483790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"EntityIdAsIndex", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_InstanceManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceManager;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_InstanceManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceManager;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_InstanceManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceManager = value;
}
constexpr int32_t& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_NextIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextIndex;
}
constexpr int32_t const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_NextIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextIndex;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_NextIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextIndex = value;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_FreeRendererIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeRendererIndices;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex> const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_FreeRendererIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreeRendererIndices;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_FreeRendererIndices(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FreeRendererIndices = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_RendererIndexHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RendererIndexHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex> const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_RendererIndexHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RendererIndexHash;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_RendererIndexHash(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RendererIndexHash = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_Instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Instances;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_Instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Instances;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_Instances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Instances = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_EntityIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityIds;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const& MA::Flora::InstanceRendererManager::__cordl_internal_get_m_EntityIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntityIds;
}
constexpr void MA::Flora::InstanceRendererManager::__cordl_internal_set_m_EntityIds(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EntityIds = value;
}
inline void MA::Flora::InstanceRendererManager::_ctor(::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceContext);
}
inline void MA::Flora::InstanceRendererManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::InstanceRendererManager::GetGameObject(::MA::Flora::InstanceRendererIndex  instanceRendererIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetGameObject", {}, {::i2c::type_of<::MA::Flora::InstanceRendererIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instanceRendererIndex);
}
inline void MA::Flora::InstanceRendererManager::GetRenderSourceObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetRenderSourceObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sources);
}
inline void MA::Flora::InstanceRendererManager::GetInstanceRendererObjects(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"GetInstanceRendererObjects", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, sources);
}
inline void MA::Flora::InstanceRendererManager::OnRendererChanged(::MA::InternalBridge::UnityTypeDispatchData  rendererChangedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"OnRendererChanged", {}, {::i2c::type_of<::MA::InternalBridge::UnityTypeDispatchData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererChangedData);
}
inline void MA::Flora::InstanceRendererManager::OnTransformDataChanged(::by_ref<::MA::InternalBridge::UnityTransformDispatchData>  rendererTransformData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"OnTransformDataChanged", {}, {::i2c::type_of<::by_ref<::MA::InternalBridge::UnityTransformDispatchData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererTransformData);
}
inline bool MA::Flora::InstanceRendererManager::Register(::MA::Flora::FloraInstanceRenderer*  instanceRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Register", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceRenderer);
}
inline void MA::Flora::InstanceRendererManager::Destroy(::MA::Flora::FloraInstanceRenderer*  instanceRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceRenderer);
}
inline int32_t MA::Flora::InstanceRendererManager::EntityIdAsIndex(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRendererManager*>(),
                        {"EntityIdAsIndex", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, entityId);
}
inline ::MA::Flora::InstanceRendererManager* MA::Flora::InstanceRendererManager::New_ctor(::MA::Flora::InstanceContext  instanceContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::InstanceRendererManager*>(instanceContext));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::InstanceRendererManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::InstanceRendererManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRendererManager::InstanceRendererManager()   {
}
