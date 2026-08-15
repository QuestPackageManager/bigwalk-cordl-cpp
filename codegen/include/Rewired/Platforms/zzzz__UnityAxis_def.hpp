#pragma once
// IWYU pragma private; include "Rewired/Platforms/UnityAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAxis)
// Forward declare root types
namespace Rewired::Platforms {
struct UnityAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::UnityAxis);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::UnityAxis, "Rewired.Platforms", "UnityAxis");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.UnityAxis
struct CORDL_TYPE UnityAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityAxis_Unwrapped
enum struct __UnityAxis_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Axis0 = static_cast<int32_t>(0x1),
__E_Axis1 = static_cast<int32_t>(0x2),
__E_Axis2 = static_cast<int32_t>(0x3),
__E_Axis3 = static_cast<int32_t>(0x4),
__E_Axis4 = static_cast<int32_t>(0x5),
__E_Axis5 = static_cast<int32_t>(0x6),
__E_Axis6 = static_cast<int32_t>(0x7),
__E_Axis7 = static_cast<int32_t>(0x8),
__E_Axis8 = static_cast<int32_t>(0x9),
__E_Axis9 = static_cast<int32_t>(0xa),
__E_Axis10 = static_cast<int32_t>(0xb),
__E_Axis11 = static_cast<int32_t>(0xc),
__E_Axis12 = static_cast<int32_t>(0xd),
__E_Axis13 = static_cast<int32_t>(0xe),
__E_Axis14 = static_cast<int32_t>(0xf),
__E_Axis15 = static_cast<int32_t>(0x10),
__E_Axis16 = static_cast<int32_t>(0x11),
__E_Axis17 = static_cast<int32_t>(0x12),
__E_Axis18 = static_cast<int32_t>(0x13),
__E_Axis19 = static_cast<int32_t>(0x14),
__E_Axis20 = static_cast<int32_t>(0x15),
__E_Axis21 = static_cast<int32_t>(0x16),
__E_Axis22 = static_cast<int32_t>(0x17),
__E_Axis23 = static_cast<int32_t>(0x18),
__E_Axis24 = static_cast<int32_t>(0x19),
__E_Axis25 = static_cast<int32_t>(0x1a),
__E_Axis26 = static_cast<int32_t>(0x1b),
__E_Axis27 = static_cast<int32_t>(0x1c),
__E_Axis28 = static_cast<int32_t>(0x1d),
__E_Axis29 = static_cast<int32_t>(0x1e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityAxis_Unwrapped () const noexcept {
return static_cast<__UnityAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityAxis(int32_t  value__) noexcept;

/// @brief Field Axis0 value: I32(1)
static ::Rewired::Platforms::UnityAxis const Axis0;

/// @brief Field Axis1 value: I32(2)
static ::Rewired::Platforms::UnityAxis const Axis1;

/// @brief Field Axis10 value: I32(11)
static ::Rewired::Platforms::UnityAxis const Axis10;

/// @brief Field Axis11 value: I32(12)
static ::Rewired::Platforms::UnityAxis const Axis11;

/// @brief Field Axis12 value: I32(13)
static ::Rewired::Platforms::UnityAxis const Axis12;

/// @brief Field Axis13 value: I32(14)
static ::Rewired::Platforms::UnityAxis const Axis13;

/// @brief Field Axis14 value: I32(15)
static ::Rewired::Platforms::UnityAxis const Axis14;

/// @brief Field Axis15 value: I32(16)
static ::Rewired::Platforms::UnityAxis const Axis15;

/// @brief Field Axis16 value: I32(17)
static ::Rewired::Platforms::UnityAxis const Axis16;

/// @brief Field Axis17 value: I32(18)
static ::Rewired::Platforms::UnityAxis const Axis17;

/// @brief Field Axis18 value: I32(19)
static ::Rewired::Platforms::UnityAxis const Axis18;

/// @brief Field Axis19 value: I32(20)
static ::Rewired::Platforms::UnityAxis const Axis19;

/// @brief Field Axis2 value: I32(3)
static ::Rewired::Platforms::UnityAxis const Axis2;

/// @brief Field Axis20 value: I32(21)
static ::Rewired::Platforms::UnityAxis const Axis20;

/// @brief Field Axis21 value: I32(22)
static ::Rewired::Platforms::UnityAxis const Axis21;

/// @brief Field Axis22 value: I32(23)
static ::Rewired::Platforms::UnityAxis const Axis22;

/// @brief Field Axis23 value: I32(24)
static ::Rewired::Platforms::UnityAxis const Axis23;

/// @brief Field Axis24 value: I32(25)
static ::Rewired::Platforms::UnityAxis const Axis24;

/// @brief Field Axis25 value: I32(26)
static ::Rewired::Platforms::UnityAxis const Axis25;

/// @brief Field Axis26 value: I32(27)
static ::Rewired::Platforms::UnityAxis const Axis26;

/// @brief Field Axis27 value: I32(28)
static ::Rewired::Platforms::UnityAxis const Axis27;

/// @brief Field Axis28 value: I32(29)
static ::Rewired::Platforms::UnityAxis const Axis28;

/// @brief Field Axis29 value: I32(30)
static ::Rewired::Platforms::UnityAxis const Axis29;

/// @brief Field Axis3 value: I32(4)
static ::Rewired::Platforms::UnityAxis const Axis3;

/// @brief Field Axis4 value: I32(5)
static ::Rewired::Platforms::UnityAxis const Axis4;

/// @brief Field Axis5 value: I32(6)
static ::Rewired::Platforms::UnityAxis const Axis5;

/// @brief Field Axis6 value: I32(7)
static ::Rewired::Platforms::UnityAxis const Axis6;

/// @brief Field Axis7 value: I32(8)
static ::Rewired::Platforms::UnityAxis const Axis7;

/// @brief Field Axis8 value: I32(9)
static ::Rewired::Platforms::UnityAxis const Axis8;

/// @brief Field Axis9 value: I32(10)
static ::Rewired::Platforms::UnityAxis const Axis9;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::UnityAxis const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::UnityAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::UnityAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
