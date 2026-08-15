#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationAudioCullingContainer.hpp"
#include "GlobalNamespace/zzzz__RemotePlayerData_impl.hpp"
#include "GlobalNamespace/zzzz__RustleOperation_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationGroupJobData_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_impl.hpp"
#include "GlobalNamespace/zzzz__WindyOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationAudioCullingContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__FootstepSound_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundCullingGroup_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationAudioCullingContainer::*)()>(&::GlobalNamespace::VegetationAudioCullingContainer::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)(::UnityEngine::GameObject*, ::ArrayW<::UnityEngine::BoundingSphere>, ::ArrayW<float_t>, bool, float_t, ::GlobalNamespace::AudioRandomContainer*, ::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::VegetationAudioCullingContainer::Add)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803e2310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetGroupIndexOfPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationAudioCullingContainer::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetGroupIndexOfPrefab)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e2a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroupIndexOfPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VegetationSoundCullingGroup* (::GlobalNamespace::VegetationAudioCullingContainer::*)(int32_t)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetGroup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e2ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VegetationSoundElement (::GlobalNamespace::VegetationAudioCullingContainer::*)(int32_t)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetElement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e29f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.FinishInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)(::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*)>(&::GlobalNamespace::VegetationAudioCullingContainer::FinishInitialization)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1803e2710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"FinishInitialization", {}, {::i2c::type_of<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.RunJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)(::Unity::Mathematics::float3, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*, bool)>(&::GlobalNamespace::VegetationAudioCullingContainer::RunJob)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"RunJob", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.CompleteJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)()>(&::GlobalNamespace::VegetationAudioCullingContainer::CompleteJob)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803e24a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"CompleteJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.CopyRemotePlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*)>(&::GlobalNamespace::VegetationAudioCullingContainer::CopyRemotePlayerList)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803e2630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"CopyRemotePlayerList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.UpdateRemotePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)(::Unity::Mathematics::float3, bool)>(&::GlobalNamespace::VegetationAudioCullingContainer::UpdateRemotePlayers)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803e2e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"UpdateRemotePlayers", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetBatchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetBatchCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetBatchCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetNextPowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetNextPowerOfTwo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetNextPowerOfTwo", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)()>(&::GlobalNamespace::VegetationAudioCullingContainer::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803e26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>* (::GlobalNamespace::VegetationAudioCullingContainer::*)()>(&::GlobalNamespace::VegetationAudioCullingContainer::GetGroups)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer.GetPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationAudioCullingContainer::*)(::GlobalNamespace::FootstepSound*)>(&::GlobalNamespace::VegetationAudioCullingContainer::GetPlayerIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803e2b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetPlayerIndex", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationAudioCullingContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationAudioCullingContainer::*)()>(&::GlobalNamespace::VegetationAudioCullingContainer::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803e3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_groups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>* const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_groups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groups;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_groups(::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groups = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_groupJobData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJobData;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData> const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_groupJobData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJobData;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_groupJobData(::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupJobData = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement> const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_elements(::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_remotePlayerJobData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerJobData;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData> const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_remotePlayerJobData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerJobData;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_remotePlayerJobData(::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePlayerJobData = value;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_rustleOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rustleOperations;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation> const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_rustleOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rustleOperations;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_rustleOperations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rustleOperations = value;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_windyOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyOperations;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation> const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_windyOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windyOperations;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_windyOperations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windyOperations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_currentJobRemotePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJobRemotePlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>* const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_currentJobRemotePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentJobRemotePlayers;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_currentJobRemotePlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentJobRemotePlayers = value;
}
constexpr bool& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_jobNeedsCompletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobNeedsCompletion;
}
constexpr bool const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_jobNeedsCompletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobNeedsCompletion;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_jobNeedsCompletion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobNeedsCompletion = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr float_t& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_maxDistanceSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSq;
}
constexpr float_t const& GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_get_maxDistanceSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSq;
}
constexpr void GlobalNamespace::VegetationAudioCullingContainer::__cordl_internal_set_maxDistanceSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceSq = value;
}
inline int32_t GlobalNamespace::VegetationAudioCullingContainer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::Add(::UnityEngine::GameObject*  gameObj, ::ArrayW<::UnityEngine::BoundingSphere>  spheres, ::ArrayW<float_t>  distances, bool  isDetail, float_t  treeness, ::GlobalNamespace::AudioRandomContainer*  rustleSound, ::GlobalNamespace::AudioRandomContainer*  windySound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObj, spheres, distances, isDetail, treeness, rustleSound, windySound);
}
inline int32_t GlobalNamespace::VegetationAudioCullingContainer::GetGroupIndexOfPrefab(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroupIndexOfPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, prefab);
}
inline ::GlobalNamespace::VegetationSoundCullingGroup* GlobalNamespace::VegetationAudioCullingContainer::GetGroup(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VegetationSoundCullingGroup*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::VegetationSoundElement GlobalNamespace::VegetationAudioCullingContainer::GetElement(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VegetationSoundElement>(this, ___internal_method, index);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::FinishInitialization(::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"FinishInitialization", {}, {::i2c::type_of<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::RunJob(::Unity::Mathematics::float3  localPlayerPosition, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  remoteFootstepPlayers, bool  useBobPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"RunJob", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerPosition, remoteFootstepPlayers, useBobPosition);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::CompleteJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"CompleteJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::CopyRemotePlayerList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  remoteFootstepPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"CopyRemotePlayerList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteFootstepPlayers);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::UpdateRemotePlayers(::Unity::Mathematics::float3  localPlayerPosition, bool  useBobPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"UpdateRemotePlayers", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerPosition, useBobPosition);
}
inline int32_t GlobalNamespace::VegetationAudioCullingContainer::GetBatchCount(int32_t  elementCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetBatchCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, elementCount);
}
inline int32_t GlobalNamespace::VegetationAudioCullingContainer::GetNextPowerOfTwo(float_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetNextPowerOfTwo", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>* GlobalNamespace::VegetationAudioCullingContainer::GetGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::VegetationAudioCullingContainer::GetPlayerIndex(::GlobalNamespace::FootstepSound*  playerFootstepSound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {"GetPlayerIndex", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerFootstepSound);
}
inline void GlobalNamespace::VegetationAudioCullingContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationAudioCullingContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VegetationAudioCullingContainer* GlobalNamespace::VegetationAudioCullingContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VegetationAudioCullingContainer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VegetationAudioCullingContainer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VegetationAudioCullingContainer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VegetationAudioCullingContainer::VegetationAudioCullingContainer()   {
}
