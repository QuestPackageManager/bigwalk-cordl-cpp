#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/FrameFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameFormat)
namespace Dissonance::Audio::Codecs {
struct Codec;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
struct FrameFormat;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::FrameFormat);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::FrameFormat, "Dissonance.Audio.Playback", "FrameFormat");
// Dependencies Dissonance.Audio.Codecs.Codec
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.FrameFormat
struct CORDL_TYPE FrameFormat {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>"
constexpr operator  ::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>*() ;

/// @brief Method Equals, addr 0x1805e0680, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805e0610, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::Audio::Playback::FrameFormat  other) ;

/// @brief Method GetHashCode, addr 0x1805e0720, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1805e0790, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Codecs::Codec  codec, ::NAudio::Wave::WaveFormat*  waveFormat, uint32_t  frameSize) ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>"
constexpr ::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>* i___System__IEquatable_1___Dissonance__Audio__Playback__FrameFormat_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameFormat() ;

// Ctor Parameters [CppParam { name: "Codec", ty: "::Dissonance::Audio::Codecs::Codec", modifiers: "", def_value: None }, CppParam { name: "WaveFormat", ty: "::NAudio::Wave::WaveFormat*", modifiers: "", def_value: None }, CppParam { name: "FrameSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FrameFormat(::Dissonance::Audio::Codecs::Codec  Codec, ::NAudio::Wave::WaveFormat*  WaveFormat, uint32_t  FrameSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Codec, offset: 0x0, size: 0x1, def value: None
 ::Dissonance::Audio::Codecs::Codec  Codec;

/// @brief Field WaveFormat, offset: 0x8, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field FrameSize, offset: 0x10, size: 0x4, def value: None
 uint32_t  FrameSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::FrameFormat, Codec) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameFormat, WaveFormat) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameFormat, FrameSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::FrameFormat) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
