#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareElementSourceTypeWithHat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareElementSourceTypeWithHat)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct HardwareElementSourceTypeWithHat;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat, "Rewired.Data.Mapping", "HardwareElementSourceTypeWithHat");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.HardwareElementSourceTypeWithHat
struct CORDL_TYPE HardwareElementSourceTypeWithHat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HardwareElementSourceTypeWithHat_Unwrapped
enum struct __HardwareElementSourceTypeWithHat_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_Hat = static_cast<int32_t>(0x2),
__E_Key = static_cast<int32_t>(0x3),
__E_Custom = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HardwareElementSourceTypeWithHat_Unwrapped () const noexcept {
return static_cast<__HardwareElementSourceTypeWithHat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HardwareElementSourceTypeWithHat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HardwareElementSourceTypeWithHat(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat const Axis;

/// @brief Field Button value: I32(0)
static ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat const Button;

/// @brief Field Custom value: I32(100)
static ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat const Custom;

/// @brief Field Hat value: I32(2)
static ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat const Hat;

/// @brief Field Key value: I32(3)
static ::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat const Key;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2656};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
