#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderPipeline)
namespace Dissonance::Audio::Codecs {
class IVoiceDecoder;
}
namespace Dissonance::Audio::Playback {
class BufferedDecoder;
}
namespace Dissonance::Audio::Playback {
class DecoderPipeline___c;
}
namespace Dissonance::Audio::Playback {
class DecoderPipeline___c__DisplayClass34_0;
}
namespace Dissonance::Audio::Playback {
class IDecoderPipeline;
}
namespace Dissonance::Audio::Playback {
class IRateProvider;
}
namespace Dissonance::Audio::Playback {
class IRemoteChannelProvider;
}
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance::Audio::Playback {
class Resampler;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance::Audio::Playback {
struct SyncState;
}
namespace Dissonance::Audio::Playback {
class SynchronizerSampleSource;
}
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
class Log;
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
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class DecoderPipeline;
}
namespace Dissonance::Audio::Playback {
class DecoderPipeline___c;
}
namespace Dissonance::Audio::Playback {
class DecoderPipeline___c__DisplayClass34_0;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::DecoderPipeline*);
MARK_REF_T(::Dissonance::Audio::Playback::DecoderPipeline___c*);
MARK_REF_T(::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderPipeline*, "Dissonance.Audio.Playback", "DecoderPipeline");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderPipeline___c*, "Dissonance.Audio.Playback", "DecoderPipeline/<>c");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*, "Dissonance.Audio.Playback", "DecoderPipeline/<>c__DisplayClass34_0");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderPipeline/<>c
class CORDL_TYPE DecoderPipeline___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Audio::Playback::DecoderPipeline___c*  __9;

/// @brief Field <>9__34_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_1, put=setStaticF___9__34_1)) ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  __9__34_1;

static inline ::Dissonance::Audio::Playback::DecoderPipeline___c* New_ctor() ;

/// @brief Method <.ctor>b__34_1, addr 0x1805ed290, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* __ctor_b__34_1() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Audio::Playback::DecoderPipeline___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* getStaticF___9__34_1() ;

static inline void setStaticF___9(::Dissonance::Audio::Playback::DecoderPipeline___c*  value) ;

static inline void setStaticF___9__34_1(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderPipeline___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderPipeline___c(DecoderPipeline___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderPipeline___c(DecoderPipeline___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Playback::DecoderPipeline___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderPipeline/<>c__DisplayClass34_0
class CORDL_TYPE DecoderPipeline___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field decoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) ::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder;

/// @brief Field inputFrameSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputFrameSize, put=__cordl_internal_set_inputFrameSize)) uint32_t  inputFrameSize;

static inline ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0* New_ctor() ;

constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* const& __cordl_internal_get_decoder() const;

constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder*& __cordl_internal_get_decoder() ;

constexpr uint32_t const& __cordl_internal_get_inputFrameSize() const;

constexpr uint32_t& __cordl_internal_get_inputFrameSize() ;

constexpr void __cordl_internal_set_decoder(::Dissonance::Audio::Codecs::IVoiceDecoder*  value) ;

constexpr void __cordl_internal_set_inputFrameSize(uint32_t  value) ;

/// @brief Method <.ctor>b__0, addr 0x1805ed4c0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderPipeline___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderPipeline___c__DisplayClass34_0(DecoderPipeline___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderPipeline___c__DisplayClass34_0(DecoderPipeline___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16964};

/// @brief Field inputFrameSize, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___inputFrameSize;

/// @brief Field decoder, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Codecs::IVoiceDecoder*  ___decoder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0, ___inputFrameSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0, ___decoder) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object, System.TimeSpan
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderPipeline
class CORDL_TYPE DecoderPipeline : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Audio::Playback::DecoderPipeline___c;

using __c__DisplayClass34_0 = ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0;

 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_BufferTime)) ::System::TimeSpan  BufferTime;

 __declspec(property(get=Dissonance_Audio_Playback_IRateProvider_get_PlaybackRate)) float_t  Dissonance_Audio_Playback_IRateProvider_PlaybackRate;

 __declspec(property(get=Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)) float_t  Dissonance_Audio_Playback_IVolumeProvider_TargetVolume;

 __declspec(property(get=get_InputFrameTime)) ::System::TimeSpan  InputFrameTime;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_OutputFormat)) ::NAudio::Wave::WaveFormat*  OutputFormat;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_PlaybackOptions)) ::Dissonance::Audio::Playback::PlaybackOptions  PlaybackOptions;

 __declspec(property(get=get_SyncState)) ::Dissonance::Audio::Playback::SyncState  SyncState;

 __declspec(property(get=get_VolumeProvider, put=set_VolumeProvider)) ::Dissonance::Audio::Playback::IVolumeProvider*  VolumeProvider;

