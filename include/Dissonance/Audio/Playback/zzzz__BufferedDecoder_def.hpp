#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/BufferedDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedDecoder)
namespace Dissonance::Audio::Codecs {
class IVoiceDecoder;
}
namespace Dissonance::Audio::Playback {
class EncodedAudioBuffer;
}
namespace Dissonance::Audio::Playback {
class IFrameSource;
}
namespace Dissonance::Audio::Playback {
class IRemoteChannelProvider;
}
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance::Audio {
class AudioFileWriter;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance::Threading {
template<typename T>
class LockedValue_1;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance {
struct RemoteChannel;
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
class Action_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class BufferedDecoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::BufferedDecoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::BufferedDecoder*, "Dissonance.Audio.Playback", "BufferedDecoder");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.BufferedDecoder
class CORDL_TYPE BufferedDecoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_LatestPlaybackOptions)) ::Dissonance::Audio::Playback::PlaybackOptions  LatestPlaybackOptions;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_SequenceNumber)) uint32_t  SequenceNumber;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _approxChannelCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__approxChannelCount, put=__cordl_internal_set__approxChannelCount)) int32_t  _approxChannelCount;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::Dissonance::Audio::Playback::EncodedAudioBuffer*  _buffer;

/// @brief Field _channels, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  _channels;

/// @brief Field _decoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Dissonance::Audio::Codecs::IVoiceDecoder*  _decoder;

/// @brief Field _diagnosticOutput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__diagnosticOutput, put=__cordl_internal_set__diagnosticOutput)) ::Dissonance::Audio::AudioFileWriter*  _diagnosticOutput;

/// @brief Field _frameSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSize, put=__cordl_internal_set__frameSize)) uint32_t  _frameSize;

/// @brief Field _options, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__options, put=__cordl_internal_set__options)) ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*  _options;

/// @brief Field _receivedFirstPacket, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__receivedFirstPacket, put=__cordl_internal_set__receivedFirstPacket)) bool  _receivedFirstPacket;

/// @brief Field _recycleFrame, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recycleFrame, put=__cordl_internal_set__recycleFrame)) ::System::Action_1<::Dissonance::Networking::VoicePacket>*  _recycleFrame;

/// @brief Field _waveFormat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__waveFormat, put=__cordl_internal_set__waveFormat)) ::NAudio::Wave::WaveFormat*  _waveFormat;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IFrameSource"
constexpr operator  ::Dissonance::Audio::Playback::IFrameSource*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept;

/// @brief Method ExtractChannels, addr 0x1805d8de0, size 0x140, virtual false, abstract: false, final false
inline void ExtractChannels(::Dissonance::Networking::VoicePacket  encoded) ;

/// @brief Method GetRemoteChannels, addr 0x1805d8f20, size 0x110, virtual true, abstract: false, final true
inline void GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output) ;

static inline ::Dissonance::Audio::Playback::BufferedDecoder* New_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  frameSize, ::NAudio::Wave::WaveFormat*  waveFormat, ::System::Action_1<::Dissonance::Networking::VoicePacket>*  recycleFrame) ;

/// @brief Method Prepare, addr 0x1805d9030, size 0x110, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Push, addr 0x1805d9140, size 0x1f0, virtual false, abstract: false, final false
inline void Push(::Dissonance::Networking::VoicePacket  frame) ;

/// @brief Method Read, addr 0x1805d9330, size 0x4e0, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  frame) ;

/// @brief Method Reset, addr 0x1805d9810, size 0x310, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Stop, addr 0x1805d9b20, size 0x20, virtual false, abstract: false, final false
inline void Stop() ;

constexpr int32_t const& __cordl_internal_get__approxChannelCount() const;

constexpr int32_t& __cordl_internal_get__approxChannelCount() ;

constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer* const& __cordl_internal_get__buffer() const;

constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer*& __cordl_internal_get__buffer() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& __cordl_internal_get__channels() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& __cordl_internal_get__channels() ;

constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* const& __cordl_internal_get__decoder() const;

constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder*& __cordl_internal_get__decoder() ;

constexpr ::Dissonance::Audio::AudioFileWriter* const& __cordl_internal_get__diagnosticOutput() const;

constexpr ::Dissonance::Audio::AudioFileWriter*& __cordl_internal_get__diagnosticOutput() ;

constexpr uint32_t const& __cordl_internal_get__frameSize() const;

constexpr uint32_t& __cordl_internal_get__frameSize() ;

constexpr ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>* const& __cordl_internal_get__options() const;

constexpr ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*& __cordl_internal_get__options() ;

constexpr bool const& __cordl_internal_get__receivedFirstPacket() const;

constexpr bool& __cordl_internal_get__receivedFirstPacket() ;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get__recycleFrame() const;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get__recycleFrame() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__waveFormat() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__waveFormat() ;

constexpr void __cordl_internal_set__approxChannelCount(int32_t  value) ;

constexpr void __cordl_internal_set__buffer(::Dissonance::Audio::Playback::EncodedAudioBuffer*  value) ;

constexpr void __cordl_internal_set__channels(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

constexpr void __cordl_internal_set__decoder(::Dissonance::Audio::Codecs::IVoiceDecoder*  value) ;

constexpr void __cordl_internal_set__diagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value) ;

constexpr void __cordl_internal_set__frameSize(uint32_t  value) ;

constexpr void __cordl_internal_set__options(::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*  value) ;

constexpr void __cordl_internal_set__receivedFirstPacket(bool  value) ;

constexpr void __cordl_internal_set__recycleFrame(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__waveFormat(::NAudio::Wave::WaveFormat*  value) ;

/// @brief Method .ctor, addr 0x1805d9b40, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  frameSize, ::NAudio::Wave::WaveFormat*  waveFormat, ::System::Action_1<::Dissonance::Networking::VoicePacket>*  recycleFrame) ;

/// @brief Method get_BufferCount, addr 0x1805d9d60, size 0x20, virtual false, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_FrameSize, addr 0x180396ee0, size 0x10, virtual true, abstract: false, final true
inline uint32_t get_FrameSize() ;

/// @brief Method get_LatestPlaybackOptions, addr 0x1805d9d80, size 0xd0, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::PlaybackOptions get_LatestPlaybackOptions() ;

/// @brief Method get_PacketLoss, addr 0x1805d9e50, size 0x80, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method get_SequenceNumber, addr 0x1805d9ed0, size 0x20, virtual false, abstract: false, final false
inline uint32_t get_SequenceNumber() ;

/// @brief Method get_WaveFormat, addr 0x1802d9810, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IFrameSource"
constexpr ::Dissonance::Audio::Playback::IFrameSource* i___Dissonance__Audio__Playback__IFrameSource() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedDecoder(BufferedDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedDecoder(BufferedDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16961};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::EncodedAudioBuffer*  ____buffer;

/// @brief Field _decoder, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Codecs::IVoiceDecoder*  ____decoder;

/// @brief Field _frameSize, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____frameSize;

/// @brief Field _waveFormat, offset: 0x28, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____waveFormat;

/// @brief Field _recycleFrame, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::VoicePacket>*  ____recycleFrame;

/// @brief Field _diagnosticOutput, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Audio::AudioFileWriter*  ____diagnosticOutput;

/// @brief Field _options, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*  ____options;

/// @brief Field _receivedFirstPacket, offset: 0x48, size: 0x1, def value: None
 bool  ____receivedFirstPacket;

/// @brief Field _approxChannelCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____approxChannelCount;

/// @brief Field _channels, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  ____channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____decoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____frameSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____waveFormat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____recycleFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____diagnosticOutput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____options) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____receivedFirstPacket) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____approxChannelCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::BufferedDecoder, ____channels) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::BufferedDecoder) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
