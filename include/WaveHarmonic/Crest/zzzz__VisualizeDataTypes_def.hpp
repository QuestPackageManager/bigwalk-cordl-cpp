#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/VisualizeDataTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualizeDataTypes)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct VisualizeDataTypes;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::VisualizeDataTypes);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::VisualizeDataTypes, "WaveHarmonic.Crest", "VisualizeDataTypes");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.VisualizeDataTypes
struct CORDL_TYPE VisualizeDataTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualizeDataTypes_Unwrapped
enum struct __VisualizeDataTypes_Unwrapped : int32_t {
__E_Albedo = static_cast<int32_t>(0x0),
__E_Displacement = static_cast<int32_t>(0x1),
__E_DynamicWaves = static_cast<int32_t>(0x2),
__E_Level = static_cast<int32_t>(0x3),
__E_Flow = static_cast<int32_t>(0x4),
__E_Foam = static_cast<int32_t>(0x5),
__E_Shadow = static_cast<int32_t>(0x6),
__E_Depth = static_cast<int32_t>(0x7),
__E_Clip = static_cast<int32_t>(0x8),
__E_ShorelineDistance = static_cast<int32_t>(0x9),
__E_Absorption = static_cast<int32_t>(0xa),
__E_Scattering = static_cast<int32_t>(0xb),
__E_Cascades = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualizeDataTypes_Unwrapped () const noexcept {
return static_cast<__VisualizeDataTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualizeDataTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VisualizeDataTypes(int32_t  value__) noexcept;

/// @brief Field Absorption value: I32(10)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Absorption;

/// @brief Field Albedo value: I32(0)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Albedo;

/// @brief Field Cascades value: I32(12)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Cascades;

/// @brief Field Clip value: I32(8)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Clip;

/// @brief Field Depth value: I32(7)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Depth;

/// @brief Field Displacement value: I32(1)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Displacement;

/// @brief Field DynamicWaves value: I32(2)
static ::WaveHarmonic::Crest::VisualizeDataTypes const DynamicWaves;

/// @brief Field Flow value: I32(4)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Flow;

/// @brief Field Foam value: I32(5)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Foam;

/// @brief Field Level value: I32(3)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Level;

/// @brief Field Scattering value: I32(11)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Scattering;

/// @brief Field Shadow value: I32(6)
static ::WaveHarmonic::Crest::VisualizeDataTypes const Shadow;

/// @brief Field ShorelineDistance value: I32(9)
static ::WaveHarmonic::Crest::VisualizeDataTypes const ShorelineDistance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::VisualizeDataTypes, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::VisualizeDataTypes) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