/// @brief Field <VolumeProvider>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeProvider_k__BackingField, put=__cordl_internal_set__VolumeProvider_k__BackingField)) ::Dissonance::Audio::Playback::IVolumeProvider*  _VolumeProvider_k__BackingField;

/// @brief Field _bytePool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytePool, put=__cordl_internal_set__bytePool)) ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  _bytePool;

/// @brief Field _channelListPool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelListPool, put=__cordl_internal_set__channelListPool)) ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  _channelListPool;

/// @brief Field _complete, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__complete, put=__cordl_internal_set__complete)) bool  _complete;

/// @brief Field _completionHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__completionHandler, put=__cordl_internal_set__completionHandler)) ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  _completionHandler;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field _firstFrameArrival, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__firstFrameArrival, put=__cordl_internal_set__firstFrameArrival)) ::System::Nullable_1<::System::DateTime>  _firstFrameArrival;

/// @brief Field _firstFrameSeq, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__firstFrameSeq, put=__cordl_internal_set__firstFrameSeq)) uint32_t  _firstFrameSeq;

/// @brief Field _frameDuration, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameDuration, put=__cordl_internal_set__frameDuration)) ::System::TimeSpan  _frameDuration;

/// @brief Field _id, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _inputBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputBuffer, put=__cordl_internal_set__inputBuffer)) ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*  _inputBuffer;

/// @brief Field _output, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::Dissonance::Audio::Playback::ISampleSource*  _output;

/// @brief Field _prepared, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__prepared, put=__cordl_internal_set__prepared)) bool  _prepared;

/// @brief Field _resampler, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampler, put=__cordl_internal_set__resampler)) ::Dissonance::Audio::Playback::Resampler*  _resampler;

/// @brief Field _source, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::Dissonance::Audio::Playback::BufferedDecoder*  _source;

/// @brief Field _sourceClosed, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__sourceClosed, put=__cordl_internal_set__sourceClosed)) bool  _sourceClosed;

/// @brief Field _synchronizer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__synchronizer, put=__cordl_internal_set__synchronizer)) ::Dissonance::Audio::Playback::SynchronizerSampleSource*  _synchronizer;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IDecoderPipeline"
constexpr operator  ::Dissonance::Audio::Playback::IDecoderPipeline*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRateProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr operator  ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept;

/// @brief Method Dissonance.Audio.Playback.IRateProvider.get_PlaybackRate, addr 0x1805dbd00, size 0x20, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IRateProvider_get_PlaybackRate() ;

/// @brief Method Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume, addr 0x1805dbd20, size 0x80, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume() ;

/// @brief Method EnableDynamicSync, addr 0x1805dbda0, size 0x20, virtual true, abstract: false, final true
inline void EnableDynamicSync() ;

/// @brief Method FlushTransferBuffer, addr 0x1805dbdc0, size 0xf0, virtual false, abstract: false, final false
inline void FlushTransferBuffer() ;

/// @brief Method GetRemoteChannels, addr 0x1805dbeb0, size 0x60, virtual true, abstract: false, final true
inline void GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output) ;

