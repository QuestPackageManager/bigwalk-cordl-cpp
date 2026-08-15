#pragma once
// IWYU pragma private; include "Dissonance/Demo/MicSubscriberPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Demo/zzzz__MicSubscriberPlayer_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__BufferedSampleProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRateProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__Resampler_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Demo/zzzz__MicSubscriberPlayer_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::*)(::Dissonance::Audio::Capture::BufferedSampleProvider*)>(&::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::*)()>(&::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::get_WaveFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d11a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Prepare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::*)()>(&::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d1180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::__cordl_internal_get__provider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::__cordl_internal_get__provider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider;
}
constexpr void Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::__cordl_internal_set__provider(::Dissonance::Audio::Capture::BufferedSampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____provider = value;
}
inline void Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::_ctor(::Dissonance::Audio::Capture::BufferedSampleProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline void Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper* Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::New_ctor(::Dissonance::Audio::Capture::BufferedSampleProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*>(provider));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr  Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::operator ::Dissonance::Audio::Playback::ISampleSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::i___Dissonance__Audio__Playback__ISampleSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper::MicSubscriberPlayer_SourceWrapper()   {
}
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate.get_PlaybackRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Demo::MicSubscriberPlayer_ConstantRate::*)()>(&::Dissonance::Demo::MicSubscriberPlayer_ConstantRate::get_PlaybackRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*>(),
                        {"get_PlaybackRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer_ConstantRate::*)()>(&::Dissonance::Demo::MicSubscriberPlayer_ConstantRate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Dissonance::Demo::MicSubscriberPlayer_ConstantRate::get_PlaybackRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*>(),
                        {"get_PlaybackRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Demo::MicSubscriberPlayer_ConstantRate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate* Dissonance::Demo::MicSubscriberPlayer_ConstantRate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr  Dissonance::Demo::MicSubscriberPlayer_ConstantRate::operator ::Dissonance::Audio::Playback::IRateProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* Dissonance::Demo::MicSubscriberPlayer_ConstantRate::i___Dissonance__Audio__Playback__IRateProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate::MicSubscriberPlayer_ConstantRate()   {
}
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer::*)(::ArrayW<float_t>, int32_t)>(&::Dissonance::Demo::MicSubscriberPlayer::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805cc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer.ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::Demo::MicSubscriberPlayer::ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805cc6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer.Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer::*)()>(&::Dissonance::Demo::MicSubscriberPlayer::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805cc510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer.SetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer::*)(::NAudio::Wave::WaveFormat*)>(&::Dissonance::Demo::MicSubscriberPlayer::SetFormat)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805cc710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"SetFormat", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::MicSubscriberPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::MicSubscriberPlayer::*)()>(&::Dissonance::Demo::MicSubscriberPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr void Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_set__inputBuffer(::Dissonance::Audio::Capture::BufferedSampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBuffer = value;
}
constexpr ::Dissonance::Audio::Playback::Resampler*& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::Dissonance::Audio::Playback::Resampler* const& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_set__output(::Dissonance::Audio::Playback::Resampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
constexpr bool& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr bool const& Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void Dissonance::Demo::MicSubscriberPlayer::__cordl_internal_set__playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playing = value;
}
inline void Dissonance::Demo::MicSubscriberPlayer::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void Dissonance::Demo::MicSubscriberPlayer::ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, format);
}
inline void Dissonance::Demo::MicSubscriberPlayer::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::MicSubscriberPlayer::SetFormat(::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {"SetFormat", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void Dissonance::Demo::MicSubscriberPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::MicSubscriberPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::MicSubscriberPlayer* Dissonance::Demo::MicSubscriberPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::MicSubscriberPlayer*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  Dissonance::Demo::MicSubscriberPlayer::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* Dissonance::Demo::MicSubscriberPlayer::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::MicSubscriberPlayer::MicSubscriberPlayer()   {
}
