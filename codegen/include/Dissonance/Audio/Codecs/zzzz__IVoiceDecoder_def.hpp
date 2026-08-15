#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/IVoiceDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceDecoder)
namespace Dissonance::Audio::Codecs {
struct EncodedBuffer;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs {
class IVoiceDecoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::IVoiceDecoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::IVoiceDecoder*, "Dissonance.Audio.Codecs", "IVoiceDecoder");
// Dependencies 
namespace Dissonance::Audio::Codecs {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.IVoiceDecoder
class CORDL_TYPE IVoiceDecoder {
public:
// Declarations
 __declspec(property(get=get_Format)) ::NAudio::Wave::WaveFormat*  Format;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Decode(::Dissonance::Audio::Codecs::EncodedBuffer  input, ::System::ArraySegment_1<float_t>  output) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method get_Format, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_Format() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceDecoder(IVoiceDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Codecs
