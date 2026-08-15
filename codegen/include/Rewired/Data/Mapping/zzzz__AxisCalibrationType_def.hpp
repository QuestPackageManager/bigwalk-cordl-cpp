#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AxisCalibrationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisCalibrationType)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct AxisCalibrationType;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::AxisCalibrationType);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::AxisCalibrationType, "Rewired.Data.Mapping", "AxisCalibrationType");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.AxisCalibrationType
struct CORDL_TYPE AxisCalibrationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisCalibrationType_Unwrapped
enum struct __AxisCalibrationType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Uncalibrated = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisCalibrationType_Unwrapped () const noexcept {
return static_cast<__AxisCalibrationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisCalibrationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisCalibrationType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(2)
static ::Rewired::Data::Mapping::AxisCalibrationType const Custom;

/// @brief Field Default value: I32(0)
static ::Rewired::Data::Mapping::AxisCalibrationType const Default;

/// @brief Field Uncalibrated value: I32(1)
static ::Rewired::Data::Mapping::AxisCalibrationType const Uncalibrated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2661};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::AxisCalibrationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::AxisCalibrationType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
