#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SpeechSessionStream.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSessionStream_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipeline_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IJitterEstimator_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "Dissonance/Datastructures/zzzz__WindowDeviationCalculator_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Playback::SpeechSessionStream::*)()>(&::Dissonance::Audio::Playback::SpeechSessionStream::get_PlayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"get_PlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.set_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::StringW)>(&::Dissonance::Audio::Playback::SpeechSessionStream::set_PlayerName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e9f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.Dissonance_Audio_Playback_IJitterEstimator_get_Jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SpeechSessionStream::*)()>(&::Dissonance::Audio::Playback::SpeechSessionStream::Dissonance_Audio_Playback_IJitterEstimator_get_Jitter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805e95d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"Dissonance.Audio.Playback.IJitterEstimator.get_Jitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.Dissonance_Audio_Playback_IJitterEstimator_get_Confidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SpeechSessionStream::*)()>(&::Dissonance::Audio::Playback::SpeechSessionStream::Dissonance_Audio_Playback_IJitterEstimator_get_Confidence)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e9580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"Dissonance.Audio.Playback.IJitterEstimator.get_Confidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::SpeechSessionStream::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e9ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.SetFixedOutputRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::System::Nullable_1<int32_t>)>(&::Dissonance::Audio::Playback::SpeechSessionStream::SetFixedOutputRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"SetFixedOutputRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::Dissonance::Audio::Playback::FrameFormat, ::System::Nullable_1<::System::DateTime>, ::Dissonance::Audio::Playback::IJitterEstimator*)>(&::Dissonance::Audio::Playback::SpeechSessionStream::StartSession)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1805e98b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"StartSession", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.TryDequeueSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::System::Nullable_1<::System::DateTime>)>(&::Dissonance::Audio::Playback::SpeechSessionStream::TryDequeueSession)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805e9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"TryDequeueSession", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.ReceiveFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(::Dissonance::Networking::VoicePacket, ::System::Nullable_1<::System::DateTime>)>(&::Dissonance::Audio::Playback::SpeechSessionStream::ReceiveFrame)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805e96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"ReceiveFrame", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.ForceReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)()>(&::Dissonance::Audio::Playback::SpeechSessionStream::ForceReset)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805e95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"ForceReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSessionStream.StopSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSessionStream::*)(bool)>(&::Dissonance::Audio::Playback::SpeechSessionStream::StopSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e9bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"StopSession", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__metricArrivalDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metricArrivalDelay;
}
constexpr ::StringW const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__metricArrivalDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metricArrivalDelay;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__metricArrivalDelay(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metricArrivalDelay = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__awaitingActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____awaitingActivation;
}
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>* const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__awaitingActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____awaitingActivation;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__awaitingActivation(::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____awaitingActivation = value;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__volumeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__volumeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeProvider = value;
}
constexpr ::System::Nullable_1<int32_t>& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__outputRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputRate;
}
constexpr ::System::Nullable_1<int32_t> const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__outputRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputRate;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__outputRate(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputRate = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__queueHeadFirstDequeueAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueHeadFirstDequeueAttempt;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__queueHeadFirstDequeueAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueHeadFirstDequeueAttempt;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__queueHeadFirstDequeueAttempt(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queueHeadFirstDequeueAttempt = value;
}
constexpr ::Dissonance::Audio::Playback::DecoderPipeline*& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr ::Dissonance::Audio::Playback::DecoderPipeline* const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__active(::Dissonance::Audio::Playback::DecoderPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr uint32_t& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__currentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentId;
}
constexpr uint32_t const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__currentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentId;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__currentId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentId = value;
}
constexpr ::StringW& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
constexpr ::StringW const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerName = value;
}
constexpr ::Dissonance::Datastructures::WindowDeviationCalculator*& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__arrivalJitterMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrivalJitterMeter;
}
constexpr ::Dissonance::Datastructures::WindowDeviationCalculator* const& Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_get__arrivalJitterMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrivalJitterMeter;
}
constexpr void Dissonance::Audio::Playback::SpeechSessionStream::__cordl_internal_set__arrivalJitterMeter(::Dissonance::Datastructures::WindowDeviationCalculator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrivalJitterMeter = value;
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SpeechSessionStream*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::SpeechSessionStream::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SpeechSessionStream*>();
}
inline ::StringW Dissonance::Audio::Playback::SpeechSessionStream::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::set_PlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::SpeechSessionStream::Dissonance_Audio_Playback_IJitterEstimator_get_Jitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"Dissonance.Audio.Playback.IJitterEstimator.get_Jitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SpeechSessionStream::Dissonance_Audio_Playback_IJitterEstimator_get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"Dissonance.Audio.Playback.IJitterEstimator.get_Confidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::_ctor(::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeProvider);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::SetFixedOutputRate(::System::Nullable_1<int32_t>  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"SetFixedOutputRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rate);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::StartSession(::Dissonance::Audio::Playback::FrameFormat  format, ::System::Nullable_1<::System::DateTime>  now, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"StartSession", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, now, jitter);
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> Dissonance::Audio::Playback::SpeechSessionStream::TryDequeueSession(::System::Nullable_1<::System::DateTime>  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"TryDequeueSession", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>(this, ___internal_method, now);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::ReceiveFrame(::Dissonance::Networking::VoicePacket  packet, ::System::Nullable_1<::System::DateTime>  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"ReceiveFrame", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, now);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::ForceReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"ForceReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SpeechSessionStream::StopSession(bool  logNoSessionError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSessionStream*>(),
                        {"StopSession", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logNoSessionError);
}
inline ::Dissonance::Audio::Playback::SpeechSessionStream* Dissonance::Audio::Playback::SpeechSessionStream::New_ctor(::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::SpeechSessionStream*>(volumeProvider));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IJitterEstimator"
constexpr  Dissonance::Audio::Playback::SpeechSessionStream::operator ::Dissonance::Audio::Playback::IJitterEstimator*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IJitterEstimator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IJitterEstimator"
constexpr ::Dissonance::Audio::Playback::IJitterEstimator* Dissonance::Audio::Playback::SpeechSessionStream::i___Dissonance__Audio__Playback__IJitterEstimator() noexcept {
return static_cast<::Dissonance::Audio::Playback::IJitterEstimator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SpeechSessionStream::SpeechSessionStream()   {
}
