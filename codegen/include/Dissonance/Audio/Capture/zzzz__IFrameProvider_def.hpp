#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IFrameProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFrameProvider)
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IFrameProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IFrameProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IFrameProvider*, "Dissonance.Audio.Capture", "IFrameProvider");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IFrameProvider
class CORDL_TYPE IFrameProvider {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read(::System::ArraySegment_1<float_t>  outBuffer) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method get_FrameSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t get_FrameSize() ;

/// @brief Method get_WaveFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

// Ctor Parameters [CppParam { name: "", ty: "IFrameProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFrameProvider(IFrameProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17029};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
