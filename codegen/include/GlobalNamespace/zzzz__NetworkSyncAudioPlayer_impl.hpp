#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSyncAudioPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSyncAudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTimerNetworked_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::Awake)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803da440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803da580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::OnStart)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803da6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::OnFinish)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803da650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::Update)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1803da730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSyncAudioPlayer::*)()>(&::GlobalNamespace::NetworkSyncAudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSyncAudioPlayer._Update_g___clearRef_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetworkSyncAudioPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::NetworkSyncAudioPlayer::_Update_g___clearRef_10_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803da6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"<Update>g___clearRef|10_0", {}, {::i2c::type_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_peckEffectTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffectTimer;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_peckEffectTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffectTimer;
}
constexpr void GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_set_peckEffectTimer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckEffectTimer = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_set_sound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_tForm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tForm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get_tForm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tForm;
}
constexpr void GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_set_tForm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tForm = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
constexpr float_t& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get__startNetworkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNetworkTime;
}
constexpr float_t const& GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_get__startNetworkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNetworkTime;
}
constexpr void GlobalNamespace::NetworkSyncAudioPlayer::__cordl_internal_set__startNetworkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startNetworkTime = value;
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::OnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSyncAudioPlayer::_Update_g___clearRef_10_0(::GlobalNamespace::NetworkSyncAudioPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(),
                        {"<Update>g___clearRef|10_0", {}, {::i2c::type_of<::GlobalNamespace::NetworkSyncAudioPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::NetworkSyncAudioPlayer* GlobalNamespace::NetworkSyncAudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSyncAudioPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSyncAudioPlayer::NetworkSyncAudioPlayer()   {
}
