#pragma once
// IWYU pragma private; include "Rewired/AxisRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisRange)
// Forward declare root types
namespace Rewired {
struct AxisRange;
}
// Write type traits
MARK_VAL_T(::Rewired::AxisRange);
DEFINE_IL2CPP_CLASS(::Rewired::AxisRange, "Rewired", "AxisRange");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.AxisRange
struct CORDL_TYPE AxisRange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisRange_Unwrapped
enum struct __AxisRange_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_Positive = static_cast<int32_t>(0x1),
__E_Negative = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisRange_Unwrapped () const noexcept {
return static_cast<__AxisRange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisRange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisRange(int32_t  value__) noexcept;

/// @brief Field Full value: I32(0)
static ::Rewired::AxisRange const Full;

/// @brief Field Negative value: I32(2)
static ::Rewired::AxisRange const Negative;

/// @brief Field Positive value: I32(1)
static ::Rewired::AxisRange const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::AxisRange, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::AxisRange) == 0x4, "Size mismatch!");

} // namespace end def Rewired
