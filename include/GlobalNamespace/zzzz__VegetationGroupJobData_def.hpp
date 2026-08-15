#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationGroupJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VegetationGroupJobData)
// Forward declare root types
namespace GlobalNamespace {
struct VegetationGroupJobData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VegetationGroupJobData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VegetationGroupJobData, "", "VegetationGroupJobData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VegetationGroupJobData
struct CORDL_TYPE VegetationGroupJobData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VegetationGroupJobData() ;

// Ctor Parameters [CppParam { name: "Distances", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr VegetationGroupJobData(::Unity::Mathematics::float3  Distances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Distances, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Distances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VegetationGroupJobData, Distances) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VegetationGroupJobData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
