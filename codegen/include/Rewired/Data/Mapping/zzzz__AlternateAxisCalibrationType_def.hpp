#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AlternateAxisCalibrationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AlternateAxisCalibrationType)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct AlternateAxisCalibrationType;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::AlternateAxisCalibrationType);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::AlternateAxisCalibrationType, "Rewired.Data.Mapping", "AlternateAxisCalibrationType");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.AlternateAxisCalibrationType
struct CORDL_TYPE AlternateAxisCalibrationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AlternateAxisCalibrationType_Unwrapped
enum struct __AlternateAxisCalibrationType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_ThrottleZeroCenter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AlternateAxisCalibrationType_Unwrapped () const noexcept {
return static_cast<__AlternateAxisCalibrationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AlternateAxisCalibrationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AlternateAxisCalibrationType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Rewired::Data::Mapping::AlternateAxisCalibrationType const Default;

/// @brief Field ThrottleZeroCenter value: I32(1)
static ::Rewired::Data::Mapping::AlternateAxisCalibrationType const ThrottleZeroCenter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::AlternateAxisCalibrationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::AlternateAxisCalibrationType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
