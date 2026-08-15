#pragma once
// IWYU pragma private; include "GlobalNamespace/WindyOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindyOperation)
// Forward declare root types
namespace GlobalNamespace {
struct WindyOperation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WindyOperation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WindyOperation, "", "WindyOperation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WindyOperation
struct CORDL_TYPE WindyOperation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WindyOperation() ;

// Ctor Parameters [CppParam { name: "GroupIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ElementIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DistanceIndex", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr WindyOperation(int32_t  GroupIndex, int32_t  ElementIndex, uint8_t  DistanceIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field GroupIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  GroupIndex;

/// @brief Field ElementIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  ElementIndex;

/// @brief Field DistanceIndex, offset: 0x8, size: 0x1, def value: None
 uint8_t  DistanceIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WindyOperation, GroupIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindyOperation, ElementIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindyOperation, DistanceIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WindyOperation) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
