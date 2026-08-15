#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/SineSampleProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SineSampleProvider)
namespace NAudio::Wave {
class ISampleProvider;
}
namespace NAudio::Wave {
class WaveFormat;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class SineSampleProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::SineSampleProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::SineSampleProvider*, "Dissonance.Audio.Capture", "SineSampleProvider");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.SineSampleProvider
class CORDL_TYPE SineSampleProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Frequency)) float_t  Frequency;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _frequency, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _index, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) double_t  _index;

/// @brief Field _step, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__step, put=__cordl_internal_set__step)) double_t  _step;

/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr operator  ::NAudio::Wave::ISampleProvider*() noexcept;

static inline ::Dissonance::Audio::Capture::SineSampleProvider* New_ctor(::NAudio::Wave::WaveFormat*  format, float_t  frequency) ;

/// @brief Method Read, addr 0x1805f9e50, size 0xc0, virtual true, abstract: false, final true
inline int32_t Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr double_t const& __cordl_internal_get__index() const;

constexpr double_t& __cordl_internal_get__index() ;

constexpr double_t const& __cordl_internal_get__step() const;

constexpr double_t& __cordl_internal_get__step() ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__index(double_t  value) ;

constexpr void __cordl_internal_set__step(double_t  value) ;

/// @brief Method .ctor, addr 0x1805f9f10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  format, float_t  frequency) ;

/// @brief Method get_Frequency, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Frequency() ;

/// @brief Method get_WaveFormat, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* i___NAudio__Wave__ISampleProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SineSampleProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SineSampleProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SineSampleProvider(SineSampleProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SineSampleProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SineSampleProvider(SineSampleProvider const& ) = delete;

/// @brief Field TwoPi offset 0xffffffff size 0x8
static constexpr double_t  TwoPi{static_cast<double_t>(6.3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17037};

/// @brief Field _format, offset: 0x10, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _frequency, offset: 0x18, size: 0x4, def value: None
 float_t  ____frequency;

/// @brief Field _step, offset: 0x20, size: 0x8, def value: None
 double_t  ____step;

/// @brief Field _index, offset: 0x28, size: 0x8, def value: None
 double_t  ____index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::SineSampleProvider, ____format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SineSampleProvider, ____frequency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SineSampleProvider, ____step) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SineSampleProvider, ____index) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::SineSampleProvider) == 0x30, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
