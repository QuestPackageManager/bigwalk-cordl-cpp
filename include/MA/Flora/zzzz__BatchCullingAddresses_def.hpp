#pragma once
// IWYU pragma private; include "MA/Flora/BatchCullingAddresses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchCullingAddresses)
// Forward declare root types
namespace MA::Flora {
struct BatchCullingAddresses;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BatchCullingAddresses);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchCullingAddresses, "MA.Flora", "BatchCullingAddresses");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BatchCullingAddresses
struct CORDL_TYPE BatchCullingAddresses {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BatchCullingAddresses() ;

// Ctor Parameters [CppParam { name: "localToWorld", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "randomID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unused0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unused1", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BatchCullingAddresses(uint32_t  localToWorld, uint32_t  randomID, uint32_t  unused0, uint32_t  unused1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field localToWorld, offset: 0x0, size: 0x4, def value: None
 uint32_t  localToWorld;

/// @brief Field randomID, offset: 0x4, size: 0x4, def value: None
 uint32_t  randomID;

/// @brief Field unused0, offset: 0x8, size: 0x4, def value: None
 uint32_t  unused0;

/// @brief Field unused1, offset: 0xc, size: 0x4, def value: None
 uint32_t  unused1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BatchCullingAddresses, localToWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchCullingAddresses, randomID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchCullingAddresses, unused0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BatchCullingAddresses, unused1) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BatchCullingAddresses) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
