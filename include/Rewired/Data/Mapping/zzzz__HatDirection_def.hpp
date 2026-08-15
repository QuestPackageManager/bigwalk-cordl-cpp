#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HatDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HatDirection)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct HatDirection;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::HatDirection);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HatDirection, "Rewired.Data.Mapping", "HatDirection");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.HatDirection
struct CORDL_TYPE HatDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HatDirection_Unwrapped
enum struct __HatDirection_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_UpRight = static_cast<int32_t>(0x4),
__E_DownRight = static_cast<int32_t>(0x5),
__E_DownLeft = static_cast<int32_t>(0x6),
__E_UpLeft = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HatDirection_Unwrapped () const noexcept {
return static_cast<__HatDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HatDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HatDirection(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::Rewired::Data::Mapping::HatDirection const Down;

/// @brief Field DownLeft value: I32(6)
static ::Rewired::Data::Mapping::HatDirection const DownLeft;

/// @brief Field DownRight value: I32(5)
static ::Rewired::Data::Mapping::HatDirection const DownRight;

/// @brief Field Left value: I32(3)
static ::Rewired::Data::Mapping::HatDirection const Left;

/// @brief Field Right value: I32(1)
static ::Rewired::Data::Mapping::HatDirection const Right;

/// @brief Field Up value: I32(0)
static ::Rewired::Data::Mapping::HatDirection const Up;

/// @brief Field UpLeft value: I32(7)
static ::Rewired::Data::Mapping::HatDirection const UpLeft;

/// @brief Field UpRight value: I32(4)
static ::Rewired::Data::Mapping::HatDirection const UpRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2657};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HatDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HatDirection) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
