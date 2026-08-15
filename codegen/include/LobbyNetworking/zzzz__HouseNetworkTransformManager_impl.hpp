#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransformManager.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransformManager_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransformManager_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager_TransformData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager_TransformData::*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager_TransformData::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803d1000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager_TransformData>(),
                        {".ctor", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void LobbyNetworking::HouseNetworkTransformManager_TransformData::_ctor(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager_TransformData>(),
                        {".ctor", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, networkTransform);
}
// Ctor Parameters [CppParam { name: "networkTransform", ty: "::UnityW<::LobbyNetworking::HouseNetworkTransform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "networkPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "networkRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "isAwake", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::LobbyNetworking::HouseNetworkTransformManager_TransformData::HouseNetworkTransformManager_TransformData(::UnityW<::LobbyNetworking::HouseNetworkTransform>  networkTransform, ::UnityW<::UnityEngine::Transform>  transform, ::Unity::Mathematics::float3  networkPosition, ::Unity::Mathematics::quaternion  networkRotation, bool  isAwake) noexcept  {
this->networkTransform = networkTransform;
this->transform = transform;
this->networkPosition = networkPosition;
this->networkRotation = networkRotation;
this->isAwake = isAwake;
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransformManager_TransformData::HouseNetworkTransformManager_TransformData()   {
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::LobbyNetworking::HouseNetworkTransformManager_TransformJobData::HouseNetworkTransformManager_TransformJobData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransformManager_TransformJobData::HouseNetworkTransformManager_TransformJobData()   {
}
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager_UpdateJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager_UpdateJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::LobbyNetworking::HouseNetworkTransformManager_UpdateJob::Execute)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803d16d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager_UpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void LobbyNetworking::HouseNetworkTransformManager_UpdateJob::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager_UpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  LobbyNetworking::HouseNetworkTransformManager_UpdateJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* LobbyNetworking::HouseNetworkTransformManager_UpdateJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "JobData", ty: "::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>", modifiers: "", def_value: Some("{}") }]
constexpr ::LobbyNetworking::HouseNetworkTransformManager_UpdateJob::HouseNetworkTransformManager_UpdateJob(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  JobData) noexcept  {
this->JobData = JobData;
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransformManager_UpdateJob::HouseNetworkTransformManager_UpdateJob()   {
}
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.get_IndexMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>* (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::get_IndexMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_IndexMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.set_IndexMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*)>(&::LobbyNetworking::HouseNetworkTransformManager::set_IndexMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_IndexMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.get_JobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData> (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::get_JobData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_JobData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.set_JobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>)>(&::LobbyNetworking::HouseNetworkTransformManager::set_JobData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_JobData", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.get_TransformAccessArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Jobs::TransformAccessArray (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::get_TransformAccessArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_TransformAccessArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.set_TransformAccessArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(::UnityEngine::Jobs::TransformAccessArray)>(&::LobbyNetworking::HouseNetworkTransformManager::set_TransformAccessArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_TransformAccessArray", {}, {::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c8190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LobbyNetworking::HouseNetworkTransformManager::Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803c8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.AddNetworkTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager::AddNetworkTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c8150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"AddNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.AddInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager::AddInternal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1803c7ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"AddInternal", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.RemoveNetworkTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager::RemoveNetworkTransform)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803c8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.RemoveInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager::RemoveInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803c8b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveInternal", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.OnSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LobbyNetworking::HouseNetworkTransform*)>(&::LobbyNetworking::HouseNetworkTransformManager::OnSync)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803c88c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"OnSync", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.ScheduleJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::ScheduleJobs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"ScheduleJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1803c8240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.RemoveAtSwapBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)(int32_t, ::by_ref<::LobbyNetworking::HouseNetworkTransformManager_TransformData>)>(&::LobbyNetworking::HouseNetworkTransformManager::RemoveAtSwapBack)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c8a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveAtSwapBack", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::LobbyNetworking::HouseNetworkTransformManager_TransformData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.InitializeCollections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::InitializeCollections)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803c8670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"InitializeCollections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager.DisposeCollections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::DisposeCollections)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c81f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"DisposeCollections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransformManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransformManager::*)()>(&::LobbyNetworking::HouseNetworkTransformManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get_transformDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformDatas;
}
constexpr ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>* const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get_transformDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformDatas;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set_transformDatas(::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformDatas = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__IndexMap_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>* const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__IndexMap_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IndexMap_k__BackingField;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set__IndexMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IndexMap_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__JobData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JobData_k__BackingField;
}
constexpr ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData> const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__JobData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JobData_k__BackingField;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set__JobData_k__BackingField(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JobData_k__BackingField = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__TransformAccessArray_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformAccessArray_k__BackingField;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__TransformAccessArray_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransformAccessArray_k__BackingField;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set__TransformAccessArray_k__BackingField(::UnityEngine::Jobs::TransformAccessArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransformAccessArray_k__BackingField = value;
}
constexpr ::Unity::Jobs::JobHandle& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set__jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobHandle = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__isDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDestroyed;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get__isDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDestroyed;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set__isDestroyed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDestroyed = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void LobbyNetworking::HouseNetworkTransformManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void LobbyNetworking::HouseNetworkTransformManager::setStaticF_instance(::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::LobbyNetworking::HouseNetworkTransformManager>, "instance", ::LobbyNetworking::HouseNetworkTransformManager*>(std::forward<::UnityW<::LobbyNetworking::HouseNetworkTransformManager>>(value));
}
inline ::UnityW<::LobbyNetworking::HouseNetworkTransformManager> LobbyNetworking::HouseNetworkTransformManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::LobbyNetworking::HouseNetworkTransformManager>, "instance", ::LobbyNetworking::HouseNetworkTransformManager*>();
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>* LobbyNetworking::HouseNetworkTransformManager::get_IndexMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_IndexMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::set_IndexMap(::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_IndexMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData> LobbyNetworking::HouseNetworkTransformManager::get_JobData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_JobData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::set_JobData(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_JobData", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Jobs::TransformAccessArray LobbyNetworking::HouseNetworkTransformManager::get_TransformAccessArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"get_TransformAccessArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Jobs::TransformAccessArray>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::set_TransformAccessArray(::UnityEngine::Jobs::TransformAccessArray  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"set_TransformAccessArray", {}, {::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LobbyNetworking::HouseNetworkTransformManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::AddNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"AddNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkTransform);
}
inline void LobbyNetworking::HouseNetworkTransformManager::AddInternal(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"AddInternal", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkTransform);
}
inline void LobbyNetworking::HouseNetworkTransformManager::RemoveNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkTransform);
}
inline void LobbyNetworking::HouseNetworkTransformManager::RemoveInternal(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveInternal", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkTransform);
}
inline void LobbyNetworking::HouseNetworkTransformManager::OnSync(::LobbyNetworking::HouseNetworkTransform*  networkTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"OnSync", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkTransform);
}
inline void LobbyNetworking::HouseNetworkTransformManager::ScheduleJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"ScheduleJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::RemoveAtSwapBack(int32_t  index, ::by_ref<::LobbyNetworking::HouseNetworkTransformManager_TransformData>  swappedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"RemoveAtSwapBack", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::LobbyNetworking::HouseNetworkTransformManager_TransformData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, swappedValue);
}
inline void LobbyNetworking::HouseNetworkTransformManager::InitializeCollections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"InitializeCollections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::DisposeCollections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {"DisposeCollections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransformManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransformManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LobbyNetworking::HouseNetworkTransformManager* LobbyNetworking::HouseNetworkTransformManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LobbyNetworking::HouseNetworkTransformManager*>());
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransformManager::HouseNetworkTransformManager()   {
}