static inline ::Dissonance::Audio::Playback::DecoderPipeline* New_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  inputFrameSize, ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  completionHandler, ::StringW  id, bool  softClip) ;

/// @brief Method Prepare, addr 0x1805dbf10, size 0xc0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Push, addr 0x1805dbfd0, size 0x330, virtual false, abstract: false, final false
inline float_t Push(::Dissonance::Networking::VoicePacket  packet, ::System::DateTime  now) ;

/// @brief Method Read, addr 0x1805dc300, size 0x100, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method RecycleFrame, addr 0x1805dc400, size 0x90, virtual false, abstract: false, final false
inline void RecycleFrame(::Dissonance::Networking::VoicePacket  packet) ;

/// @brief Method Reset, addr 0x1805dc490, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetOutputSampleRate, addr 0x1805dc4f0, size 0xf0, virtual true, abstract: false, final true
inline void SetOutputSampleRate(::System::Nullable_1<int32_t>  rate) ;

/// @brief Method Stop, addr 0x1805dc5e0, size 0x10, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& __cordl_internal_get__VolumeProvider_k__BackingField() const;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& __cordl_internal_get__VolumeProvider_k__BackingField() ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__bytePool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& __cordl_internal_get__bytePool() ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& __cordl_internal_get__channelListPool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& __cordl_internal_get__channelListPool() ;

constexpr bool const& __cordl_internal_get__complete() const;

constexpr bool& __cordl_internal_get__complete() ;

constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>* const& __cordl_internal_get__completionHandler() const;

constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*& __cordl_internal_get__completionHandler() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__firstFrameArrival() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__firstFrameArrival() ;

constexpr uint32_t const& __cordl_internal_get__firstFrameSeq() const;

constexpr uint32_t& __cordl_internal_get__firstFrameSeq() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__frameDuration() const;

constexpr ::System::TimeSpan& __cordl_internal_get__frameDuration() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get__inputBuffer() const;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get__inputBuffer() ;

constexpr ::Dissonance::Audio::Playback::ISampleSource* const& __cordl_internal_get__output() const;

constexpr ::Dissonance::Audio::Playback::ISampleSource*& __cordl_internal_get__output() ;

constexpr bool const& __cordl_internal_get__prepared() const;

constexpr bool& __cordl_internal_get__prepared() ;

constexpr ::Dissonance::Audio::Playback::Resampler* const& __cordl_internal_get__resampler() const;

constexpr ::Dissonance::Audio::Playback::Resampler*& __cordl_internal_get__resampler() ;

constexpr ::Dissonance::Audio::Playback::BufferedDecoder* const& __cordl_internal_get__source() const;

constexpr ::Dissonance::Audio::Playback::BufferedDecoder*& __cordl_internal_get__source() ;

constexpr bool const& __cordl_internal_get__sourceClosed() const;

constexpr bool& __cordl_internal_get__sourceClosed() ;

constexpr ::Dissonance::Audio::Playback::SynchronizerSampleSource* const& __cordl_internal_get__synchronizer() const;

constexpr ::Dissonance::Audio::Playback::SynchronizerSampleSource*& __cordl_internal_get__synchronizer() ;

