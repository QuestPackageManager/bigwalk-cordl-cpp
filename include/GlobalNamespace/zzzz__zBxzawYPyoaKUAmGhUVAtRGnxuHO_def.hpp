#pragma once
// IWYU pragma private; include "GlobalNamespace/zBxzawYPyoaKUAmGhUVAtRGnxuHO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(zBxzawYPyoaKUAmGhUVAtRGnxuHO)
// Forward declare root types
namespace GlobalNamespace {
struct zBxzawYPyoaKUAmGhUVAtRGnxuHO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO, "", "zBxzawYPyoaKUAmGhUVAtRGnxuHO");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: zBxzawYPyoaKUAmGhUVAtRGnxuHO
struct CORDL_TYPE zBxzawYPyoaKUAmGhUVAtRGnxuHO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __zBxzawYPyoaKUAmGhUVAtRGnxuHO_Unwrapped
enum struct __zBxzawYPyoaKUAmGhUVAtRGnxuHO_Unwrapped : int32_t {
__E_Exclusive = static_cast<int32_t>(0x1),
__E_NonExclusive = static_cast<int32_t>(0x2),
__E_Foreground = static_cast<int32_t>(0x4),
__E_Background = static_cast<int32_t>(0x8),
__E_NoWinKey = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __zBxzawYPyoaKUAmGhUVAtRGnxuHO_Unwrapped () const noexcept {
return static_cast<__zBxzawYPyoaKUAmGhUVAtRGnxuHO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr zBxzawYPyoaKUAmGhUVAtRGnxuHO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr zBxzawYPyoaKUAmGhUVAtRGnxuHO(int32_t  value__) noexcept;

/// @brief Field Background value: I32(8)
static ::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO const Background;

/// @brief Field Exclusive value: I32(1)
static ::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO const Exclusive;

/// @brief Field Foreground value: I32(4)
static ::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO const Foreground;

/// @brief Field NoWinKey value: I32(16)
static ::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO const NoWinKey;

/// @brief Field NonExclusive value: I32(2)
static ::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO const NonExclusive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::zBxzawYPyoaKUAmGhUVAtRGnxuHO) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
