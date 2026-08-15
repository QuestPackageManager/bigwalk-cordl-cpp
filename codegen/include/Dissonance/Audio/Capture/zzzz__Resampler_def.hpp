#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/Resampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Resampler)
namespace NAudio::Dsp {
class WdlResampler;
}
namespace NAudio::Wave {
class ISampleProvider;
}
namespace NAudio::Wave {
class WaveFormat;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class Resampler;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::Resampler*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::Resampler*, "Dissonance.Audio.Capture", "Resampler");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.Resampler
class CORDL_TYPE Resampler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _resampler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampler, put=__cordl_internal_set__resampler)) ::NAudio::Dsp::WdlResampler*  _resampler;

/// @brief Field _source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::NAudio::Wave::ISampleProvider*  _source;

/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr operator  ::NAudio::Wave::ISampleProvider*() noexcept;

static inline ::Dissonance::Audio::Capture::Resampler* New_ctor(::NAudio::Wave::ISampleProvider*  source, int32_t  newSampleRate) ;

/// @brief Method Read, addr 0x1805f8d80, size 0x150, virtual true, abstract: false, final true
inline int32_t Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Reset, addr 0x1805f8ed0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr ::NAudio::Dsp::WdlResampler* const& __cordl_internal_get__resampler() const;

constexpr ::NAudio::Dsp::WdlResampler*& __cordl_internal_get__resampler() ;

constexpr ::NAudio::Wave::ISampleProvider* const& __cordl_internal_get__source() const;

constexpr ::NAudio::Wave::ISampleProvider*& __cordl_internal_get__source() ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__resampler(::NAudio::Dsp::WdlResampler*  value) ;

constexpr void __cordl_internal_set__source(::NAudio::Wave::ISampleProvider*  value) ;

/// @brief Method .ctor, addr 0x1805f8ef0, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::ISampleProvider*  source, int32_t  newSampleRate) ;

/// @brief Method get_WaveFormat, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* i___NAudio__Wave__ISampleProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Resampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Resampler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Resampler(Resampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Resampler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Resampler(Resampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17035};

/// @brief Field _format, offset: 0x10, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _resampler, offset: 0x18, size: 0x8, def value: None
 ::NAudio::Dsp::WdlResampler*  ____resampler;

/// @brief Field _source, offset: 0x20, size: 0x8, def value: None
 ::NAudio::Wave::ISampleProvider*  ____source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::Resampler, ____format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::Resampler, ____resampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::Resampler, ____source) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::Resampler) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
