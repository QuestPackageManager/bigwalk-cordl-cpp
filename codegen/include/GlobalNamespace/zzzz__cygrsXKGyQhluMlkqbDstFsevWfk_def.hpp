#pragma once
// IWYU pragma private; include "GlobalNamespace/cygrsXKGyQhluMlkqbDstFsevWfk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(cygrsXKGyQhluMlkqbDstFsevWfk)
// Forward declare root types
namespace GlobalNamespace {
struct cygrsXKGyQhluMlkqbDstFsevWfk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk, "", "cygrsXKGyQhluMlkqbDstFsevWfk");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: cygrsXKGyQhluMlkqbDstFsevWfk
struct CORDL_TYPE cygrsXKGyQhluMlkqbDstFsevWfk {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __cygrsXKGyQhluMlkqbDstFsevWfk_Unwrapped
enum struct __cygrsXKGyQhluMlkqbDstFsevWfk_Unwrapped : int32_t {
__E_NonOverlapped = static_cast<int32_t>(0x0),
__E_Overlapped = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __cygrsXKGyQhluMlkqbDstFsevWfk_Unwrapped () const noexcept {
return static_cast<__cygrsXKGyQhluMlkqbDstFsevWfk_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr cygrsXKGyQhluMlkqbDstFsevWfk() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr cygrsXKGyQhluMlkqbDstFsevWfk(int32_t  value__) noexcept;

/// @brief Field NonOverlapped value: I32(0)
static ::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk const NonOverlapped;

/// @brief Field Overlapped value: I32(1)
static ::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk const Overlapped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::cygrsXKGyQhluMlkqbDstFsevWfk) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
