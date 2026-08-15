#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BasicMicrophoneCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicMicrophoneCapture)
namespace Dissonance::Audio::Capture {
class BufferedSampleProvider;
}
namespace Dissonance::Audio::Capture {
class IFrameProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneCapture;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneDeviceList;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio {
class AudioFileWriter;
}
namespace Dissonance::Datastructures {
class POTBuffer;
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
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class BasicMicrophoneCapture;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::BasicMicrophoneCapture*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::BasicMicrophoneCapture*, "Dissonance.Audio.Capture", "BasicMicrophoneCapture");
// Dependencies System.TimeSpan, UnityEngine.MonoBehaviour
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.BasicMicrophoneCapture
class CORDL_TYPE BasicMicrophoneCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_Device)) ::StringW  Device;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_Latency, put=set_Latency)) ::System::TimeSpan  Latency;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field <Latency>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Latency_k__BackingField, put=__cordl_internal_set__Latency_k__BackingField)) ::System::TimeSpan  _Latency_k__BackingField;

/// @brief Field _audioDeviceChanged, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__audioDeviceChanged, put=__cordl_internal_set__audioDeviceChanged)) bool  _audioDeviceChanged;

/// @brief Field _clip, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__clip, put=__cordl_internal_set__clip)) ::UnityW<::UnityEngine::AudioClip>  _clip;

/// @brief Field _format, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _frame, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__frame, put=__cordl_internal_set__frame)) ::ArrayW<float_t>  _frame;

/// @brief Field _maxReadBufferPower, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__maxReadBufferPower, put=__cordl_internal_set__maxReadBufferPower)) uint8_t  _maxReadBufferPower;

/// @brief Field _micName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__micName, put=__cordl_internal_set__micName)) ::StringW  _micName;

/// @brief Field _microphoneDiagnosticOutput, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDiagnosticOutput, put=__cordl_internal_set__microphoneDiagnosticOutput)) ::Dissonance::Audio::AudioFileWriter*  _microphoneDiagnosticOutput;

/// @brief Field _rawMicFrames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawMicFrames, put=__cordl_internal_set__rawMicFrames)) ::Dissonance::Audio::Capture::IFrameProvider*  _rawMicFrames;

/// @brief Field _rawMicSamples, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawMicSamples, put=__cordl_internal_set__rawMicSamples)) ::Dissonance::Audio::Capture::BufferedSampleProvider*  _rawMicSamples;

/// @brief Field _readBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__readBuffer, put=__cordl_internal_set__readBuffer)) ::Dissonance::Datastructures::POTBuffer*  _readBuffer;

/// @brief Field _readHead, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__readHead, put=__cordl_internal_set__readHead)) int32_t  _readHead;

/// @brief Field _started, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _subscribers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribers, put=__cordl_internal_set__subscribers)) ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  _subscribers;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneCapture"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneCapture*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneDeviceList"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneDeviceList*() noexcept;

/// @brief Method ChooseMicName, addr 0x1805f23d0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ChooseMicName(::StringW  micName) ;

