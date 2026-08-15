#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionBasic.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBasic_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_DetectTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_DetectTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_OutOfRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_OutOfRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.set_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(float_t)>(&::GlobalNamespace::AudioOcclusionBasic::set_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.get_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::get_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.set_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(float_t)>(&::GlobalNamespace::AudioOcclusionBasic::set_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(::GlobalNamespace::AudioOcclusionConfig*)>(&::GlobalNamespace::AudioOcclusionBasic::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180483c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.UpdateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::UpdateOcclusion)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180484240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.ApplyAsyncRaycastResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>, int32_t, int32_t)>(&::GlobalNamespace::AudioOcclusionBasic::ApplyAsyncRaycastResult)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180483540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ApplyAsyncRaycastResult", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.CalculateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(bool)>(&::GlobalNamespace::AudioOcclusionBasic::CalculateOcclusion)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x1804836e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"CalculateOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.ProcessSyncRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(int32_t)>(&::GlobalNamespace::AudioOcclusionBasic::ProcessSyncRaycastResults)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180483f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ProcessSyncRaycastResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.ProcessAsyncRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>, int32_t, int32_t)>(&::GlobalNamespace::AudioOcclusionBasic::ProcessAsyncRaycastResults)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180483dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ProcessAsyncRaycastResults", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.UpdateOcclusionValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(bool)>(&::GlobalNamespace::AudioOcclusionBasic::UpdateOcclusionValues)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804840d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"UpdateOcclusionValues", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic.SetAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)(bool)>(&::GlobalNamespace::AudioOcclusionBasic::SetAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804840c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"SetAsync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBasic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBasic::*)()>(&::GlobalNamespace::AudioOcclusionBasic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get_Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr bool const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get_Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set_Debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Debug = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__layer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layer = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__detectTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__detectTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectTrigger = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__outOfRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr bool const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__outOfRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__outOfRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outOfRange = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__isAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr bool const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__isAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__isAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAsync = value;
}
constexpr bool& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__hasHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHit;
}
constexpr bool const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__hasHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHit;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__hasHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasHit = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__currentOccLvl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOccLvl;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__currentOccLvl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOccLvl;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__currentOccLvl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentOccLvl = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__lastRaycastDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRaycastDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__lastRaycastDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRaycastDirection;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__lastRaycastDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRaycastDirection = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__maxDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__maxDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__maxDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceSquared = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__hitCenterInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__hitCenterInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitCenterInfo = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__materialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__materialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialConfig = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__OccLvl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__OccLvl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__OccLvl_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OccLvl_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__VoiceBlockingLvl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceBlockingLvl_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__VoiceBlockingLvl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceBlockingLvl_k__BackingField;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__VoiceBlockingLvl_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceBlockingLvl_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__voiceBlockingMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingMaterials;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__voiceBlockingMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingMaterials;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__voiceBlockingMaterials(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceBlockingMaterials = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__currentVoiceBlockLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVoiceBlockLevel;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusionBasic::__cordl_internal_get__currentVoiceBlockLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVoiceBlockLevel;
}
constexpr void GlobalNamespace::AudioOcclusionBasic::__cordl_internal_set__currentVoiceBlockLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentVoiceBlockLevel = value;
}
inline ::UnityEngine::LayerMask GlobalNamespace::AudioOcclusionBasic::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline ::UnityEngine::QueryTriggerInteraction GlobalNamespace::AudioOcclusionBasic::get_DetectTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioOcclusionBasic::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioOcclusionBasic::get_OutOfRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioOcclusionBasic::get_OccLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBasic::set_OccLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioOcclusionBasic::get_VoiceBlockingLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBasic::set_VoiceBlockingLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioOcclusionBasic::Initialize(::GlobalNamespace::AudioOcclusionConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void GlobalNamespace::AudioOcclusionBasic::UpdateOcclusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBasic::ApplyAsyncRaycastResult(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ApplyAsyncRaycastResult", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results, startIndex, count);
}
inline void GlobalNamespace::AudioOcclusionBasic::CalculateOcclusion(bool  lerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"CalculateOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerp);
}
inline void GlobalNamespace::AudioOcclusionBasic::ProcessSyncRaycastResults(int32_t  hitDirectCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ProcessSyncRaycastResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitDirectCount);
}
inline void GlobalNamespace::AudioOcclusionBasic::ProcessAsyncRaycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"ProcessAsyncRaycastResults", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results, startIndex, count);
}
inline void GlobalNamespace::AudioOcclusionBasic::UpdateOcclusionValues(bool  lerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"UpdateOcclusionValues", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerp);
}
inline void GlobalNamespace::AudioOcclusionBasic::SetAsync(bool  isAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {"SetAsync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAsync);
}
inline void GlobalNamespace::AudioOcclusionBasic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBasic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusionBasic* GlobalNamespace::AudioOcclusionBasic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioOcclusionBasic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionBasic::AudioOcclusionBasic()   {
}