constexpr void __cordl_internal_set__VolumeProvider_k__BackingField(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

constexpr void __cordl_internal_set__bytePool(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

constexpr void __cordl_internal_set__complete(bool  value) ;

constexpr void __cordl_internal_set__completionHandler(::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  value) ;

constexpr void __cordl_internal_set__firstFrameArrival(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__firstFrameSeq(uint32_t  value) ;

constexpr void __cordl_internal_set__frameDuration(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__inputBuffer(::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__output(::Dissonance::Audio::Playback::ISampleSource*  value) ;

constexpr void __cordl_internal_set__prepared(bool  value) ;

constexpr void __cordl_internal_set__resampler(::Dissonance::Audio::Playback::Resampler*  value) ;

constexpr void __cordl_internal_set__source(::Dissonance::Audio::Playback::BufferedDecoder*  value) ;

constexpr void __cordl_internal_set__sourceClosed(bool  value) ;

constexpr void __cordl_internal_set__synchronizer(::Dissonance::Audio::Playback::SynchronizerSampleSource*  value) ;

/// @brief Method .ctor, addr 0x1805dc640, size 0x600, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  inputFrameSize, ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  completionHandler, ::StringW  id, bool  softClip) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_BufferCount, addr 0x1805dcc40, size 0x40, virtual true, abstract: false, final true
inline int32_t get_BufferCount() ;

/// @brief Method get_BufferTime, addr 0x1805dcc80, size 0x60, virtual true, abstract: false, final true
inline ::System::TimeSpan get_BufferTime() ;

/// @brief Method get_ID, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_InputFrameTime, addr 0x1802e75e0, size 0x10, virtual true, abstract: false, final true
inline ::System::TimeSpan get_InputFrameTime() ;

/// @brief Method get_OutputFormat, addr 0x1805dcce0, size 0x30, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_OutputFormat() ;

/// @brief Method get_PacketLoss, addr 0x1805dcd10, size 0x80, virtual true, abstract: false, final true
inline float_t get_PacketLoss() ;

/// @brief Method get_PlaybackOptions, addr 0x1805dcd90, size 0x30, virtual true, abstract: false, final true
inline ::Dissonance::Audio::Playback::PlaybackOptions get_PlaybackOptions() ;

/// @brief Method get_SyncState, addr 0x1805dcdc0, size 0xe0, virtual true, abstract: false, final true
inline ::Dissonance::Audio::Playback::SyncState get_SyncState() ;

/// @brief Method get_VolumeProvider, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::IVolumeProvider* get_VolumeProvider() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IDecoderPipeline"
constexpr ::Dissonance::Audio::Playback::IDecoderPipeline* i___Dissonance__Audio__Playback__IDecoderPipeline() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* i___Dissonance__Audio__Playback__IRateProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* i___Dissonance__Audio__Playback__IVolumeProvider() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_VolumeProvider, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_VolumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderPipeline(DecoderPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderPipeline(DecoderPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16965};

/// @brief Field _completionHandler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  ____completionHandler;

/// @brief Field _inputBuffer, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*  ____inputBuffer;

/// @brief Field _bytePool, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  ____bytePool;

/// @brief Field _channelListPool, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  ____channelListPool;

/// @brief Field _source, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::BufferedDecoder*  ____source;

/// @brief Field _synchronizer, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::SynchronizerSampleSource*  ____synchronizer;

/// @brief Field _resampler, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::Resampler*  ____resampler;

/// @brief Field _output, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::ISampleSource*  ____output;

/// @brief Field _prepared, offset: 0x50, size: 0x1, def value: None
 bool  ____prepared;

/// @brief Field _complete, offset: 0x51, size: 0x1, def value: None
 bool  ____complete;

/// @brief Field _sourceClosed, offset: 0x52, size: 0x1, def value: None
 bool  ____sourceClosed;

/// @brief Field _frameDuration, offset: 0x58, size: 0x8, def value: None
 ::System::TimeSpan  ____frameDuration;

/// @brief Field _firstFrameArrival, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ____firstFrameArrival;

/// @brief Field _firstFrameSeq, offset: 0x70, size: 0x4, def value: None
 uint32_t  ____firstFrameSeq;

/// @brief Field _id, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field <VolumeProvider>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVolumeProvider*  ____VolumeProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____completionHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____inputBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____bytePool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____channelListPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____source) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____synchronizer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____resampler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____output) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____prepared) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____complete) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____sourceClosed) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____frameDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____firstFrameArrival) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____firstFrameSeq) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____id) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::DecoderPipeline, ____VolumeProvider_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::DecoderPipeline) == 0x88, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
