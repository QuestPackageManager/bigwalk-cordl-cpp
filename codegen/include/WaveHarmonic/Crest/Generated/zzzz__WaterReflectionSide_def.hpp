#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/WaterReflectionSide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterReflectionSide)
// Forward declare root types
namespace WaveHarmonic::Crest::Generated {
struct WaterReflectionSide;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Generated::WaterReflectionSide);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Generated::WaterReflectionSide, "WaveHarmonic.Crest.Generated", "WaterReflectionSide");
// Dependencies 
namespace WaveHarmonic::Crest::Generated {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Generated.WaterReflectionSide
struct CORDL_TYPE WaterReflectionSide {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterReflectionSide_Unwrapped
enum struct __WaterReflectionSide_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_Above = static_cast<int32_t>(0x1),
__E_Below = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterReflectionSide_Unwrapped () const noexcept {
return static_cast<__WaterReflectionSide_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterReflectionSide() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterReflectionSide(int32_t  value__) noexcept;

/// @brief Field Above value: I32(1)
static ::WaveHarmonic::Crest::Generated::WaterReflectionSide const Above;

/// @brief Field Below value: I32(2)
static ::WaveHarmonic::Crest::Generated::WaterReflectionSide const Below;

/// @brief Field Both value: I32(0)
static ::WaveHarmonic::Crest::Generated::WaterReflectionSide const Both;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Generated::WaterReflectionSide, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Generated::WaterReflectionSide) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Generated
