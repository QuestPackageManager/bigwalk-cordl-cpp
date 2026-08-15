#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSnapshotRefresh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainSnapshotRefresh)
// Forward declare root types
namespace MA::Flora {
struct TerrainSnapshotRefresh;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainSnapshotRefresh);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainSnapshotRefresh, "MA.Flora", "TerrainSnapshotRefresh");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainSnapshotRefresh
struct CORDL_TYPE TerrainSnapshotRefresh {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainSnapshotRefresh_Unwrapped
enum struct __TerrainSnapshotRefresh_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DynamicData = static_cast<int32_t>(0x1),
__E_Prototypes = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainSnapshotRefresh_Unwrapped () const noexcept {
return static_cast<__TerrainSnapshotRefresh_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainSnapshotRefresh() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainSnapshotRefresh(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::MA::Flora::TerrainSnapshotRefresh const All;

/// @brief Field DynamicData value: I32(1)
static ::MA::Flora::TerrainSnapshotRefresh const DynamicData;

/// @brief Field None value: I32(0)
static ::MA::Flora::TerrainSnapshotRefresh const None;

/// @brief Field Prototypes value: I32(2)
static ::MA::Flora::TerrainSnapshotRefresh const Prototypes;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13385};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainSnapshotRefresh, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainSnapshotRefresh) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
