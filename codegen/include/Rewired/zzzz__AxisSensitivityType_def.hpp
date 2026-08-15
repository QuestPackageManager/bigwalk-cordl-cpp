#pragma once
// IWYU pragma private; include "Rewired/AxisSensitivityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisSensitivityType)
// Forward declare root types
namespace Rewired {
struct AxisSensitivityType;
}
// Write type traits
MARK_VAL_T(::Rewired::AxisSensitivityType);
DEFINE_IL2CPP_CLASS(::Rewired::AxisSensitivityType, "Rewired", "AxisSensitivityType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.AxisSensitivityType
struct CORDL_TYPE AxisSensitivityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisSensitivityType_Unwrapped
enum struct __AxisSensitivityType_Unwrapped : int32_t {
__E_Multiplier = static_cast<int32_t>(0x0),
__E_Power = static_cast<int32_t>(0x1),
__E_Curve = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisSensitivityType_Unwrapped () const noexcept {
return static_cast<__AxisSensitivityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisSensitivityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisSensitivityType(int32_t  value__) noexcept;

/// @brief Field Curve value: I32(2)
static ::Rewired::AxisSensitivityType const Curve;

/// @brief Field Multiplier value: I32(0)
static ::Rewired::AxisSensitivityType const Multiplier;

/// @brief Field Power value: I32(1)
static ::Rewired::AxisSensitivityType const Power;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::AxisSensitivityType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::AxisSensitivityType) == 0x4, "Size mismatch!");

} // namespace end def Rewired
