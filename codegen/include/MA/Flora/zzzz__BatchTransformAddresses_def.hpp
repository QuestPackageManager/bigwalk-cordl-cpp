#pragma once
// IWYU pragma private; include "MA/Flora/BatchTransformAddresses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchTransformAddresses)
// Forward declare root types
namespace MA::Flora {
struct BatchTransformAddresses;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchTransformAddresses);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchTransformAddresses, "MA.Flora", "BatchTransformAddresses");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchTransformAddresses
struct CORDL_TYPE BatchTransformAddresses {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BatchTransformAddresses() ;

// Ctor Parameters [CppParam { name: "localToWorld", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "worldToLocal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "prevLocalToWorld", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "prevWorldToLocal", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BatchTransformAddresses(uint32_t  localToWorld, uint32_t  worldToLocal, uint32_t  prevLocalToWorld, uint32_t  prevWorldToLocal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12911};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field localToWorld, offset: 0x0, size: 0x4, def value: None
 uint32_t  localToWorld;

/// @brief Field worldToLocal, offset: 0x4, size: 0x4, def value: None
 uint32_t  worldToLocal;

/// @brief Field prevLocalToWorld, offset: 0x8, size: 0x4, def value: None
 uint32_t  prevLocalToWorld;

/// @brief Field prevWorldToLocal, offset: 0xc, size: 0x4, def value: None
 uint32_t  prevWorldToLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchTransformAddresses, localToWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchTransformAddresses, worldToLocal) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchTransformAddresses, prevLocalToWorld) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchTransformAddresses, prevWorldToLocal) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchTransformAddresses) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
