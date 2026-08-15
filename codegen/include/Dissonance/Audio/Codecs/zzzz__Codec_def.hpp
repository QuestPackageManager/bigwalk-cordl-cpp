#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Codec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Codec)
// Forward declare root types
namespace Dissonance::Audio::Codecs {
struct Codec;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Codecs::Codec);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Codec, "Dissonance.Audio.Codecs", "Codec");
// Dependencies 
namespace Dissonance::Audio::Codecs {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.Codec
struct CORDL_TYPE Codec {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Codec_Unwrapped
enum struct __Codec_Unwrapped : uint8_t {
__E_Identity = static_cast<uint8_t>(0x0u),
__E_Opus = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Codec_Unwrapped () const noexcept {
return static_cast<__Codec_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Codec() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Codec(uint8_t  value__) noexcept;

/// @brief Field Identity value: U8(0)
static ::Dissonance::Audio::Codecs::Codec const Identity;

/// @brief Field Opus value: U8(1)
static ::Dissonance::Audio::Codecs::Codec const Opus;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Codec, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Codec) == 0x1, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs
