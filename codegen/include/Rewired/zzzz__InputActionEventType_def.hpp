#pragma once
// IWYU pragma private; include "Rewired/InputActionEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionEventType)
// Forward declare root types
namespace Rewired {
struct InputActionEventType;
}
// Write type traits
MARK_VAL_T(::Rewired::InputActionEventType);
DEFINE_IL2CPP_CLASS(::Rewired::InputActionEventType, "Rewired", "InputActionEventType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputActionEventType
struct CORDL_TYPE InputActionEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputActionEventType_Unwrapped
enum struct __InputActionEventType_Unwrapped : int32_t {
__E_Update = static_cast<int32_t>(0x0),
__E_ButtonPressed = static_cast<int32_t>(0x1),
__E_ButtonUnpressed = static_cast<int32_t>(0x2),
__E_ButtonJustPressed = static_cast<int32_t>(0x3),
__E_ButtonJustReleased = static_cast<int32_t>(0x4),
__E_ButtonDoublePressed = static_cast<int32_t>(0x5),
__E_ButtonJustDoublePressed = static_cast<int32_t>(0x6),
__E_ButtonPressedForTime = static_cast<int32_t>(0x7),
__E_ButtonJustPressedForTime = static_cast<int32_t>(0x8),
__E_ButtonPressedForTimeJustReleased = static_cast<int32_t>(0x9),
__E_ButtonShortPressed = static_cast<int32_t>(0xa),
__E_ButtonJustShortPressed = static_cast<int32_t>(0xb),
__E_ButtonShortPressJustReleased = static_cast<int32_t>(0xc),
__E_ButtonLongPressed = static_cast<int32_t>(0xd),
__E_ButtonJustLongPressed = static_cast<int32_t>(0xe),
__E_ButtonLongPressJustReleased = static_cast<int32_t>(0xf),
__E_ButtonRepeating = static_cast<int32_t>(0x10),
__E_NegativeButtonPressed = static_cast<int32_t>(0x11),
__E_NegativeButtonUnpressed = static_cast<int32_t>(0x12),
__E_NegativeButtonJustPressed = static_cast<int32_t>(0x13),
__E_NegativeButtonJustReleased = static_cast<int32_t>(0x14),
__E_NegativeButtonDoublePressed = static_cast<int32_t>(0x15),
__E_NegativeButtonJustDoublePressed = static_cast<int32_t>(0x16),
__E_NegativeButtonPressedForTime = static_cast<int32_t>(0x17),
__E_NegativeButtonJustPressedForTime = static_cast<int32_t>(0x18),
__E_NegativeButtonPressedForTimeJustReleased = static_cast<int32_t>(0x19),
__E_NegativeButtonShortPressed = static_cast<int32_t>(0x1a),
__E_NegativeButtonJustShortPressed = static_cast<int32_t>(0x1b),
__E_NegativeButtonShortPressJustReleased = static_cast<int32_t>(0x1c),
__E_NegativeButtonLongPressed = static_cast<int32_t>(0x1d),
__E_NegativeButtonJustLongPressed = static_cast<int32_t>(0x1e),
__E_NegativeButtonLongPressJustReleased = static_cast<int32_t>(0x1f),
__E_NegativeButtonRepeating = static_cast<int32_t>(0x20),
__E_AxisActive = static_cast<int32_t>(0x21),
__E_AxisInactive = static_cast<int32_t>(0x22),
__E_AxisRawActive = static_cast<int32_t>(0x23),
__E_AxisRawInactive = static_cast<int32_t>(0x24),
__E_AxisActiveOrJustInactive = static_cast<int32_t>(0x25),
__E_AxisRawActiveOrJustInactive = static_cast<int32_t>(0x26),
__E_ButtonDoublePressJustReleased = static_cast<int32_t>(0x64),
__E_ButtonSinglePressed = static_cast<int32_t>(0x65),
__E_ButtonJustSinglePressed = static_cast<int32_t>(0x66),
__E_ButtonSinglePressJustReleased = static_cast<int32_t>(0x67),
__E_NegativeButtonDoublePressJustReleased = static_cast<int32_t>(0x96),
__E_NegativeButtonSinglePressed = static_cast<int32_t>(0x97),
__E_NegativeButtonJustSinglePressed = static_cast<int32_t>(0x98),
__E_NegativeButtonSinglePressJustReleased = static_cast<int32_t>(0x99),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionEventType_Unwrapped () const noexcept {
return static_cast<__InputActionEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputActionEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionEventType(int32_t  value__) noexcept;

/// @brief Field AxisActive value: I32(33)
static ::Rewired::InputActionEventType const AxisActive;

/// @brief Field AxisActiveOrJustInactive value: I32(37)
static ::Rewired::InputActionEventType const AxisActiveOrJustInactive;

/// @brief Field AxisInactive value: I32(34)
static ::Rewired::InputActionEventType const AxisInactive;

/// @brief Field AxisRawActive value: I32(35)
static ::Rewired::InputActionEventType const AxisRawActive;

/// @brief Field AxisRawActiveOrJustInactive value: I32(38)
static ::Rewired::InputActionEventType const AxisRawActiveOrJustInactive;

/// @brief Field AxisRawInactive value: I32(36)
static ::Rewired::InputActionEventType const AxisRawInactive;

/// @brief Field ButtonDoublePressJustReleased value: I32(100)
static ::Rewired::InputActionEventType const ButtonDoublePressJustReleased;

/// @brief Field ButtonDoublePressed value: I32(5)
static ::Rewired::InputActionEventType const ButtonDoublePressed;

/// @brief Field ButtonJustDoublePressed value: I32(6)
static ::Rewired::InputActionEventType const ButtonJustDoublePressed;

/// @brief Field ButtonJustLongPressed value: I32(14)
static ::Rewired::InputActionEventType const ButtonJustLongPressed;

/// @brief Field ButtonJustPressed value: I32(3)
static ::Rewired::InputActionEventType const ButtonJustPressed;

/// @brief Field ButtonJustPressedForTime value: I32(8)
static ::Rewired::InputActionEventType const ButtonJustPressedForTime;

/// @brief Field ButtonJustReleased value: I32(4)
static ::Rewired::InputActionEventType const ButtonJustReleased;

/// @brief Field ButtonJustShortPressed value: I32(11)
static ::Rewired::InputActionEventType const ButtonJustShortPressed;

/// @brief Field ButtonJustSinglePressed value: I32(102)
static ::Rewired::InputActionEventType const ButtonJustSinglePressed;

/// @brief Field ButtonLongPressJustReleased value: I32(15)
static ::Rewired::InputActionEventType const ButtonLongPressJustReleased;

/// @brief Field ButtonLongPressed value: I32(13)
static ::Rewired::InputActionEventType const ButtonLongPressed;

/// @brief Field ButtonPressed value: I32(1)
static ::Rewired::InputActionEventType const ButtonPressed;

/// @brief Field ButtonPressedForTime value: I32(7)
static ::Rewired::InputActionEventType const ButtonPressedForTime;

/// @brief Field ButtonPressedForTimeJustReleased value: I32(9)
static ::Rewired::InputActionEventType const ButtonPressedForTimeJustReleased;

/// @brief Field ButtonRepeating value: I32(16)
static ::Rewired::InputActionEventType const ButtonRepeating;

/// @brief Field ButtonShortPressJustReleased value: I32(12)
static ::Rewired::InputActionEventType const ButtonShortPressJustReleased;

/// @brief Field ButtonShortPressed value: I32(10)
static ::Rewired::InputActionEventType const ButtonShortPressed;

/// @brief Field ButtonSinglePressJustReleased value: I32(103)
static ::Rewired::InputActionEventType const ButtonSinglePressJustReleased;

/// @brief Field ButtonSinglePressed value: I32(101)
static ::Rewired::InputActionEventType const ButtonSinglePressed;

/// @brief Field ButtonUnpressed value: I32(2)
static ::Rewired::InputActionEventType const ButtonUnpressed;

/// @brief Field NegativeButtonDoublePressJustReleased value: I32(150)
static ::Rewired::InputActionEventType const NegativeButtonDoublePressJustReleased;

/// @brief Field NegativeButtonDoublePressed value: I32(21)
static ::Rewired::InputActionEventType const NegativeButtonDoublePressed;

/// @brief Field NegativeButtonJustDoublePressed value: I32(22)
static ::Rewired::InputActionEventType const NegativeButtonJustDoublePressed;

/// @brief Field NegativeButtonJustLongPressed value: I32(30)
static ::Rewired::InputActionEventType const NegativeButtonJustLongPressed;

/// @brief Field NegativeButtonJustPressed value: I32(19)
static ::Rewired::InputActionEventType const NegativeButtonJustPressed;

/// @brief Field NegativeButtonJustPressedForTime value: I32(24)
static ::Rewired::InputActionEventType const NegativeButtonJustPressedForTime;

/// @brief Field NegativeButtonJustReleased value: I32(20)
static ::Rewired::InputActionEventType const NegativeButtonJustReleased;

/// @brief Field NegativeButtonJustShortPressed value: I32(27)
static ::Rewired::InputActionEventType const NegativeButtonJustShortPressed;

/// @brief Field NegativeButtonJustSinglePressed value: I32(152)
static ::Rewired::InputActionEventType const NegativeButtonJustSinglePressed;

/// @brief Field NegativeButtonLongPressJustReleased value: I32(31)
static ::Rewired::InputActionEventType const NegativeButtonLongPressJustReleased;

/// @brief Field NegativeButtonLongPressed value: I32(29)
static ::Rewired::InputActionEventType const NegativeButtonLongPressed;

/// @brief Field NegativeButtonPressed value: I32(17)
static ::Rewired::InputActionEventType const NegativeButtonPressed;

/// @brief Field NegativeButtonPressedForTime value: I32(23)
static ::Rewired::InputActionEventType const NegativeButtonPressedForTime;

/// @brief Field NegativeButtonPressedForTimeJustReleased value: I32(25)
static ::Rewired::InputActionEventType const NegativeButtonPressedForTimeJustReleased;

/// @brief Field NegativeButtonRepeating value: I32(32)
static ::Rewired::InputActionEventType const NegativeButtonRepeating;

/// @brief Field NegativeButtonShortPressJustReleased value: I32(28)
static ::Rewired::InputActionEventType const NegativeButtonShortPressJustReleased;

/// @brief Field NegativeButtonShortPressed value: I32(26)
static ::Rewired::InputActionEventType const NegativeButtonShortPressed;

/// @brief Field NegativeButtonSinglePressJustReleased value: I32(153)
static ::Rewired::InputActionEventType const NegativeButtonSinglePressJustReleased;

/// @brief Field NegativeButtonSinglePressed value: I32(151)
static ::Rewired::InputActionEventType const NegativeButtonSinglePressed;

/// @brief Field NegativeButtonUnpressed value: I32(18)
static ::Rewired::InputActionEventType const NegativeButtonUnpressed;

/// @brief Field Update value: I32(0)
static ::Rewired::InputActionEventType const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputActionEventType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputActionEventType) == 0x4, "Size mismatch!");

} // namespace end def Rewired
