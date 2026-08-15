#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareElementSourceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareElementSourceType)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct HardwareElementSourceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::HardwareElementSourceType);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareElementSourceType, "Rewired.Data.Mapping", "HardwareElementSourceType");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.HardwareElementSourceType
struct CORDL_TYPE HardwareElementSourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HardwareElementSourceType_Unwrapped
enum struct __HardwareElementSourceType_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_Key = static_cast<int32_t>(0x3),
__E_Custom = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HardwareElementSourceType_Unwrapped () const noexcept {
return static_cast<__HardwareElementSourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HardwareElementSourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HardwareElementSourceType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::Rewired::Data::Mapping::HardwareElementSourceType const Axis;

/// @brief Field Button value: I32(0)
static ::Rewired::Data::Mapping::HardwareElementSourceType const Button;

/// @brief Field Custom value: I32(100)
static ::Rewired::Data::Mapping::HardwareElementSourceType const Custom;

/// @brief Field Key value: I32(3)
static ::Rewired::Data::Mapping::HardwareElementSourceType const Key;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareElementSourceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareElementSourceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
