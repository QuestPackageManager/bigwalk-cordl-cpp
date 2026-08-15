#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SpeechSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeechSession)
namespace Dissonance::Audio::Playback {
class IDecoderPipeline;
}
namespace Dissonance::Audio::Playback {
class IJitterEstimator;
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
namespace Dissonance::Audio::Playback {
struct SyncState;
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
struct DateTime;
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
struct SpeechSession;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::SpeechSession);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SpeechSession, "Dissonance.Audio.Playback", "SpeechSession");
// Dependencies Dissonance.Audio.Playback.SessionContext, System.DateTime
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.SpeechSession
struct CORDL_TYPE SpeechSession {
public:
// Declarations
 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_Channels)) ::Dissonance::Audio::Playback::IRemoteChannelProvider*  Channels;

 __declspec(property(get=get_Context)) ::Dissonance::Audio::Playback::SessionContext  Context;

 __declspec(property(get=get_Delay)) ::System::TimeSpan  Delay;

/// @brief Field DesyncFixBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DesyncFixBuffer, put=setStaticF_DesyncFixBuffer)) ::ArrayW<float_t>  DesyncFixBuffer;

/// @brief Field FixedDelayToleranceTicks, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FixedDelayToleranceTicks, put=setStaticF_FixedDelayToleranceTicks)) int32_t  FixedDelayToleranceTicks;

/// @brief Field InitialBufferDelay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InitialBufferDelay, put=setStaticF_InitialBufferDelay)) float_t  InitialBufferDelay;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_OutputWaveFormat)) ::NAudio::Wave::WaveFormat*  OutputWaveFormat;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_PlaybackOptions)) ::Dissonance::Audio::Playback::PlaybackOptions  PlaybackOptions;

 __declspec(property(get=get_SyncState)) ::Dissonance::Audio::Playback::SyncState  SyncState;

 __declspec(property(get=get_TargetActivationTime)) ::System::DateTime  TargetActivationTime;

/// @brief Method Create, addr 0x1805e9fe0, size 0xe0, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Playback::SpeechSession Create(::Dissonance::Audio::Playback::SessionContext  context, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter, ::Dissonance::Audio::Playback::IDecoderPipeline*  pipeline, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  channels, ::System::DateTime  now) ;

/// @brief Method Prepare, addr 0x1805ea0c0, size 0x480, virtual false, abstract: false, final false
inline void Prepare(::System::DateTime  timeOfFirstDequeueAttempt) ;

/// @brief Method Read, addr 0x1805ea540, size 0xe0, virtual false, abstract: false, final false
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method SetOutputSampleRate, addr 0x1805ea620, size 0xb0, virtual false, abstract: false, final false
inline void SetOutputSampleRate(::System::Nullable_1<int32_t>  rate) ;

/// @brief Method .ctor, addr 0x1805ea790, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::SessionContext  context, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter, ::Dissonance::Audio::Playback::IDecoderPipeline*  pipeline, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  channels, ::System::DateTime  now) ;

static inline ::ArrayW<float_t> getStaticF_DesyncFixBuffer() ;

static inline int32_t getStaticF_FixedDelayToleranceTicks() ;

static inline float_t getStaticF_InitialBufferDelay() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_BufferCount, addr 0x1805ea8a0, size 0x40, virtual false, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_Channels, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::IRemoteChannelProvider* get_Channels() ;

/// @brief Method get_Context, addr 0x1802e2d70, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::SessionContext get_Context() ;

/// @brief Method get_Delay, addr 0x1805ea8e0, size 0xd0, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Delay() ;

/// @brief Method get_OutputWaveFormat, addr 0x1805ea9b0, size 0x40, virtual false, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_OutputWaveFormat() ;

/// @brief Method get_PacketLoss, addr 0x1805ea9f0, size 0x40, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method get_PlaybackOptions, addr 0x1805eaa30, size 0xf0, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::PlaybackOptions get_PlaybackOptions() ;

/// @brief Method get_SyncState, addr 0x1805eab20, size 0xf0, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::SyncState get_SyncState() ;

/// @brief Method get_TargetActivationTime, addr 0x1805eac10, size 0x60, virtual false, abstract: false, final false
inline ::System::DateTime get_TargetActivationTime() ;

static inline void setStaticF_DesyncFixBuffer(::ArrayW<float_t>  value) ;

static inline void setStaticF_FixedDelayToleranceTicks(int32_t  value) ;

static inline void setStaticF_InitialBufferDelay(float_t  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SpeechSession() ;

// Ctor Parameters [CppParam { name: "_minimumDelay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_channels", ty: "::Dissonance::Audio::Playback::IRemoteChannelProvider*", modifiers: "", def_value: None }, CppParam { name: "_pipeline", ty: "::Dissonance::Audio::Playback::IDecoderPipeline*", modifiers: "", def_value: None }, CppParam { name: "_context", ty: "::Dissonance::Audio::Playback::SessionContext", modifiers: "", def_value: None }, CppParam { name: "_creationTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_jitter", ty: "::Dissonance::Audio::Playback::IJitterEstimator*", modifiers: "", def_value: None }]
constexpr SpeechSession(float_t  _minimumDelay, ::Dissonance::Audio::Playback::IRemoteChannelProvider*  _channels, ::Dissonance::Audio::Playback::IDecoderPipeline*  _pipeline, ::Dissonance::Audio::Playback::SessionContext  _context, ::System::DateTime  _creationTime, ::Dissonance::Audio::Playback::IJitterEstimator*  _jitter) noexcept;

/// @brief Field MaximumDelay offset 0xffffffff size 0x4
static constexpr float_t  MaximumDelay{static_cast<float_t>(0.75f)};

/// @brief Field MinimumDelayFactor offset 0xffffffff size 0x4
static constexpr float_t  MinimumDelayFactor{static_cast<float_t>(1.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _minimumDelay, offset: 0x0, size: 0x4, def value: None
 float_t  _minimumDelay;

/// @brief Field _channels, offset: 0x8, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IRemoteChannelProvider*  _channels;

/// @brief Field _pipeline, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IDecoderPipeline*  _pipeline;

/// @brief Field _context, offset: 0x18, size: 0x10, def value: None
 ::Dissonance::Audio::Playback::SessionContext  _context;

/// @brief Field _creationTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  _creationTime;

/// @brief Field _jitter, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IJitterEstimator*  _jitter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _minimumDelay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _channels) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _pipeline) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _creationTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSession, _jitter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SpeechSession) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
