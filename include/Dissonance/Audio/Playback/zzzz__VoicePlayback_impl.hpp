#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/VoicePlayback.hpp"
#include "Dissonance/Audio/Playback/zzzz__BaseVoicePlayback_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__VoicePlayback_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SamplePlaybackComponent_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.add_OnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::Dissonance::Audio::Playback::VoicePlayback::add_OnPlay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805edda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"add_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.remove_OnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::Dissonance::Audio::Playback::VoicePlayback::remove_OnPlay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805ede80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"remove_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::get_Amplitude)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ede30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805eda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)(::Dissonance::Audio::Playback::IPriorityManager*, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::VoicePlayback::Setup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805edc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.UpdatePositionalPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::UpdatePositionalPlayback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805edb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"UpdatePositionalPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback.TryGetActiveSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::TryGetActiveSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805edab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VoicePlayback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VoicePlayback::*)()>(&::Dissonance::Audio::Playback::VoicePlayback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805d89e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get_AudioSourceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSourceController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get_AudioSourceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSourceController;
}
constexpr void Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_set_AudioSourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSourceController = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get_OnPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlay;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get_OnPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlay;
}
constexpr void Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_set_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlay = value;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_set__player(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
constexpr ::System::Nullable_1<float_t>& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get__savedSpatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedSpatialBlend;
}
constexpr ::System::Nullable_1<float_t> const& Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_get__savedSpatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedSpatialBlend;
}
constexpr void Dissonance::Audio::Playback::VoicePlayback::__cordl_internal_set__savedSpatialBlend(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedSpatialBlend = value;
}
inline void Dissonance::Audio::Playback::VoicePlayback::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::VoicePlayback*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::VoicePlayback::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::VoicePlayback*>();
}
inline void Dissonance::Audio::Playback::VoicePlayback::add_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"add_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::VoicePlayback::remove_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"remove_OnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::VoicePlayback::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, volume);
}
inline void Dissonance::Audio::Playback::VoicePlayback::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::UpdatePositionalPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {"UpdatePositionalPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> Dissonance::Audio::Playback::VoicePlayback::TryGetActiveSession()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VoicePlayback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VoicePlayback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::VoicePlayback* Dissonance::Audio::Playback::VoicePlayback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::VoicePlayback*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::VoicePlayback::VoicePlayback()   {
}
