#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BasePreprocessingPipeline.hpp"
#include "Dissonance/Audio/zzzz__ArvCalculator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__BasePreprocessingPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__BufferedSampleProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IPreprocessingPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__Resampler_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__SampleToFrameProvider_def.hpp"
#include "Dissonance/Audio/zzzz__AudioFileWriter_def.hpp"
#include "Dissonance/Threading/zzzz__DThread_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_Amplitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_Amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_OutputFrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_OutputFrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_OutputFrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.set_IsOutputMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(bool)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::set_IsOutputMuted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_OutputFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_OutputFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_OutputFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_VadIsSpeechDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_VadIsSpeechDetected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_UpstreamLatency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_UpstreamLatency)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f2380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_UpstreamLatency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.set_UpstreamLatency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::System::TimeSpan)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::set_UpstreamLatency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f23a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"set_UpstreamLatency", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.get_PreprocessorLatencyMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::get_PreprocessorLatencyMs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f2370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_PreprocessorLatencyMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::NAudio::Wave::WaveFormat*, int32_t, int32_t, int32_t, int32_t)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1805f2040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Dispose)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1805f08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805f0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.ApplyReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::ApplyReset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805f07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805f0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f1640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.ThreadEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::ThreadEntry)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1805f1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"ThreadEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.ThreadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::ThreadStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.BeforePreprocessAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::BeforePreprocessAudioFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.PreprocessAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::PreprocessAudioFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendSamplesToSubscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendSamplesToSubscribers)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1805f0fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendSamplesToSubscribers", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendResetToSubscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendResetToSubscribers)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805f0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendResetToSubscribers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Subscribe)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805f17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Unsubscribe)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805f1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendStoppedTalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStoppedTalking)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805f1550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStoppedTalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendStoppedTalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStoppedTalking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f1490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStoppedTalking", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendStartedTalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStartedTalking)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805f12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStartedTalking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.SendStartedTalking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStartedTalking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f13d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStartedTalking", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Subscribe)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805f1670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasePreprocessingPipeline.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasePreprocessingPipeline::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::BasePreprocessingPipeline::Unsubscribe)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805f1d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 27}
                ));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::ArvCalculator& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__arv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arv;
}
constexpr ::Dissonance::Audio::ArvCalculator const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__arv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arv;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__arv(::Dissonance::Audio::ArvCalculator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arv = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__droppedSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedSamples;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__droppedSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedSamples;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__droppedSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droppedSamples = value;
}
constexpr ::System::Object*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__inputWriteLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputWriteLock;
}
constexpr ::System::Object* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__inputWriteLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputWriteLock;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__inputWriteLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputWriteLock = value;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resamplerInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resamplerInput;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resamplerInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resamplerInput;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__resamplerInput(::Dissonance::Audio::Capture::BufferedSampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resamplerInput = value;
}
constexpr ::Dissonance::Audio::Capture::Resampler*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr ::Dissonance::Audio::Capture::Resampler* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__resampler(::Dissonance::Audio::Capture::Resampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampler = value;
}
constexpr ::Dissonance::Audio::Capture::SampleToFrameProvider*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resampledOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampledOutput;
}
constexpr ::Dissonance::Audio::Capture::SampleToFrameProvider* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resampledOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampledOutput;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__resampledOutput(::Dissonance::Audio::Capture::SampleToFrameProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampledOutput = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__intermediateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediateFrame;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__intermediateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediateFrame;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__intermediateFrame(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intermediateFrame = value;
}
constexpr ::Dissonance::Audio::AudioFileWriter*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__diagnosticOutputRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutputRecorder;
}
constexpr ::Dissonance::Audio::AudioFileWriter* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__diagnosticOutputRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutputRecorder;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__diagnosticOutputRecorder(::Dissonance::Audio::AudioFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diagnosticOutputRecorder = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__outputFrameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFrameSize;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__outputFrameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFrameSize;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__outputFrameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputFrameSize = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__outputFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFormat;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__outputFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFormat;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__outputFormat(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputFormat = value;
}
constexpr bool& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resetApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetApplied;
}
constexpr bool const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resetApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetApplied;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__resetApplied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetApplied = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resetRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetRequested;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__resetRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetRequested;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__resetRequested(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetRequested = value;
}
constexpr bool& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__runThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runThread;
}
constexpr bool const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__runThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runThread;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__runThread(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runThread = value;
}
constexpr ::Dissonance::Threading::DThread*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__thread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr ::Dissonance::Threading::DThread* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__thread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__thread(::Dissonance::Threading::DThread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thread = value;
}
constexpr ::System::Threading::AutoResetEvent*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__threadEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadEvent;
}
constexpr ::System::Threading::AutoResetEvent* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__threadEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadEvent;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__threadEvent(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threadEvent = value;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__micSubscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSubscriptions;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__micSubscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSubscriptions;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__micSubscriptions(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micSubscriptions = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__micSubscriptionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSubscriptionCount;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__micSubscriptionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSubscriptionCount;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__micSubscriptionCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micSubscriptionCount = value;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__vadSubscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSubscriptions;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>* const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__vadSubscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSubscriptions;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__vadSubscriptions(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vadSubscriptions = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__vadSubscriptionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSubscriptionCount;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__vadSubscriptionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSubscriptionCount;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__vadSubscriptionCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vadSubscriptionCount = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__upstreamLatencyMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstreamLatencyMs;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__upstreamLatencyMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstreamLatencyMs;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__upstreamLatencyMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upstreamLatencyMs = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__estimatedPreprocessorLatencyMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimatedPreprocessorLatencyMs;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_get__estimatedPreprocessorLatencyMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____estimatedPreprocessorLatencyMs;
}
constexpr void Dissonance::Audio::Capture::BasePreprocessingPipeline::__cordl_internal_set__estimatedPreprocessorLatencyMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____estimatedPreprocessorLatencyMs = value;
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::BasePreprocessingPipeline::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::BasePreprocessingPipeline*>();
}
inline float_t Dissonance::Audio::Capture::BasePreprocessingPipeline::get_Amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_Amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Capture::BasePreprocessingPipeline::get_OutputFrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_OutputFrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::set_IsOutputMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::BasePreprocessingPipeline::get_OutputFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_OutputFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline bool Dissonance::Audio::Capture::BasePreprocessingPipeline::get_VadIsSpeechDetected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Capture::BasePreprocessingPipeline::get_UpstreamLatency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_UpstreamLatency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::set_UpstreamLatency(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"set_UpstreamLatency", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Capture::BasePreprocessingPipeline::get_PreprocessorLatencyMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"get_PreprocessorLatencyMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::_ctor(::NAudio::Wave::WaveFormat*  inputFormat, int32_t  intermediateFrameSize, int32_t  intermediateSampleRate, int32_t  outputFrameSize, int32_t  outputSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputFormat, intermediateFrameSize, intermediateSampleRate, outputFrameSize, outputSampleRate);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::ApplyReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  data, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, format);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::ThreadEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"ThreadEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::ThreadStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::BeforePreprocessAudioFrame(::ArrayW<float_t>  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::PreprocessAudioFrame(::ArrayW<float_t>  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendSamplesToSubscribers(::ArrayW<float_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendSamplesToSubscribers", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendResetToSubscribers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendResetToSubscribers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline bool Dissonance::Audio::Capture::BasePreprocessingPipeline::Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStoppedTalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStoppedTalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStoppedTalking(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStoppedTalking", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStartedTalking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStartedTalking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::SendStartedTalking(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(),
                        {"SendStartedTalking", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::BasePreprocessingPipeline::Subscribe(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline bool Dissonance::Audio::Capture::BasePreprocessingPipeline::Unsubscribe(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline ::Dissonance::Audio::Capture::BasePreprocessingPipeline* Dissonance::Audio::Capture::BasePreprocessingPipeline::New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, int32_t  intermediateFrameSize, int32_t  intermediateSampleRate, int32_t  outputFrameSize, int32_t  outputSampleRate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::BasePreprocessingPipeline*>(inputFormat, intermediateFrameSize, intermediateSampleRate, outputFrameSize, outputSampleRate));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IPreprocessingPipeline"
constexpr  Dissonance::Audio::Capture::BasePreprocessingPipeline::operator ::Dissonance::Audio::Capture::IPreprocessingPipeline*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IPreprocessingPipeline*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IPreprocessingPipeline"
constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline* Dissonance::Audio::Capture::BasePreprocessingPipeline::i___Dissonance__Audio__Capture__IPreprocessingPipeline() noexcept {
return static_cast<::Dissonance::Audio::Capture::IPreprocessingPipeline*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Capture::BasePreprocessingPipeline::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Capture::BasePreprocessingPipeline::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  Dissonance::Audio::Capture::BasePreprocessingPipeline::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* Dissonance::Audio::Capture::BasePreprocessingPipeline::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::BasePreprocessingPipeline::BasePreprocessingPipeline()   {
}
