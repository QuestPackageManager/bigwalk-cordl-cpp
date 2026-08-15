#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IDecoderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IDecoderPipeline)
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance::Audio::Playback {
struct SyncState;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
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
class IDecoderPipeline;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IDecoderPipeline*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IDecoderPipeline*, "Dissonance.Audio.Playback", "IDecoderPipeline");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IDecoderPipeline
class CORDL_TYPE IDecoderPipeline {
public:
// Declarations
 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_BufferTime)) ::System::TimeSpan  BufferTime;

 __declspec(property(get=get_InputFrameTime)) ::System::TimeSpan  InputFrameTime;

 __declspec(property(get=get_OutputFormat)) ::NAudio::Wave::WaveFormat*  OutputFormat;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_PlaybackOptions)) ::Dissonance::Audio::Playback::PlaybackOptions  PlaybackOptions;

 __declspec(property(get=get_SyncState)) ::Dissonance::Audio::Playback::SyncState  SyncState;

/// @brief Method EnableDynamicSync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnableDynamicSync() ;

/// @brief Method Prepare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method SetOutputSampleRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetOutputSampleRate(::System::Nullable_1<int32_t>  rate) ;

/// @brief Method get_BufferCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_BufferTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::TimeSpan get_BufferTime() ;

/// @brief Method get_InputFrameTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::TimeSpan get_InputFrameTime() ;

/// @brief Method get_OutputFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_OutputFormat() ;

/// @brief Method get_PacketLoss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Method get_PlaybackOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Playback::PlaybackOptions get_PlaybackOptions() ;

/// @brief Method get_SyncState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Playback::SyncState get_SyncState() ;

// Ctor Parameters [CppParam { name: "", ty: "IDecoderPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDecoderPipeline(IDecoderPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
