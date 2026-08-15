#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IPreprocessingPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPreprocessingPipeline)
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IPreprocessingPipeline;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IPreprocessingPipeline*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IPreprocessingPipeline*, "Dissonance.Audio.Capture", "IPreprocessingPipeline");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IPreprocessingPipeline
class CORDL_TYPE IPreprocessingPipeline {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(put=set_IsOutputMuted)) bool  IsOutputMuted;

 __declspec(property(get=get_OutputFormat)) ::NAudio::Wave::WaveFormat*  OutputFormat;

 __declspec(property(get=get_OutputFrameSize)) int32_t  OutputFrameSize;

 __declspec(property(put=set_UpstreamLatency)) ::System::TimeSpan  UpstreamLatency;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Subscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Subscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Subscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method Unsubscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Unsubscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Unsubscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method get_Amplitude, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_OutputFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_OutputFormat() ;

/// @brief Method get_OutputFrameSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_OutputFrameSize() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_IsOutputMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsOutputMuted(bool  value) ;

/// @brief Method set_UpstreamLatency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_UpstreamLatency(::System::TimeSpan  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPreprocessingPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPreprocessingPipeline(IPreprocessingPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
