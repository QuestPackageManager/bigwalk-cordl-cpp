#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Identity/IdentityDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IdentityDecoder)
namespace Dissonance::Audio::Codecs {
struct EncodedBuffer;
}
namespace Dissonance::Audio::Codecs {
class IVoiceDecoder;
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
namespace Dissonance::Audio::Codecs::Identity {
class IdentityDecoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::Identity::IdentityDecoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Identity::IdentityDecoder*, "Dissonance.Audio.Codecs.Identity", "IdentityDecoder");
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Identity {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Identity.IdentityDecoder
class CORDL_TYPE IdentityDecoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Format)) ::NAudio::Wave::WaveFormat*  Format;

/// @brief Field _format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr operator  ::Dissonance::Audio::Codecs::IVoiceDecoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Decode, addr 0x1805f5ab0, size 0x140, virtual true, abstract: false, final true
inline int32_t Decode(::Dissonance::Audio::Codecs::EncodedBuffer  input, ::System::ArraySegment_1<float_t>  output) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Dissonance::Audio::Codecs::Identity::IdentityDecoder* New_ctor(::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method get_Format, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_Format() ;

/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* i___Dissonance__Audio__Codecs__IVoiceDecoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdentityDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdentityDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdentityDecoder(IdentityDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdentityDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdentityDecoder(IdentityDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17013};

/// @brief Field _format, offset: 0x10, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Identity::IdentityDecoder, ____format) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Identity::IdentityDecoder) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Identity
