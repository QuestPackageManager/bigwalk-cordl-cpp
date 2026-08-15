#pragma once
// IWYU pragma private; include "Dissonance/CodecSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodecSettings)
namespace Dissonance::Audio::Codecs {
struct Codec;
}
// Forward declare root types
namespace Dissonance {
struct CodecSettings;
}
// Write type traits
MARK_VAL_T(::Dissonance::CodecSettings);
DEFINE_IL2CPP_CLASS(::Dissonance::CodecSettings, "Dissonance", "CodecSettings");
// Dependencies Dissonance.Audio.Codecs.Codec
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.CodecSettings
struct CORDL_TYPE CodecSettings {
public:
// Declarations
 __declspec(property(get=get_Codec)) ::Dissonance::Audio::Codecs::Codec  Codec;

 __declspec(property(get=get_FrameSize)) uint32_t  FrameSize;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

/// @brief Method ToString, addr 0x1805c6bb0, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1805c6c50, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Codecs::Codec  codec, uint32_t  frameSize, int32_t  sampleRate) ;

/// @brief Method get_Codec, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Codecs::Codec get_Codec() ;

/// @brief Method get_FrameSize, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_FrameSize() ;

/// @brief Method get_SampleRate, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SampleRate() ;

// Ctor Parameters []
// @brief default ctor
constexpr CodecSettings() ;

// Ctor Parameters [CppParam { name: "_codec", ty: "::Dissonance::Audio::Codecs::Codec", modifiers: "", def_value: None }, CppParam { name: "_frameSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_sampleRate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CodecSettings(::Dissonance::Audio::Codecs::Codec  _codec, uint32_t  _frameSize, int32_t  _sampleRate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field _codec, offset: 0x0, size: 0x1, def value: None
 ::Dissonance::Audio::Codecs::Codec  _codec;

/// @brief Field _frameSize, offset: 0x4, size: 0x4, def value: None
 uint32_t  _frameSize;

/// @brief Field _sampleRate, offset: 0x8, size: 0x4, def value: None
 int32_t  _sampleRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::CodecSettings, _codec) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettings, _frameSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::CodecSettings, _sampleRate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::CodecSettings) == 0xc, "Size mismatch!");

} // namespace end def Dissonance
