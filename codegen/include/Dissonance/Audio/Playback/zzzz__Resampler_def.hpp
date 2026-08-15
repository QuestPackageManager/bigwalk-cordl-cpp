#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/Resampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Resampler)
namespace Dissonance::Audio::Playback {
class IRateProvider;
}
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Dsp {
class WdlResampler;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class Resampler;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::Resampler*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::Resampler*, "Dissonance.Audio.Playback", "Resampler");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.Resampler
class CORDL_TYPE Resampler : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _fixedRateEnabled, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__fixedRateEnabled, put=__cordl_internal_set__fixedRateEnabled)) bool  _fixedRateEnabled;

/// @brief Field _outputFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputFormat, put=__cordl_internal_set__outputFormat)) ::NAudio::Wave::WaveFormat*  _outputFormat;

/// @brief Field _rate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rate, put=__cordl_internal_set__rate)) ::Dissonance::Audio::Playback::IRateProvider*  _rate;

/// @brief Field _resampler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__resampler, put=__cordl_internal_set__resampler)) ::NAudio::Dsp::WdlResampler*  _resampler;

/// @brief Field _source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::Dissonance::Audio::Playback::ISampleSource*  _source;

/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr operator  ::Dissonance::Audio::Playback::ISampleSource*() noexcept;

static inline ::Dissonance::Audio::Playback::Resampler* New_ctor(::Dissonance::Audio::Playback::ISampleSource*  source, ::Dissonance::Audio::Playback::IRateProvider*  rate) ;

/// @brief Method OnAudioConfigurationChanged, addr 0x1805e7300, size 0xa0, virtual false, abstract: false, final false
inline void OnAudioConfigurationChanged(bool  deviceWasChanged) ;

/// @brief Method Prepare, addr 0x1805e73a0, size 0xc0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805e7460, size 0x280, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0x1805e76e0, size 0x50, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SetOutputRate, addr 0x1805e7730, size 0xe0, virtual false, abstract: false, final false
inline void SetOutputRate(::System::Nullable_1<int32_t>  rate) ;

constexpr bool const& __cordl_internal_get__fixedRateEnabled() const;

constexpr bool& __cordl_internal_get__fixedRateEnabled() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__outputFormat() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__outputFormat() ;

constexpr ::Dissonance::Audio::Playback::IRateProvider* const& __cordl_internal_get__rate() const;

constexpr ::Dissonance::Audio::Playback::IRateProvider*& __cordl_internal_get__rate() ;

constexpr ::NAudio::Dsp::WdlResampler* const& __cordl_internal_get__resampler() const;

constexpr ::NAudio::Dsp::WdlResampler*& __cordl_internal_get__resampler() ;

constexpr ::Dissonance::Audio::Playback::ISampleSource* const& __cordl_internal_get__source() const;

constexpr ::Dissonance::Audio::Playback::ISampleSource*& __cordl_internal_get__source() ;

constexpr void __cordl_internal_set__fixedRateEnabled(bool  value) ;

constexpr void __cordl_internal_set__outputFormat(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__rate(::Dissonance::Audio::Playback::IRateProvider*  value) ;

constexpr void __cordl_internal_set__resampler(::NAudio::Dsp::WdlResampler*  value) ;

constexpr void __cordl_internal_set__source(::Dissonance::Audio::Playback::ISampleSource*  value) ;

/// @brief Method .ctor, addr 0x1805e7860, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::ISampleSource*  source, ::Dissonance::Audio::Playback::IRateProvider*  rate) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_WaveFormat, addr 0x1805e7960, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* i___Dissonance__Audio__Playback__ISampleSource() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16983};

/// @brief Field _source, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::ISampleSource*  ____source;

/// @brief Field _rate, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IRateProvider*  ____rate;

/// @brief Field _outputFormat, offset: 0x20, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____outputFormat;

/// @brief Field _resampler, offset: 0x28, size: 0x8, def value: None
 ::NAudio::Dsp::WdlResampler*  ____resampler;

/// @brief Field _fixedRateEnabled, offset: 0x30, size: 0x1, def value: None
 bool  ____fixedRateEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::Resampler, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::Resampler, ____rate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::Resampler, ____outputFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::Resampler, ____resampler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::Resampler, ____fixedRateEnabled) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::Resampler) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
