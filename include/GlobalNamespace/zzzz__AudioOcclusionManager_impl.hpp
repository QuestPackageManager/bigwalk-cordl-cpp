#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionManager.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__RaycastCommand_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBasic_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusion_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::GlobalNamespace::AudioOcclusionBasic>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: Some("{}") }, CppParam { name: "layer", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioOcclusionManager_Request::AudioOcclusionManager_Request(::UnityW<::GlobalNamespace::AudioOcclusionBasic>  source, ::UnityEngine::Ray  ray, ::UnityEngine::LayerMask  layer, float_t  distance) noexcept  {
this->source = source;
this->ray = ray;
this->layer = layer;
this->distance = distance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionManager_Request::AudioOcclusionManager_Request()   {
}
// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::GlobalNamespace::AudioOcclusion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "raycastOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioOcclusionManager_ComplexRequest::AudioOcclusionManager_ComplexRequest(::UnityW<::GlobalNamespace::AudioOcclusion>  source, int32_t  raycastOffset) noexcept  {
this->source = source;
this->raycastOffset = raycastOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionManager_ComplexRequest::AudioOcclusionManager_ComplexRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180484340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180484500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioOcclusionBasic*, ::UnityEngine::Ray, float_t, ::UnityEngine::LayerMask)>(&::GlobalNamespace::AudioOcclusionManager::ScheduleRaycast)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180484f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycast", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionBasic*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleComplexRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioOcclusion*, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*, ::UnityEngine::LayerMask)>(&::GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycasts)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180484dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycasts", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusion*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleRaycastInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)(::GlobalNamespace::AudioOcclusionBasic*, ::UnityEngine::Ray, float_t, ::UnityEngine::LayerMask)>(&::GlobalNamespace::AudioOcclusionManager::ScheduleRaycastInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180484e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycastInternal", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionBasic*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleComplexRaycastsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)(::GlobalNamespace::AudioOcclusion*, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*, ::UnityEngine::LayerMask)>(&::GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycastsInternal)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180484af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycastsInternal", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusion*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180485330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.CompleteJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::CompleteJobs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180484470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"CompleteJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::ScheduleRaycasts)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804850b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycasts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ProcessRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::ProcessRaycastResults)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804847b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ProcessRaycastResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ScheduleComplexRaycastJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycastJob)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180484a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycastJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.ProcessComplexRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::ProcessComplexRaycastResults)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804845e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ProcessComplexRaycastResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager.GetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::GetCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804844d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"GetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionManager::*)()>(&::GlobalNamespace::AudioOcclusionManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180485410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>* const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__requests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_Request>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requests = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommands;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommands;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastCommands = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__raycastHits(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHits = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__raycastJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandle;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__raycastJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastJobHandle = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__isJobScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isJobScheduled;
}
constexpr bool const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__isJobScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isJobScheduled;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__isJobScheduled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isJobScheduled = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRequests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>* const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRequests;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__complexRequests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusionManager_ComplexRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complexRequests = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastCommands;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastCommands;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__complexRaycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complexRaycastCommands = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastHits;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastHits;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__complexRaycastHits(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complexRaycastHits = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__complexRaycastJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexRaycastJobHandle;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__complexRaycastJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complexRaycastJobHandle = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__isComplexJobScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isComplexJobScheduled;
}
constexpr bool const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__isComplexJobScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isComplexJobScheduled;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__isComplexJobScheduled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isComplexJobScheduled = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__totalComplexRaycastCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalComplexRaycastCount;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusionManager::__cordl_internal_get__totalComplexRaycastCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalComplexRaycastCount;
}
constexpr void GlobalNamespace::AudioOcclusionManager::__cordl_internal_set__totalComplexRaycastCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalComplexRaycastCount = value;
}
inline void GlobalNamespace::AudioOcclusionManager::setStaticF__instance(::UnityW<::GlobalNamespace::AudioOcclusionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AudioOcclusionManager>, "_instance", ::GlobalNamespace::AudioOcclusionManager*>(std::forward<::UnityW<::GlobalNamespace::AudioOcclusionManager>>(value));
}
inline ::UnityW<::GlobalNamespace::AudioOcclusionManager> GlobalNamespace::AudioOcclusionManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AudioOcclusionManager>, "_instance", ::GlobalNamespace::AudioOcclusionManager*>();
}
inline void GlobalNamespace::AudioOcclusionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleRaycast(::GlobalNamespace::AudioOcclusionBasic*  source, ::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::LayerMask  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycast", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionBasic*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, ray, distance, layer);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycasts(::GlobalNamespace::AudioOcclusion*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  requests, ::UnityEngine::LayerMask  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycasts", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusion*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, requests, layer);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleRaycastInternal(::GlobalNamespace::AudioOcclusionBasic*  source, ::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::LayerMask  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycastInternal", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionBasic*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, ray, distance, layer);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycastsInternal(::GlobalNamespace::AudioOcclusion*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  requests, ::UnityEngine::LayerMask  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycastsInternal", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusion*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, requests, layer);
}
inline void GlobalNamespace::AudioOcclusionManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::CompleteJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"CompleteJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleRaycasts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleRaycasts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::ProcessRaycastResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ProcessRaycastResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::ScheduleComplexRaycastJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ScheduleComplexRaycastJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::ProcessComplexRaycastResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"ProcessComplexRaycastResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioOcclusionManager::GetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {"GetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusionManager* GlobalNamespace::AudioOcclusionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioOcclusionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionManager::AudioOcclusionManager()   {
}
