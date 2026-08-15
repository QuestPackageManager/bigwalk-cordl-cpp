#pragma once
// IWYU pragma private; include "GlobalNamespace/vXsShCPACnFukdOLZLaqEHHOUuHXA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vXsShCPACnFukdOLZLaqEHHOUuHXA)
// Forward declare root types
namespace GlobalNamespace {
struct vXsShCPACnFukdOLZLaqEHHOUuHXA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA, "", "vXsShCPACnFukdOLZLaqEHHOUuHXA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: vXsShCPACnFukdOLZLaqEHHOUuHXA
struct CORDL_TYPE vXsShCPACnFukdOLZLaqEHHOUuHXA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __vXsShCPACnFukdOLZLaqEHHOUuHXA_Unwrapped
enum struct __vXsShCPACnFukdOLZLaqEHHOUuHXA_Unwrapped : int32_t {
__E_Playing = static_cast<int32_t>(0x1),
__E_Emulated = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __vXsShCPACnFukdOLZLaqEHHOUuHXA_Unwrapped () const noexcept {
return static_cast<__vXsShCPACnFukdOLZLaqEHHOUuHXA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr vXsShCPACnFukdOLZLaqEHHOUuHXA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr vXsShCPACnFukdOLZLaqEHHOUuHXA(int32_t  value__) noexcept;

/// @brief Field Emulated value: I32(2)
static ::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA const Emulated;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA const None;

/// @brief Field Playing value: I32(1)
static ::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA const Playing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::vXsShCPACnFukdOLZLaqEHHOUuHXA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
