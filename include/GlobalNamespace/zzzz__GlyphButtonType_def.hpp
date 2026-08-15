#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct GlyphButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlyphButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlyphButtonType, "", "GlyphButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlyphButtonType
struct CORDL_TYPE GlyphButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphButtonType_Unwrapped
enum struct __GlyphButtonType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_StickLeft = static_cast<int32_t>(0x1),
__E_StickLeftX = static_cast<int32_t>(0x2),
__E_StickLeftY = static_cast<int32_t>(0x3),
__E_StickRight = static_cast<int32_t>(0x4),
__E_StickRightX = static_cast<int32_t>(0x5),
__E_StickRightY = static_cast<int32_t>(0x6),
__E_FaceLeft = static_cast<int32_t>(0x7),
__E_FaceRight = static_cast<int32_t>(0x8),
__E_FaceUp = static_cast<int32_t>(0x9),
__E_FaceDown = static_cast<int32_t>(0xa),
__E_DpadLeft = static_cast<int32_t>(0xb),
__E_DpadRight = static_cast<int32_t>(0xc),
__E_DpadUp = static_cast<int32_t>(0xd),
__E_DpadDown = static_cast<int32_t>(0xe),
__E_TriggerLeft = static_cast<int32_t>(0xf),
__E_TriggerRight = static_cast<int32_t>(0x10),
__E_ShoulderLeft = static_cast<int32_t>(0x11),
__E_ShoulderRight = static_cast<int32_t>(0x12),
__E_Start = static_cast<int32_t>(0x13),
__E_Select = static_cast<int32_t>(0x14),
__E_StickLeftYPos = static_cast<int32_t>(0x15),
__E_StickLeftYNeg = static_cast<int32_t>(0x16),
__E_StickLeftXNeg = static_cast<int32_t>(0x17),
__E_StickLeftXPos = static_cast<int32_t>(0x18),
__E_StickRightYPos = static_cast<int32_t>(0x19),
__E_StickRightYNeg = static_cast<int32_t>(0x1a),
__E_StickRightXNeg = static_cast<int32_t>(0x1b),
__E_StickRightXPos = static_cast<int32_t>(0x1c),
__E_StickButtonLeft = static_cast<int32_t>(0x1d),
__E_StickButtonRight = static_cast<int32_t>(0x1e),
__E_L4 = static_cast<int32_t>(0x1f),
__E_L5 = static_cast<int32_t>(0x20),
__E_R4 = static_cast<int32_t>(0x21),
__E_R5 = static_cast<int32_t>(0x22),
__E_Touchpad = static_cast<int32_t>(0x23),
__E_PsButton = static_cast<int32_t>(0x24),
__E_NMouseR = static_cast<int32_t>(0x25),
__E_NMouseL = static_cast<int32_t>(0x26),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphButtonType_Unwrapped () const noexcept {
return static_cast<__GlyphButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlyphButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphButtonType(int32_t  value__) noexcept;

/// @brief Field DpadDown value: I32(14)
static ::GlobalNamespace::GlyphButtonType const DpadDown;

/// @brief Field DpadLeft value: I32(11)
static ::GlobalNamespace::GlyphButtonType const DpadLeft;

/// @brief Field DpadRight value: I32(12)
static ::GlobalNamespace::GlyphButtonType const DpadRight;

/// @brief Field DpadUp value: I32(13)
static ::GlobalNamespace::GlyphButtonType const DpadUp;

/// @brief Field FaceDown value: I32(10)
static ::GlobalNamespace::GlyphButtonType const FaceDown;

/// @brief Field FaceLeft value: I32(7)
static ::GlobalNamespace::GlyphButtonType const FaceLeft;

/// @brief Field FaceRight value: I32(8)
static ::GlobalNamespace::GlyphButtonType const FaceRight;

/// @brief Field FaceUp value: I32(9)
static ::GlobalNamespace::GlyphButtonType const FaceUp;

/// @brief Field L4 value: I32(31)
static ::GlobalNamespace::GlyphButtonType const L4;

/// @brief Field L5 value: I32(32)
static ::GlobalNamespace::GlyphButtonType const L5;

/// @brief Field NMouseL value: I32(38)
static ::GlobalNamespace::GlyphButtonType const NMouseL;

/// @brief Field NMouseR value: I32(37)
static ::GlobalNamespace::GlyphButtonType const NMouseR;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GlyphButtonType const None;

/// @brief Field PsButton value: I32(36)
static ::GlobalNamespace::GlyphButtonType const PsButton;

/// @brief Field R4 value: I32(33)
static ::GlobalNamespace::GlyphButtonType const R4;

/// @brief Field R5 value: I32(34)
static ::GlobalNamespace::GlyphButtonType const R5;

/// @brief Field Select value: I32(20)
static ::GlobalNamespace::GlyphButtonType const Select;

/// @brief Field ShoulderLeft value: I32(17)
static ::GlobalNamespace::GlyphButtonType const ShoulderLeft;

/// @brief Field ShoulderRight value: I32(18)
static ::GlobalNamespace::GlyphButtonType const ShoulderRight;

/// @brief Field Start value: I32(19)
static ::GlobalNamespace::GlyphButtonType const Start;

/// @brief Field StickButtonLeft value: I32(29)
static ::GlobalNamespace::GlyphButtonType const StickButtonLeft;

/// @brief Field StickButtonRight value: I32(30)
static ::GlobalNamespace::GlyphButtonType const StickButtonRight;

/// @brief Field StickLeft value: I32(1)
static ::GlobalNamespace::GlyphButtonType const StickLeft;

/// @brief Field StickLeftX value: I32(2)
static ::GlobalNamespace::GlyphButtonType const StickLeftX;

/// @brief Field StickLeftXNeg value: I32(23)
static ::GlobalNamespace::GlyphButtonType const StickLeftXNeg;

/// @brief Field StickLeftXPos value: I32(24)
static ::GlobalNamespace::GlyphButtonType const StickLeftXPos;

/// @brief Field StickLeftY value: I32(3)
static ::GlobalNamespace::GlyphButtonType const StickLeftY;

/// @brief Field StickLeftYNeg value: I32(22)
static ::GlobalNamespace::GlyphButtonType const StickLeftYNeg;

/// @brief Field StickLeftYPos value: I32(21)
static ::GlobalNamespace::GlyphButtonType const StickLeftYPos;

/// @brief Field StickRight value: I32(4)
static ::GlobalNamespace::GlyphButtonType const StickRight;

/// @brief Field StickRightX value: I32(5)
static ::GlobalNamespace::GlyphButtonType const StickRightX;

/// @brief Field StickRightXNeg value: I32(27)
static ::GlobalNamespace::GlyphButtonType const StickRightXNeg;

/// @brief Field StickRightXPos value: I32(28)
static ::GlobalNamespace::GlyphButtonType const StickRightXPos;

/// @brief Field StickRightY value: I32(6)
static ::GlobalNamespace::GlyphButtonType const StickRightY;

/// @brief Field StickRightYNeg value: I32(26)
static ::GlobalNamespace::GlyphButtonType const StickRightYNeg;

/// @brief Field StickRightYPos value: I32(25)
static ::GlobalNamespace::GlyphButtonType const StickRightYPos;

/// @brief Field Touchpad value: I32(35)
static ::GlobalNamespace::GlyphButtonType const Touchpad;

/// @brief Field TriggerLeft value: I32(15)
static ::GlobalNamespace::GlyphButtonType const TriggerLeft;

/// @brief Field TriggerRight value: I32(16)
static ::GlobalNamespace::GlyphButtonType const TriggerRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlyphButtonType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlyphButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
