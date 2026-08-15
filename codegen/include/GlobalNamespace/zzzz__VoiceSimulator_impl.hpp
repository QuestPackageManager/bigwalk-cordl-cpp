#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceSimulator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceSimulator_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVoicePlaybackControl_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceSimulator::*)()>(&::GlobalNamespace::VoiceSimulator::OnEnable)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803f5770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceSimulator::*)()>(&::GlobalNamespace::VoiceSimulator::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f5730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceSimulator::*)()>(&::GlobalNamespace::VoiceSimulator::Update)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x1803f5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoiceSimulator::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::VoiceSimulator::GetX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceSimulator::*)()>(&::GlobalNamespace::VoiceSimulator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f6130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceSimulator._OnEnable_g___clearRef_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoiceSimulator*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::VoiceSimulator::_OnEnable_g___clearRef_8_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f5b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"<OnEnable>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::VoiceSimulator*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::VoiceSimulator::__cordl_internal_get_Voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Voice;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::VoiceSimulator::__cordl_internal_get_Voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Voice;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set_Voice(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Voice = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& GlobalNamespace::VoiceSimulator::__cordl_internal_get_VoicePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& GlobalNamespace::VoiceSimulator::__cordl_internal_get_VoicePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePrefab;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set_VoicePrefab(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VoiceSimulator::__cordl_internal_get_HeadPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VoiceSimulator::__cordl_internal_get_HeadPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadPos;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set_HeadPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeadPos = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::VoiceSimulator::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::VoiceSimulator::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
constexpr int32_t& GlobalNamespace::VoiceSimulator::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& GlobalNamespace::VoiceSimulator::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::VoiceSimulator::__cordl_internal_get__eqFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::VoiceSimulator::__cordl_internal_get__eqFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFilter;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set__eqFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eqFilter = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoiceSimulator::__cordl_internal_get__outdoornessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoiceSimulator::__cordl_internal_get__outdoornessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessVol;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set__outdoornessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outdoornessVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoiceSimulator::__cordl_internal_get__speechlessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoiceSimulator::__cordl_internal_get__speechlessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr void GlobalNamespace::VoiceSimulator::__cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessVol = value;
}
inline void GlobalNamespace::VoiceSimulator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceSimulator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceSimulator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VoiceSimulator::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::VoiceSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceSimulator::_OnEnable_g___clearRef_8_0(::GlobalNamespace::VoiceSimulator*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceSimulator*>(),
                        {"<OnEnable>g___clearRef|8_0", {}, {::i2c::type_of<::GlobalNamespace::VoiceSimulator*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::VoiceSimulator* GlobalNamespace::VoiceSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceSimulator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceSimulator::VoiceSimulator()   {
}
