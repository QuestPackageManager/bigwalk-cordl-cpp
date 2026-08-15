#pragma once
// IWYU pragma private; include "Rewired/InputActionEventType.hpp"
#include "Rewired/zzzz__InputActionEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputActionEventType::InputActionEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputActionEventType::InputActionEventType()   {
}
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::Update{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonPressed{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonUnpressed{static_cast<int32_t>(0x2)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustPressed{static_cast<int32_t>(0x3)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustReleased{static_cast<int32_t>(0x4)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonDoublePressed{static_cast<int32_t>(0x5)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustDoublePressed{static_cast<int32_t>(0x6)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonPressedForTime{static_cast<int32_t>(0x7)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustPressedForTime{static_cast<int32_t>(0x8)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonPressedForTimeJustReleased{static_cast<int32_t>(0x9)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonShortPressed{static_cast<int32_t>(0xa)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustShortPressed{static_cast<int32_t>(0xb)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonShortPressJustReleased{static_cast<int32_t>(0xc)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonLongPressed{static_cast<int32_t>(0xd)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustLongPressed{static_cast<int32_t>(0xe)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonLongPressJustReleased{static_cast<int32_t>(0xf)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonRepeating{static_cast<int32_t>(0x10)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonPressed{static_cast<int32_t>(0x11)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonUnpressed{static_cast<int32_t>(0x12)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustPressed{static_cast<int32_t>(0x13)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustReleased{static_cast<int32_t>(0x14)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonDoublePressed{static_cast<int32_t>(0x15)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustDoublePressed{static_cast<int32_t>(0x16)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonPressedForTime{static_cast<int32_t>(0x17)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustPressedForTime{static_cast<int32_t>(0x18)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonPressedForTimeJustReleased{static_cast<int32_t>(0x19)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonShortPressed{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustShortPressed{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonShortPressJustReleased{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonLongPressed{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustLongPressed{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonLongPressJustReleased{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonRepeating{static_cast<int32_t>(0x20)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisActive{static_cast<int32_t>(0x21)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisInactive{static_cast<int32_t>(0x22)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisRawActive{static_cast<int32_t>(0x23)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisRawInactive{static_cast<int32_t>(0x24)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisActiveOrJustInactive{static_cast<int32_t>(0x25)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::AxisRawActiveOrJustInactive{static_cast<int32_t>(0x26)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonDoublePressJustReleased{static_cast<int32_t>(0x64)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonSinglePressed{static_cast<int32_t>(0x65)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonJustSinglePressed{static_cast<int32_t>(0x66)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::ButtonSinglePressJustReleased{static_cast<int32_t>(0x67)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonDoublePressJustReleased{static_cast<int32_t>(0x96)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonSinglePressed{static_cast<int32_t>(0x97)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonJustSinglePressed{static_cast<int32_t>(0x98)};
constexpr ::Rewired::InputActionEventType  Rewired::InputActionEventType::NegativeButtonSinglePressJustReleased{static_cast<int32_t>(0x99)};
