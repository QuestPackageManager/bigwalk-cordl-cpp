#pragma once
// IWYU pragma private; include "Rewired/Pole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pole)
// Forward declare root types
namespace Rewired {
struct Pole;
}
// Write type traits
MARK_VAL_T(::Rewired::Pole);
DEFINE_IL2CPP_CLASS(::Rewired::Pole, "Rewired", "Pole");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.Pole
struct CORDL_TYPE Pole {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Pole_Unwrapped
enum struct __Pole_Unwrapped : int32_t {
__E_Positive = static_cast<int32_t>(0x0),
__E_Negative = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Pole_Unwrapped () const noexcept {
return static_cast<__Pole_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Pole() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Pole(int32_t  value__) noexcept;

/// @brief Field Negative value: I32(1)
static ::Rewired::Pole const Negative;

/// @brief Field Positive value: I32(0)
static ::Rewired::Pole const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Pole, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Pole) == 0x4, "Size mismatch!");

} // namespace end def Rewired
