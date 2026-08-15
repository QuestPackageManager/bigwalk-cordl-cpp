#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/ISampleSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISampleSource)
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::ISampleSource*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::ISampleSource*, "Dissonance.Audio.Playback", "ISampleSource");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.ISampleSource
class CORDL_TYPE ISampleSource {
public:
// Declarations
 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Method Prepare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method get_WaveFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

// Ctor Parameters [CppParam { name: "", ty: "ISampleSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISampleSource(ISampleSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
