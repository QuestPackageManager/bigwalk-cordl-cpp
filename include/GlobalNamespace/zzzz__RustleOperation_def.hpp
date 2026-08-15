#pragma once
// IWYU pragma private; include "GlobalNamespace/RustleOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RustleOperation)
// Forward declare root types
namespace GlobalNamespace {
struct RustleOperation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RustleOperation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RustleOperation, "", "RustleOperation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RustleOperation
struct CORDL_TYPE RustleOperation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RustleOperation() ;

// Ctor Parameters [CppParam { name: "PlayerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "GroupIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RustleOperation(int32_t  PlayerIndex, int32_t  GroupIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field PlayerIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerIndex;

/// @brief Field GroupIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  GroupIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RustleOperation, PlayerIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RustleOperation, GroupIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RustleOperation) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
