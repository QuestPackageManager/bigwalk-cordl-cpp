#pragma once
// IWYU pragma private; include "Rewired/KeyboardKeyCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardKeyCode)
// Forward declare root types
namespace Rewired {
struct KeyboardKeyCode;
}
// Write type traits
MARK_VAL_T(::Rewired::KeyboardKeyCode);
DEFINE_IL2CPP_CLASS(::Rewired::KeyboardKeyCode, "Rewired", "KeyboardKeyCode");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.KeyboardKeyCode
struct CORDL_TYPE KeyboardKeyCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyboardKeyCode_Unwrapped
enum struct __KeyboardKeyCode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_A = static_cast<int32_t>(0x61),
__E_B = static_cast<int32_t>(0x62),
__E_C = static_cast<int32_t>(0x63),
__E_D = static_cast<int32_t>(0x64),
__E_E = static_cast<int32_t>(0x65),
__E_F = static_cast<int32_t>(0x66),
__E_G = static_cast<int32_t>(0x67),
__E_H = static_cast<int32_t>(0x68),
__E_I = static_cast<int32_t>(0x69),
__E_J = static_cast<int32_t>(0x6a),
__E_K = static_cast<int32_t>(0x6b),
__E_L = static_cast<int32_t>(0x6c),
__E_M = static_cast<int32_t>(0x6d),
__E_N = static_cast<int32_t>(0x6e),
__E_O = static_cast<int32_t>(0x6f),
__E_P = static_cast<int32_t>(0x70),
__E_Q = static_cast<int32_t>(0x71),
__E_R = static_cast<int32_t>(0x72),
__E_S = static_cast<int32_t>(0x73),
__E_T = static_cast<int32_t>(0x74),
__E_U = static_cast<int32_t>(0x75),
__E_V = static_cast<int32_t>(0x76),
__E_W = static_cast<int32_t>(0x77),
__E_X = static_cast<int32_t>(0x78),
__E_Y = static_cast<int32_t>(0x79),
__E_Z = static_cast<int32_t>(0x7a),
__E_Alpha0 = static_cast<int32_t>(0x30),
__E_Alpha1 = static_cast<int32_t>(0x31),
__E_Alpha2 = static_cast<int32_t>(0x32),
__E_Alpha3 = static_cast<int32_t>(0x33),
__E_Alpha4 = static_cast<int32_t>(0x34),
__E_Alpha5 = static_cast<int32_t>(0x35),
__E_Alpha6 = static_cast<int32_t>(0x36),
__E_Alpha7 = static_cast<int32_t>(0x37),
__E_Alpha8 = static_cast<int32_t>(0x38),
__E_Alpha9 = static_cast<int32_t>(0x39),
__E_Keypad0 = static_cast<int32_t>(0x100),
__E_Keypad1 = static_cast<int32_t>(0x101),
__E_Keypad2 = static_cast<int32_t>(0x102),
__E_Keypad3 = static_cast<int32_t>(0x103),
__E_Keypad4 = static_cast<int32_t>(0x104),
__E_Keypad5 = static_cast<int32_t>(0x105),
__E_Keypad6 = static_cast<int32_t>(0x106),
__E_Keypad7 = static_cast<int32_t>(0x107),
__E_Keypad8 = static_cast<int32_t>(0x108),
__E_Keypad9 = static_cast<int32_t>(0x109),
__E_KeypadPeriod = static_cast<int32_t>(0x10a),
__E_KeypadDivide = static_cast<int32_t>(0x10b),
__E_KeypadMultiply = static_cast<int32_t>(0x10c),
__E_KeypadMinus = static_cast<int32_t>(0x10d),
__E_KeypadPlus = static_cast<int32_t>(0x10e),
__E_KeypadEnter = static_cast<int32_t>(0x10f),
__E_KeypadEquals = static_cast<int32_t>(0x110),
__E_Backspace = static_cast<int32_t>(0x8),
__E_Tab = static_cast<int32_t>(0x9),
__E_Clear = static_cast<int32_t>(0xc),
__E_Return = static_cast<int32_t>(0xd),
__E_Pause = static_cast<int32_t>(0x13),
__E_Escape = static_cast<int32_t>(0x1b),
__E_Space = static_cast<int32_t>(0x20),
__E_Exclaim = static_cast<int32_t>(0x21),
__E_DoubleQuote = static_cast<int32_t>(0x22),
__E_Hash = static_cast<int32_t>(0x23),
__E_Dollar = static_cast<int32_t>(0x24),
__E_Ampersand = static_cast<int32_t>(0x26),
__E_Quote = static_cast<int32_t>(0x27),
__E_LeftParen = static_cast<int32_t>(0x28),
__E_RightParen = static_cast<int32_t>(0x29),
__E_Asterisk = static_cast<int32_t>(0x2a),
__E_Plus = static_cast<int32_t>(0x2b),
__E_Comma = static_cast<int32_t>(0x2c),
__E_Minus = static_cast<int32_t>(0x2d),
__E_Period = static_cast<int32_t>(0x2e),
__E_Slash = static_cast<int32_t>(0x2f),
__E_Colon = static_cast<int32_t>(0x3a),
__E_Semicolon = static_cast<int32_t>(0x3b),
__E_Less = static_cast<int32_t>(0x3c),
__E_Equals = static_cast<int32_t>(0x3d),
__E_Greater = static_cast<int32_t>(0x3e),
__E_Question = static_cast<int32_t>(0x3f),
__E_At = static_cast<int32_t>(0x40),
__E_LeftBracket = static_cast<int32_t>(0x5b),
__E_Backslash = static_cast<int32_t>(0x5c),
__E_RightBracket = static_cast<int32_t>(0x5d),
__E_Caret = static_cast<int32_t>(0x5e),
__E_Underscore = static_cast<int32_t>(0x5f),
__E_BackQuote = static_cast<int32_t>(0x60),
__E_Delete = static_cast<int32_t>(0x7f),
__E_UpArrow = static_cast<int32_t>(0x111),
__E_DownArrow = static_cast<int32_t>(0x112),
__E_RightArrow = static_cast<int32_t>(0x113),
__E_LeftArrow = static_cast<int32_t>(0x114),
__E_Insert = static_cast<int32_t>(0x115),
__E_Home = static_cast<int32_t>(0x116),
__E_End = static_cast<int32_t>(0x117),
__E_PageUp = static_cast<int32_t>(0x118),
__E_PageDown = static_cast<int32_t>(0x119),
__E_F1 = static_cast<int32_t>(0x11a),
__E_F2 = static_cast<int32_t>(0x11b),
__E_F3 = static_cast<int32_t>(0x11c),
__E_F4 = static_cast<int32_t>(0x11d),
__E_F5 = static_cast<int32_t>(0x11e),
__E_F6 = static_cast<int32_t>(0x11f),
__E_F7 = static_cast<int32_t>(0x120),
__E_F8 = static_cast<int32_t>(0x121),
__E_F9 = static_cast<int32_t>(0x122),
__E_F10 = static_cast<int32_t>(0x123),
__E_F11 = static_cast<int32_t>(0x124),
__E_F12 = static_cast<int32_t>(0x125),
__E_F13 = static_cast<int32_t>(0x126),
__E_F14 = static_cast<int32_t>(0x127),
__E_F15 = static_cast<int32_t>(0x128),
__E_Numlock = static_cast<int32_t>(0x12c),
__E_CapsLock = static_cast<int32_t>(0x12d),
__E_ScrollLock = static_cast<int32_t>(0x12e),
__E_RightShift = static_cast<int32_t>(0x12f),
__E_LeftShift = static_cast<int32_t>(0x130),
__E_RightControl = static_cast<int32_t>(0x131),
__E_LeftControl = static_cast<int32_t>(0x132),
__E_RightAlt = static_cast<int32_t>(0x133),
__E_LeftAlt = static_cast<int32_t>(0x134),
__E_RightCommand = static_cast<int32_t>(0x135),
__E_LeftCommand = static_cast<int32_t>(0x136),
__E_LeftWindows = static_cast<int32_t>(0x137),
__E_RightWindows = static_cast<int32_t>(0x138),
__E_AltGr = static_cast<int32_t>(0x139),
__E_Help = static_cast<int32_t>(0x13b),
__E_Print = static_cast<int32_t>(0x13c),
__E_SysReq = static_cast<int32_t>(0x13d),
__E_Break = static_cast<int32_t>(0x13e),
__E_Menu = static_cast<int32_t>(0x13f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyboardKeyCode_Unwrapped () const noexcept {
return static_cast<__KeyboardKeyCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyboardKeyCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyboardKeyCode(int32_t  value__) noexcept;

/// @brief Field A value: I32(97)
static ::Rewired::KeyboardKeyCode const A;

/// @brief Field Alpha0 value: I32(48)
static ::Rewired::KeyboardKeyCode const Alpha0;

/// @brief Field Alpha1 value: I32(49)
static ::Rewired::KeyboardKeyCode const Alpha1;

/// @brief Field Alpha2 value: I32(50)
static ::Rewired::KeyboardKeyCode const Alpha2;

/// @brief Field Alpha3 value: I32(51)
static ::Rewired::KeyboardKeyCode const Alpha3;

/// @brief Field Alpha4 value: I32(52)
static ::Rewired::KeyboardKeyCode const Alpha4;

/// @brief Field Alpha5 value: I32(53)
static ::Rewired::KeyboardKeyCode const Alpha5;

/// @brief Field Alpha6 value: I32(54)
static ::Rewired::KeyboardKeyCode const Alpha6;

/// @brief Field Alpha7 value: I32(55)
static ::Rewired::KeyboardKeyCode const Alpha7;

/// @brief Field Alpha8 value: I32(56)
static ::Rewired::KeyboardKeyCode const Alpha8;

/// @brief Field Alpha9 value: I32(57)
static ::Rewired::KeyboardKeyCode const Alpha9;

/// @brief Field AltGr value: I32(313)
static ::Rewired::KeyboardKeyCode const AltGr;

/// @brief Field Ampersand value: I32(38)
static ::Rewired::KeyboardKeyCode const Ampersand;

/// @brief Field Asterisk value: I32(42)
static ::Rewired::KeyboardKeyCode const Asterisk;

/// @brief Field At value: I32(64)
static ::Rewired::KeyboardKeyCode const At;

/// @brief Field B value: I32(98)
static ::Rewired::KeyboardKeyCode const B;

/// @brief Field BackQuote value: I32(96)
static ::Rewired::KeyboardKeyCode const BackQuote;

/// @brief Field Backslash value: I32(92)
static ::Rewired::KeyboardKeyCode const Backslash;

/// @brief Field Backspace value: I32(8)
static ::Rewired::KeyboardKeyCode const Backspace;

/// @brief Field Break value: I32(318)
static ::Rewired::KeyboardKeyCode const Break;

/// @brief Field C value: I32(99)
static ::Rewired::KeyboardKeyCode const C;

/// @brief Field CapsLock value: I32(301)
static ::Rewired::KeyboardKeyCode const CapsLock;

/// @brief Field Caret value: I32(94)
static ::Rewired::KeyboardKeyCode const Caret;

/// @brief Field Clear value: I32(12)
static ::Rewired::KeyboardKeyCode const Clear;

/// @brief Field Colon value: I32(58)
static ::Rewired::KeyboardKeyCode const Colon;

/// @brief Field Comma value: I32(44)
static ::Rewired::KeyboardKeyCode const Comma;

/// @brief Field D value: I32(100)
static ::Rewired::KeyboardKeyCode const D;

/// @brief Field Delete value: I32(127)
static ::Rewired::KeyboardKeyCode const Delete;

/// @brief Field Dollar value: I32(36)
static ::Rewired::KeyboardKeyCode const Dollar;

/// @brief Field DoubleQuote value: I32(34)
static ::Rewired::KeyboardKeyCode const DoubleQuote;

/// @brief Field DownArrow value: I32(274)
static ::Rewired::KeyboardKeyCode const DownArrow;

/// @brief Field E value: I32(101)
static ::Rewired::KeyboardKeyCode const E;

/// @brief Field End value: I32(279)
static ::Rewired::KeyboardKeyCode const End;

/// @brief Field Equals value: I32(61)
static ::Rewired::KeyboardKeyCode const Equals;

/// @brief Field Escape value: I32(27)
static ::Rewired::KeyboardKeyCode const Escape;

/// @brief Field Exclaim value: I32(33)
static ::Rewired::KeyboardKeyCode const Exclaim;

/// @brief Field F value: I32(102)
static ::Rewired::KeyboardKeyCode const F;

/// @brief Field F1 value: I32(282)
static ::Rewired::KeyboardKeyCode const F1;

/// @brief Field F10 value: I32(291)
static ::Rewired::KeyboardKeyCode const F10;

/// @brief Field F11 value: I32(292)
static ::Rewired::KeyboardKeyCode const F11;

/// @brief Field F12 value: I32(293)
static ::Rewired::KeyboardKeyCode const F12;

/// @brief Field F13 value: I32(294)
static ::Rewired::KeyboardKeyCode const F13;

/// @brief Field F14 value: I32(295)
static ::Rewired::KeyboardKeyCode const F14;

/// @brief Field F15 value: I32(296)
static ::Rewired::KeyboardKeyCode const F15;

/// @brief Field F2 value: I32(283)
static ::Rewired::KeyboardKeyCode const F2;

/// @brief Field F3 value: I32(284)
static ::Rewired::KeyboardKeyCode const F3;

/// @brief Field F4 value: I32(285)
static ::Rewired::KeyboardKeyCode const F4;

/// @brief Field F5 value: I32(286)
static ::Rewired::KeyboardKeyCode const F5;

/// @brief Field F6 value: I32(287)
static ::Rewired::KeyboardKeyCode const F6;

/// @brief Field F7 value: I32(288)
static ::Rewired::KeyboardKeyCode const F7;

/// @brief Field F8 value: I32(289)
static ::Rewired::KeyboardKeyCode const F8;

/// @brief Field F9 value: I32(290)
static ::Rewired::KeyboardKeyCode const F9;

/// @brief Field G value: I32(103)
static ::Rewired::KeyboardKeyCode const G;

/// @brief Field Greater value: I32(62)
static ::Rewired::KeyboardKeyCode const Greater;

/// @brief Field H value: I32(104)
static ::Rewired::KeyboardKeyCode const H;

/// @brief Field Hash value: I32(35)
static ::Rewired::KeyboardKeyCode const Hash;

/// @brief Field Help value: I32(315)
static ::Rewired::KeyboardKeyCode const Help;

/// @brief Field Home value: I32(278)
static ::Rewired::KeyboardKeyCode const Home;

/// @brief Field I value: I32(105)
static ::Rewired::KeyboardKeyCode const I;

/// @brief Field Insert value: I32(277)
static ::Rewired::KeyboardKeyCode const Insert;

/// @brief Field J value: I32(106)
static ::Rewired::KeyboardKeyCode const J;

/// @brief Field K value: I32(107)
static ::Rewired::KeyboardKeyCode const K;

/// @brief Field Keypad0 value: I32(256)
static ::Rewired::KeyboardKeyCode const Keypad0;

/// @brief Field Keypad1 value: I32(257)
static ::Rewired::KeyboardKeyCode const Keypad1;

/// @brief Field Keypad2 value: I32(258)
static ::Rewired::KeyboardKeyCode const Keypad2;

/// @brief Field Keypad3 value: I32(259)
static ::Rewired::KeyboardKeyCode const Keypad3;

/// @brief Field Keypad4 value: I32(260)
static ::Rewired::KeyboardKeyCode const Keypad4;

/// @brief Field Keypad5 value: I32(261)
static ::Rewired::KeyboardKeyCode const Keypad5;

/// @brief Field Keypad6 value: I32(262)
static ::Rewired::KeyboardKeyCode const Keypad6;

/// @brief Field Keypad7 value: I32(263)
static ::Rewired::KeyboardKeyCode const Keypad7;

/// @brief Field Keypad8 value: I32(264)
static ::Rewired::KeyboardKeyCode const Keypad8;

/// @brief Field Keypad9 value: I32(265)
static ::Rewired::KeyboardKeyCode const Keypad9;

/// @brief Field KeypadDivide value: I32(267)
static ::Rewired::KeyboardKeyCode const KeypadDivide;

/// @brief Field KeypadEnter value: I32(271)
static ::Rewired::KeyboardKeyCode const KeypadEnter;

/// @brief Field KeypadEquals value: I32(272)
static ::Rewired::KeyboardKeyCode const KeypadEquals;

/// @brief Field KeypadMinus value: I32(269)
static ::Rewired::KeyboardKeyCode const KeypadMinus;

/// @brief Field KeypadMultiply value: I32(268)
static ::Rewired::KeyboardKeyCode const KeypadMultiply;

/// @brief Field KeypadPeriod value: I32(266)
static ::Rewired::KeyboardKeyCode const KeypadPeriod;

/// @brief Field KeypadPlus value: I32(270)
static ::Rewired::KeyboardKeyCode const KeypadPlus;

/// @brief Field L value: I32(108)
static ::Rewired::KeyboardKeyCode const L;

/// @brief Field LeftAlt value: I32(308)
static ::Rewired::KeyboardKeyCode const LeftAlt;

/// @brief Field LeftArrow value: I32(276)
static ::Rewired::KeyboardKeyCode const LeftArrow;

/// @brief Field LeftBracket value: I32(91)
static ::Rewired::KeyboardKeyCode const LeftBracket;

/// @brief Field LeftCommand value: I32(310)
static ::Rewired::KeyboardKeyCode const LeftCommand;

/// @brief Field LeftControl value: I32(306)
static ::Rewired::KeyboardKeyCode const LeftControl;

/// @brief Field LeftParen value: I32(40)
static ::Rewired::KeyboardKeyCode const LeftParen;

/// @brief Field LeftShift value: I32(304)
static ::Rewired::KeyboardKeyCode const LeftShift;

/// @brief Field LeftWindows value: I32(311)
static ::Rewired::KeyboardKeyCode const LeftWindows;

/// @brief Field Less value: I32(60)
static ::Rewired::KeyboardKeyCode const Less;

/// @brief Field M value: I32(109)
static ::Rewired::KeyboardKeyCode const M;

/// @brief Field Menu value: I32(319)
static ::Rewired::KeyboardKeyCode const Menu;

/// @brief Field Minus value: I32(45)
static ::Rewired::KeyboardKeyCode const Minus;

/// @brief Field N value: I32(110)
static ::Rewired::KeyboardKeyCode const N;

/// @brief Field None value: I32(0)
static ::Rewired::KeyboardKeyCode const None;

/// @brief Field Numlock value: I32(300)
static ::Rewired::KeyboardKeyCode const Numlock;

/// @brief Field O value: I32(111)
static ::Rewired::KeyboardKeyCode const O;

/// @brief Field P value: I32(112)
static ::Rewired::KeyboardKeyCode const P;

/// @brief Field PageDown value: I32(281)
static ::Rewired::KeyboardKeyCode const PageDown;

/// @brief Field PageUp value: I32(280)
static ::Rewired::KeyboardKeyCode const PageUp;

/// @brief Field Pause value: I32(19)
static ::Rewired::KeyboardKeyCode const Pause;

/// @brief Field Period value: I32(46)
static ::Rewired::KeyboardKeyCode const Period;

/// @brief Field Plus value: I32(43)
static ::Rewired::KeyboardKeyCode const Plus;

/// @brief Field Print value: I32(316)
static ::Rewired::KeyboardKeyCode const Print;

/// @brief Field Q value: I32(113)
static ::Rewired::KeyboardKeyCode const Q;

/// @brief Field Question value: I32(63)
static ::Rewired::KeyboardKeyCode const Question;

/// @brief Field Quote value: I32(39)
static ::Rewired::KeyboardKeyCode const Quote;

/// @brief Field R value: I32(114)
static ::Rewired::KeyboardKeyCode const R;

/// @brief Field Return value: I32(13)
static ::Rewired::KeyboardKeyCode const Return;

/// @brief Field RightAlt value: I32(307)
static ::Rewired::KeyboardKeyCode const RightAlt;

/// @brief Field RightArrow value: I32(275)
static ::Rewired::KeyboardKeyCode const RightArrow;

/// @brief Field RightBracket value: I32(93)
static ::Rewired::KeyboardKeyCode const RightBracket;

/// @brief Field RightCommand value: I32(309)
static ::Rewired::KeyboardKeyCode const RightCommand;

/// @brief Field RightControl value: I32(305)
static ::Rewired::KeyboardKeyCode const RightControl;

/// @brief Field RightParen value: I32(41)
static ::Rewired::KeyboardKeyCode const RightParen;

/// @brief Field RightShift value: I32(303)
static ::Rewired::KeyboardKeyCode const RightShift;

/// @brief Field RightWindows value: I32(312)
static ::Rewired::KeyboardKeyCode const RightWindows;

/// @brief Field S value: I32(115)
static ::Rewired::KeyboardKeyCode const S;

/// @brief Field ScrollLock value: I32(302)
static ::Rewired::KeyboardKeyCode const ScrollLock;

/// @brief Field Semicolon value: I32(59)
static ::Rewired::KeyboardKeyCode const Semicolon;

/// @brief Field Slash value: I32(47)
static ::Rewired::KeyboardKeyCode const Slash;

/// @brief Field Space value: I32(32)
static ::Rewired::KeyboardKeyCode const Space;

/// @brief Field SysReq value: I32(317)
static ::Rewired::KeyboardKeyCode const SysReq;

/// @brief Field T value: I32(116)
static ::Rewired::KeyboardKeyCode const T;

/// @brief Field Tab value: I32(9)
static ::Rewired::KeyboardKeyCode const Tab;

/// @brief Field U value: I32(117)
static ::Rewired::KeyboardKeyCode const U;

/// @brief Field Underscore value: I32(95)
static ::Rewired::KeyboardKeyCode const Underscore;

/// @brief Field UpArrow value: I32(273)
static ::Rewired::KeyboardKeyCode const UpArrow;

/// @brief Field V value: I32(118)
static ::Rewired::KeyboardKeyCode const V;

/// @brief Field W value: I32(119)
static ::Rewired::KeyboardKeyCode const W;

/// @brief Field X value: I32(120)
static ::Rewired::KeyboardKeyCode const X;

/// @brief Field Y value: I32(121)
static ::Rewired::KeyboardKeyCode const Y;

/// @brief Field Z value: I32(122)
static ::Rewired::KeyboardKeyCode const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::KeyboardKeyCode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::KeyboardKeyCode) == 0x4, "Size mismatch!");

} // namespace end def Rewired
