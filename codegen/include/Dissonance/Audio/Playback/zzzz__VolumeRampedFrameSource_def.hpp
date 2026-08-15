#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/VolumeRampedFrameSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeRampedFrameSource)
namespace Dissonance::Audio::Playback {
class IFrameSource;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
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
class VolumeRampedFrameSource;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::VolumeRampedFrameSource*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::VolumeRampedFrameSource*, "Dissonance.Audio.Playback", "VolumeRampedFrameSource");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.VolumeRampedFrameSource
class CORDL_TYPE VolumeRampedFrameSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _currentVolume, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentVolume, put=__cordl_internal_set__currentVolume)) float_t  _currentVolume;

/// @brief Field _source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::Dissonance::Audio::Playback::IFrameSource*  _source;

/// @brief Field _targetVolume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetVolume, put=__cordl_internal_set__targetVolume)) float_t  _targetVolume;

/// @brief Field _volumeProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeProvider, put=__cordl_internal_set__volumeProvider)) ::Dissonance::Audio::Playback::IVolumeProvider*  _volumeProvider;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IFrameSource"
constexpr operator  ::Dissonance::Audio::Playback::IFrameSource*() noexcept;

/// @brief Method ApplyFlatAttenuation, addr 0x1805fa0b0, size 0x90, virtual false, abstract: false, final false
static inline void ApplyFlatAttenuation(::System::ArraySegment_1<float_t>  frame, float_t  volume) ;

/// @brief Method ApplyRampedAttenuation, addr 0x1805fa140, size 0xa0, virtual false, abstract: false, final false
static inline void ApplyRampedAttenuation(::System::ArraySegment_1<float_t>  frame, float_t  start, float_t  end) ;

static inline ::Dissonance::Audio::Playback::VolumeRampedFrameSource* New_ctor(::Dissonance::Audio::Playback::IFrameSource*  source, ::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider) ;

/// @brief Method Prepare, addr 0x1805e0810, size 0xb0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805fa1e0, size 0x260, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  frame) ;

/// @brief Method Reset, addr 0x1805fa440, size 0x40, virtual true, abstract: false, final true
inline void Reset() ;

constexpr float_t const& __cordl_internal_get__currentVolume() const;

constexpr float_t& __cordl_internal_get__currentVolume() ;

constexpr ::Dissonance::Audio::Playback::IFrameSource* const& __cordl_internal_get__source() const;

constexpr ::Dissonance::Audio::Playback::IFrameSource*& __cordl_internal_get__source() ;

constexpr float_t const& __cordl_internal_get__targetVolume() const;

constexpr float_t& __cordl_internal_get__targetVolume() ;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& __cordl_internal_get__volumeProvider() const;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& __cordl_internal_get__volumeProvider() ;

constexpr void __cordl_internal_set__currentVolume(float_t  value) ;

constexpr void __cordl_internal_set__source(::Dissonance::Audio::Playback::IFrameSource*  value) ;

constexpr void __cordl_internal_set__targetVolume(float_t  value) ;

constexpr void __cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::IFrameSource*  source, ::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider) ;

/// @brief Method get_FrameSize, addr 0x1805fa480, size 0x30, virtual true, abstract: false, final true
inline uint32_t get_FrameSize() ;

/// @brief Method get_WaveFormat, addr 0x1805e0c30, size 0x200, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IFrameSource"
constexpr ::Dissonance::Audio::Playback::IFrameSource* i___Dissonance__Audio__Playback__IFrameSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeRampedFrameSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeRampedFrameSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeRampedFrameSource(VolumeRampedFrameSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeRampedFrameSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeRampedFrameSource(VolumeRampedFrameSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16993};

/// @brief Field _source, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IFrameSource*  ____source;

/// @brief Field _volumeProvider, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVolumeProvider*  ____volumeProvider;

/// @brief Field _targetVolume, offset: 0x20, size: 0x4, def value: None
 float_t  ____targetVolume;

/// @brief Field _currentVolume, offset: 0x24, size: 0x4, def value: None
 float_t  ____currentVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::VolumeRampedFrameSource, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VolumeRampedFrameSource, ____volumeProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VolumeRampedFrameSource, ____targetVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VolumeRampedFrameSource, ____currentVolume) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::VolumeRampedFrameSource) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
