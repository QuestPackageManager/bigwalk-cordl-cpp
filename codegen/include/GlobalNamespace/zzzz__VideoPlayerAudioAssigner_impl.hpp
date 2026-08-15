#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoPlayerAudioAssigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VideoPlayerAudioAssigner_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VideoPlayerAudioAssigner_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner___c::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner___c._Awake_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner___c::*)(::ArrayW<float_t>)>(&::GlobalNamespace::VideoPlayerAudioAssigner___c::_Awake_b__4_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner___c*>(),
                        {"<Awake>b__4_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VideoPlayerAudioAssigner___c::setStaticF___9(::GlobalNamespace::VideoPlayerAudioAssigner___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VideoPlayerAudioAssigner___c*, "<>9", ::GlobalNamespace::VideoPlayerAudioAssigner___c*>(std::forward<::GlobalNamespace::VideoPlayerAudioAssigner___c*>(value));
}
inline ::GlobalNamespace::VideoPlayerAudioAssigner___c* GlobalNamespace::VideoPlayerAudioAssigner___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VideoPlayerAudioAssigner___c*, "<>9", ::GlobalNamespace::VideoPlayerAudioAssigner___c*>();
}
inline void GlobalNamespace::VideoPlayerAudioAssigner___c::setStaticF___9__4_0(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__4_0", ::GlobalNamespace::VideoPlayerAudioAssigner___c*>(std::forward<::UnityEngine::AudioClip_PCMReaderCallback*>(value));
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* GlobalNamespace::VideoPlayerAudioAssigner___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__4_0", ::GlobalNamespace::VideoPlayerAudioAssigner___c*>();
}
inline void GlobalNamespace::VideoPlayerAudioAssigner___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner___c::_Awake_b__4_0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner___c*>(),
                        {"<Awake>b__4_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::GlobalNamespace::VideoPlayerAudioAssigner___c* GlobalNamespace::VideoPlayerAudioAssigner___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoPlayerAudioAssigner___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoPlayerAudioAssigner___c::VideoPlayerAudioAssigner___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18041b2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18041b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f5730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18041b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.SetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::VideoPlayerAudioAssigner::SetAudioSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18041b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"SetAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.SetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::SetToDefault)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"SetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::Refresh)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18041b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner.PlaySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::PlaySource)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18041b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"PlaySource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoPlayerAudioAssigner::*)()>(&::GlobalNamespace::VideoPlayerAudioAssigner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoPlayerAudioAssigner._PlaySource_g___onStop_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VideoPlayerAudioAssigner*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::VideoPlayerAudioAssigner::_PlaySource_g___onStop_11_0)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18041b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"<PlaySource>g___onStop|11_0", {}, {::i2c::type_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get_videoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoPlayer;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get_videoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoPlayer;
}
constexpr void GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_set_videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___videoPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get_audioCue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get_audioCue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCue;
}
constexpr void GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_set_audioCue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioCue = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get__sourceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_get__sourceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr void GlobalNamespace::VideoPlayerAudioAssigner::__cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceController = value;
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::SetAudioSource(::UnityEngine::AudioSource*  newSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"SetAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSource);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::SetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"SetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::PlaySource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"PlaySource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VideoPlayerAudioAssigner::_PlaySource_g___onStop_11_0(::GlobalNamespace::VideoPlayerAudioAssigner*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(),
                        {"<PlaySource>g___onStop|11_0", {}, {::i2c::type_of<::GlobalNamespace::VideoPlayerAudioAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::VideoPlayerAudioAssigner* GlobalNamespace::VideoPlayerAudioAssigner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoPlayerAudioAssigner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoPlayerAudioAssigner::VideoPlayerAudioAssigner()   {
}
