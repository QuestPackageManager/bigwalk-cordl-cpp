#pragma once
// IWYU pragma private; include "HouseHouse/Medal/MedalType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MedalType)
// Forward declare root types
namespace HouseHouse::Medal {
struct MedalType;
}
// Write type traits
MARK_VAL_T(::HouseHouse::Medal::MedalType);
DEFINE_IL2CPP_CLASS(::HouseHouse::Medal::MedalType, "HouseHouse.Medal", "MedalType");
// Dependencies 
namespace HouseHouse::Medal {
// Is value type: true
// CS Name: HouseHouse.Medal.MedalType
struct CORDL_TYPE MedalType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MedalType_Unwrapped
enum struct __MedalType_Unwrapped : int32_t {
__E_Drawbridge = static_cast<int32_t>(0x0),
__E_Map = static_cast<int32_t>(0x1),
__E_Chairlift = static_cast<int32_t>(0x2),
__E_Train = static_cast<int32_t>(0x3),
__E_Tunnel = static_cast<int32_t>(0x4),
__E_Wall = static_cast<int32_t>(0x5),
__E_Ending1 = static_cast<int32_t>(0x6),
__E_Ending2 = static_cast<int32_t>(0x7),
__E_Peak = static_cast<int32_t>(0x8),
__E_Shiny = static_cast<int32_t>(0x9),
__E_Backpack = static_cast<int32_t>(0xa),
__E_Holster = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MedalType_Unwrapped () const noexcept {
return static_cast<__MedalType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MedalType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MedalType(int32_t  value__) noexcept;

/// @brief Field Backpack value: I32(10)
static ::HouseHouse::Medal::MedalType const Backpack;

/// @brief Field Chairlift value: I32(2)
static ::HouseHouse::Medal::MedalType const Chairlift;

/// @brief Field Drawbridge value: I32(0)
static ::HouseHouse::Medal::MedalType const Drawbridge;

/// @brief Field Ending1 value: I32(6)
static ::HouseHouse::Medal::MedalType const Ending1;

/// @brief Field Ending2 value: I32(7)
static ::HouseHouse::Medal::MedalType const Ending2;

/// @brief Field Holster value: I32(11)
static ::HouseHouse::Medal::MedalType const Holster;

/// @brief Field Map value: I32(1)
static ::HouseHouse::Medal::MedalType const Map;

/// @brief Field Peak value: I32(8)
static ::HouseHouse::Medal::MedalType const Peak;

/// @brief Field Shiny value: I32(9)
static ::HouseHouse::Medal::MedalType const Shiny;

/// @brief Field Train value: I32(3)
static ::HouseHouse::Medal::MedalType const Train;

/// @brief Field Tunnel value: I32(4)
static ::HouseHouse::Medal::MedalType const Tunnel;

/// @brief Field Wall value: I32(5)
static ::HouseHouse::Medal::MedalType const Wall;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Medal::MedalType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Medal::MedalType) == 0x4, "Size mismatch!");

} // namespace end def HouseHouse::Medal
