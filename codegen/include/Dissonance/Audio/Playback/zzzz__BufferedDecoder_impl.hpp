#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/BufferedDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__BufferedDecoder_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__EncodedAudioBuffer_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IFrameSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Audio/zzzz__AudioFileWriter_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_BufferCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d9d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_BufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_SequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_SequenceNumber)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d9ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_SequenceNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_PacketLoss)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_LatestPlaybackOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::PlaybackOptions (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_LatestPlaybackOptions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_LatestPlaybackOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)(::Dissonance::Audio::Codecs::IVoiceDecoder*, uint32_t, ::NAudio::Wave::WaveFormat*, ::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Audio::Playback::BufferedDecoder::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1805d9b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::BufferedDecoder::Prepare)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805d9030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::BufferedDecoder::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::BufferedDecoder::Read)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1805d9330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.ExtractChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::BufferedDecoder::ExtractChannels)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805d8de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"ExtractChannels", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::Reset)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1805d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::BufferedDecoder::Push)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805d9140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)()>(&::Dissonance::Audio::Playback::BufferedDecoder::Stop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BufferedDecoder.GetRemoteChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BufferedDecoder::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Audio::Playback::BufferedDecoder::GetRemoteChannels)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805d8f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::Dissonance::Audio::Playback::EncodedAudioBuffer* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__buffer(::Dissonance::Audio::Playback::EncodedAudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__decoder(::Dissonance::Audio::Codecs::IVoiceDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr uint32_t& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr uint32_t const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__frameSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__waveFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveFormat;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__waveFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveFormat;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__waveFormat(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waveFormat = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__recycleFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recycleFrame;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__recycleFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recycleFrame;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__recycleFrame(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recycleFrame = value;
}
constexpr ::Dissonance::Audio::AudioFileWriter*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__diagnosticOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutput;
}
constexpr ::Dissonance::Audio::AudioFileWriter* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__diagnosticOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutput;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__diagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diagnosticOutput = value;
}
constexpr ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr ::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__options(::Dissonance::Threading::LockedValue_1<::Dissonance::Audio::Playback::PlaybackOptions>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____options = value;
}
constexpr bool& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__receivedFirstPacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedFirstPacket;
}
constexpr bool const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__receivedFirstPacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedFirstPacket;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__receivedFirstPacket(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedFirstPacket = value;
}
constexpr int32_t& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__approxChannelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approxChannelCount;
}
constexpr int32_t const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__approxChannelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____approxChannelCount;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__approxChannelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____approxChannelCount = value;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void Dissonance::Audio::Playback::BufferedDecoder::__cordl_internal_set__channels(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
inline int32_t Dissonance::Audio::Playback::BufferedDecoder::get_BufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_BufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t Dissonance::Audio::Playback::BufferedDecoder::get_SequenceNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_SequenceNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::BufferedDecoder::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PlaybackOptions Dissonance::Audio::Playback::BufferedDecoder::get_LatestPlaybackOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_LatestPlaybackOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::PlaybackOptions>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  frameSize, ::NAudio::Wave::WaveFormat*  waveFormat, ::System::Action_1<::Dissonance::Networking::VoicePacket>*  recycleFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decoder, frameSize, waveFormat, recycleFrame);
}
inline uint32_t Dissonance::Audio::Playback::BufferedDecoder::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::BufferedDecoder::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::BufferedDecoder::Read(::System::ArraySegment_1<float_t>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::ExtractChannels(::Dissonance::Networking::VoicePacket  encoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"ExtractChannels", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoded);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::Push(::Dissonance::Networking::VoicePacket  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BufferedDecoder::GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BufferedDecoder*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Dissonance::Audio::Playback::BufferedDecoder* Dissonance::Audio::Playback::BufferedDecoder::New_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  frameSize, ::NAudio::Wave::WaveFormat*  waveFormat, ::System::Action_1<::Dissonance::Networking::VoicePacket>*  recycleFrame)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::BufferedDecoder*>(decoder, frameSize, waveFormat, recycleFrame));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IFrameSource"
constexpr  Dissonance::Audio::Playback::BufferedDecoder::operator ::Dissonance::Audio::Playback::IFrameSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IFrameSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IFrameSource"
constexpr ::Dissonance::Audio::Playback::IFrameSource* Dissonance::Audio::Playback::BufferedDecoder::i___Dissonance__Audio__Playback__IFrameSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::IFrameSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr  Dissonance::Audio::Playback::BufferedDecoder::operator ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* Dissonance::Audio::Playback::BufferedDecoder::i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::BufferedDecoder::BufferedDecoder()   {
}
