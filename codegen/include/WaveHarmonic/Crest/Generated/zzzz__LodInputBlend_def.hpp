#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/LodInputBlend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LodInputBlend)
// Forward declare root types
namespace WaveHarmonic::Crest::Generated {
struct LodInputBlend;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Generated::LodInputBlend);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Generated::LodInputBlend, "WaveHarmonic.Crest.Generated", "LodInputBlend");
// Dependencies 
namespace WaveHarmonic::Crest::Generated {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Generated.LodInputBlend
struct CORDL_TYPE LodInputBlend {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LodInputBlend_Unwrapped
enum struct __LodInputBlend_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Additive = static_cast<int32_t>(0x1),
__E_Minimum = static_cast<int32_t>(0x2),
__E_Maximum = static_cast<int32_t>(0x3),
__E_Alpha = static_cast<int32_t>(0x4),
__E_AlphaClip = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LodInputBlend_Unwrapped () const noexcept {
return static_cast<__LodInputBlend_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LodInputBlend() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LodInputBlend(int32_t  value__) noexcept;

/// @brief Field Additive value: I32(1)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const Additive;

/// @brief Field Alpha value: I32(4)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const Alpha;

/// @brief Field AlphaClip value: I32(5)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const AlphaClip;

/// @brief Field Maximum value: I32(3)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const Maximum;

/// @brief Field Minimum value: I32(2)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const Minimum;

/// @brief Field Off value: I32(0)
static ::WaveHarmonic::Crest::Generated::LodInputBlend const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Generated::LodInputBlend, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Generated::LodInputBlend) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Generated
