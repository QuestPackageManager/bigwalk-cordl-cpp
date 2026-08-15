#pragma once
// IWYU pragma private; include "GlobalNamespace/VeAHrxVyrEcQhpQIUzexBrUyIwgF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VeAHrxVyrEcQhpQIUzexBrUyIwgF)
// Forward declare root types
namespace GlobalNamespace {
struct VeAHrxVyrEcQhpQIUzexBrUyIwgF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VeAHrxVyrEcQhpQIUzexBrUyIwgF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VeAHrxVyrEcQhpQIUzexBrUyIwgF, "", "VeAHrxVyrEcQhpQIUzexBrUyIwgF");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VeAHrxVyrEcQhpQIUzexBrUyIwgF
struct CORDL_TYPE VeAHrxVyrEcQhpQIUzexBrUyIwgF {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __VeAHrxVyrEcQhpQIUzexBrUyIwgF_Unwrapped
enum struct __VeAHrxVyrEcQhpQIUzexBrUyIwgF_Unwrapped : int16_t {
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VeAHrxVyrEcQhpQIUzexBrUyIwgF_Unwrapped () const noexcept {
return static_cast<__VeAHrxVyrEcQhpQIUzexBrUyIwgF_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VeAHrxVyrEcQhpQIUzexBrUyIwgF() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr VeAHrxVyrEcQhpQIUzexBrUyIwgF(int16_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VeAHrxVyrEcQhpQIUzexBrUyIwgF, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VeAHrxVyrEcQhpQIUzexBrUyIwgF) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
