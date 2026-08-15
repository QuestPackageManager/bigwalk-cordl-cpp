#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SpeechSession.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IDecoderPipeline_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IJitterEstimator_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SyncState_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_BufferCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ea8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_BufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::SessionContext (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_Context)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_PlaybackOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::PlaybackOptions (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_PlaybackOptions)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805eaa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_OutputWaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_OutputWaveFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ea9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_OutputWaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_PacketLoss)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ea9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider* (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_Channels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_TargetActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_TargetActivationTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805eac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_TargetActivationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_Delay)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805ea8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.get_SyncState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::SyncState (::Dissonance::Audio::Playback::SpeechSession::*)()>(&::Dissonance::Audio::Playback::SpeechSession::get_SyncState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805eab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_SyncState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSession::*)(::Dissonance::Audio::Playback::SessionContext, ::Dissonance::Audio::Playback::IJitterEstimator*, ::Dissonance::Audio::Playback::IDecoderPipeline*, ::Dissonance::Audio::Playback::IRemoteChannelProvider*, ::System::DateTime)>(&::Dissonance::Audio::Playback::SpeechSession::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805ea790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IDecoderPipeline*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::SpeechSession (*)(::Dissonance::Audio::Playback::SessionContext, ::Dissonance::Audio::Playback::IJitterEstimator*, ::Dissonance::Audio::Playback::IDecoderPipeline*, ::Dissonance::Audio::Playback::IRemoteChannelProvider*, ::System::DateTime)>(&::Dissonance::Audio::Playback::SpeechSession::Create)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e9fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IDecoderPipeline*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSession::*)(::System::DateTime)>(&::Dissonance::Audio::Playback::SpeechSession::Prepare)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1805ea0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Prepare", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SpeechSession::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::SpeechSession::Read)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805ea540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SpeechSession.SetOutputSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SpeechSession::*)(::System::Nullable_1<int32_t>)>(&::Dissonance::Audio::Playback::SpeechSession::SetOutputSampleRate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805ea620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"SetOutputSampleRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::SpeechSession::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SpeechSession>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::SpeechSession::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SpeechSession>();
}
inline void Dissonance::Audio::Playback::SpeechSession::setStaticF_DesyncFixBuffer(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "DesyncFixBuffer", ::Dissonance::Audio::Playback::SpeechSession>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Dissonance::Audio::Playback::SpeechSession::getStaticF_DesyncFixBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "DesyncFixBuffer", ::Dissonance::Audio::Playback::SpeechSession>();
}
inline void Dissonance::Audio::Playback::SpeechSession::setStaticF_FixedDelayToleranceTicks(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FixedDelayToleranceTicks", ::Dissonance::Audio::Playback::SpeechSession>(std::forward<int32_t>(value));
}
inline int32_t Dissonance::Audio::Playback::SpeechSession::getStaticF_FixedDelayToleranceTicks()  {
return ::cordl_internals::getStaticField<int32_t, "FixedDelayToleranceTicks", ::Dissonance::Audio::Playback::SpeechSession>();
}
inline void Dissonance::Audio::Playback::SpeechSession::setStaticF_InitialBufferDelay(float_t  value)  {
::cordl_internals::setStaticField<float_t, "InitialBufferDelay", ::Dissonance::Audio::Playback::SpeechSession>(std::forward<float_t>(value));
}
inline float_t Dissonance::Audio::Playback::SpeechSession::getStaticF_InitialBufferDelay()  {
return ::cordl_internals::getStaticField<float_t, "InitialBufferDelay", ::Dissonance::Audio::Playback::SpeechSession>();
}
inline int32_t Dissonance::Audio::Playback::SpeechSession::get_BufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_BufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::SessionContext Dissonance::Audio::Playback::SpeechSession::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::SessionContext>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PlaybackOptions Dissonance::Audio::Playback::SpeechSession::get_PlaybackOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::PlaybackOptions>(*this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::SpeechSession::get_OutputWaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_OutputWaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(*this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SpeechSession::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IRemoteChannelProvider* Dissonance::Audio::Playback::SpeechSession::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(*this, ___internal_method);
}
inline ::System::DateTime Dissonance::Audio::Playback::SpeechSession::get_TargetActivationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_TargetActivationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Playback::SpeechSession::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::SyncState Dissonance::Audio::Playback::SpeechSession::get_SyncState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"get_SyncState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::SyncState>(*this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SpeechSession::_ctor(::Dissonance::Audio::Playback::SessionContext  context, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter, ::Dissonance::Audio::Playback::IDecoderPipeline*  pipeline, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  channels, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IDecoderPipeline*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, jitter, pipeline, channels, now);
}
inline ::Dissonance::Audio::Playback::SpeechSession Dissonance::Audio::Playback::SpeechSession::Create(::Dissonance::Audio::Playback::SessionContext  context, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter, ::Dissonance::Audio::Playback::IDecoderPipeline*  pipeline, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  channels, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>(), ::i2c::type_of<::Dissonance::Audio::Playback::IJitterEstimator*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IDecoderPipeline*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::SpeechSession>(nullptr, ___internal_method, context, jitter, pipeline, channels, now);
}
inline void Dissonance::Audio::Playback::SpeechSession::Prepare(::System::DateTime  timeOfFirstDequeueAttempt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Prepare", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeOfFirstDequeueAttempt);
}
inline bool Dissonance::Audio::Playback::SpeechSession::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, samples);
}
inline void Dissonance::Audio::Playback::SpeechSession::SetOutputSampleRate(::System::Nullable_1<int32_t>  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SpeechSession>(),
                        {"SetOutputSampleRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rate);
}
// Ctor Parameters [CppParam { name: "_minimumDelay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_channels", ty: "::Dissonance::Audio::Playback::IRemoteChannelProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pipeline", ty: "::Dissonance::Audio::Playback::IDecoderPipeline*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_context", ty: "::Dissonance::Audio::Playback::SessionContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "_creationTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_jitter", ty: "::Dissonance::Audio::Playback::IJitterEstimator*", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::SpeechSession::SpeechSession(float_t  _minimumDelay, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  _channels, ::Dissonance::Audio::Playback::IDecoderPipeline*  _pipeline, ::Dissonance::Audio::Playback::SessionContext  _context, ::System::DateTime  _creationTime, ::Dissonance::Audio::Playback::IJitterEstimator*  _jitter) noexcept  {
this->_minimumDelay = _minimumDelay;
this->_channels = _channels;
this->_pipeline = _pipeline;
this->_context = _context;
this->_creationTime = _creationTime;
this->_jitter = _jitter;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SpeechSession::SpeechSession()   {
}
