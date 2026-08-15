#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/FrameToSampleConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameToSampleConverter)
namespace Dissonance::Audio::Playback {
class IFrameSource;
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
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class FrameToSampleConverter;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::FrameToSampleConverter*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::FrameToSampleConverter*, "Dissonance.Audio.Playback", "FrameToSampleConverter");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.FrameToSampleConverter
class CORDL_TYPE FrameToSampleConverter : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _firstSample, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__firstSample, put=__cordl_internal_set__firstSample)) int32_t  _firstSample;

/// @brief Field _lastSample, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSample, put=__cordl_internal_set__lastSample)) int32_t  _lastSample;

/// @brief Field _source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::Dissonance::Audio::Playback::IFrameSource*  _source;

/// @brief Field _temp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__temp, put=__cordl_internal_set__temp)) ::ArrayW<float_t>  _temp;

/// @brief Field _upstreamComplete, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__upstreamComplete, put=__cordl_internal_set__upstreamComplete)) bool  _upstreamComplete;

/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr operator  ::Dissonance::Audio::Playback::ISampleSource*() noexcept;

static inline ::Dissonance::Audio::Playback::FrameToSampleConverter* New_ctor(::Dissonance::Audio::Playback::IFrameSource*  source) ;

/// @brief Method Prepare, addr 0x1805e0810, size 0xb0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805e08c0, size 0x1e0, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0x1805e0aa0, size 0x40, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get__firstSample() const;

constexpr int32_t& __cordl_internal_get__firstSample() ;

constexpr int32_t const& __cordl_internal_get__lastSample() const;

constexpr int32_t& __cordl_internal_get__lastSample() ;

constexpr ::Dissonance::Audio::Playback::IFrameSource* const& __cordl_internal_get__source() const;

constexpr ::Dissonance::Audio::Playback::IFrameSource*& __cordl_internal_get__source() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__temp() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__temp() ;

constexpr bool const& __cordl_internal_get__upstreamComplete() const;

constexpr bool& __cordl_internal_get__upstreamComplete() ;

constexpr void __cordl_internal_set__firstSample(int32_t  value) ;

constexpr void __cordl_internal_set__lastSample(int32_t  value) ;

constexpr void __cordl_internal_set__source(::Dissonance::Audio::Playback::IFrameSource*  value) ;

constexpr void __cordl_internal_set__temp(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__upstreamComplete(bool  value) ;

/// @brief Method .ctor, addr 0x1805e0b30, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::IFrameSource*  source) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_WaveFormat, addr 0x1805e0c30, size 0x200, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* i___Dissonance__Audio__Playback__ISampleSource() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameToSampleConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameToSampleConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameToSampleConverter(FrameToSampleConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameToSampleConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameToSampleConverter(FrameToSampleConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16972};

/// @brief Field _source, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IFrameSource*  ____source;

/// @brief Field _temp, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ____temp;

/// @brief Field _upstreamComplete, offset: 0x20, size: 0x1, def value: None
 bool  ____upstreamComplete;

/// @brief Field _firstSample, offset: 0x24, size: 0x4, def value: None
 int32_t  ____firstSample;

/// @brief Field _lastSample, offset: 0x28, size: 0x4, def value: None
 int32_t  ____lastSample;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::FrameToSampleConverter, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameToSampleConverter, ____temp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameToSampleConverter, ____upstreamComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameToSampleConverter, ____firstSample) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::FrameToSampleConverter, ____lastSample) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::FrameToSampleConverter) == 0x30, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
