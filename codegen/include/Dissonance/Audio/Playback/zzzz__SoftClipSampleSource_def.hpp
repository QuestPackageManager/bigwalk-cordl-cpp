#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SoftClipSampleSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoftClipSampleSource)
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusSoftClip;
}
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
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
class SoftClipSampleSource;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::SoftClipSampleSource*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SoftClipSampleSource*, "Dissonance.Audio.Playback", "SoftClipSampleSource");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.SoftClipSampleSource
class CORDL_TYPE SoftClipSampleSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _clipper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipper, put=__cordl_internal_set__clipper)) ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*  _clipper;

/// @brief Field _upstream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__upstream, put=__cordl_internal_set__upstream)) ::Dissonance::Audio::Playback::ISampleSource*  _upstream;

/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr operator  ::Dissonance::Audio::Playback::ISampleSource*() noexcept;

static inline ::Dissonance::Audio::Playback::SoftClipSampleSource* New_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream) ;

/// @brief Method Prepare, addr 0x1805e92f0, size 0xb0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805e93a0, size 0x100, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0x1805e94a0, size 0x40, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip* const& __cordl_internal_get__clipper() const;

constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*& __cordl_internal_get__clipper() ;

constexpr ::Dissonance::Audio::Playback::ISampleSource* const& __cordl_internal_get__upstream() const;

constexpr ::Dissonance::Audio::Playback::ISampleSource*& __cordl_internal_get__upstream() ;

constexpr void __cordl_internal_set__clipper(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*  value) ;

constexpr void __cordl_internal_set__upstream(::Dissonance::Audio::Playback::ISampleSource*  value) ;

/// @brief Method .ctor, addr 0x1805e94e0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream) ;

/// @brief Method get_WaveFormat, addr 0x1805e9550, size 0x30, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* i___Dissonance__Audio__Playback__ISampleSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoftClipSampleSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoftClipSampleSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoftClipSampleSource(SoftClipSampleSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoftClipSampleSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoftClipSampleSource(SoftClipSampleSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16986};

/// @brief Field _upstream, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::ISampleSource*  ____upstream;

/// @brief Field _clipper, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*  ____clipper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SoftClipSampleSource, ____upstream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SoftClipSampleSource, ____clipper) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SoftClipSampleSource) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
