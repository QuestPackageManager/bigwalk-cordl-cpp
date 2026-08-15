#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneSubscriber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IMicrophoneSubscriber)
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IMicrophoneSubscriber*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IMicrophoneSubscriber*, "Dissonance.Audio.Capture", "IMicrophoneSubscriber");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IMicrophoneSubscriber
class CORDL_TYPE IMicrophoneSubscriber {
public:
// Declarations
/// @brief Method ReceiveMicrophoneData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "IMicrophoneSubscriber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMicrophoneSubscriber(IMicrophoneSubscriber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
