#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/EmptyPreprocessingPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Capture/zzzz__BasePreprocessingPipeline_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EmptyPreprocessingPipeline)
namespace NAudio::Wave {
class WaveFormat;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class EmptyPreprocessingPipeline;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*, "Dissonance.Audio.Capture", "EmptyPreprocessingPipeline");
// Dependencies Dissonance.Audio.Capture.BasePreprocessingPipeline
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.EmptyPreprocessingPipeline
class CORDL_TYPE EmptyPreprocessingPipeline : public ::Dissonance::Audio::Capture::BasePreprocessingPipeline {
public:
// Declarations
 __declspec(property(put=set_IsOutputMuted)) bool  IsOutputMuted;

 __declspec(property(get=get_VadIsSpeechDetected)) bool  VadIsSpeechDetected;

static inline ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline* New_ctor(::NAudio::Wave::WaveFormat*  inputFormat) ;

/// @brief Method PreprocessAudioFrame, addr 0x1805f4eb0, size 0x10, virtual true, abstract: false, final false
inline void PreprocessAudioFrame(::ArrayW<float_t>  frame) ;

/// @brief Method .ctor, addr 0x1805f4ec0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  inputFormat) ;

/// @brief Method get_VadIsSpeechDetected, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_VadIsSpeechDetected() ;

/// @brief Method set_IsOutputMuted, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_IsOutputMuted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyPreprocessingPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyPreprocessingPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyPreprocessingPipeline(EmptyPreprocessingPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyPreprocessingPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyPreprocessingPipeline(EmptyPreprocessingPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Capture::EmptyPreprocessingPipeline) == 0xa0, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
