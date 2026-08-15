#pragma once
// IWYU pragma private; include "GlobalNamespace/PPibvFHPXbJhODAoeteMxucaRqrkA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PPibvFHPXbJhODAoeteMxucaRqrkA)
// Forward declare root types
namespace GlobalNamespace {
struct PPibvFHPXbJhODAoeteMxucaRqrkA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA, "", "PPibvFHPXbJhODAoeteMxucaRqrkA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PPibvFHPXbJhODAoeteMxucaRqrkA
struct CORDL_TYPE PPibvFHPXbJhODAoeteMxucaRqrkA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PPibvFHPXbJhODAoeteMxucaRqrkA_Unwrapped
enum struct __PPibvFHPXbJhODAoeteMxucaRqrkA_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftStickX = static_cast<int32_t>(0x1),
__E_LeftStickY = static_cast<int32_t>(0x2),
__E_RightStickX = static_cast<int32_t>(0x3),
__E_RightStickY = static_cast<int32_t>(0x4),
__E_A = static_cast<int32_t>(0x5),
__E_B = static_cast<int32_t>(0x6),
__E_X = static_cast<int32_t>(0x7),
__E_Y = static_cast<int32_t>(0x8),
__E_Back = static_cast<int32_t>(0x9),
__E_Start = static_cast<int32_t>(0xa),
__E_Guide = static_cast<int32_t>(0xb),
__E_LeftShoulder = static_cast<int32_t>(0xc),
__E_RightShoulder = static_cast<int32_t>(0xd),
__E_LeftTrigger = static_cast<int32_t>(0xe),
__E_RightTrigger = static_cast<int32_t>(0xf),
__E_LeftStickButton = static_cast<int32_t>(0x10),
__E_RightStickButton = static_cast<int32_t>(0x11),
__E_DPadUp = static_cast<int32_t>(0x12),
__E_DPadRight = static_cast<int32_t>(0x13),
__E_DPadDown = static_cast<int32_t>(0x14),
__E_DPadLeft = static_cast<int32_t>(0x15),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PPibvFHPXbJhODAoeteMxucaRqrkA_Unwrapped () const noexcept {
return static_cast<__PPibvFHPXbJhODAoeteMxucaRqrkA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PPibvFHPXbJhODAoeteMxucaRqrkA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PPibvFHPXbJhODAoeteMxucaRqrkA(int32_t  value__) noexcept;

/// @brief Field A value: I32(5)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const A;

/// @brief Field B value: I32(6)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const B;

/// @brief Field Back value: I32(9)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const Back;

/// @brief Field DPadDown value: I32(20)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const DPadDown;

/// @brief Field DPadLeft value: I32(21)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const DPadLeft;

/// @brief Field DPadRight value: I32(19)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const DPadRight;

/// @brief Field DPadUp value: I32(18)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const DPadUp;

/// @brief Field Guide value: I32(11)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const Guide;

/// @brief Field LeftShoulder value: I32(12)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const LeftShoulder;

/// @brief Field LeftStickButton value: I32(16)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const LeftStickButton;

/// @brief Field LeftStickX value: I32(1)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const LeftStickX;

/// @brief Field LeftStickY value: I32(2)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const LeftStickY;

/// @brief Field LeftTrigger value: I32(14)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const LeftTrigger;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const None;

/// @brief Field RightShoulder value: I32(13)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const RightShoulder;

/// @brief Field RightStickButton value: I32(17)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const RightStickButton;

/// @brief Field RightStickX value: I32(3)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const RightStickX;

/// @brief Field RightStickY value: I32(4)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const RightStickY;

/// @brief Field RightTrigger value: I32(15)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const RightTrigger;

/// @brief Field Start value: I32(10)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const Start;

/// @brief Field X value: I32(7)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const X;

/// @brief Field Y value: I32(8)
static ::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6531};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PPibvFHPXbJhODAoeteMxucaRqrkA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
