#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDrawTemplate)
// Forward declare root types
namespace MA::Flora {
struct IndirectDrawTemplate;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDrawTemplate);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDrawTemplate, "MA.Flora", "IndirectDrawTemplate");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDrawTemplate
struct CORDL_TYPE IndirectDrawTemplate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectDrawTemplate() ;

// Ctor Parameters [CppParam { name: "binOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "slotsPerLod", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stateMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stateIndices", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IndirectDrawTemplate(uint32_t  binOffset, uint32_t  slotsPerLod, uint32_t  stateMask, uint32_t  stateIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field binOffset, offset: 0x0, size: 0x4, def value: None
 uint32_t  binOffset;

/// @brief Field slotsPerLod, offset: 0x4, size: 0x4, def value: None
 uint32_t  slotsPerLod;

/// @brief Field stateMask, offset: 0x8, size: 0x4, def value: None
 uint32_t  stateMask;

/// @brief Field stateIndices, offset: 0xc, size: 0x4, def value: None
 uint32_t  stateIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDrawTemplate, binOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawTemplate, slotsPerLod) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawTemplate, stateMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawTemplate, stateIndices) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDrawTemplate) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
