#pragma once
// IWYU pragma private; include "MA/Flora/CullingLayoutCounts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingLayoutCounts)
// Forward declare root types
namespace MA::Flora {
struct CullingLayoutCounts;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingLayoutCounts);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingLayoutCounts, "MA.Flora", "CullingLayoutCounts");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingLayoutCounts
struct CORDL_TYPE CullingLayoutCounts {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingLayoutCounts() ;

// Ctor Parameters [CppParam { name: "VisibleChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibleInstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibilityBufferCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawCommandCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UsedDrawRangeCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingLayoutCounts(int32_t  VisibleChunkCount, int32_t  VisibleInstanceCount, int32_t  VisibilityBufferCapacity, int32_t  DrawCommandCount, int32_t  DrawBinCount, int32_t  UsedDrawRangeCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field VisibleChunkCount, offset: 0x0, size: 0x4, def value: None
 int32_t  VisibleChunkCount;

/// @brief Field VisibleInstanceCount, offset: 0x4, size: 0x4, def value: None
 int32_t  VisibleInstanceCount;

/// @brief Field VisibilityBufferCapacity, offset: 0x8, size: 0x4, def value: None
 int32_t  VisibilityBufferCapacity;

/// @brief Field DrawCommandCount, offset: 0xc, size: 0x4, def value: None
 int32_t  DrawCommandCount;

/// @brief Field DrawBinCount, offset: 0x10, size: 0x4, def value: None
 int32_t  DrawBinCount;

/// @brief Field UsedDrawRangeCount, offset: 0x14, size: 0x4, def value: None
 int32_t  UsedDrawRangeCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingLayoutCounts, VisibleChunkCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingLayoutCounts, VisibleInstanceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingLayoutCounts, VisibilityBufferCapacity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingLayoutCounts, DrawCommandCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingLayoutCounts, DrawBinCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingLayoutCounts, UsedDrawRangeCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingLayoutCounts) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
