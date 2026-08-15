#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPipeVideoAudio.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPipeVideoAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPipeVideoAudio_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "GlobalNamespace/zzzz__VideoPlayerAudioAssigner_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio___c::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio___c._Awake_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio___c::*)(::ArrayW<float_t>)>(&::GlobalNamespace::PeckEffectPipeVideoAudio___c::_Awake_b__7_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(),
                        {"<Awake>b__7_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PeckEffectPipeVideoAudio___c::setStaticF___9(::GlobalNamespace::PeckEffectPipeVideoAudio___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PeckEffectPipeVideoAudio___c*, "<>9", ::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(std::forward<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(value));
}
inline ::GlobalNamespace::PeckEffectPipeVideoAudio___c* GlobalNamespace::PeckEffectPipeVideoAudio___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PeckEffectPipeVideoAudio___c*, "<>9", ::GlobalNamespace::PeckEffectPipeVideoAudio___c*>();
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio___c::setStaticF___9__7_0(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__7_0", ::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(std::forward<::UnityEngine::AudioClip_PCMReaderCallback*>(value));
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* GlobalNamespace::PeckEffectPipeVideoAudio___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__7_0", ::GlobalNamespace::PeckEffectPipeVideoAudio___c*>();
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio___c::_Awake_b__7_0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>(),
                        {"<Awake>b__7_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::GlobalNamespace::PeckEffectPipeVideoAudio___c* GlobalNamespace::PeckEffectPipeVideoAudio___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPipeVideoAudio___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPipeVideoAudio___c::PeckEffectPipeVideoAudio___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::Awake)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18044b550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18044b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18044bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPipeVideoAudio::Peck)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18044b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::Play)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18044bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18044b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPipeVideoAudio::*)()>(&::GlobalNamespace::PeckEffectPipeVideoAudio::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio._Peck_g___onStop_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VideoPlayerAudioAssigner*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PeckEffectPipeVideoAudio::_Peck_g___onStop_11_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"<Peck>g___onStop|11_0", {}, {::i2c::type_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPipeVideoAudio._Play_g___clearRef_12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PeckEffectPipeVideoAudio*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PeckEffectPipeVideoAudio::_Play_g___clearRef_12_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d59b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"<Play>g___clearRef|12_0", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_audioCue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_audioCue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCue;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set_audioCue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioCue = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_audioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_audioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioTransform = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_bigScreenMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigScreenMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_bigScreenMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigScreenMixer;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set_bigScreenMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigScreenMixer = value;
}
constexpr bool& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get__sourceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_get__sourceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr void GlobalNamespace::PeckEffectPipeVideoAudio::__cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceController = value;
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::_Peck_g___onStop_11_0(::GlobalNamespace::VideoPlayerAudioAssigner*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"<Peck>g___onStop|11_0", {}, {::i2c::type_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::PeckEffectPipeVideoAudio::_Play_g___clearRef_12_0(::GlobalNamespace::PeckEffectPipeVideoAudio*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(),
                        {"<Play>g___clearRef|12_0", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectPipeVideoAudio*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::PeckEffectPipeVideoAudio* GlobalNamespace::PeckEffectPipeVideoAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPipeVideoAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPipeVideoAudio::PeckEffectPipeVideoAudio()   {
}
