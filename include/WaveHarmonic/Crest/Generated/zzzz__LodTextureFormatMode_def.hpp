#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/LodTextureFormatMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LodTextureFormatMode)
// Forward declare root types
namespace WaveHarmonic::Crest::Generated {
struct LodTextureFormatMode;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Generated::LodTextureFormatMode);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Generated::LodTextureFormatMode, "WaveHarmonic.Crest.Generated", "LodTextureFormatMode");
// Dependencies 
namespace WaveHarmonic::Crest::Generated {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Generated.LodTextureFormatMode
struct CORDL_TYPE LodTextureFormatMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LodTextureFormatMode_Unwrapped
enum struct __LodTextureFormatMode_Unwrapped : int32_t {
__E_Manual = static_cast<int32_t>(0x0),
__E_Performance = static_cast<int32_t>(0x1),
__E_Precision = static_cast<int32_t>(0x2),
__E_Automatic = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LodTextureFormatMode_Unwrapped () const noexcept {
return static_cast<__LodTextureFormatMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LodTextureFormatMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LodTextureFormatMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(3)
static ::WaveHarmonic::Crest::Generated::LodTextureFormatMode const Automatic;

/// @brief Field Manual value: I32(0)
static ::WaveHarmonic::Crest::Generated::LodTextureFormatMode const Manual;

/// @brief Field Performance value: I32(1)
static ::WaveHarmonic::Crest::Generated::LodTextureFormatMode const Performance;

/// @brief Field Precision value: I32(2)
static ::WaveHarmonic::Crest::Generated::LodTextureFormatMode const Precision;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Generated::LodTextureFormatMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Generated::LodTextureFormatMode) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Generated
