#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VegetationSoundElement)
// Forward declare root types
namespace GlobalNamespace {
struct VegetationSoundElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VegetationSoundElement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VegetationSoundElement, "", "VegetationSoundElement");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VegetationSoundElement
struct CORDL_TYPE VegetationSoundElement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VegetationSoundElement() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "GroupIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VegetationSoundElement(::Unity::Mathematics::float3  Position, float_t  Radius, int32_t  GroupIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Radius, offset: 0xc, size: 0x4, def value: None
 float_t  Radius;

/// @brief Field GroupIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  GroupIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VegetationSoundElement, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundElement, Radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundElement, GroupIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VegetationSoundElement) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
