#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IFrameSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFrameSource)
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
class IFrameSource;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IFrameSource*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IFrameSource*, "Dissonance.Audio.Playback", "IFrameSource");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IFrameSource
class CORDL_TYPE IFrameSource {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Method Prepare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read(::System::ArraySegment_1<float_t>  frame) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method get_FrameSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t get_FrameSize() ;

/// @brief Method get_WaveFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

// Ctor Parameters [CppParam { name: "", ty: "IFrameSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFrameSource(IFrameSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
