#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/SampleToFrameProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleToFrameProvider)
namespace Dissonance::Audio::Capture {
class IFrameProvider;
}
namespace NAudio::Wave {
class ISampleProvider;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class SampleToFrameProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::SampleToFrameProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::SampleToFrameProvider*, "Dissonance.Audio.Capture", "SampleToFrameProvider");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.SampleToFrameProvider
class CORDL_TYPE SampleToFrameProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _frame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__frame, put=__cordl_internal_set__frame)) ::ArrayW<float_t>  _frame;

/// @brief Field _frameSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSize, put=__cordl_internal_set__frameSize)) uint32_t  _frameSize;

/// @brief Field _samplesInFrame, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__samplesInFrame, put=__cordl_internal_set__samplesInFrame)) int32_t  _samplesInFrame;

/// @brief Field _source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::NAudio::Wave::ISampleProvider*  _source;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IFrameProvider"
constexpr operator  ::Dissonance::Audio::Capture::IFrameProvider*() noexcept;

static inline ::Dissonance::Audio::Capture::SampleToFrameProvider* New_ctor(::NAudio::Wave::ISampleProvider*  source, uint32_t  frameSize) ;

/// @brief Method Read, addr 0x1805f9bf0, size 0x190, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  outBuffer) ;

/// @brief Method Reset, addr 0x1805e1b80, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__frame() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__frame() ;

constexpr uint32_t const& __cordl_internal_get__frameSize() const;

constexpr uint32_t& __cordl_internal_get__frameSize() ;

constexpr int32_t const& __cordl_internal_get__samplesInFrame() const;

constexpr int32_t& __cordl_internal_get__samplesInFrame() ;

constexpr ::NAudio::Wave::ISampleProvider* const& __cordl_internal_get__source() const;

constexpr ::NAudio::Wave::ISampleProvider*& __cordl_internal_get__source() ;

constexpr void __cordl_internal_set__frame(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__frameSize(uint32_t  value) ;

constexpr void __cordl_internal_set__samplesInFrame(int32_t  value) ;

constexpr void __cordl_internal_set__source(::NAudio::Wave::ISampleProvider*  value) ;

/// @brief Method .ctor, addr 0x1805f9d80, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::ISampleProvider*  source, uint32_t  frameSize) ;

/// @brief Method get_FrameSize, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline uint32_t get_FrameSize() ;

/// @brief Method get_WaveFormat, addr 0x1805f9dd0, size 0x30, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IFrameProvider"
constexpr ::Dissonance::Audio::Capture::IFrameProvider* i___Dissonance__Audio__Capture__IFrameProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleToFrameProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleToFrameProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleToFrameProvider(SampleToFrameProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleToFrameProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleToFrameProvider(SampleToFrameProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17036};

/// @brief Field _source, offset: 0x10, size: 0x8, def value: None
 ::NAudio::Wave::ISampleProvider*  ____source;

/// @brief Field _frameSize, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____frameSize;

/// @brief Field _samplesInFrame, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____samplesInFrame;

/// @brief Field _frame, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____frame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::SampleToFrameProvider, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SampleToFrameProvider, ____frameSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SampleToFrameProvider, ____samplesInFrame) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::SampleToFrameProvider, ____frame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::SampleToFrameProvider) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
