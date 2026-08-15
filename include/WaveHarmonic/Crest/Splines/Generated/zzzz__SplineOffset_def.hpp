#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/Generated/SplineOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineOffset)
// Forward declare root types
namespace WaveHarmonic::Crest::Splines::Generated {
struct SplineOffset;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Splines::Generated::SplineOffset);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::Generated::SplineOffset, "WaveHarmonic.Crest.Splines.Generated", "SplineOffset");
// Dependencies 
namespace WaveHarmonic::Crest::Splines::Generated {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Splines.Generated.SplineOffset
struct CORDL_TYPE SplineOffset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineOffset_Unwrapped
enum struct __SplineOffset_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Center = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineOffset_Unwrapped () const noexcept {
return static_cast<__SplineOffset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineOffset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineOffset(int32_t  value__) noexcept;

/// @brief Field Center value: I32(1)
static ::WaveHarmonic::Crest::Splines::Generated::SplineOffset const Center;

/// @brief Field Left value: I32(0)
static ::WaveHarmonic::Crest::Splines::Generated::SplineOffset const Left;

/// @brief Field Right value: I32(2)
static ::WaveHarmonic::Crest::Splines::Generated::SplineOffset const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::Generated::SplineOffset, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::Generated::SplineOffset) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines::Generated
