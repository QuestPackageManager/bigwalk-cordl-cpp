#pragma once
// IWYU pragma private; include "Dissonance/Demo/MicSubscriberPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicSubscriberPlayer)
namespace Dissonance::Audio::Capture {
class BufferedSampleProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio::Playback {
class IRateProvider;
}
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
namespace Dissonance::Audio::Playback {
class Resampler;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance::Demo {
class MicSubscriberPlayer_ConstantRate;
}
namespace Dissonance::Demo {
class MicSubscriberPlayer_SourceWrapper;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Demo {
class MicSubscriberPlayer;
}
namespace Dissonance::Demo {
class MicSubscriberPlayer_ConstantRate;
}
namespace Dissonance::Demo {
class MicSubscriberPlayer_SourceWrapper;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::MicSubscriberPlayer*);
MARK_REF_T(::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*);
MARK_REF_T(::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::MicSubscriberPlayer*, "Dissonance.Demo", "MicSubscriberPlayer");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::MicSubscriberPlayer_ConstantRate*, "Dissonance.Demo", "MicSubscriberPlayer/ConstantRate");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper*, "Dissonance.Demo", "MicSubscriberPlayer/SourceWrapper");
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.MicSubscriberPlayer/SourceWrapper
class CORDL_TYPE MicSubscriberPlayer_SourceWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _provider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__provider, put=__cordl_internal_set__provider)) ::Dissonance::Audio::Capture::BufferedSampleProvider*  _provider;

/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr operator  ::Dissonance::Audio::Playback::ISampleSource*() noexcept;

static inline ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper* New_ctor(::Dissonance::Audio::Capture::BufferedSampleProvider*  provider) ;

/// @brief Method Prepare, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805d1120, size 0x60, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0x1805d1180, size 0x20, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& __cordl_internal_get__provider() const;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& __cordl_internal_get__provider() ;

constexpr void __cordl_internal_set__provider(::Dissonance::Audio::Capture::BufferedSampleProvider*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Capture::BufferedSampleProvider*  provider) ;

/// @brief Method get_WaveFormat, addr 0x1805d11a0, size 0x20, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* i___Dissonance__Audio__Playback__ISampleSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicSubscriberPlayer_SourceWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer_SourceWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicSubscriberPlayer_SourceWrapper(MicSubscriberPlayer_SourceWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer_SourceWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicSubscriberPlayer_SourceWrapper(MicSubscriberPlayer_SourceWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16848};

/// @brief Field _provider, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::BufferedSampleProvider*  ____provider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper, ____provider) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.MicSubscriberPlayer/ConstantRate
class CORDL_TYPE MicSubscriberPlayer_ConstantRate : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PlaybackRate)) float_t  PlaybackRate;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRateProvider*() noexcept;

static inline ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlaybackRate, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t get_PlaybackRate() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* i___Dissonance__Audio__Playback__IRateProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicSubscriberPlayer_ConstantRate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer_ConstantRate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicSubscriberPlayer_ConstantRate(MicSubscriberPlayer_ConstantRate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer_ConstantRate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicSubscriberPlayer_ConstantRate(MicSubscriberPlayer_ConstantRate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Demo::MicSubscriberPlayer_ConstantRate) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.MicSubscriberPlayer
class CORDL_TYPE MicSubscriberPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ConstantRate = ::Dissonance::Demo::MicSubscriberPlayer_ConstantRate;

using SourceWrapper = ::Dissonance::Demo::MicSubscriberPlayer_SourceWrapper;

/// @brief Field _inputBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputBuffer, put=__cordl_internal_set__inputBuffer)) ::Dissonance::Audio::Capture::BufferedSampleProvider*  _inputBuffer;

/// @brief Field _output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::Dissonance::Audio::Playback::Resampler*  _output;

/// @brief Field _playing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset, addr 0x1805cc510, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset() ;

static inline ::Dissonance::Demo::MicSubscriberPlayer* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x1805cc520, size 0x190, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

/// @brief Method ReceiveMicrophoneData, addr 0x1805cc6b0, size 0x60, virtual true, abstract: false, final true
inline void ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method SetFormat, addr 0x1805cc710, size 0x180, virtual false, abstract: false, final false
inline void SetFormat(::NAudio::Wave::WaveFormat*  format) ;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& __cordl_internal_get__inputBuffer() const;

constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& __cordl_internal_get__inputBuffer() ;

constexpr ::Dissonance::Audio::Playback::Resampler* const& __cordl_internal_get__output() const;

constexpr ::Dissonance::Audio::Playback::Resampler*& __cordl_internal_get__output() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr void __cordl_internal_set__inputBuffer(::Dissonance::Audio::Capture::BufferedSampleProvider*  value) ;

constexpr void __cordl_internal_set__output(::Dissonance::Audio::Playback::Resampler*  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicSubscriberPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicSubscriberPlayer(MicSubscriberPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicSubscriberPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicSubscriberPlayer(MicSubscriberPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16850};

/// @brief Field _inputBuffer, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::BufferedSampleProvider*  ____inputBuffer;

/// @brief Field _output, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::Resampler*  ____output;

/// @brief Field _playing, offset: 0x30, size: 0x1, def value: None
 bool  ____playing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::MicSubscriberPlayer, ____inputBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::MicSubscriberPlayer, ____output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::MicSubscriberPlayer, ____playing) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::MicSubscriberPlayer) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Demo
