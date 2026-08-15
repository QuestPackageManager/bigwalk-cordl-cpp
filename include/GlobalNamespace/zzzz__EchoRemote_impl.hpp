#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoRemote.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EchoRemote_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SamplePlaybackComponent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVoicePlaybackControl_def.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180334090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180333780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::Start)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180333990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180333950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180333910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::Update)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x180333b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.OnCloseEchoVoicePlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::EchoRemote::OnCloseEchoVoicePlayed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180333870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnCloseEchoVoicePlayed", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.OnDirectEchoVoicePlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::EchoRemote::OnDirectEchoVoicePlayed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803338c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnDirectEchoVoicePlayed", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EchoRemote::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::EchoRemote::GetX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180333850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EchoRemote._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EchoRemote::*)()>(&::GlobalNamespace::EchoRemote::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180334000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& GlobalNamespace::EchoRemote::__cordl_internal_get_VoiceControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceControl;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& GlobalNamespace::EchoRemote::__cordl_internal_get_VoiceControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceControl;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set_VoiceControl(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceControl = value;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& GlobalNamespace::EchoRemote::__cordl_internal_get_DissonanceSampleProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissonanceSampleProvider;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& GlobalNamespace::EchoRemote::__cordl_internal_get_DissonanceSampleProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissonanceSampleProvider;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set_DissonanceSampleProvider(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissonanceSampleProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& GlobalNamespace::EchoRemote::__cordl_internal_get_VoicePlayerDirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePlayerDirect;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& GlobalNamespace::EchoRemote::__cordl_internal_get_VoicePlayerDirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePlayerDirect;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set_VoicePlayerDirect(::UnityW<::GlobalNamespace::VoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePlayerDirect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EchoRemote::__cordl_internal_get_VoicePlayerClosePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePlayerClosePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EchoRemote::__cordl_internal_get_VoicePlayerClosePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePlayerClosePrefab;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set_VoicePlayerClosePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePlayerClosePrefab = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::EchoRemote::__cordl_internal_get__echoDirectVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoDirectVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::EchoRemote::__cordl_internal_get__echoDirectVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoDirectVol;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set__echoDirectVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoDirectVol = value;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& GlobalNamespace::EchoRemote::__cordl_internal_get__voicePlayerClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicePlayerClose;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& GlobalNamespace::EchoRemote::__cordl_internal_get__voicePlayerClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicePlayerClose;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set__voicePlayerClose(::UnityW<::GlobalNamespace::VoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voicePlayerClose = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::EchoRemote::__cordl_internal_get__echoCloseVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoCloseVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::EchoRemote::__cordl_internal_get__echoCloseVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoCloseVol;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set__echoCloseVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoCloseVol = value;
}
constexpr float_t& GlobalNamespace::EchoRemote::__cordl_internal_get__distToLocal2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distToLocal2D;
}
constexpr float_t const& GlobalNamespace::EchoRemote::__cordl_internal_get__distToLocal2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distToLocal2D;
}
constexpr void GlobalNamespace::EchoRemote::__cordl_internal_set__distToLocal2D(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distToLocal2D = value;
}
inline ::StringW GlobalNamespace::EchoRemote::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EchoRemote::OnCloseEchoVoicePlayed(::GlobalNamespace::AudioSourceController*  asc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnCloseEchoVoicePlayed", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asc);
}
inline void GlobalNamespace::EchoRemote::OnDirectEchoVoicePlayed(::GlobalNamespace::AudioSourceController*  asc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"OnDirectEchoVoicePlayed", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asc);
}
inline bool GlobalNamespace::EchoRemote::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::EchoRemote::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EchoRemote*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EchoRemote* GlobalNamespace::EchoRemote::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EchoRemote*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::EchoRemote::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::EchoRemote::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EchoRemote::EchoRemote()   {
}
