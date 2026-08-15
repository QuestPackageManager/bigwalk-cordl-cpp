#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeechlessTextOcclusion.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpeechlessTextOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_DetectTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_DetectTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_OutOfRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_OutOfRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_RandomPointsForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_RandomPointsForward)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_RandomPointsForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.set_RandomPointsForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SpeechlessTextOcclusion::set_RandomPointsForward)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"set_RandomPointsForward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.set_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)(float_t)>(&::GlobalNamespace::SpeechlessTextOcclusion::set_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.get_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::get_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.set_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)(float_t)>(&::GlobalNamespace::SpeechlessTextOcclusion::set_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.UpdateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::UpdateOcclusion)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803e09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)(::GlobalNamespace::AudioOcclusionConfig*)>(&::GlobalNamespace::SpeechlessTextOcclusion::Initialize)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1803e0680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.ComparingHitMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SpeechlessTextOcclusion::*)(::UnityEngine::RaycastHit)>(&::GlobalNamespace::SpeechlessTextOcclusion::ComparingHitMaterial)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803e0600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"ComparingHitMaterial", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion.CalculateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::CalculateOcclusion)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x1803df8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"CalculateOcclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeechlessTextOcclusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeechlessTextOcclusion::*)()>(&::GlobalNamespace::SpeechlessTextOcclusion::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get_Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr bool const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get_Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set_Debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Debug = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__layer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layer = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__detectTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__detectTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectTrigger = value;
}
constexpr bool& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__outOfRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr bool const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__outOfRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__outOfRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outOfRange = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__collideInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideInfo;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__collideInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__collideInfo(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collideInfo = value;
}
constexpr float_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__maxDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr float_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__maxDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__maxDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceSquared = value;
}
constexpr int32_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__updateRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRate;
}
constexpr int32_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__updateRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRate;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__updateRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRate = value;
}
constexpr float_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__avg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avg;
}
constexpr float_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__avg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avg;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__avg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____avg = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitRandomSPInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomSPInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitRandomSPInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomSPInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__hitRandomSPInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitRandomSPInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitRandomPSInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomPSInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitRandomPSInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomPSInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__hitRandomPSInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitRandomPSInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitAroundPlayerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundPlayerInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitAroundPlayerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundPlayerInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__hitAroundPlayerInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitAroundPlayerInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitAroundSourceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundSourceInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitAroundSourceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundSourceInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__hitAroundSourceInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitAroundSourceInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitCenterInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__hitCenterInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitCenterInfo = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__materialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__materialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialConfig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__RandomPointsForward_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsForward_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__RandomPointsForward_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsForward_k__BackingField;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__RandomPointsForward_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPointsForward_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__OccLvl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_get__OccLvl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr void GlobalNamespace::SpeechlessTextOcclusion::__cordl_internal_set__OccLvl_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OccLvl_k__BackingField = value;
}
inline ::UnityEngine::LayerMask GlobalNamespace::SpeechlessTextOcclusion::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline ::UnityEngine::QueryTriggerInteraction GlobalNamespace::SpeechlessTextOcclusion::get_DetectTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline bool GlobalNamespace::SpeechlessTextOcclusion::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SpeechlessTextOcclusion::get_OutOfRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SpeechlessTextOcclusion::get_RandomPointsForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"get_RandomPointsForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::set_RandomPointsForward(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"set_RandomPointsForward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SpeechlessTextOcclusion::get_OccLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::set_OccLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SpeechlessTextOcclusion::get_VoiceBlockingLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::set_VoiceBlockingLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::UpdateOcclusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::Initialize(::GlobalNamespace::AudioOcclusionConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline bool GlobalNamespace::SpeechlessTextOcclusion::ComparingHitMaterial(::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"ComparingHitMaterial", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::CalculateOcclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {"CalculateOcclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpeechlessTextOcclusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeechlessTextOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpeechlessTextOcclusion* GlobalNamespace::SpeechlessTextOcclusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeechlessTextOcclusion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeechlessTextOcclusion::SpeechlessTextOcclusion()   {
}
