#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioPlayer.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCue_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FmRadioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__FmRadioDial_def.hpp"
#include "GlobalNamespace/zzzz__FmRadioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "musicPlayer", ty: "::UnityW<::GlobalNamespace::MusicPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "musicIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FmRadioPlayer_MusicPlayerData::FmRadioPlayer_MusicPlayerData(::UnityW<::GlobalNamespace::MusicPlayer>  musicPlayer, int32_t  musicIndex) noexcept  {
this->musicPlayer = musicPlayer;
this->musicIndex = musicIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FmRadioPlayer_MusicPlayerData::FmRadioPlayer_MusicPlayerData()   {
}
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803fcb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803fcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803fcbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803fd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.RefreshEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)(bool)>(&::GlobalNamespace::FmRadioPlayer::RefreshEffects)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803fd170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"RefreshEffects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.SetMusicPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)(::GlobalNamespace::MusicGroup*)>(&::GlobalNamespace::FmRadioPlayer::SetMusicPlayer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803fd360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SetMusicPlayer", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.SetStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)(int32_t, bool)>(&::GlobalNamespace::FmRadioPlayer::SetStatic)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1803fd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SetStatic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::FmRadioPlayer::OnPeck)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803fcf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.SyncToTimeOfTheDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::SyncToTimeOfTheDay)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803fd770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SyncToTimeOfTheDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer.OnUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)(int32_t)>(&::GlobalNamespace::FmRadioPlayer::OnUnlock)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803fcff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnUnlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioPlayer::*)()>(&::GlobalNamespace::FmRadioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioPlayer._SetStatic_g___clearRef_16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FmRadioPlayer*, int32_t, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FmRadioPlayer::_SetStatic_g___clearRef_16_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18031da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"<SetStatic>g___clearRef|16_0", {}, {::i2c::type_of<::GlobalNamespace::FmRadioPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_stateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_stateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_stateSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_musicPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicPlayers;
}
constexpr ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_musicPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicPlayers;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_musicPlayers(::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicPlayers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_staticAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticAssets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_staticAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticAssets;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_staticAssets(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticAssets = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_transitionSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_transitionSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionSound;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_transitionSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionSound = value;
}
constexpr ::UnityW<::GlobalNamespace::FmRadioDial>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_fmRadioDial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fmRadioDial;
}
constexpr ::UnityW<::GlobalNamespace::FmRadioDial> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_fmRadioDial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fmRadioDial;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_fmRadioDial(::UnityW<::GlobalNamespace::FmRadioDial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fmRadioDial = value;
}
constexpr bool& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Nullable_1<int32_t>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get__stationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationIndex;
}
constexpr ::System::Nullable_1<int32_t> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get__stationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationIndex;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set__stationIndex(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stationIndex = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& GlobalNamespace::FmRadioPlayer::__cordl_internal_get__staticSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticSources;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& GlobalNamespace::FmRadioPlayer::__cordl_internal_get__staticSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticSources;
}
constexpr void GlobalNamespace::FmRadioPlayer::__cordl_internal_set__staticSources(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____staticSources = value;
}
inline void GlobalNamespace::FmRadioPlayer::setStaticF_OnTimeJump(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnTimeJump", ::GlobalNamespace::FmRadioPlayer*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::FmRadioPlayer::getStaticF_OnTimeJump()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnTimeJump", ::GlobalNamespace::FmRadioPlayer*>();
}
inline void GlobalNamespace::FmRadioPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::RefreshEffects(bool  unlocking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"RefreshEffects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unlocking);
}
inline void GlobalNamespace::FmRadioPlayer::SetMusicPlayer(::GlobalNamespace::MusicGroup*  musicGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SetMusicPlayer", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, musicGroup);
}
inline void GlobalNamespace::FmRadioPlayer::SetStatic(int32_t  stationIndex, bool  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SetStatic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex, transition);
}
inline void GlobalNamespace::FmRadioPlayer::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::FmRadioPlayer::SyncToTimeOfTheDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"SyncToTimeOfTheDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::OnUnlock(int32_t  stationIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"OnUnlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex);
}
inline void GlobalNamespace::FmRadioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioPlayer::_SetStatic_g___clearRef_16_0(::GlobalNamespace::FmRadioPlayer*  p, int32_t  index, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioPlayer*>(),
                        {"<SetStatic>g___clearRef|16_0", {}, {::i2c::type_of<::GlobalNamespace::FmRadioPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, index, c);
}
inline ::GlobalNamespace::FmRadioPlayer* GlobalNamespace::FmRadioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FmRadioPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FmRadioPlayer::FmRadioPlayer()   {
}
