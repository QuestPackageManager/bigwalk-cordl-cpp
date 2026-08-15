#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/KeyCombination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyCombination)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct KeyCombination;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::KeyCombination);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::KeyCombination, "Epic.OnlineServices.UI", "KeyCombination");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.KeyCombination
struct CORDL_TYPE KeyCombination {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyCombination_Unwrapped
enum struct __KeyCombination_Unwrapped : int32_t {
__E_ModifierShift = static_cast<int32_t>(0x10),
__E_KeyTypeMask = static_cast<int32_t>(0xffff),
__E_ModifierMask = static_cast<int32_t>(0xffff0000),
__E_Shift = static_cast<int32_t>(0x10000),
__E_Control = static_cast<int32_t>(0x20000),
__E_Alt = static_cast<int32_t>(0x40000),
__E_Meta = static_cast<int32_t>(0x80000),
__E_ValidModifierMask = static_cast<int32_t>(0xf0000),
__E_None = static_cast<int32_t>(0x0),
__E_Space = static_cast<int32_t>(0x1),
__E_Backspace = static_cast<int32_t>(0x2),
__E_Tab = static_cast<int32_t>(0x3),
__E_Escape = static_cast<int32_t>(0x4),
__E_PageUp = static_cast<int32_t>(0x5),
__E_PageDown = static_cast<int32_t>(0x6),
__E_End = static_cast<int32_t>(0x7),
__E_Home = static_cast<int32_t>(0x8),
__E_Insert = static_cast<int32_t>(0x9),
__E_Delete = static_cast<int32_t>(0xa),
__E_Left = static_cast<int32_t>(0xb),
__E_Up = static_cast<int32_t>(0xc),
__E_Right = static_cast<int32_t>(0xd),
__E_Down = static_cast<int32_t>(0xe),
__E_Key0 = static_cast<int32_t>(0xf),
__E_Key1 = static_cast<int32_t>(0x10),
__E_Key2 = static_cast<int32_t>(0x11),
__E_Key3 = static_cast<int32_t>(0x12),
__E_Key4 = static_cast<int32_t>(0x13),
__E_Key5 = static_cast<int32_t>(0x14),
__E_Key6 = static_cast<int32_t>(0x15),
__E_Key7 = static_cast<int32_t>(0x16),
__E_Key8 = static_cast<int32_t>(0x17),
__E_Key9 = static_cast<int32_t>(0x18),
__E_KeyA = static_cast<int32_t>(0x19),
__E_KeyB = static_cast<int32_t>(0x1a),
__E_KeyC = static_cast<int32_t>(0x1b),
__E_KeyD = static_cast<int32_t>(0x1c),
__E_KeyE = static_cast<int32_t>(0x1d),
__E_KeyF = static_cast<int32_t>(0x1e),
__E_KeyG = static_cast<int32_t>(0x1f),
__E_KeyH = static_cast<int32_t>(0x20),
__E_KeyI = static_cast<int32_t>(0x21),
__E_KeyJ = static_cast<int32_t>(0x22),
__E_KeyK = static_cast<int32_t>(0x23),
__E_KeyL = static_cast<int32_t>(0x24),
__E_KeyM = static_cast<int32_t>(0x25),
__E_KeyN = static_cast<int32_t>(0x26),
__E_KeyO = static_cast<int32_t>(0x27),
__E_KeyP = static_cast<int32_t>(0x28),
__E_KeyQ = static_cast<int32_t>(0x29),
__E_KeyR = static_cast<int32_t>(0x2a),
__E_KeyS = static_cast<int32_t>(0x2b),
__E_KeyT = static_cast<int32_t>(0x2c),
__E_KeyU = static_cast<int32_t>(0x2d),
__E_KeyV = static_cast<int32_t>(0x2e),
__E_KeyW = static_cast<int32_t>(0x2f),
__E_KeyX = static_cast<int32_t>(0x30),
__E_KeyY = static_cast<int32_t>(0x31),
__E_KeyZ = static_cast<int32_t>(0x32),
__E_Numpad0 = static_cast<int32_t>(0x33),
__E_Numpad1 = static_cast<int32_t>(0x34),
__E_Numpad2 = static_cast<int32_t>(0x35),
__E_Numpad3 = static_cast<int32_t>(0x36),
__E_Numpad4 = static_cast<int32_t>(0x37),
__E_Numpad5 = static_cast<int32_t>(0x38),
__E_Numpad6 = static_cast<int32_t>(0x39),
__E_Numpad7 = static_cast<int32_t>(0x3a),
__E_Numpad8 = static_cast<int32_t>(0x3b),
__E_Numpad9 = static_cast<int32_t>(0x3c),
__E_NumpadAsterisk = static_cast<int32_t>(0x3d),
__E_NumpadPlus = static_cast<int32_t>(0x3e),
__E_NumpadMinus = static_cast<int32_t>(0x3f),
__E_NumpadPeriod = static_cast<int32_t>(0x40),
__E_NumpadDivide = static_cast<int32_t>(0x41),
__E_F1 = static_cast<int32_t>(0x42),
__E_F2 = static_cast<int32_t>(0x43),
__E_F3 = static_cast<int32_t>(0x44),
__E_F4 = static_cast<int32_t>(0x45),
__E_F5 = static_cast<int32_t>(0x46),
__E_F6 = static_cast<int32_t>(0x47),
__E_F7 = static_cast<int32_t>(0x48),
__E_F8 = static_cast<int32_t>(0x49),
__E_F9 = static_cast<int32_t>(0x4a),
__E_F10 = static_cast<int32_t>(0x4b),
__E_F11 = static_cast<int32_t>(0x4c),
__E_F12 = static_cast<int32_t>(0x4d),
__E_F13 = static_cast<int32_t>(0x4e),
__E_F14 = static_cast<int32_t>(0x4f),
__E_F15 = static_cast<int32_t>(0x50),
__E_F16 = static_cast<int32_t>(0x51),
__E_F17 = static_cast<int32_t>(0x52),
__E_F18 = static_cast<int32_t>(0x53),
__E_F19 = static_cast<int32_t>(0x54),
__E_F20 = static_cast<int32_t>(0x55),
__E_F21 = static_cast<int32_t>(0x56),
__E_F22 = static_cast<int32_t>(0x57),
__E_F23 = static_cast<int32_t>(0x58),
__E_F24 = static_cast<int32_t>(0x59),
__E_OemPlus = static_cast<int32_t>(0x5a),
__E_OemComma = static_cast<int32_t>(0x5b),
__E_OemMinus = static_cast<int32_t>(0x5c),
__E_OemPeriod = static_cast<int32_t>(0x5d),
__E_Oem1 = static_cast<int32_t>(0x5e),
__E_Oem2 = static_cast<int32_t>(0x5f),
__E_Oem3 = static_cast<int32_t>(0x60),
__E_Oem4 = static_cast<int32_t>(0x61),
__E_Oem5 = static_cast<int32_t>(0x62),
__E_Oem6 = static_cast<int32_t>(0x63),
__E_Oem7 = static_cast<int32_t>(0x64),
__E_Oem8 = static_cast<int32_t>(0x65),
__E_MaxKeyType = static_cast<int32_t>(0x66),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyCombination_Unwrapped () const noexcept {
return static_cast<__KeyCombination_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyCombination() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyCombination(int32_t  value__) noexcept;

/// @brief Field Alt value: I32(262144)
static ::Epic::OnlineServices::UI::KeyCombination const Alt;

/// @brief Field Backspace value: I32(2)
static ::Epic::OnlineServices::UI::KeyCombination const Backspace;

/// @brief Field Control value: I32(131072)
static ::Epic::OnlineServices::UI::KeyCombination const Control;

/// @brief Field Delete value: I32(10)
static ::Epic::OnlineServices::UI::KeyCombination const Delete;

/// @brief Field Down value: I32(14)
static ::Epic::OnlineServices::UI::KeyCombination const Down;

/// @brief Field End value: I32(7)
static ::Epic::OnlineServices::UI::KeyCombination const End;

/// @brief Field Escape value: I32(4)
static ::Epic::OnlineServices::UI::KeyCombination const Escape;

/// @brief Field F1 value: I32(66)
static ::Epic::OnlineServices::UI::KeyCombination const F1;

/// @brief Field F10 value: I32(75)
static ::Epic::OnlineServices::UI::KeyCombination const F10;

/// @brief Field F11 value: I32(76)
static ::Epic::OnlineServices::UI::KeyCombination const F11;

/// @brief Field F12 value: I32(77)
static ::Epic::OnlineServices::UI::KeyCombination const F12;

/// @brief Field F13 value: I32(78)
static ::Epic::OnlineServices::UI::KeyCombination const F13;

/// @brief Field F14 value: I32(79)
static ::Epic::OnlineServices::UI::KeyCombination const F14;

/// @brief Field F15 value: I32(80)
static ::Epic::OnlineServices::UI::KeyCombination const F15;

/// @brief Field F16 value: I32(81)
static ::Epic::OnlineServices::UI::KeyCombination const F16;

/// @brief Field F17 value: I32(82)
static ::Epic::OnlineServices::UI::KeyCombination const F17;

/// @brief Field F18 value: I32(83)
static ::Epic::OnlineServices::UI::KeyCombination const F18;

/// @brief Field F19 value: I32(84)
static ::Epic::OnlineServices::UI::KeyCombination const F19;

/// @brief Field F2 value: I32(67)
static ::Epic::OnlineServices::UI::KeyCombination const F2;

/// @brief Field F20 value: I32(85)
static ::Epic::OnlineServices::UI::KeyCombination const F20;

/// @brief Field F21 value: I32(86)
static ::Epic::OnlineServices::UI::KeyCombination const F21;

/// @brief Field F22 value: I32(87)
static ::Epic::OnlineServices::UI::KeyCombination const F22;

/// @brief Field F23 value: I32(88)
static ::Epic::OnlineServices::UI::KeyCombination const F23;

/// @brief Field F24 value: I32(89)
static ::Epic::OnlineServices::UI::KeyCombination const F24;

/// @brief Field F3 value: I32(68)
static ::Epic::OnlineServices::UI::KeyCombination const F3;

/// @brief Field F4 value: I32(69)
static ::Epic::OnlineServices::UI::KeyCombination const F4;

/// @brief Field F5 value: I32(70)
static ::Epic::OnlineServices::UI::KeyCombination const F5;

/// @brief Field F6 value: I32(71)
static ::Epic::OnlineServices::UI::KeyCombination const F6;

/// @brief Field F7 value: I32(72)
static ::Epic::OnlineServices::UI::KeyCombination const F7;

/// @brief Field F8 value: I32(73)
static ::Epic::OnlineServices::UI::KeyCombination const F8;

/// @brief Field F9 value: I32(74)
static ::Epic::OnlineServices::UI::KeyCombination const F9;

/// @brief Field Home value: I32(8)
static ::Epic::OnlineServices::UI::KeyCombination const Home;

/// @brief Field Insert value: I32(9)
static ::Epic::OnlineServices::UI::KeyCombination const Insert;

/// @brief Field Key0 value: I32(15)
static ::Epic::OnlineServices::UI::KeyCombination const Key0;

/// @brief Field Key1 value: I32(16)
static ::Epic::OnlineServices::UI::KeyCombination const Key1;

/// @brief Field Key2 value: I32(17)
static ::Epic::OnlineServices::UI::KeyCombination const Key2;

/// @brief Field Key3 value: I32(18)
static ::Epic::OnlineServices::UI::KeyCombination const Key3;

/// @brief Field Key4 value: I32(19)
static ::Epic::OnlineServices::UI::KeyCombination const Key4;

/// @brief Field Key5 value: I32(20)
static ::Epic::OnlineServices::UI::KeyCombination const Key5;

/// @brief Field Key6 value: I32(21)
static ::Epic::OnlineServices::UI::KeyCombination const Key6;

/// @brief Field Key7 value: I32(22)
static ::Epic::OnlineServices::UI::KeyCombination const Key7;

/// @brief Field Key8 value: I32(23)
static ::Epic::OnlineServices::UI::KeyCombination const Key8;

/// @brief Field Key9 value: I32(24)
static ::Epic::OnlineServices::UI::KeyCombination const Key9;

/// @brief Field KeyA value: I32(25)
static ::Epic::OnlineServices::UI::KeyCombination const KeyA;

/// @brief Field KeyB value: I32(26)
static ::Epic::OnlineServices::UI::KeyCombination const KeyB;

/// @brief Field KeyC value: I32(27)
static ::Epic::OnlineServices::UI::KeyCombination const KeyC;

/// @brief Field KeyD value: I32(28)
static ::Epic::OnlineServices::UI::KeyCombination const KeyD;

/// @brief Field KeyE value: I32(29)
static ::Epic::OnlineServices::UI::KeyCombination const KeyE;

/// @brief Field KeyF value: I32(30)
static ::Epic::OnlineServices::UI::KeyCombination const KeyF;

/// @brief Field KeyG value: I32(31)
static ::Epic::OnlineServices::UI::KeyCombination const KeyG;

/// @brief Field KeyH value: I32(32)
static ::Epic::OnlineServices::UI::KeyCombination const KeyH;

/// @brief Field KeyI value: I32(33)
static ::Epic::OnlineServices::UI::KeyCombination const KeyI;

/// @brief Field KeyJ value: I32(34)
static ::Epic::OnlineServices::UI::KeyCombination const KeyJ;

/// @brief Field KeyK value: I32(35)
static ::Epic::OnlineServices::UI::KeyCombination const KeyK;

/// @brief Field KeyL value: I32(36)
static ::Epic::OnlineServices::UI::KeyCombination const KeyL;

/// @brief Field KeyM value: I32(37)
static ::Epic::OnlineServices::UI::KeyCombination const KeyM;

/// @brief Field KeyN value: I32(38)
static ::Epic::OnlineServices::UI::KeyCombination const KeyN;

/// @brief Field KeyO value: I32(39)
static ::Epic::OnlineServices::UI::KeyCombination const KeyO;

/// @brief Field KeyP value: I32(40)
static ::Epic::OnlineServices::UI::KeyCombination const KeyP;

/// @brief Field KeyQ value: I32(41)
static ::Epic::OnlineServices::UI::KeyCombination const KeyQ;

/// @brief Field KeyR value: I32(42)
static ::Epic::OnlineServices::UI::KeyCombination const KeyR;

/// @brief Field KeyS value: I32(43)
static ::Epic::OnlineServices::UI::KeyCombination const KeyS;

/// @brief Field KeyT value: I32(44)
static ::Epic::OnlineServices::UI::KeyCombination const KeyT;

/// @brief Field KeyTypeMask value: I32(65535)
static ::Epic::OnlineServices::UI::KeyCombination const KeyTypeMask;

/// @brief Field KeyU value: I32(45)
static ::Epic::OnlineServices::UI::KeyCombination const KeyU;

/// @brief Field KeyV value: I32(46)
static ::Epic::OnlineServices::UI::KeyCombination const KeyV;

/// @brief Field KeyW value: I32(47)
static ::Epic::OnlineServices::UI::KeyCombination const KeyW;

/// @brief Field KeyX value: I32(48)
static ::Epic::OnlineServices::UI::KeyCombination const KeyX;

/// @brief Field KeyY value: I32(49)
static ::Epic::OnlineServices::UI::KeyCombination const KeyY;

/// @brief Field KeyZ value: I32(50)
static ::Epic::OnlineServices::UI::KeyCombination const KeyZ;

/// @brief Field Left value: I32(11)
static ::Epic::OnlineServices::UI::KeyCombination const Left;

/// @brief Field MaxKeyType value: I32(102)
static ::Epic::OnlineServices::UI::KeyCombination const MaxKeyType;

/// @brief Field Meta value: I32(524288)
static ::Epic::OnlineServices::UI::KeyCombination const Meta;

/// @brief Field ModifierMask value: I32(-65536)
static ::Epic::OnlineServices::UI::KeyCombination const ModifierMask;

/// @brief Field ModifierShift value: I32(16)
static ::Epic::OnlineServices::UI::KeyCombination const ModifierShift;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::UI::KeyCombination const None;

/// @brief Field Numpad0 value: I32(51)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad0;

/// @brief Field Numpad1 value: I32(52)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad1;

/// @brief Field Numpad2 value: I32(53)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad2;

/// @brief Field Numpad3 value: I32(54)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad3;

/// @brief Field Numpad4 value: I32(55)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad4;

/// @brief Field Numpad5 value: I32(56)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad5;

/// @brief Field Numpad6 value: I32(57)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad6;

/// @brief Field Numpad7 value: I32(58)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad7;

/// @brief Field Numpad8 value: I32(59)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad8;

/// @brief Field Numpad9 value: I32(60)
static ::Epic::OnlineServices::UI::KeyCombination const Numpad9;

/// @brief Field NumpadAsterisk value: I32(61)
static ::Epic::OnlineServices::UI::KeyCombination const NumpadAsterisk;

/// @brief Field NumpadDivide value: I32(65)
static ::Epic::OnlineServices::UI::KeyCombination const NumpadDivide;

/// @brief Field NumpadMinus value: I32(63)
static ::Epic::OnlineServices::UI::KeyCombination const NumpadMinus;

/// @brief Field NumpadPeriod value: I32(64)
static ::Epic::OnlineServices::UI::KeyCombination const NumpadPeriod;

/// @brief Field NumpadPlus value: I32(62)
static ::Epic::OnlineServices::UI::KeyCombination const NumpadPlus;

/// @brief Field Oem1 value: I32(94)
static ::Epic::OnlineServices::UI::KeyCombination const Oem1;

/// @brief Field Oem2 value: I32(95)
static ::Epic::OnlineServices::UI::KeyCombination const Oem2;

/// @brief Field Oem3 value: I32(96)
static ::Epic::OnlineServices::UI::KeyCombination const Oem3;

/// @brief Field Oem4 value: I32(97)
static ::Epic::OnlineServices::UI::KeyCombination const Oem4;

/// @brief Field Oem5 value: I32(98)
static ::Epic::OnlineServices::UI::KeyCombination const Oem5;

/// @brief Field Oem6 value: I32(99)
static ::Epic::OnlineServices::UI::KeyCombination const Oem6;

/// @brief Field Oem7 value: I32(100)
static ::Epic::OnlineServices::UI::KeyCombination const Oem7;

/// @brief Field Oem8 value: I32(101)
static ::Epic::OnlineServices::UI::KeyCombination const Oem8;

/// @brief Field OemComma value: I32(91)
static ::Epic::OnlineServices::UI::KeyCombination const OemComma;

/// @brief Field OemMinus value: I32(92)
static ::Epic::OnlineServices::UI::KeyCombination const OemMinus;

/// @brief Field OemPeriod value: I32(93)
static ::Epic::OnlineServices::UI::KeyCombination const OemPeriod;

/// @brief Field OemPlus value: I32(90)
static ::Epic::OnlineServices::UI::KeyCombination const OemPlus;

/// @brief Field PageDown value: I32(6)
static ::Epic::OnlineServices::UI::KeyCombination const PageDown;

/// @brief Field PageUp value: I32(5)
static ::Epic::OnlineServices::UI::KeyCombination const PageUp;

/// @brief Field Right value: I32(13)
static ::Epic::OnlineServices::UI::KeyCombination const Right;

/// @brief Field Shift value: I32(65536)
static ::Epic::OnlineServices::UI::KeyCombination const Shift;

/// @brief Field Space value: I32(1)
static ::Epic::OnlineServices::UI::KeyCombination const Space;

/// @brief Field Tab value: I32(3)
static ::Epic::OnlineServices::UI::KeyCombination const Tab;

/// @brief Field Up value: I32(12)
static ::Epic::OnlineServices::UI::KeyCombination const Up;

/// @brief Field ValidModifierMask value: I32(983040)
static ::Epic::OnlineServices::UI::KeyCombination const ValidModifierMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::KeyCombination, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::KeyCombination) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
