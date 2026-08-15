#pragma once
// IWYU pragma private; include "MA/Flora/LodDrawEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LodDrawEntry)
// Forward declare root types
namespace MA::Flora {
struct LodDrawEntry;
}
// Write type traits
MARK_VAL_T(::MA::Flora::LodDrawEntry);
DEFINE_IL2CPP_CLASS(::MA::Flora::LodDrawEntry, "MA.Flora", "LodDrawEntry");
// Dependencies MA.Flora.DrawBatchIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.LodDrawEntry
struct CORDL_TYPE LodDrawEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LodDrawEntry() ;

// Ctor Parameters [CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "DrawIndex", ty: "::MA::Flora::DrawBatchIndex", modifiers: "", def_value: None }]
constexpr LodDrawEntry(uint8_t  LodIndex, ::MA::Flora::DrawBatchIndex  DrawIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13079};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field LodIndex, offset: 0x0, size: 0x1, def value: None
 uint8_t  LodIndex;

/// @brief Field DrawIndex, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::DrawBatchIndex  DrawIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::LodDrawEntry, LodIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::LodDrawEntry, DrawIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::LodDrawEntry) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
