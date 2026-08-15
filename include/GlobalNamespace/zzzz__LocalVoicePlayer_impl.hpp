#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoicePlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalVoicePlayer_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__LocalVoicePlayerMicrophoneCache_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.get_ASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::get_ASC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"get_ASC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.set_ASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LocalVoicePlayer::set_ASC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d49a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"set_ASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.add_OnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::LocalVoicePlayer::add_OnPlay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d4880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"add_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.remove_OnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::LocalVoicePlayer::remove_OnPlay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d4910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"remove_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803d3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803d4670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803d3f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.OnDissonanceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::OnDissonanceStart)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1803d4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"OnDissonanceStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.CheckAndRestart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::CheckAndRestart)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"CheckAndRestart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::Play)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803d4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)()>(&::GlobalNamespace::LocalVoicePlayer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer._Start_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoicePlayer::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::LocalVoicePlayer::_Start_b__20_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"<Start>b__20_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoicePlayer._OnDissonanceStart_g___clearRef_23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LocalVoicePlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::LocalVoicePlayer::_OnDissonanceStart_g___clearRef_23_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"<OnDissonanceStart>g___clearRef|23_0", {}, {::i2c::type_of<::GlobalNamespace::LocalVoicePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_Cue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_Cue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cue = value;
}
constexpr bool& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_NonStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NonStop;
}
constexpr bool const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_NonStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NonStop;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set_NonStop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NonStop = value;
}
constexpr bool& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_AmpGating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmpGating;
}
constexpr bool const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_AmpGating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmpGating;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set_AmpGating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmpGating = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr ::Dissonance::VoicePlayerState*& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__voiceState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceState;
}
constexpr ::Dissonance::VoicePlayerState* const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__voiceState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceState;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__voiceState(::Dissonance::VoicePlayerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceState = value;
}
constexpr int32_t& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr float_t& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__gateVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateVol;
}
constexpr float_t const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__gateVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateVol;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__gateVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gateVol = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__microphoneCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneCache;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache> const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__microphoneCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneCache;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__microphoneCache(::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneCache = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__ASC_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ASC_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get__ASC_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ASC_k__BackingField;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set__ASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ASC_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_OnPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlay;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::LocalVoicePlayer::__cordl_internal_get_OnPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlay;
}
constexpr void GlobalNamespace::LocalVoicePlayer::__cordl_internal_set_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlay = value;
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::LocalVoicePlayer::get_ASC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"get_ASC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::set_ASC(::GlobalNamespace::AudioSourceController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"set_ASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::LocalVoicePlayer::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::add_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"add_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalVoicePlayer::remove_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"remove_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalVoicePlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::OnDissonanceStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"OnDissonanceStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::CheckAndRestart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"CheckAndRestart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoicePlayer::_Start_b__20_0(::GlobalNamespace::PlayerCharacter*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"<Start>b__20_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void GlobalNamespace::LocalVoicePlayer::_OnDissonanceStart_g___clearRef_23_0(::GlobalNamespace::LocalVoicePlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoicePlayer*>(),
                        {"<OnDissonanceStart>g___clearRef|23_0", {}, {::i2c::type_of<::GlobalNamespace::LocalVoicePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::LocalVoicePlayer* GlobalNamespace::LocalVoicePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalVoicePlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalVoicePlayer::LocalVoicePlayer()   {
}
