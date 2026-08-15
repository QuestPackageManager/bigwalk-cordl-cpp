#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioMinigunContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ISoundCueProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_ScatterRuntimeInfo::*)()>(&::GlobalNamespace::AudioEvent_ScatterRuntimeInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_NextInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInterval;
}
constexpr float_t const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_NextInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInterval;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_NextInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextInterval = value;
}
constexpr float_t& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_CurrentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr float_t const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_CurrentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_CurrentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_NextPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_NextPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextPos;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_NextPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextPos = value;
}
constexpr bool& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_AlwaysCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlwaysCenter;
}
constexpr bool const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_AlwaysCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlwaysCenter;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_AlwaysCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AlwaysCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_CenterTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_CenterTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterTransform;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_CenterTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterTransform = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
constexpr bool& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_RTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr bool const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_RTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_RTPC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPC = value;
}
constexpr bool& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_isPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr bool const& GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_get_isPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::__cordl_internal_set_isPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlaying = value;
}
inline void GlobalNamespace::AudioEvent_ScatterRuntimeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* GlobalNamespace::AudioEvent_ScatterRuntimeInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo::AudioEvent_ScatterRuntimeInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_MinigunRuntimeInfo::*)()>(&::GlobalNamespace::AudioEvent_MinigunRuntimeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180482c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_CenterTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_CenterTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterTransform;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_CenterTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterTransform = value;
}
constexpr float_t& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_NextInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInterval;
}
constexpr float_t const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_NextInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInterval;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_NextInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextInterval = value;
}
constexpr float_t& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_CurrentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr float_t const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_CurrentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_CurrentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_NextTargetPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextTargetPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_NextTargetPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextTargetPositions;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_NextTargetPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextTargetPositions = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_PositionProgresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionProgresses;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_PositionProgresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionProgresses;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_PositionProgresses(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionProgresses = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
constexpr bool& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_RTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr bool const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_RTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_RTPC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPC = value;
}
constexpr bool& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_isPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr bool const& GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_get_isPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::__cordl_internal_set_isPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlaying = value;
}
inline void GlobalNamespace::AudioEvent_MinigunRuntimeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* GlobalNamespace::AudioEvent_MinigunRuntimeInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo::AudioEvent_MinigunRuntimeInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_LayerRuntimeInfo.add_OnLayerPlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_LayerRuntimeInfo::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioEvent_LayerRuntimeInfo::add_OnLayerPlayed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180482b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"add_OnLayerPlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_LayerRuntimeInfo.remove_OnLayerPlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_LayerRuntimeInfo::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioEvent_LayerRuntimeInfo::remove_OnLayerPlayed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180482bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"remove_OnLayerPlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_LayerRuntimeInfo.OnLayerPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_LayerRuntimeInfo::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent_LayerRuntimeInfo::OnLayerPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"OnLayerPlay", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent_LayerRuntimeInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent_LayerRuntimeInfo::*)()>(&::GlobalNamespace::AudioEvent_LayerRuntimeInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180482ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_WorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_WorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorldPos;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_WorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorldPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_FollowTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_FollowTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_FollowTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowTransform = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
constexpr bool& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_RTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr bool const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_RTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPC;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_RTPC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPC = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_Loops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loops;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_Loops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loops;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_Loops(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Loops = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_IntensityVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolumes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>* const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_IntensityVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityVolumes;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_IntensityVolumes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AudioLayer*,::GlobalNamespace::AudioVolume*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntensityVolumes = value;
}
constexpr ::System::Func_1<float_t>*& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_IntensityFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityFunc;
}
constexpr ::System::Func_1<float_t>* const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_IntensityFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntensityFunc;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_IntensityFunc(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntensityFunc = value;
}
constexpr double_t& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_LastPlayedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPlayedTime;
}
constexpr double_t const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_LastPlayedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPlayedTime;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_LastPlayedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastPlayedTime = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_OnLayerPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLayerPlayed;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_get_OnLayerPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLayerPlayed;
}
constexpr void GlobalNamespace::AudioEvent_LayerRuntimeInfo::__cordl_internal_set_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLayerPlayed = value;
}
inline void GlobalNamespace::AudioEvent_LayerRuntimeInfo::setStaticF_S_ToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*, "S_ToRemove", ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioEvent_LayerRuntimeInfo::getStaticF_S_ToRemove()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*, "S_ToRemove", ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>();
}
inline void GlobalNamespace::AudioEvent_LayerRuntimeInfo::add_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"add_OnLayerPlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioEvent_LayerRuntimeInfo::remove_OnLayerPlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"remove_OnLayerPlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioEvent_LayerRuntimeInfo::OnLayerPlay(::GlobalNamespace::AudioSourceController*  asc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {"OnLayerPlay", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asc);
}
inline void GlobalNamespace::AudioEvent_LayerRuntimeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* GlobalNamespace::AudioEvent_LayerRuntimeInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEvent_LayerRuntimeInfo::AudioEvent_LayerRuntimeInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioEvent___c__DisplayClass81_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent___c__DisplayClass81_0::*)()>(&::GlobalNamespace::AudioEvent___c__DisplayClass81_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent___c__DisplayClass81_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent___c__DisplayClass81_0._PlayLayer_b__6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioEvent___c__DisplayClass81_0::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::AudioEvent___c__DisplayClass81_0::_PlayLayer_b__6)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180482dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent___c__DisplayClass81_0*>(),
                        {"<PlayLayer>b__6", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::AudioEvent___c__DisplayClass81_0::__cordl_internal_get_layerContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerContainer;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::AudioEvent___c__DisplayClass81_0::__cordl_internal_get_layerContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerContainer;
}
constexpr void GlobalNamespace::AudioEvent___c__DisplayClass81_0::__cordl_internal_set_layerContainer(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerContainer = value;
}
inline void GlobalNamespace::AudioEvent___c__DisplayClass81_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent___c__DisplayClass81_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioEvent___c__DisplayClass81_0::_PlayLayer_b__6(::GlobalNamespace::AudioRandomContainer*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent___c__DisplayClass81_0*>(),
                        {"<PlayLayer>b__6", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline ::GlobalNamespace::AudioEvent___c__DisplayClass81_0* GlobalNamespace::AudioEvent___c__DisplayClass81_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioEvent___c__DisplayClass81_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEvent___c__DisplayClass81_0::AudioEvent___c__DisplayClass81_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180479950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_Asset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_XProviderOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioRTPCXProvider* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_XProviderOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_XProviderOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScatterRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScatterRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScatterRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_MinigunRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_MinigunRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_MinigunRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_LayerRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent_LayerRuntimeInfo* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_LayerRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_LayerRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_PlayingControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_PlayingControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_PlayingControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_AudioVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_AudioVolumes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_AudioVolumes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180479bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_IsPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180479b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_IsPlayingAndNotAllFadingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_IsPlayingAndNotAllFadingOut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlayingAndNotAllFadingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_IsPlayingAndNotAnyFadingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_IsPlayingAndNotAnyFadingOut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlayingAndNotAnyFadingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_IsFadingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_IsFadingOut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsFadingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScriptableVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScriptableVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.set_ScriptableVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::set_ScriptableVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScriptablePitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScriptablePitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptablePitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.set_ScriptablePitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::set_ScriptablePitch)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptablePitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScriptablePan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScriptablePan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptablePan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.set_ScriptablePan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::set_ScriptablePan)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptablePan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScriptableSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScriptableSpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableSpatialBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.set_ScriptableSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::set_ScriptableSpatialBlend)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_ScriptableSpread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_ScriptableSpread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableSpread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.set_ScriptableSpread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::set_ScriptableSpread)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180479db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableSpread", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.get_Hibernating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::get_Hibernating)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180407540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Hibernating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioAsset*, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*)>(&::GlobalNamespace::AudioEvent::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1804795c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180474f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180475100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Object*, ::UnityEngine::Transform*, bool, float_t, ::System::Func_1<float_t>*)>(&::GlobalNamespace::AudioEvent::Play)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x180477570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(bool, bool, bool, float_t, bool, bool, bool)>(&::GlobalNamespace::AudioEvent::Stop)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x180478010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Stop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::Pause)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x180475390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::Resume)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x180477a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Resume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::ISoundCueProvider*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::UnityEngine::Transform*, bool, float_t)>(&::GlobalNamespace::AudioEvent::PlayCue)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804759a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayCue", {}, {::i2c::type_of<::GlobalNamespace::ISoundCueProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayRandomContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioRandomContainer*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::AudioEvent::PlayRandomContainer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180476ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayRandomContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayScatterContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioScatterContainer*, ::UnityEngine::Transform*, ::UnityEngine::Object*, bool)>(&::GlobalNamespace::AudioEvent::PlayScatterContainer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804770b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayScatterContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayScatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::PlayScatter)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180477290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayScatter", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.DrawScatterGizmosRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioScatterContainer*, ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::DrawScatterGizmosRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DrawScatterGizmosRuntime", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayMinigunContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioMinigunContainer*, ::UnityEngine::Transform*, ::UnityEngine::Object*, bool)>(&::GlobalNamespace::AudioEvent::PlayMinigunContainer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804769b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayMinigunContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioMinigunContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayMinigun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::PlayMinigun)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x180476b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayMinigun", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.UpdateMinigun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::UpdateMinigun)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x180478ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"UpdateMinigun", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.DrawMinigunGizmosRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioMinigunContainer*, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::DrawMinigunGizmosRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DrawMinigunGizmosRuntime", {}, {::i2c::type_of<::GlobalNamespace::AudioMinigunContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.DecideHibernation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)()>(&::GlobalNamespace::AudioEvent::DecideHibernation)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180475170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DecideHibernation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayLayerContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioLayerContainer*, ::UnityEngine::Vector3, ::System::Func_1<float_t>*, ::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::AudioEvent::PlayLayerContainer)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x180475bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayLayerContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Func_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.PlayLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioLayerContainer*, ::GlobalNamespace::AudioLayer*, ::GlobalNamespace::AudioLayerContainer_LayerType, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::UnityEngine::Transform*, bool, float_t)>(&::GlobalNamespace::AudioEvent::PlayLayer)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180476010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayLayer", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.UpdateLayerContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*)>(&::GlobalNamespace::AudioEvent::UpdateLayerContainer)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180478c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"UpdateLayerContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.ApplyScriptableParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::ApplyScriptableParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180474ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"ApplyScriptableParameters", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.AddVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::IAudioVolume*, ::UnityEngine::Object*, bool)>(&::GlobalNamespace::AudioEvent::AddVolume)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180474d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AddVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.RemoveVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::IAudioVolume*, ::UnityEngine::Object*, bool)>(&::GlobalNamespace::AudioEvent::RemoveVolume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804779b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"RemoveVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioEvent::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AudioEvent::GetX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180475350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent.SeekTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioEvent::*)(float_t)>(&::GlobalNamespace::AudioEvent::SeekTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180477f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"SeekTo", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayCue_g___clearRef_67_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayCue_g___clearRef_67_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180478960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayCue>g___clearRef|67_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayRandomContainer_g___clearRef_68_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayRandomContainer_g___clearRef_68_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180478960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayRandomContainer>g___clearRef|68_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayScatter_g___clearRef_71_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayScatter_g___clearRef_71_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180478960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayScatter>g___clearRef|71_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayMinigun_g___clearRef_75_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent*, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayMinigun_g___clearRef_75_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180478b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayMinigun>g___clearRef|75_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___clearRef_81_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___clearRef_81_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180478960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___clearRef|81_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___removeLoopLayer_81_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*, ::GlobalNamespace::AudioLayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___removeLoopLayer_81_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180478ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___removeLoopLayer|81_1", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___onStop_81_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*, ::GlobalNamespace::AudioLayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___onStop_81_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180478ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___onStop|81_2", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___onFadeOut_81_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*, ::GlobalNamespace::AudioLayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___onFadeOut_81_3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180478a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___onFadeOut|81_3", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___registerVoice_81_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioLayerContainer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___registerVoice_81_4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180478b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___registerVoice|81_4", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioEvent._PlayLayer_g___deregisterVoice_81_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioLayerContainer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioEvent::_PlayLayer_g___deregisterVoice_81_5)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180478990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___deregisterVoice|81_5", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioEvent::__cordl_internal_get__asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioEvent::__cordl_internal_get__asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asset = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AudioEvent::__cordl_internal_get__defaultOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOwner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AudioEvent::__cordl_internal_get__defaultOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOwner;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__defaultOwner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultOwner = value;
}
constexpr ::GlobalNamespace::IAudioRTPCXProvider*& GlobalNamespace::AudioEvent::__cordl_internal_get__xProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xProvider;
}
constexpr ::GlobalNamespace::IAudioRTPCXProvider* const& GlobalNamespace::AudioEvent::__cordl_internal_get__xProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xProvider;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__xProvider(::GlobalNamespace::IAudioRTPCXProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xProvider = value;
}
constexpr ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*& GlobalNamespace::AudioEvent::__cordl_internal_get__scatterRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterRuntime;
}
constexpr ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* const& GlobalNamespace::AudioEvent::__cordl_internal_get__scatterRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterRuntime;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scatterRuntime(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scatterRuntime = value;
}
constexpr ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*& GlobalNamespace::AudioEvent::__cordl_internal_get__minigunRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minigunRuntime;
}
constexpr ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* const& GlobalNamespace::AudioEvent::__cordl_internal_get__minigunRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minigunRuntime;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__minigunRuntime(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minigunRuntime = value;
}
constexpr ::GlobalNamespace::AudioEvent_LayerRuntimeInfo*& GlobalNamespace::AudioEvent::__cordl_internal_get__layerRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerRuntime;
}
constexpr ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* const& GlobalNamespace::AudioEvent::__cordl_internal_get__layerRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerRuntime;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__layerRuntime(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerRuntime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioEvent::__cordl_internal_get__playingControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioEvent::__cordl_internal_get__playingControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingControllers;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__playingControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playingControllers = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*& GlobalNamespace::AudioEvent::__cordl_internal_get__audioVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioVolumes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* const& GlobalNamespace::AudioEvent::__cordl_internal_get__audioVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioVolumes;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__audioVolumes(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioVolumes = value;
}
constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*& GlobalNamespace::AudioEvent::__cordl_internal_get__getXFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getXFunc;
}
constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>* const& GlobalNamespace::AudioEvent::__cordl_internal_get__getXFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getXFunc;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__getXFunc(::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getXFunc = value;
}
constexpr float_t& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableVolume;
}
constexpr float_t const& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableVolume;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scriptableVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptableVolume = value;
}
constexpr float_t& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptablePitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptablePitch;
}
constexpr float_t const& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptablePitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptablePitch;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scriptablePitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptablePitch = value;
}
constexpr float_t& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptablePan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptablePan;
}
constexpr float_t const& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptablePan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptablePan;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scriptablePan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptablePan = value;
}
constexpr float_t& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableSpatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableSpatialBlend;
}
constexpr float_t const& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableSpatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableSpatialBlend;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scriptableSpatialBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptableSpatialBlend = value;
}
constexpr float_t& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableSpread;
}
constexpr float_t const& GlobalNamespace::AudioEvent::__cordl_internal_get__scriptableSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableSpread;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__scriptableSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptableSpread = value;
}
constexpr bool& GlobalNamespace::AudioEvent::__cordl_internal_get__hibernating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernating;
}
constexpr bool const& GlobalNamespace::AudioEvent::__cordl_internal_get__hibernating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernating;
}
constexpr void GlobalNamespace::AudioEvent::__cordl_internal_set__hibernating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hibernating = value;
}
inline bool GlobalNamespace::AudioEvent::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::AudioEvent::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method);
}
inline ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioEvent::get_XProviderOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_XProviderOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioRTPCXProvider*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo* GlobalNamespace::AudioEvent::get_ScatterRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScatterRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo* GlobalNamespace::AudioEvent::get_MinigunRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_MinigunRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioEvent_LayerRuntimeInfo* GlobalNamespace::AudioEvent::get_LayerRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_LayerRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioEvent::get_PlayingControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_PlayingControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioEvent::get_AudioVolumes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_AudioVolumes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AudioEvent::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioEvent::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioEvent::get_IsPlayingAndNotAllFadingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlayingAndNotAllFadingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioEvent::get_IsPlayingAndNotAnyFadingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsPlayingAndNotAnyFadingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioEvent::get_IsFadingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_IsFadingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioEvent::get_ScriptableVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::set_ScriptableVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioEvent::get_ScriptablePitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptablePitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::set_ScriptablePitch(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptablePitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioEvent::get_ScriptablePan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptablePan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::set_ScriptablePan(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptablePan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioEvent::get_ScriptableSpatialBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableSpatialBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::set_ScriptableSpatialBlend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioEvent::get_ScriptableSpread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_ScriptableSpread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::set_ScriptableSpread(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"set_ScriptableSpread", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioEvent::get_Hibernating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"get_Hibernating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::_ctor(::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  defaultOwner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, defaultOwner, xProvider, getXFunc);
}
inline void GlobalNamespace::AudioEvent::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioEvent::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioEvent::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioEvent::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline bool GlobalNamespace::AudioEvent::Play(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride, ::System::Func_1<float_t>*  intensityFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, owner, followTransform, rtpc, fadeInOverride, intensityFunc);
}
inline void GlobalNamespace::AudioEvent::Stop(bool  stopHead, bool  cancelTail, bool  stopUpdating, float_t  fadeOutOverride, bool  immediate, bool  stopCurrent, bool  removeTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Stop", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopHead, cancelTail, stopUpdating, fadeOutOverride, immediate, stopCurrent, removeTransform);
}
inline void GlobalNamespace::AudioEvent::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::Resume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"Resume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::PlayCue(::GlobalNamespace::ISoundCueProvider*  asset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  fadeInOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayCue", {}, {::i2c::type_of<::GlobalNamespace::ISoundCueProvider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, worldPosition, owner, followTransform, rtpc, fadeInOverride);
}
inline void GlobalNamespace::AudioEvent::PlayRandomContainer(::GlobalNamespace::AudioRandomContainer*  asset, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayRandomContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, worldPosition, owner, followTransform, rtpc);
}
inline void GlobalNamespace::AudioEvent::PlayScatterContainer(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Transform*  centerTransform, ::UnityEngine::Object*  owner, bool  rtpc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayScatterContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scatter, centerTransform, owner, rtpc);
}
inline void GlobalNamespace::AudioEvent::PlayScatter(::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayScatter", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::AudioEvent::DrawScatterGizmosRuntime(::GlobalNamespace::AudioScatterContainer*  sctr, ::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DrawScatterGizmosRuntime", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_ScatterRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sctr, info);
}
inline void GlobalNamespace::AudioEvent::PlayMinigunContainer(::GlobalNamespace::AudioMinigunContainer*  minigun, ::UnityEngine::Transform*  centerTransform, ::UnityEngine::Object*  owner, bool  rtpc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayMinigunContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioMinigunContainer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minigun, centerTransform, owner, rtpc);
}
inline void GlobalNamespace::AudioEvent::PlayMinigun(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayMinigun", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::AudioEvent::UpdateMinigun(::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"UpdateMinigun", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::AudioEvent::DrawMinigunGizmosRuntime(::GlobalNamespace::AudioMinigunContainer*  container, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DrawMinigunGizmosRuntime", {}, {::i2c::type_of<::GlobalNamespace::AudioMinigunContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, info);
}
inline bool GlobalNamespace::AudioEvent::DecideHibernation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"DecideHibernation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioEvent::PlayLayerContainer(::GlobalNamespace::AudioLayerContainer*  asset, ::UnityEngine::Vector3  worldPosition, ::System::Func_1<float_t>*  intensityFunc, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayLayerContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Func_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, worldPosition, intensityFunc, owner, followTransform, rtpc);
}
inline void GlobalNamespace::AudioEvent::PlayLayer(::GlobalNamespace::AudioLayerContainer*  layerContainer, ::GlobalNamespace::AudioLayer*  layer, ::GlobalNamespace::AudioLayerContainer_LayerType  type, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::UnityEngine::Transform*  followTransform, bool  rtpc, float_t  rawIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"PlayLayer", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerContainer, layer, type, worldPosition, owner, followTransform, rtpc, rawIntensity);
}
inline void GlobalNamespace::AudioEvent::UpdateLayerContainer(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"UpdateLayerContainer", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::AudioEvent::ApplyScriptableParameters(::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"ApplyScriptableParameters", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::AudioEvent::AddVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner, bool  addToExisting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"AddVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vol, owner, addToExisting);
}
inline void GlobalNamespace::AudioEvent::RemoveVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner, bool  removeFromExisting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"RemoveVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vol, owner, removeFromExisting);
}
inline bool GlobalNamespace::AudioEvent::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AudioEvent::SeekTo(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"SeekTo", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::AudioEvent::_PlayCue_g___clearRef_67_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayCue>g___clearRef|67_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, c);
}
inline void GlobalNamespace::AudioEvent::_PlayRandomContainer_g___clearRef_68_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayRandomContainer>g___clearRef|68_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, c);
}
inline void GlobalNamespace::AudioEvent::_PlayScatter_g___clearRef_71_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayScatter>g___clearRef|71_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, c);
}
inline void GlobalNamespace::AudioEvent::_PlayMinigun_g___clearRef_75_0(::GlobalNamespace::AudioEvent*  a, ::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*  m, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayMinigun>g___clearRef|75_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioEvent_MinigunRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, m, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___clearRef_81_0(::GlobalNamespace::AudioEvent*  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___clearRef|81_0", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___removeLoopLayer_81_1(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___removeLoopLayer|81_1", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, l, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___onStop_81_2(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___onStop|81_2", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, l, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___onFadeOut_81_3(::GlobalNamespace::AudioEvent_LayerRuntimeInfo*  r, ::GlobalNamespace::AudioLayer*  l, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___onFadeOut|81_3", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent_LayerRuntimeInfo*>(), ::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, l, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___registerVoice_81_4(::GlobalNamespace::AudioLayerContainer*  l, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___registerVoice|81_4", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, c);
}
inline void GlobalNamespace::AudioEvent::_PlayLayer_g___deregisterVoice_81_5(::GlobalNamespace::AudioLayerContainer*  l, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioEvent*>(),
                        {"<PlayLayer>g___deregisterVoice|81_5", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, c);
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AudioEvent::New_ctor(::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  defaultOwner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioEvent*>(asset, defaultOwner, xProvider, getXFunc));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::AudioEvent::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::AudioEvent::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::AudioEvent::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioEvent::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioEvent::AudioEvent()   {
}
