#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawBin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDrawBin)
// Forward declare root types
namespace MA::Flora {
struct IndirectDrawBin;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDrawBin);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDrawBin, "MA.Flora", "IndirectDrawBin");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDrawBin
struct CORDL_TYPE IndirectDrawBin {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectDrawBin() ;

// Ctor Parameters [CppParam { name: "visibleStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "commandStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IndirectDrawBin(uint32_t  visibleStart, uint32_t  visibleCount, uint32_t  commandStart, uint32_t  commandCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field visibleStart, offset: 0x0, size: 0x4, def value: None
 uint32_t  visibleStart;

/// @brief Field visibleCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  visibleCount;

/// @brief Field commandStart, offset: 0x8, size: 0x4, def value: None
 uint32_t  commandStart;

/// @brief Field commandCount, offset: 0xc, size: 0x4, def value: None
 uint32_t  commandCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDrawBin, visibleStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawBin, visibleCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawBin, commandStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawBin, commandCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDrawBin) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
