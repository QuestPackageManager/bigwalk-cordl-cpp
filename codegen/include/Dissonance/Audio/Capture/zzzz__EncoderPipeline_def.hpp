#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/EncoderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderPipeline)
namespace Dissonance::Audio::Capture {
class BufferedSampleProvider;
}
namespace Dissonance::Audio::Capture {
class IFrameProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio::Capture {
class Resampler;
}
namespace Dissonance::Audio::Codecs {
class IVoiceEncoder;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class EncoderPipeline;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::EncoderPipeline*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::EncoderPipeline*, "Dissonance.Audio.Capture", "EncoderPipeline");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.EncoderPipeline
class CORDL_TYPE EncoderPipeline : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Stopped)) bool  Stopped;

 __declspec(property(get=get_Stopping)) bool  Stopping;

 __declspec(property(get=get_TransmissionPacketLoss, put=set_TransmissionPacketLoss)) float_t  TransmissionPacketLoss;

/// @brief Field <TransmissionPacketLoss>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__TransmissionPacketLoss_k__BackingField, put=__cordl_internal_set__TransmissionPacketLoss_k__BackingField)) float_t  _TransmissionPacketLoss_k__BackingField;

/// @brief Field _disposed, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encodedBytes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encodedBytes, put=__cordl_internal_set__encodedBytes)) ::ArrayW<uint8_t>  _encodedBytes;

/// @brief Field _encoder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*  _encoder;

/// @brief Field _input, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::Dissonance::Audio::Capture::BufferedSampleProvider*  _input;

/// @brief Field _inputFormat, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputFormat, put=__cordl_internal_set__inputFormat)) ::NAudio::Wave::WaveFormat*  _inputFormat;

/// @brief Field _net, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__net, put=__cordl_internal_set__net)) ::Dissonance::Networking::ICommsNetwork*  _net;

/// @brief Field _output, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::Dissonance::Audio::Capture::IFrameProvider*  _output;

/// @brief Field _plainSamples, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__plainSamples, put=__cordl_internal_set__plainSamples)) ::ArrayW<float_t>  _plainSamples;

/// @brief Field _resampler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampler, put=__cordl_internal_set__resampler)) ::Dissonance::Audio::Capture::Resampler*  _resampler;

/// @brief Field _stopped, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopped, put=__cordl_internal_set__stopped)) bool  _stopped;

/// @brief Field _stopping, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopping, put=__cordl_internal_set__stopping)) bool  _stopping;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1805f4fa0, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EncodeFrames, addr 0x1805f5070, size 0x2d0, virtual false, abstract: false, final false
inline int32_t EncodeFrames(::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, int32_t  maxCount) ;

static inline ::Dissonance::Audio::Capture::EncoderPipeline* New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, ::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, ::Dissonance::Networking::ICommsNetwork*  net) ;

/// @brief Method ReceiveMicrophoneData, addr 0x1805f5340, size 0x320, virtual true, abstract: false, final true
inline void ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  inputSamples, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Reset, addr 0x1805f5660, size 0x120, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Stop, addr 0x1805f5780, size 0x70, virtual false, abstract: false, final false
inline void Stop() ;

constexpr float_t const& __cordl_internal_get__TransmissionPacketLoss_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TransmissionPacketLoss_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__encodedBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__encodedBytes() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>* const& __cordl_internal_get__encoder() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*& __cordl_internal_get__encoder() ;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& __cordl_internal_get__input() const;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& __cordl_internal_get__input() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__inputFormat() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__inputFormat() ;

constexpr ::Dissonance::Networking::ICommsNetwork* const& __cordl_internal_get__net() const;

constexpr ::Dissonance::Networking::ICommsNetwork*& __cordl_internal_get__net() ;

constexpr ::Dissonance::Audio::Capture::IFrameProvider* const& __cordl_internal_get__output() const;

constexpr ::Dissonance::Audio::Capture::IFrameProvider*& __cordl_internal_get__output() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__plainSamples() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__plainSamples() ;

constexpr ::Dissonance::Audio::Capture::Resampler* const& __cordl_internal_get__resampler() const;

constexpr ::Dissonance::Audio::Capture::Resampler*& __cordl_internal_get__resampler() ;

constexpr bool const& __cordl_internal_get__stopped() const;

constexpr bool& __cordl_internal_get__stopped() ;

constexpr bool const& __cordl_internal_get__stopping() const;

constexpr bool& __cordl_internal_get__stopping() ;

constexpr void __cordl_internal_set__TransmissionPacketLoss_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encodedBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__encoder(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*  value) ;

constexpr void __cordl_internal_set__input(::Dissonance::Audio::Capture::BufferedSampleProvider*  value) ;

constexpr void __cordl_internal_set__inputFormat(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__net(::Dissonance::Networking::ICommsNetwork*  value) ;

constexpr void __cordl_internal_set__output(::Dissonance::Audio::Capture::IFrameProvider*  value) ;

constexpr void __cordl_internal_set__plainSamples(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__resampler(::Dissonance::Audio::Capture::Resampler*  value) ;

constexpr void __cordl_internal_set__stopped(bool  value) ;

constexpr void __cordl_internal_set__stopping(bool  value) ;

/// @brief Method .ctor, addr 0x1805f5840, size 0x250, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  inputFormat, ::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, ::Dissonance::Networking::ICommsNetwork*  net) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Stopped, addr 0x1805f5a90, size 0x10, virtual false, abstract: false, final false
inline bool get_Stopped() ;

/// @brief Method get_Stopping, addr 0x1805f5aa0, size 0x10, virtual false, abstract: false, final false
inline bool get_Stopping() ;

/// @brief Method get_TransmissionPacketLoss, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_TransmissionPacketLoss() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_TransmissionPacketLoss, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_TransmissionPacketLoss(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncoderPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncoderPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncoderPipeline(EncoderPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncoderPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncoderPipeline(EncoderPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17026};

/// @brief Field _encodedBytes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____encodedBytes;

/// @brief Field _plainSamples, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ____plainSamples;

/// @brief Field _encoder, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*  ____encoder;

/// @brief Field _net, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Networking::ICommsNetwork*  ____net;

/// @brief Field _input, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::BufferedSampleProvider*  ____input;

/// @brief Field _resampler, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::Resampler*  ____resampler;

/// @brief Field _output, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IFrameProvider*  ____output;

/// @brief Field _inputFormat, offset: 0x48, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____inputFormat;

/// @brief Field _stopped, offset: 0x50, size: 0x1, def value: None
 bool  ____stopped;

/// @brief Field _stopping, offset: 0x51, size: 0x1, def value: None
 bool  ____stopping;

/// @brief Field _disposed, offset: 0x52, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field <TransmissionPacketLoss>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____TransmissionPacketLoss_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____encodedBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____plainSamples) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____encoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____net) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____resampler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____output) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____inputFormat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____stopped) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____stopping) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____disposed) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::EncoderPipeline, ____TransmissionPacketLoss_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::EncoderPipeline) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
