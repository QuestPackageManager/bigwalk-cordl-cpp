#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BasePreprocessingPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/zzzz__ArvCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePreprocessingPipeline)
namespace Dissonance::Audio::Capture {
class BufferedSampleProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio::Capture {
class IPreprocessingPipeline;
}
namespace Dissonance::Audio::Capture {
class Resampler;
}
namespace Dissonance::Audio::Capture {
class SampleToFrameProvider;
}
namespace Dissonance::Audio {
class AudioFileWriter;
}
namespace Dissonance::Threading {
class DThread;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class BasePreprocessingPipeline;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::BasePreprocessingPipeline*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::BasePreprocessingPipeline*, "Dissonance.Audio.Capture", "BasePreprocessingPipeline");
// Dependencies Dissonance.Audio.ArvCalculator, System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.BasePreprocessingPipeline
class CORDL_TYPE BasePreprocessingPipeline : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(put=set_IsOutputMuted)) bool  IsOutputMuted;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_OutputFormat)) ::NAudio::Wave::WaveFormat*  OutputFormat;

 __declspec(property(get=get_OutputFrameSize)) int32_t  OutputFrameSize;

 __declspec(property(get=get_PreprocessorLatencyMs)) int32_t  PreprocessorLatencyMs;

 __declspec(property(get=get_UpstreamLatency, put=set_UpstreamLatency)) ::System::TimeSpan  UpstreamLatency;

 __declspec(property(get=get_VadIsSpeechDetected)) bool  VadIsSpeechDetected;

/// @brief Field _arv, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__arv, put=__cordl_internal_set__arv)) ::Dissonance::Audio::ArvCalculator  _arv;

/// @brief Field _diagnosticOutputRecorder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__diagnosticOutputRecorder, put=__cordl_internal_set__diagnosticOutputRecorder)) ::Dissonance::Audio::AudioFileWriter*  _diagnosticOutputRecorder;

/// @brief Field _droppedSamples, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__droppedSamples, put=__cordl_internal_set__droppedSamples)) int32_t  _droppedSamples;

/// @brief Field _estimatedPreprocessorLatencyMs, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__estimatedPreprocessorLatencyMs, put=__cordl_internal_set__estimatedPreprocessorLatencyMs)) int32_t  _estimatedPreprocessorLatencyMs;

/// @brief Field _inputWriteLock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputWriteLock, put=__cordl_internal_set__inputWriteLock)) ::System::Object*  _inputWriteLock;

/// @brief Field _intermediateFrame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__intermediateFrame, put=__cordl_internal_set__intermediateFrame)) ::ArrayW<float_t>  _intermediateFrame;

/// @brief Field _micSubscriptionCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__micSubscriptionCount, put=__cordl_internal_set__micSubscriptionCount)) int32_t  _micSubscriptionCount;

/// @brief Field _micSubscriptions, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__micSubscriptions, put=__cordl_internal_set__micSubscriptions)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*  _micSubscriptions;

/// @brief Field _outputFormat, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputFormat, put=__cordl_internal_set__outputFormat)) ::NAudio::Wave::WaveFormat*  _outputFormat;

/// @brief Field _outputFrameSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputFrameSize, put=__cordl_internal_set__outputFrameSize)) int32_t  _outputFrameSize;

/// @brief Field _resampledOutput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampledOutput, put=__cordl_internal_set__resampledOutput)) ::Dissonance::Audio::Capture::SampleToFrameProvider*  _resampledOutput;

/// @brief Field _resampler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampler, put=__cordl_internal_set__resampler)) ::Dissonance::Audio::Capture::Resampler*  _resampler;

/// @brief Field _resamplerInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__resamplerInput, put=__cordl_internal_set__resamplerInput)) ::Dissonance::Audio::Capture::BufferedSampleProvider*  _resamplerInput;

/// @brief Field _resetApplied, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetApplied, put=__cordl_internal_set__resetApplied)) bool  _resetApplied;

/// @brief Field _resetRequested, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__resetRequested, put=__cordl_internal_set__resetRequested)) int32_t  _resetRequested;

/// @brief Field _runThread, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__runThread, put=__cordl_internal_set__runThread)) bool  _runThread;

