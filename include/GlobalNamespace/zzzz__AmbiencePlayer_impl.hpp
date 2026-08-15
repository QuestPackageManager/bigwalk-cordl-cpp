#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbiencePlayer.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_impl.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_impl.hpp"
#include "GlobalNamespace/zzzz__OceanSoundSample_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__AmbiencePlayer_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceEmitters_def.hpp"
#include "GlobalNamespace/zzzz__AmbiencePlayer_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceSampleData_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceSoundData_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__OceanSoundSample_def.hpp"
#include "GlobalNamespace/zzzz__SplineSampleStruct_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::*)()>(&::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c._GetDeterministicCueIndex_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::*)(double_t)>(&::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::_GetDeterministicCueIndex_b__10_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803298e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(),
                        {"<GetDeterministicCueIndex>b__10_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::setStaticF___9(::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*, "<>9", ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(std::forward<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(value));
}
inline ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c* GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*, "<>9", ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>();
}
inline void GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::setStaticF___9__10_0(::System::Action_1<double_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<double_t>*, "<>9__10_0", ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(std::forward<::System::Action_1<double_t>*>(value));
}
inline ::System::Action_1<double_t>* GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<double_t>*, "<>9__10_0", ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>();
}
inline void GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::_GetDeterministicCueIndex_b__10_0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>(),
                        {"<GetDeterministicCueIndex>b__10_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c* GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScatterAmbienceRuntime_AmbiencePlayer___c::ScatterAmbienceRuntime_AmbiencePlayer___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::*)(::GlobalNamespace::AudioScatterContainer*, ::UnityEngine::Object*, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>, float_t)>(&::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180328ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AmbienceScatterEvent>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::*)(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*, float_t)>(&::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::Update)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x180328790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::GetX)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803286b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime.GetDeterministicCueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::GetDeterministicCueIndex)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180328350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"GetDeterministicCueIndex", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime._Update_g___clearRef_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::_Update_g___clearRef_8_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180328760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"<Update>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Scatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scatter;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Scatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scatter;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_Scatter(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scatter = value;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent> const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_Events(::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Events = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_PlayingSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayingSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_PlayingSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayingSounds;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_PlayingSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayingSounds = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Owner;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_Owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Owner = value;
}
constexpr int32_t& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentIndex;
}
constexpr int32_t const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentIndex;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentIndex = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_LastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTime;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_LastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTime;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_LastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastTime = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_LPMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LPMin;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_get_LPMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LPMin;
}
constexpr void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::__cordl_internal_set_LPMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LPMin = value;
}
inline void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Object*  owner, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events, float_t  lpMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioScatterContainer*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::AmbienceScatterEvent>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scatter, owner, events, lpMin);
}
inline void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::Update(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  inRangePositions, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inRangePositions, time);
}
inline bool GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline int32_t GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::GetDeterministicCueIndex(::GlobalNamespace::AudioRandomContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"GetDeterministicCueIndex", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::_Update_g___clearRef_8_0(::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*  s, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(),
                        {"<Update>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, c);
}
inline ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime* GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::New_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::UnityEngine::Object*  owner, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events, float_t  lpMin)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>(scatter, owner, events, lpMin));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime::AmbiencePlayer_ScatterAmbienceRuntime()   {
}
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AmbiencePlayer> (*)()>(&::GlobalNamespace::AmbiencePlayer::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180320360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*)>(&::GlobalNamespace::AmbiencePlayer::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180320400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_EmitterLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>* (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_EmitterLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_EmitterLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_EmitterLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*)>(&::GlobalNamespace::AmbiencePlayer::set_EmitterLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_EmitterLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_CachedTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_CachedTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180320310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_CachedTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_CachedTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AmbiencePlayer::set_CachedTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803203a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_CachedTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_GUIScatterLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_GUIScatterLog)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180320340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIScatterLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_GUIScatterLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::AmbiencePlayer::set_GUIScatterLog)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803203e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIScatterLog", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180320350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_GUIDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180320320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(bool)>(&::GlobalNamespace::AmbiencePlayer::set_GUIDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803203c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.get_GUIDebugScatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::get_GUIDebugScatter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180320330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIDebugScatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.set_GUIDebugScatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(bool)>(&::GlobalNamespace::AmbiencePlayer::set_GUIDebugScatter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803203d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIDebugScatter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::Awake)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x1803188c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18031b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18031b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18031d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18031b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18031fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x1070;
  constexpr static std::size_t addrs = 0x18031a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::DrawGUI)> {
  constexpr static std::size_t size = 0xee0;
  constexpr static std::size_t addrs = 0x180319020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::Register)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18031d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.Deregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::Deregister)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180318fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Deregister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.PlayNonBiomeAmbiences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::PlayNonBiomeAmbiences)> {
  constexpr static std::size_t size = 0x1ff0;
  constexpr static std::size_t addrs = 0x18031b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"PlayNonBiomeAmbiences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.UpdateBeachSoundsPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::OceanSoundSample, float_t, float_t)>(&::GlobalNamespace::AmbiencePlayer::UpdateBeachSoundsPositions)> {
  constexpr static std::size_t size = 0xd20;
  constexpr static std::size_t addrs = 0x18031de10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateBeachSoundsPositions", {}, {::i2c::type_of<::GlobalNamespace::OceanSoundSample>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.UpdateScatters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::UpdateScatters)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18031f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateScatters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.UpdateBeachWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::UpdateBeachWaves)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18031eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateBeachWaves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.UpdateRockyWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::UpdateRockyWater)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18031ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateRockyWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.UpdateWindySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::UpdateWindySound)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x18031f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateWindySound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationSE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationSE)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18031a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationSE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationSW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationSW)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18031a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationSW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationNW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationNW)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationNW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationNE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationNE)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationNE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationRumble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationRumble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18031a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationRumble", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationFarSE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationFarSE)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarSE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationFarSW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationFarSW)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarSW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationFarNW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationFarNW)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarNW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetAttenuationFarNE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetAttenuationFarNE)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180319f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarNE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.OnMovingTooFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AmbiencePlayer::OnMovingTooFast)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18031b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer.GetInterpolatedPositionFromDirectionFills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioDynamicReverb*, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::GetInterpolatedPositionFromDirectionFills)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18031a0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetInterpolatedPositionFromDirectionFills", {}, {::i2c::type_of<::GlobalNamespace::AudioDynamicReverb*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbiencePlayer::*)()>(&::GlobalNamespace::AmbiencePlayer::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x18031fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_5)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031d920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_5", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_6)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_6", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_7)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_7", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRumbleRef_109_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRumbleRef_109_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18031db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRumbleRef|109_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18031d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_1", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18031d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_2", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___windHighGetX_109_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___windHighGetX_109_3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18031dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___windHighGetX|109_3", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_8)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_8", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___windLowGetX_109_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AmbiencePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___windLowGetX_109_4)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18031dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___windLowGetX|109_4", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._PlayNonBiomeAmbiences_g___clearRefs_109_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_9)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_9", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._UpdateBeachWaves_g___clearRefs_112_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, ::UnityEngine::Vector3, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_UpdateBeachWaves_g___clearRefs_112_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18031dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<UpdateBeachWaves>g___clearRefs|112_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbiencePlayer._UpdateRockyWater_g___clearRefs_113_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AmbiencePlayer*, ::UnityEngine::Vector3, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AmbiencePlayer::_UpdateRockyWater_g___clearRefs_113_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18031dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<UpdateRockyWater>g___clearRefs|113_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AmbienceSoundData>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_SoundData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundData;
}
constexpr ::UnityW<::GlobalNamespace::AmbienceSoundData> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_SoundData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundData;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_SoundData(::UnityW<::GlobalNamespace::AmbienceSoundData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SoundData = value;
}
constexpr ::UnityW<::GlobalNamespace::AmbienceSampleData>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_SampleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleData;
}
constexpr ::UnityW<::GlobalNamespace::AmbienceSampleData> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_SampleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleData;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_SampleData(::UnityW<::GlobalNamespace::AmbienceSampleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_RaycastPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_RaycastPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastPos;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_RaycastPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaycastPos = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_RaycastLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastLayer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_RaycastLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaycastLayer;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_RaycastLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaycastLayer = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinHPLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinHPLevel;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinHPLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinHPLevel;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_MinHPLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinHPLevel = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinLPLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLPLevel;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinLPLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLPLevel;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_MinLPLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinLPLevel = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinVegeVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinVegeVol;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_MinVegeVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinVegeVol;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_MinVegeVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinVegeVol = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugWaves;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugWaves;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_DebugWaves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugWaves = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugScatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugScatter;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugScatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugScatter;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_DebugScatter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugScatter = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugEmitters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEmitters;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugEmitters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEmitters;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_DebugEmitters(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugEmitters = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugFills()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugFills;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_DebugFills() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugFills;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_DebugFills(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugFills = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_EnableOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableOffset;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_EnableOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableOffset;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_EnableOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableOffset = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__EmitterLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitterLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__EmitterLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitterLookup_k__BackingField;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__EmitterLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EmitterLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__toRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemove;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__toRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemove;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__toRemove(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemove = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__emptyList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__emptyList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyList;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__emptyList(::System::Collections::Generic::List_1<::GlobalNamespace::SplineSampleStruct>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emptyList = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachCloseASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachCloseASCs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachCloseASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachCloseASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachCloseASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachCloseASCs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachSurroundedASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachSurroundedASCs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachSurroundedASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachSurroundedASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachSurroundedASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachSurroundedASCs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachFarASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachFarASCs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachFarASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachFarASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachFarASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachFarASCs = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleASC;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachRumbleASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachRumbleASC = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachCloseTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachCloseTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachCloseTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachCloseTransforms;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachCloseTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachCloseTransforms = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachSurroundedTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachSurroundedTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachSurroundedTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachSurroundedTransforms;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachSurroundedTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachSurroundedTransforms = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachFarTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachFarTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachFarTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachFarTransforms;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachFarTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachFarTransforms = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleTransform;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachRumbleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachRumbleTransform = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioVolume*>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachOccVols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachOccVols;
}
constexpr ::ArrayW<::GlobalNamespace::AudioVolume*> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachOccVols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachOccVols;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachOccVols(::ArrayW<::GlobalNamespace::AudioVolume*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachOccVols = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachRumbleVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachRumbleVol;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachRumbleVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachRumbleVol = value;
}
constexpr ::GlobalNamespace::OceanSoundSample& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__currentBeachSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBeachSample;
}
constexpr ::GlobalNamespace::OceanSoundSample const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__currentBeachSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBeachSample;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__currentBeachSample(::GlobalNamespace::OceanSoundSample  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBeachSample = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__oceaness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oceaness;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__oceaness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oceaness;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__oceaness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oceaness = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__oceanessAvg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oceanessAvg;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__oceanessAvg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oceanessAvg;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__oceanessAvg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oceanessAvg = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_isInManualUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInManualUpdate;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get_isInManualUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInManualUpdate;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set_isInManualUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInManualUpdate = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__ambOccDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ambOccDb;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__ambOccDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ambOccDb;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__ambOccDb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ambOccDb = value;
}
constexpr ::GlobalNamespace::CustomCullingGroup*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesCullingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesCullingGroup;
}
constexpr ::GlobalNamespace::CustomCullingGroup* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesCullingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesCullingGroup;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__wavesCullingGroup(::GlobalNamespace::CustomCullingGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wavesCullingGroup = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesSpheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesSpheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesSpheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesSpheres;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__wavesSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wavesSpheres = value;
}
constexpr int32_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesCount;
}
constexpr int32_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesCount;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__wavesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wavesCount = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesResults;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesResults;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__wavesResults(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wavesResults = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachWavesASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachWavesASCs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__beachWavesASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beachWavesASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__beachWavesASCs(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beachWavesASCs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__wavesPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wavesPositions;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__wavesPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wavesPositions = value;
}
constexpr ::GlobalNamespace::CustomCullingGroup*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterCullingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterCullingGroup;
}
constexpr ::GlobalNamespace::CustomCullingGroup* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterCullingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterCullingGroup;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterCullingGroup(::GlobalNamespace::CustomCullingGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterCullingGroup = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterSpheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterSpheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterSpheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterSpheres;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterSpheres = value;
}
constexpr int32_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterCount;
}
constexpr int32_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterCount;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterCount = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterResults;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterResults;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterResults(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterResults = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterASCs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterASCs(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterASCs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__rockyWaterPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rockyWaterPositions;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__rockyWaterPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rockyWaterPositions = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverb = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixer = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__indoorness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indoorness;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__indoorness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indoorness;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__indoorness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indoorness = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__interiorASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interiorASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__interiorASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interiorASC;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__interiorASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interiorASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__interiorWindASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interiorWindASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__interiorWindASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interiorWindASC;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__interiorWindASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interiorWindASC = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windHighASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windHighASCs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windHighASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windHighASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windHighASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windHighASCs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windLowASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windLowASCs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windLowASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windLowASCs;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windLowASCs(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windLowASCs = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioVolume*>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windOccVols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windOccVols;
}
constexpr ::ArrayW<::GlobalNamespace::AudioVolume*> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windOccVols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windOccVols;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windOccVols(::ArrayW<::GlobalNamespace::AudioVolume*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windOccVols = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__distanceToGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceToGround;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__distanceToGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceToGround;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__distanceToGround(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceToGround = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__speechlessness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessness;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__speechlessness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessness;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__speechlessness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessness = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windTransforms;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windTransforms = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windHighIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windHighIntensity;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windHighIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windHighIntensity;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windHighIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windHighIntensity = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windLowIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windLowIntensity;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windLowIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windLowIntensity;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windLowIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windLowIntensity = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windCompensation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windCompensation;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__windCompensation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windCompensation;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__windCompensation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windCompensation = value;
}
constexpr float_t& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__elevationNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elevationNormalized;
}
constexpr float_t const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__elevationNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elevationNormalized;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__elevationNormalized(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elevationNormalized = value;
}
constexpr ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterRuntimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterRuntimes;
}
constexpr ::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterRuntimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterRuntimes;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__scatterRuntimes(::ArrayW<::GlobalNamespace::AmbiencePlayer_ScatterAmbienceRuntime*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scatterRuntimes = value;
}
constexpr ::GlobalNamespace::CustomCullingGroup*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterCullingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterCullingGroup;
}
constexpr ::GlobalNamespace::CustomCullingGroup* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterCullingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterCullingGroup;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__scatterCullingGroup(::GlobalNamespace::CustomCullingGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scatterCullingGroup = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterSpheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterSpheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterSpheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterSpheres;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__scatterSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scatterSpheres = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__inRangeScatterPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inRangeScatterPositions;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__inRangeScatterPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inRangeScatterPositions;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__inRangeScatterPositions(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inRangeScatterPositions = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterResults;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__scatterResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scatterResults;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__scatterResults(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scatterResults = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__nextWindyTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextWindyTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__nextWindyTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextWindyTimes;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__nextWindyTimes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextWindyTimes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__CachedTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__CachedTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedTransform_k__BackingField;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__CachedTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedTransform_k__BackingField = value;
}
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIScatterLog_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIScatterLog_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIScatterLog_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIScatterLog_k__BackingField;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__GUIScatterLog_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GUIScatterLog_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIDebugMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIDebugMode_k__BackingField;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIDebugMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIDebugMode_k__BackingField;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__GUIDebugMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GUIDebugMode_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIDebugScatter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIDebugScatter_k__BackingField;
}
constexpr bool const& GlobalNamespace::AmbiencePlayer::__cordl_internal_get__GUIDebugScatter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GUIDebugScatter_k__BackingField;
}
constexpr void GlobalNamespace::AmbiencePlayer::__cordl_internal_set__GUIDebugScatter_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GUIDebugScatter_k__BackingField = value;
}
inline void GlobalNamespace::AmbiencePlayer::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AmbiencePlayer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AmbiencePlayer>, "<Instance>k__BackingField", ::GlobalNamespace::AmbiencePlayer*>(std::forward<::UnityW<::GlobalNamespace::AmbiencePlayer>>(value));
}
inline ::UnityW<::GlobalNamespace::AmbiencePlayer> GlobalNamespace::AmbiencePlayer::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AmbiencePlayer>, "<Instance>k__BackingField", ::GlobalNamespace::AmbiencePlayer*>();
}
inline void GlobalNamespace::AmbiencePlayer::setStaticF_Labels(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "Labels", ::GlobalNamespace::AmbiencePlayer*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::AmbiencePlayer::getStaticF_Labels()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "Labels", ::GlobalNamespace::AmbiencePlayer*>();
}
inline void GlobalNamespace::AmbiencePlayer::setStaticF_LabelsWind(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "LabelsWind", ::GlobalNamespace::AmbiencePlayer*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::AmbiencePlayer::getStaticF_LabelsWind()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "LabelsWind", ::GlobalNamespace::AmbiencePlayer*>();
}
inline void GlobalNamespace::AmbiencePlayer::setStaticF__directions2D(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "_directions2D", ::GlobalNamespace::AmbiencePlayer*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::AmbiencePlayer::getStaticF__directions2D()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "_directions2D", ::GlobalNamespace::AmbiencePlayer*>();
}
inline ::UnityW<::GlobalNamespace::AmbiencePlayer> GlobalNamespace::AmbiencePlayer::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AmbiencePlayer>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_Instance(::GlobalNamespace::AmbiencePlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>* GlobalNamespace::AmbiencePlayer::get_EmitterLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_EmitterLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_EmitterLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_EmitterLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SplineSampleStruct,::GlobalNamespace::AmbienceEmitters>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AmbiencePlayer::get_CachedTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_CachedTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_CachedTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_CachedTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::AmbiencePlayer::get_GUIScatterLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIScatterLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_GUIScatterLog(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIScatterLog", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::AmbiencePlayer::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::AmbiencePlayer::get_GUIDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_GUIDebugMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AmbiencePlayer::get_GUIDebugScatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"get_GUIDebugScatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::set_GUIDebugScatter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"set_GUIDebugScatter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AmbiencePlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::Deregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"Deregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::PlayNonBiomeAmbiences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"PlayNonBiomeAmbiences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::UpdateBeachSoundsPositions(::GlobalNamespace::OceanSoundSample  sample, float_t  deltaTime, float_t  sideToTop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateBeachSoundsPositions", {}, {::i2c::type_of<::GlobalNamespace::OceanSoundSample>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample, deltaTime, sideToTop);
}
inline void GlobalNamespace::AmbiencePlayer::UpdateScatters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateScatters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::UpdateBeachWaves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateBeachWaves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::UpdateRockyWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateRockyWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::UpdateWindySound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"UpdateWindySound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationSE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationSE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationSW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationSW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationNW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationNW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationNE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationNE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationRumble(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationRumble", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationFarSE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarSE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationFarSW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarSW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationFarNW(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarNW", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::AmbiencePlayer::GetAttenuationFarNE(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetAttenuationFarNE", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline void GlobalNamespace::AmbiencePlayer::OnMovingTooFast(::UnityEngine::Vector3  newPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AmbiencePlayer::GetInterpolatedPositionFromDirectionFills(::GlobalNamespace::AudioDynamicReverb*  reverb, ::by_ref<float_t>  totalFill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"GetInterpolatedPositionFromDirectionFills", {}, {::i2c::type_of<::GlobalNamespace::AudioDynamicReverb*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, reverb, totalFill);
}
inline void GlobalNamespace::AmbiencePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_5(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_5", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, i, c);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_6(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_6", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, i, c);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_7(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_7", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, i, c);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRumbleRef_109_0(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRumbleRef|109_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_1(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_1", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_2(::GlobalNamespace::AmbiencePlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_2", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline bool GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___windHighGetX_109_3(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___windHighGetX|109_3", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_8(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_8", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, i, c);
}
inline bool GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___windLowGetX_109_4(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___windLowGetX|109_4", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AmbiencePlayer::_PlayNonBiomeAmbiences_g___clearRefs_109_9(::GlobalNamespace::AmbiencePlayer*  p, int32_t  i, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<PlayNonBiomeAmbiences>g___clearRefs|109_9", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, i, c);
}
inline void GlobalNamespace::AmbiencePlayer::_UpdateBeachWaves_g___clearRefs_112_0(::GlobalNamespace::AmbiencePlayer*  p, ::UnityEngine::Vector3  v, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<UpdateBeachWaves>g___clearRefs|112_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, v, c);
}
inline void GlobalNamespace::AmbiencePlayer::_UpdateRockyWater_g___clearRefs_113_0(::GlobalNamespace::AmbiencePlayer*  p, ::UnityEngine::Vector3  v, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbiencePlayer*>(),
                        {"<UpdateRockyWater>g___clearRefs|113_0", {}, {::i2c::type_of<::GlobalNamespace::AmbiencePlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, v, c);
}
inline ::GlobalNamespace::AmbiencePlayer* GlobalNamespace::AmbiencePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbiencePlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::AmbiencePlayer::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::AmbiencePlayer::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbiencePlayer::AmbiencePlayer()   {
}
