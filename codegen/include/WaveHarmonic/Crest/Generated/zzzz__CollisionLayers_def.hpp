#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/CollisionLayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionLayers)
// Forward declare root types
namespace WaveHarmonic::Crest::Generated {
struct CollisionLayers;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Generated::CollisionLayers);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Generated::CollisionLayers, "WaveHarmonic.Crest.Generated", "CollisionLayers");
// Dependencies 
namespace WaveHarmonic::Crest::Generated {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Generated.CollisionLayers
struct CORDL_TYPE CollisionLayers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionLayers_Unwrapped
enum struct __CollisionLayers_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_DynamicWaves = static_cast<int32_t>(0x1),
__E_Displacement = static_cast<int32_t>(0x2),
__E_Everything = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionLayers_Unwrapped () const noexcept {
return static_cast<__CollisionLayers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CollisionLayers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionLayers(int32_t  value__) noexcept;

/// @brief Field Displacement value: I32(2)
static ::WaveHarmonic::Crest::Generated::CollisionLayers const Displacement;

/// @brief Field DynamicWaves value: I32(1)
static ::WaveHarmonic::Crest::Generated::CollisionLayers const DynamicWaves;

/// @brief Field Everything value: I32(3)
static ::WaveHarmonic::Crest::Generated::CollisionLayers const Everything;

/// @brief Field Nothing value: I32(0)
static ::WaveHarmonic::Crest::Generated::CollisionLayers const Nothing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Generated::CollisionLayers, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Generated::CollisionLayers) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Generated