/// @brief Field _thread, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__thread, put=__cordl_internal_set__thread)) ::Dissonance::Threading::DThread*  _thread;

/// @brief Field _threadEvent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__threadEvent, put=__cordl_internal_set__threadEvent)) ::System::Threading::AutoResetEvent*  _threadEvent;

/// @brief Field _upstreamLatencyMs, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__upstreamLatencyMs, put=__cordl_internal_set__upstreamLatencyMs)) int32_t  _upstreamLatencyMs;

/// @brief Field _vadSubscriptionCount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__vadSubscriptionCount, put=__cordl_internal_set__vadSubscriptionCount)) int32_t  _vadSubscriptionCount;

/// @brief Field _vadSubscriptions, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__vadSubscriptions, put=__cordl_internal_set__vadSubscriptions)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*  _vadSubscriptions;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IPreprocessingPipeline"
constexpr operator  ::Dissonance::Audio::Capture::IPreprocessingPipeline*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ApplyReset, addr 0x1805f07c0, size 0x110, virtual true, abstract: false, final false
inline void ApplyReset() ;

/// @brief Method BeforePreprocessAudioFrame, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void BeforePreprocessAudioFrame(::ArrayW<float_t>  frame) ;

/// @brief Method Dispose, addr 0x1805f08d0, size 0x2a0, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData, addr 0x1805f0b70, size 0x1f0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  data, ::NAudio::Wave::WaveFormat*  format) ;

static inline ::Dissonance::Audio::Capture::BasePreprocessingPipeline* New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, int32_t  intermediateFrameSize, int32_t  intermediateSampleRate, int32_t  outputFrameSize, int32_t  outputSampleRate) ;

/// @brief Method PreprocessAudioFrame, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PreprocessAudioFrame(::ArrayW<float_t>  frame) ;

/// @brief Method Reset, addr 0x1805f0d60, size 0x40, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SendResetToSubscribers, addr 0x1805f0da0, size 0x200, virtual false, abstract: false, final false
inline void SendResetToSubscribers() ;

/// @brief Method SendSamplesToSubscribers, addr 0x1805f0fa0, size 0x340, virtual false, abstract: false, final false
inline void SendSamplesToSubscribers(::ArrayW<float_t>  buffer) ;

/// @brief Method SendStartedTalking, addr 0x1805f12e0, size 0xf0, virtual false, abstract: false, final false
inline void SendStartedTalking() ;

