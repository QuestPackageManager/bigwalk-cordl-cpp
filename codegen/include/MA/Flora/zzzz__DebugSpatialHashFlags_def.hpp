#pragma once
// IWYU pragma private; include "MA/Flora/DebugSpatialHashFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugSpatialHashFlags)
// Forward declare root types
namespace MA::Flora {
struct DebugSpatialHashFlags;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DebugSpatialHashFlags);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugSpatialHashFlags, "MA.Flora", "DebugSpatialHashFlags");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugSpatialHashFlags
struct CORDL_TYPE DebugSpatialHashFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugSpatialHashFlags_Unwrapped
enum struct __DebugSpatialHashFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Blocks = static_cast<int32_t>(0x1),
__E_Cells = static_cast<int32_t>(0x2),
__E_Chunks = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugSpatialHashFlags_Unwrapped () const noexcept {
return static_cast<__DebugSpatialHashFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugSpatialHashFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugSpatialHashFlags(int32_t  value__) noexcept;

/// @brief Field Blocks value: I32(1)
static ::MA::Flora::DebugSpatialHashFlags const Blocks;

/// @brief Field Cells value: I32(2)
static ::MA::Flora::DebugSpatialHashFlags const Cells;

/// @brief Field Chunks value: I32(4)
static ::MA::Flora::DebugSpatialHashFlags const Chunks;

/// @brief Field None value: I32(0)
static ::MA::Flora::DebugSpatialHashFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugSpatialHashFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugSpatialHashFlags) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