/// @brief Method ConsumeSamples, addr 0x1805f2460, size 0xd0, virtual false, abstract: false, final false
inline void ConsumeSamples(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method DrainMicSamples, addr 0x1805f2530, size 0x460, virtual false, abstract: false, final false
inline void DrainMicSamples() ;

/// @brief Method GetDevices, addr 0x1805f2990, size 0x40, virtual true, abstract: false, final true
inline void GetDevices(::System::Collections::Generic::List_1<::StringW>*  output) ;

static inline ::Dissonance::Audio::Capture::BasicMicrophoneCapture* New_ctor() ;

/// @brief Method OnAudioDeviceChanged, addr 0x1805f29d0, size 0x10, virtual false, abstract: false, final false
inline void OnAudioDeviceChanged(bool  deviceWasChanged) ;

/// @brief Method OnDestroy, addr 0x1805f29e0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SendFrame, addr 0x1805f2a30, size 0x2d0, virtual false, abstract: false, final false
inline void SendFrame() ;

/// @brief Method StartCapture, addr 0x1805f2d00, size 0x680, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* StartCapture(::StringW  inputMicName) ;

/// @brief Method StopCapture, addr 0x1805f3380, size 0x170, virtual true, abstract: false, final false
inline void StopCapture() ;

/// @brief Method Subscribe, addr 0x1805f34f0, size 0x80, virtual true, abstract: false, final true
inline void Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Unsubscribe, addr 0x1805f3570, size 0x40, virtual true, abstract: false, final true
inline bool Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method UpdateSubscribers, addr 0x1805f35b0, size 0x1a0, virtual true, abstract: false, final true
inline bool UpdateSubscribers() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__Latency_k__BackingField() const;

constexpr ::System::TimeSpan& __cordl_internal_get__Latency_k__BackingField() ;

constexpr bool const& __cordl_internal_get__audioDeviceChanged() const;

constexpr bool& __cordl_internal_get__audioDeviceChanged() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clip() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__frame() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__frame() ;

constexpr uint8_t const& __cordl_internal_get__maxReadBufferPower() const;

constexpr uint8_t& __cordl_internal_get__maxReadBufferPower() ;

constexpr ::StringW const& __cordl_internal_get__micName() const;

constexpr ::StringW& __cordl_internal_get__micName() ;

constexpr ::Dissonance::Audio::AudioFileWriter* const& __cordl_internal_get__microphoneDiagnosticOutput() const;

constexpr ::Dissonance::Audio::AudioFileWriter*& __cordl_internal_get__microphoneDiagnosticOutput() ;

constexpr ::Dissonance::Audio::Capture::IFrameProvider* const& __cordl_internal_get__rawMicFrames() const;

constexpr ::Dissonance::Audio::Capture::IFrameProvider*& __cordl_internal_get__rawMicFrames() ;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& __cordl_internal_get__rawMicSamples() const;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& __cordl_internal_get__rawMicSamples() ;

constexpr ::Dissonance::Datastructures::POTBuffer* const& __cordl_internal_get__readBuffer() const;

constexpr ::Dissonance::Datastructures::POTBuffer*& __cordl_internal_get__readBuffer() ;

constexpr int32_t const& __cordl_internal_get__readHead() const;

constexpr int32_t& __cordl_internal_get__readHead() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>* const& __cordl_internal_get__subscribers() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*& __cordl_internal_get__subscribers() ;

constexpr void __cordl_internal_set__Latency_k__BackingField(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__audioDeviceChanged(bool  value) ;

constexpr void __cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__frame(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__maxReadBufferPower(uint8_t  value) ;

constexpr void __cordl_internal_set__micName(::StringW  value) ;

constexpr void __cordl_internal_set__microphoneDiagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value) ;

constexpr void __cordl_internal_set__rawMicFrames(::Dissonance::Audio::Capture::IFrameProvider*  value) ;

constexpr void __cordl_internal_set__rawMicSamples(::Dissonance::Audio::Capture::BufferedSampleProvider*  value) ;

constexpr void __cordl_internal_set__readBuffer(::Dissonance::Datastructures::POTBuffer*  value) ;

constexpr void __cordl_internal_set__readHead(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__subscribers(::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  value) ;

/// @brief Method .ctor, addr 0x1805f37a0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Clip, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_Device, addr 0x1803a74d0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Device() ;

/// @brief Method get_IsRecording, addr 0x1805f3820, size 0x10, virtual true, abstract: false, final true
inline bool get_IsRecording() ;

/// @brief Method get_Latency, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final true
inline ::System::TimeSpan get_Latency() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneCapture"
constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture* i___Dissonance__Audio__Capture__IMicrophoneCapture() noexcept;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneDeviceList"
constexpr ::Dissonance::Audio::Capture::IMicrophoneDeviceList* i___Dissonance__Audio__Capture__IMicrophoneDeviceList() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Latency, addr 0x180511590, size 0x10, virtual false, abstract: false, final false
inline void set_Latency(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicMicrophoneCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicMicrophoneCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicMicrophoneCapture(BasicMicrophoneCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicMicrophoneCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicMicrophoneCapture(BasicMicrophoneCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17022};

/// @brief Field _maxReadBufferPower, offset: 0x20, size: 0x1, def value: None
 uint8_t  ____maxReadBufferPower;

/// @brief Field _readBuffer, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Datastructures::POTBuffer*  ____readBuffer;

/// @brief Field _rawMicSamples, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::BufferedSampleProvider*  ____rawMicSamples;

/// @brief Field _rawMicFrames, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IFrameProvider*  ____rawMicFrames;

/// @brief Field _frame, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____frame;

/// @brief Field _format, offset: 0x48, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _clip, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clip;

/// @brief Field _readHead, offset: 0x58, size: 0x4, def value: None
 int32_t  ____readHead;

/// @brief Field _started, offset: 0x5c, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _micName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____micName;

/// @brief Field _audioDeviceChanged, offset: 0x68, size: 0x1, def value: None
 bool  ____audioDeviceChanged;

/// @brief Field _microphoneDiagnosticOutput, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::Audio::AudioFileWriter*  ____microphoneDiagnosticOutput;

/// @brief Field _subscribers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  ____subscribers;

/// @brief Field <Latency>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::TimeSpan  ____Latency_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____maxReadBufferPower) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____readBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____rawMicSamples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____rawMicFrames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____frame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____format) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____clip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____readHead) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____started) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____micName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____audioDeviceChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____microphoneDiagnosticOutput) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____subscribers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BasicMicrophoneCapture, ____Latency_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::BasicMicrophoneCapture) == 0x88, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