/// @brief Method SendStartedTalking, addr 0x1805f13d0, size 0xc0, virtual false, abstract: false, final false
static inline void SendStartedTalking(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method SendStoppedTalking, addr 0x1805f1550, size 0xf0, virtual false, abstract: false, final false
inline void SendStoppedTalking() ;

/// @brief Method SendStoppedTalking, addr 0x1805f1490, size 0xc0, virtual false, abstract: false, final false
static inline void SendStoppedTalking(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method Start, addr 0x1805f1640, size 0x30, virtual true, abstract: false, final true
inline void Start() ;

/// @brief Method Subscribe, addr 0x1805f17e0, size 0x140, virtual true, abstract: false, final false
inline void Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Subscribe, addr 0x1805f1670, size 0x170, virtual true, abstract: false, final false
inline void Subscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method ThreadEntry, addr 0x1805f1920, size 0x470, virtual false, abstract: false, final false
inline void ThreadEntry() ;

/// @brief Method ThreadStart, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ThreadStart() ;

/// @brief Method Unsubscribe, addr 0x1805f1ed0, size 0x120, virtual true, abstract: false, final false
inline bool Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Unsubscribe, addr 0x1805f1d90, size 0x140, virtual true, abstract: false, final false
inline bool Unsubscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

constexpr ::Dissonance::Audio::ArvCalculator const& __cordl_internal_get__arv() const;

constexpr ::Dissonance::Audio::ArvCalculator& __cordl_internal_get__arv() ;

constexpr ::Dissonance::Audio::AudioFileWriter* const& __cordl_internal_get__diagnosticOutputRecorder() const;

constexpr ::Dissonance::Audio::AudioFileWriter*& __cordl_internal_get__diagnosticOutputRecorder() ;

constexpr int32_t const& __cordl_internal_get__droppedSamples() const;

constexpr int32_t& __cordl_internal_get__droppedSamples() ;

constexpr int32_t const& __cordl_internal_get__estimatedPreprocessorLatencyMs() const;

constexpr int32_t& __cordl_internal_get__estimatedPreprocessorLatencyMs() ;

constexpr ::System::Object* const& __cordl_internal_get__inputWriteLock() const;

constexpr ::System::Object*& __cordl_internal_get__inputWriteLock() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__intermediateFrame() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__intermediateFrame() ;

constexpr int32_t const& __cordl_internal_get__micSubscriptionCount() const;

constexpr int32_t& __cordl_internal_get__micSubscriptionCount() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>* const& __cordl_internal_get__micSubscriptions() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*& __cordl_internal_get__micSubscriptions() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__outputFormat() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__outputFormat() ;

constexpr int32_t const& __cordl_internal_get__outputFrameSize() const;

constexpr int32_t& __cordl_internal_get__outputFrameSize() ;

constexpr ::Dissonance::Audio::Capture::SampleToFrameProvider* const& __cordl_internal_get__resampledOutput() const;

constexpr ::Dissonance::Audio::Capture::SampleToFrameProvider*& __cordl_internal_get__resampledOutput() ;

constexpr ::Dissonance::Audio::Capture::Resampler* const& __cordl_internal_get__resampler() const;

constexpr ::Dissonance::Audio::Capture::Resampler*& __cordl_internal_get__resampler() ;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& __cordl_internal_get__resamplerInput() const;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& __cordl_internal_get__resamplerInput() ;

constexpr bool const& __cordl_internal_get__resetApplied() const;

constexpr bool& __cordl_internal_get__resetApplied() ;

constexpr int32_t const& __cordl_internal_get__resetRequested() const;

constexpr int32_t& __cordl_internal_get__resetRequested() ;

constexpr bool const& __cordl_internal_get__runThread() const;

constexpr bool& __cordl_internal_get__runThread() ;

constexpr ::Dissonance::Threading::DThread* const& __cordl_internal_get__thread() const;

constexpr ::Dissonance::Threading::DThread*& __cordl_internal_get__thread() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get__threadEvent() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get__threadEvent() ;

constexpr int32_t const& __cordl_internal_get__upstreamLatencyMs() const;

constexpr int32_t& __cordl_internal_get__upstreamLatencyMs() ;

constexpr int32_t const& __cordl_internal_get__vadSubscriptionCount() const;

constexpr int32_t& __cordl_internal_get__vadSubscriptionCount() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>* const& __cordl_internal_get__vadSubscriptions() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*& __cordl_internal_get__vadSubscriptions() ;

constexpr void __cordl_internal_set__arv(::Dissonance::Audio::ArvCalculator  value) ;

constexpr void __cordl_internal_set__diagnosticOutputRecorder(::Dissonance::Audio::AudioFileWriter*  value) ;

constexpr void __cordl_internal_set__droppedSamples(int32_t  value) ;

constexpr void __cordl_internal_set__estimatedPreprocessorLatencyMs(int32_t  value) ;

constexpr void __cordl_internal_set__inputWriteLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__intermediateFrame(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__micSubscriptionCount(int32_t  value) ;

constexpr void __cordl_internal_set__micSubscriptions(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*  value) ;

constexpr void __cordl_internal_set__outputFormat(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__outputFrameSize(int32_t  value) ;

constexpr void __cordl_internal_set__resampledOutput(::Dissonance::Audio::Capture::SampleToFrameProvider*  value) ;

constexpr void __cordl_internal_set__resampler(::Dissonance::Audio::Capture::Resampler*  value) ;

constexpr void __cordl_internal_set__resamplerInput(::Dissonance::Audio::Capture::BufferedSampleProvider*  value) ;

constexpr void __cordl_internal_set__resetApplied(bool  value) ;

constexpr void __cordl_internal_set__resetRequested(int32_t  value) ;

constexpr void __cordl_internal_set__runThread(bool  value) ;

constexpr void __cordl_internal_set__thread(::Dissonance::Threading::DThread*  value) ;

constexpr void __cordl_internal_set__threadEvent(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set__upstreamLatencyMs(int32_t  value) ;

constexpr void __cordl_internal_set__vadSubscriptionCount(int32_t  value) ;

constexpr void __cordl_internal_set__vadSubscriptions(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*  value) ;

/// @brief Method .ctor, addr 0x1805f2040, size 0x330, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  inputFormat, int32_t  intermediateFrameSize, int32_t  intermediateSampleRate, int32_t  outputFrameSize, int32_t  outputSampleRate) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0x180346a80, size 0x10, virtual true, abstract: false, final true
inline float_t get_Amplitude() ;

/// @brief Method get_OutputFormat, addr 0x1802e0b30, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_OutputFormat() ;

/// @brief Method get_OutputFrameSize, addr 0x1803d4dd0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_OutputFrameSize() ;

/// @brief Method get_PreprocessorLatencyMs, addr 0x1805f2370, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PreprocessorLatencyMs() ;

/// @brief Method get_UpstreamLatency, addr 0x1805f2380, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeSpan get_UpstreamLatency() ;

/// @brief Method get_VadIsSpeechDetected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_VadIsSpeechDetected() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

/// @brief Convert to "::Dissonance::Audio::Capture::IPreprocessingPipeline"
constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline* i___Dissonance__Audio__Capture__IPreprocessingPipeline() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsOutputMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsOutputMuted(bool  value) ;

/// @brief Method set_UpstreamLatency, addr 0x1805f23a0, size 0x30, virtual true, abstract: false, final true
inline void set_UpstreamLatency(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasePreprocessingPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasePreprocessingPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasePreprocessingPipeline(BasePreprocessingPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasePreprocessingPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasePreprocessingPipeline(BasePreprocessingPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17021};

/// @brief Field _arv, offset: 0x10, size: 0x4, def value: None
 ::Dissonance::Audio::ArvCalculator  ____arv;

/// @brief Field _droppedSamples, offset: 0x14, size: 0x4, def value: None
 int32_t  ____droppedSamples;

/// @brief Field _inputWriteLock, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____inputWriteLock;

/// @brief Field _resamplerInput, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::BufferedSampleProvider*  ____resamplerInput;

/// @brief Field _resampler, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::Resampler*  ____resampler;

/// @brief Field _resampledOutput, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::SampleToFrameProvider*  ____resampledOutput;

/// @brief Field _intermediateFrame, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____intermediateFrame;

/// @brief Field _diagnosticOutputRecorder, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::AudioFileWriter*  ____diagnosticOutputRecorder;

/// @brief Field _outputFrameSize, offset: 0x48, size: 0x4, def value: None
 int32_t  ____outputFrameSize;

/// @brief Field _outputFormat, offset: 0x50, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____outputFormat;

/// @brief Field _resetApplied, offset: 0x58, size: 0x1, def value: None
 bool  ____resetApplied;

/// @brief Field _resetRequested, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____resetRequested;

/// @brief Field _runThread, offset: 0x60, size: 0x1, def value: None
 bool  ____runThread;

/// @brief Field _thread, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::Threading::DThread*  ____thread;

/// @brief Field _threadEvent, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ____threadEvent;

/// @brief Field _micSubscriptions, offset: 0x78, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*>*  ____micSubscriptions;

/// @brief Field _micSubscriptionCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ____micSubscriptionCount;

/// @brief Field _vadSubscriptions, offset: 0x88, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*>*  ____vadSubscriptions;

/// @brief Field _vadSubscriptionCount, offset: 0x90, size: 0x4, def value: None
 int32_t  ____vadSubscriptionCount;

/// @brief Field _upstreamLatencyMs, offset: 0x94, size: 0x4, def value: None
 int32_t  ____upstreamLatencyMs;

/// @brief Field _estimatedPreprocessorLatencyMs, offset: 0x98, size: 0x4, def value: None
 int32_t  ____estimatedPreprocessorLatencyMs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____arv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____droppedSamples) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____inputWriteLock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____resamplerInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____resampler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____resampledOutput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____intermediateFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____diagnosticOutputRecorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____outputFrameSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____outputFormat) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____resetApplied) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____resetRequested) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____runThread) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____thread) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____threadEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____micSubscriptions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____micSubscriptionCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____vadSubscriptions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____vadSubscriptionCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____upstreamLatencyMs) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasePreprocessingPipeline, ____estimatedPreprocessorLatencyMs) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::BasePreprocessingPipeline) == 0xa0, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
