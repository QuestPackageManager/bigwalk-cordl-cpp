#pragma once
// IWYU pragma private; include "GlobalNamespace/tISOJugWyyEWkkJIKkAQhabFGGVbA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(tISOJugWyyEWkkJIKkAQhabFGGVbA)
// Forward declare root types
namespace GlobalNamespace {
struct tISOJugWyyEWkkJIKkAQhabFGGVbA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA, "", "tISOJugWyyEWkkJIKkAQhabFGGVbA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: tISOJugWyyEWkkJIKkAQhabFGGVbA
struct CORDL_TYPE tISOJugWyyEWkkJIKkAQhabFGGVbA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __tISOJugWyyEWkkJIKkAQhabFGGVbA_Unwrapped
enum struct __tISOJugWyyEWkkJIKkAQhabFGGVbA_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x4),
__E_Z = static_cast<int32_t>(0x8),
__E_Button0 = static_cast<int32_t>(0xc),
__E_Button1 = static_cast<int32_t>(0xd),
__E_Button2 = static_cast<int32_t>(0xe),
__E_Button3 = static_cast<int32_t>(0xf),
__E_Button4 = static_cast<int32_t>(0x10),
__E_Button5 = static_cast<int32_t>(0x11),
__E_Button6 = static_cast<int32_t>(0x12),
__E_Button7 = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __tISOJugWyyEWkkJIKkAQhabFGGVbA_Unwrapped () const noexcept {
return static_cast<__tISOJugWyyEWkkJIKkAQhabFGGVbA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr tISOJugWyyEWkkJIKkAQhabFGGVbA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr tISOJugWyyEWkkJIKkAQhabFGGVbA(int32_t  value__) noexcept;

/// @brief Field Button0 value: I32(12)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button0;

/// @brief Field Button1 value: I32(13)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button1;

/// @brief Field Button2 value: I32(14)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button2;

/// @brief Field Button3 value: I32(15)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button3;

/// @brief Field Button4 value: I32(16)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button4;

/// @brief Field Button5 value: I32(17)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button5;

/// @brief Field Button6 value: I32(18)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button6;

/// @brief Field Button7 value: I32(19)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Button7;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const X;

/// @brief Field Y value: I32(4)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Y;

/// @brief Field Z value: I32(8)
static ::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::tISOJugWyyEWkkJIKkAQhabFGGVbA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
