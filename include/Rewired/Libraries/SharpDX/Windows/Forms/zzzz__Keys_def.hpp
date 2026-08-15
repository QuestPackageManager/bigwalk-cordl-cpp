#pragma once
// IWYU pragma private; include "Rewired/Libraries/SharpDX/Windows/Forms/Keys.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Keys)
// Forward declare root types
namespace Rewired::Libraries::SharpDX::Windows::Forms {
struct Keys;
}
// Write type traits
MARK_VAL_T(::Rewired::Libraries::SharpDX::Windows::Forms::Keys);
DEFINE_IL2CPP_CLASS(::Rewired::Libraries::SharpDX::Windows::Forms::Keys, "Rewired.Libraries.SharpDX.Windows.Forms", "Keys");
// Dependencies 
namespace Rewired::Libraries::SharpDX::Windows::Forms {
// Is value type: true
// CS Name: Rewired.Libraries.SharpDX.Windows.Forms.Keys
struct CORDL_TYPE Keys {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Keys_Unwrapped
enum struct __Keys_Unwrapped : int32_t {
__E_KeyCode = static_cast<int32_t>(0xffff),
__E_Modifiers = static_cast<int32_t>(0xffff0000),
__E_None = static_cast<int32_t>(0x0),
__E_LButton = static_cast<int32_t>(0x1),
__E_RButton = static_cast<int32_t>(0x2),
__E_Cancel = static_cast<int32_t>(0x3),
__E_MButton = static_cast<int32_t>(0x4),
__E_XButton1 = static_cast<int32_t>(0x5),
__E_XButton2 = static_cast<int32_t>(0x6),
__E_Back = static_cast<int32_t>(0x8),
__E_Tab = static_cast<int32_t>(0x9),
__E_LineFeed = static_cast<int32_t>(0xa),
__E_Clear = static_cast<int32_t>(0xc),
__E_Return = static_cast<int32_t>(0xd),
__E_Enter = static_cast<int32_t>(0xd),
__E_ShiftKey = static_cast<int32_t>(0x10),
__E_ControlKey = static_cast<int32_t>(0x11),
__E_Menu = static_cast<int32_t>(0x12),
__E_Pause = static_cast<int32_t>(0x13),
__E_Capital = static_cast<int32_t>(0x14),
__E_CapsLock = static_cast<int32_t>(0x14),
__E_KanaMode = static_cast<int32_t>(0x15),
__E_HanguelMode = static_cast<int32_t>(0x15),
__E_HangulMode = static_cast<int32_t>(0x15),
__E_JunjaMode = static_cast<int32_t>(0x17),
__E_FinalMode = static_cast<int32_t>(0x18),
__E_HanjaMode = static_cast<int32_t>(0x19),
__E_KanjiMode = static_cast<int32_t>(0x19),
__E_Escape = static_cast<int32_t>(0x1b),
__E_IMEConvert = static_cast<int32_t>(0x1c),
__E_IMENonconvert = static_cast<int32_t>(0x1d),
__E_IMEAccept = static_cast<int32_t>(0x1e),
__E_IMEAceept = static_cast<int32_t>(0x1e),
__E_IMEModeChange = static_cast<int32_t>(0x1f),
__E_Space = static_cast<int32_t>(0x20),
__E_Prior = static_cast<int32_t>(0x21),
__E_PageUp = static_cast<int32_t>(0x21),
__E_Next = static_cast<int32_t>(0x22),
__E_PageDown = static_cast<int32_t>(0x22),
__E_End = static_cast<int32_t>(0x23),
__E_Home = static_cast<int32_t>(0x24),
__E_Left = static_cast<int32_t>(0x25),
__E_Up = static_cast<int32_t>(0x26),
__E_Right = static_cast<int32_t>(0x27),
__E_Down = static_cast<int32_t>(0x28),
__E_Select = static_cast<int32_t>(0x29),
__E_Print = static_cast<int32_t>(0x2a),
__E_Execute = static_cast<int32_t>(0x2b),
__E_Snapshot = static_cast<int32_t>(0x2c),
__E_PrintScreen = static_cast<int32_t>(0x2c),
__E_Insert = static_cast<int32_t>(0x2d),
__E_Delete = static_cast<int32_t>(0x2e),
__E_Help = static_cast<int32_t>(0x2f),
__E_D0 = static_cast<int32_t>(0x30),
__E_D1 = static_cast<int32_t>(0x31),
__E_D2 = static_cast<int32_t>(0x32),
__E_D3 = static_cast<int32_t>(0x33),
__E_D4 = static_cast<int32_t>(0x34),
__E_D5 = static_cast<int32_t>(0x35),
__E_D6 = static_cast<int32_t>(0x36),
__E_D7 = static_cast<int32_t>(0x37),
__E_D8 = static_cast<int32_t>(0x38),
__E_D9 = static_cast<int32_t>(0x39),
__E_A = static_cast<int32_t>(0x41),
__E_B = static_cast<int32_t>(0x42),
__E_C = static_cast<int32_t>(0x43),
__E_D = static_cast<int32_t>(0x44),
__E_E = static_cast<int32_t>(0x45),
__E_F = static_cast<int32_t>(0x46),
__E_G = static_cast<int32_t>(0x47),
__E_H = static_cast<int32_t>(0x48),
__E_I = static_cast<int32_t>(0x49),
__E_J = static_cast<int32_t>(0x4a),
__E_K = static_cast<int32_t>(0x4b),
__E_L = static_cast<int32_t>(0x4c),
__E_M = static_cast<int32_t>(0x4d),
__E_N = static_cast<int32_t>(0x4e),
__E_O = static_cast<int32_t>(0x4f),
__E_P = static_cast<int32_t>(0x50),
__E_Q = static_cast<int32_t>(0x51),
__E_R = static_cast<int32_t>(0x52),
__E_S = static_cast<int32_t>(0x53),
__E_T = static_cast<int32_t>(0x54),
__E_U = static_cast<int32_t>(0x55),
__E_V = static_cast<int32_t>(0x56),
__E_W = static_cast<int32_t>(0x57),
__E_X = static_cast<int32_t>(0x58),
__E_Y = static_cast<int32_t>(0x59),
__E_Z = static_cast<int32_t>(0x5a),
__E_LWin = static_cast<int32_t>(0x5b),
__E_RWin = static_cast<int32_t>(0x5c),
__E_Apps = static_cast<int32_t>(0x5d),
__E_Sleep = static_cast<int32_t>(0x5f),
__E_NumPad0 = static_cast<int32_t>(0x60),
__E_NumPad1 = static_cast<int32_t>(0x61),
__E_NumPad2 = static_cast<int32_t>(0x62),
__E_NumPad3 = static_cast<int32_t>(0x63),
__E_NumPad4 = static_cast<int32_t>(0x64),
__E_NumPad5 = static_cast<int32_t>(0x65),
__E_NumPad6 = static_cast<int32_t>(0x66),
__E_NumPad7 = static_cast<int32_t>(0x67),
__E_NumPad8 = static_cast<int32_t>(0x68),
__E_NumPad9 = static_cast<int32_t>(0x69),
__E_Multiply = static_cast<int32_t>(0x6a),
__E_Add = static_cast<int32_t>(0x6b),
__E_Separator = static_cast<int32_t>(0x6c),
__E_Subtract = static_cast<int32_t>(0x6d),
__E_Decimal = static_cast<int32_t>(0x6e),
__E_Divide = static_cast<int32_t>(0x6f),
__E_F1 = static_cast<int32_t>(0x70),
__E_F2 = static_cast<int32_t>(0x71),
__E_F3 = static_cast<int32_t>(0x72),
__E_F4 = static_cast<int32_t>(0x73),
__E_F5 = static_cast<int32_t>(0x74),
__E_F6 = static_cast<int32_t>(0x75),
__E_F7 = static_cast<int32_t>(0x76),
__E_F8 = static_cast<int32_t>(0x77),
__E_F9 = static_cast<int32_t>(0x78),
__E_F10 = static_cast<int32_t>(0x79),
__E_F11 = static_cast<int32_t>(0x7a),
__E_F12 = static_cast<int32_t>(0x7b),
__E_F13 = static_cast<int32_t>(0x7c),
__E_F14 = static_cast<int32_t>(0x7d),
__E_F15 = static_cast<int32_t>(0x7e),
__E_F16 = static_cast<int32_t>(0x7f),
__E_F17 = static_cast<int32_t>(0x80),
__E_F18 = static_cast<int32_t>(0x81),
__E_F19 = static_cast<int32_t>(0x82),
__E_F20 = static_cast<int32_t>(0x83),
__E_F21 = static_cast<int32_t>(0x84),
__E_F22 = static_cast<int32_t>(0x85),
__E_F23 = static_cast<int32_t>(0x86),
__E_F24 = static_cast<int32_t>(0x87),
__E_NumLock = static_cast<int32_t>(0x90),
__E_Scroll = static_cast<int32_t>(0x91),
__E_LShiftKey = static_cast<int32_t>(0xa0),
__E_RShiftKey = static_cast<int32_t>(0xa1),
__E_LControlKey = static_cast<int32_t>(0xa2),
__E_RControlKey = static_cast<int32_t>(0xa3),
__E_LMenu = static_cast<int32_t>(0xa4),
__E_RMenu = static_cast<int32_t>(0xa5),
__E_BrowserBack = static_cast<int32_t>(0xa6),
__E_BrowserForward = static_cast<int32_t>(0xa7),
__E_BrowserRefresh = static_cast<int32_t>(0xa8),
__E_BrowserStop = static_cast<int32_t>(0xa9),
__E_BrowserSearch = static_cast<int32_t>(0xaa),
__E_BrowserFavorites = static_cast<int32_t>(0xab),
__E_BrowserHome = static_cast<int32_t>(0xac),
__E_VolumeMute = static_cast<int32_t>(0xad),
__E_VolumeDown = static_cast<int32_t>(0xae),
__E_VolumeUp = static_cast<int32_t>(0xaf),
__E_MediaNextTrack = static_cast<int32_t>(0xb0),
__E_MediaPreviousTrack = static_cast<int32_t>(0xb1),
__E_MediaStop = static_cast<int32_t>(0xb2),
__E_MediaPlayPause = static_cast<int32_t>(0xb3),
__E_LaunchMail = static_cast<int32_t>(0xb4),
__E_SelectMedia = static_cast<int32_t>(0xb5),
__E_LaunchApplication1 = static_cast<int32_t>(0xb6),
__E_LaunchApplication2 = static_cast<int32_t>(0xb7),
__E_OemSemicolon = static_cast<int32_t>(0xba),
__E_Oem1 = static_cast<int32_t>(0xba),
__E_Oemplus = static_cast<int32_t>(0xbb),
__E_Oemcomma = static_cast<int32_t>(0xbc),
__E_OemMinus = static_cast<int32_t>(0xbd),
__E_OemPeriod = static_cast<int32_t>(0xbe),
__E_OemQuestion = static_cast<int32_t>(0xbf),
__E_Oem2 = static_cast<int32_t>(0xbf),
__E_Oemtilde = static_cast<int32_t>(0xc0),
__E_Oem3 = static_cast<int32_t>(0xc0),
__E_OemOpenBrackets = static_cast<int32_t>(0xdb),
__E_Oem4 = static_cast<int32_t>(0xdb),
__E_OemPipe = static_cast<int32_t>(0xdc),
__E_Oem5 = static_cast<int32_t>(0xdc),
__E_OemCloseBrackets = static_cast<int32_t>(0xdd),
__E_Oem6 = static_cast<int32_t>(0xdd),
__E_OemQuotes = static_cast<int32_t>(0xde),
__E_Oem7 = static_cast<int32_t>(0xde),
__E_Oem8 = static_cast<int32_t>(0xdf),
__E_OemBackslash = static_cast<int32_t>(0xe2),
__E_Oem102 = static_cast<int32_t>(0xe2),
__E_ProcessKey = static_cast<int32_t>(0xe5),
__E_Packet = static_cast<int32_t>(0xe7),
__E_Attn = static_cast<int32_t>(0xf6),
__E_Crsel = static_cast<int32_t>(0xf7),
__E_Exsel = static_cast<int32_t>(0xf8),
__E_EraseEof = static_cast<int32_t>(0xf9),
__E_Play = static_cast<int32_t>(0xfa),
__E_Zoom = static_cast<int32_t>(0xfb),
__E_NoName = static_cast<int32_t>(0xfc),
__E_Pa1 = static_cast<int32_t>(0xfd),
__E_OemClear = static_cast<int32_t>(0xfe),
__E_Shift = static_cast<int32_t>(0x10000),
__E_Control = static_cast<int32_t>(0x20000),
__E_Alt = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Keys_Unwrapped () const noexcept {
return static_cast<__Keys_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Keys() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Keys(int32_t  value__) noexcept;

/// @brief Field A value: I32(65)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const A;

/// @brief Field Add value: I32(107)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Add;

/// @brief Field Alt value: I32(262144)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Alt;

/// @brief Field Apps value: I32(93)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Apps;

/// @brief Field Attn value: I32(246)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Attn;

/// @brief Field B value: I32(66)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const B;

/// @brief Field Back value: I32(8)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Back;

/// @brief Field BrowserBack value: I32(166)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserBack;

/// @brief Field BrowserFavorites value: I32(171)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserFavorites;

/// @brief Field BrowserForward value: I32(167)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserForward;

/// @brief Field BrowserHome value: I32(172)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserHome;

/// @brief Field BrowserRefresh value: I32(168)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserRefresh;

/// @brief Field BrowserSearch value: I32(170)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserSearch;

/// @brief Field BrowserStop value: I32(169)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const BrowserStop;

/// @brief Field C value: I32(67)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const C;

/// @brief Field Cancel value: I32(3)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Cancel;

/// @brief Field Capital value: I32(20)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Capital;

/// @brief Field CapsLock value: I32(20)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const CapsLock;

/// @brief Field Clear value: I32(12)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Clear;

/// @brief Field Control value: I32(131072)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Control;

/// @brief Field ControlKey value: I32(17)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const ControlKey;

/// @brief Field Crsel value: I32(247)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Crsel;

/// @brief Field D value: I32(68)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D;

/// @brief Field D0 value: I32(48)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D0;

/// @brief Field D1 value: I32(49)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D1;

/// @brief Field D2 value: I32(50)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D2;

/// @brief Field D3 value: I32(51)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D3;

/// @brief Field D4 value: I32(52)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D4;

/// @brief Field D5 value: I32(53)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D5;

/// @brief Field D6 value: I32(54)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D6;

/// @brief Field D7 value: I32(55)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D7;

/// @brief Field D8 value: I32(56)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D8;

/// @brief Field D9 value: I32(57)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const D9;

/// @brief Field Decimal value: I32(110)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Decimal;

/// @brief Field Delete value: I32(46)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Delete;

/// @brief Field Divide value: I32(111)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Divide;

/// @brief Field Down value: I32(40)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Down;

/// @brief Field E value: I32(69)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const E;

/// @brief Field End value: I32(35)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const End;

/// @brief Field Enter value: I32(13)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Enter;

/// @brief Field EraseEof value: I32(249)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const EraseEof;

/// @brief Field Escape value: I32(27)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Escape;

/// @brief Field Execute value: I32(43)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Execute;

/// @brief Field Exsel value: I32(248)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Exsel;

/// @brief Field F value: I32(70)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F;

/// @brief Field F1 value: I32(112)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F1;

/// @brief Field F10 value: I32(121)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F10;

/// @brief Field F11 value: I32(122)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F11;

/// @brief Field F12 value: I32(123)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F12;

/// @brief Field F13 value: I32(124)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F13;

/// @brief Field F14 value: I32(125)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F14;

/// @brief Field F15 value: I32(126)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F15;

/// @brief Field F16 value: I32(127)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F16;

/// @brief Field F17 value: I32(128)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F17;

/// @brief Field F18 value: I32(129)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F18;

/// @brief Field F19 value: I32(130)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F19;

/// @brief Field F2 value: I32(113)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F2;

/// @brief Field F20 value: I32(131)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F20;

/// @brief Field F21 value: I32(132)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F21;

/// @brief Field F22 value: I32(133)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F22;

/// @brief Field F23 value: I32(134)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F23;

/// @brief Field F24 value: I32(135)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F24;

/// @brief Field F3 value: I32(114)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F3;

/// @brief Field F4 value: I32(115)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F4;

/// @brief Field F5 value: I32(116)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F5;

/// @brief Field F6 value: I32(117)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F6;

/// @brief Field F7 value: I32(118)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F7;

/// @brief Field F8 value: I32(119)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F8;

/// @brief Field F9 value: I32(120)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const F9;

/// @brief Field FinalMode value: I32(24)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const FinalMode;

/// @brief Field G value: I32(71)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const G;

/// @brief Field H value: I32(72)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const H;

/// @brief Field HanguelMode value: I32(21)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const HanguelMode;

/// @brief Field HangulMode value: I32(21)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const HangulMode;

/// @brief Field HanjaMode value: I32(25)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const HanjaMode;

/// @brief Field Help value: I32(47)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Help;

/// @brief Field Home value: I32(36)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Home;

/// @brief Field I value: I32(73)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const I;

/// @brief Field IMEAccept value: I32(30)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const IMEAccept;

/// @brief Field IMEAceept value: I32(30)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const IMEAceept;

/// @brief Field IMEConvert value: I32(28)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const IMEConvert;

/// @brief Field IMEModeChange value: I32(31)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const IMEModeChange;

/// @brief Field IMENonconvert value: I32(29)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const IMENonconvert;

/// @brief Field Insert value: I32(45)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Insert;

/// @brief Field J value: I32(74)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const J;

/// @brief Field JunjaMode value: I32(23)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const JunjaMode;

/// @brief Field K value: I32(75)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const K;

/// @brief Field KanaMode value: I32(21)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const KanaMode;

/// @brief Field KanjiMode value: I32(25)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const KanjiMode;

/// @brief Field KeyCode value: I32(65535)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const KeyCode;

/// @brief Field L value: I32(76)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const L;

/// @brief Field LButton value: I32(1)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LButton;

/// @brief Field LControlKey value: I32(162)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LControlKey;

/// @brief Field LMenu value: I32(164)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LMenu;

/// @brief Field LShiftKey value: I32(160)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LShiftKey;

/// @brief Field LWin value: I32(91)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LWin;

/// @brief Field LaunchApplication1 value: I32(182)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LaunchApplication1;

/// @brief Field LaunchApplication2 value: I32(183)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LaunchApplication2;

/// @brief Field LaunchMail value: I32(180)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LaunchMail;

/// @brief Field Left value: I32(37)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Left;

/// @brief Field LineFeed value: I32(10)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const LineFeed;

/// @brief Field M value: I32(77)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const M;

/// @brief Field MButton value: I32(4)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const MButton;

/// @brief Field MediaNextTrack value: I32(176)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const MediaNextTrack;

/// @brief Field MediaPlayPause value: I32(179)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const MediaPlayPause;

/// @brief Field MediaPreviousTrack value: I32(177)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const MediaPreviousTrack;

/// @brief Field MediaStop value: I32(178)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const MediaStop;

/// @brief Field Menu value: I32(18)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Menu;

/// @brief Field Modifiers value: I32(-65536)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Modifiers;

/// @brief Field Multiply value: I32(106)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Multiply;

/// @brief Field N value: I32(78)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const N;

/// @brief Field Next value: I32(34)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Next;

/// @brief Field NoName value: I32(252)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NoName;

/// @brief Field None value: I32(0)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const None;

/// @brief Field NumLock value: I32(144)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumLock;

/// @brief Field NumPad0 value: I32(96)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad0;

/// @brief Field NumPad1 value: I32(97)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad1;

/// @brief Field NumPad2 value: I32(98)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad2;

/// @brief Field NumPad3 value: I32(99)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad3;

/// @brief Field NumPad4 value: I32(100)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad4;

/// @brief Field NumPad5 value: I32(101)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad5;

/// @brief Field NumPad6 value: I32(102)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad6;

/// @brief Field NumPad7 value: I32(103)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad7;

/// @brief Field NumPad8 value: I32(104)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad8;

/// @brief Field NumPad9 value: I32(105)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const NumPad9;

/// @brief Field O value: I32(79)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const O;

/// @brief Field Oem1 value: I32(186)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem1;

/// @brief Field Oem102 value: I32(226)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem102;

/// @brief Field Oem2 value: I32(191)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem2;

/// @brief Field Oem3 value: I32(192)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem3;

/// @brief Field Oem4 value: I32(219)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem4;

/// @brief Field Oem5 value: I32(220)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem5;

/// @brief Field Oem6 value: I32(221)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem6;

/// @brief Field Oem7 value: I32(222)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem7;

/// @brief Field Oem8 value: I32(223)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oem8;

/// @brief Field OemBackslash value: I32(226)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemBackslash;

/// @brief Field OemClear value: I32(254)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemClear;

/// @brief Field OemCloseBrackets value: I32(221)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemCloseBrackets;

/// @brief Field OemMinus value: I32(189)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemMinus;

/// @brief Field OemOpenBrackets value: I32(219)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemOpenBrackets;

/// @brief Field OemPeriod value: I32(190)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemPeriod;

/// @brief Field OemPipe value: I32(220)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemPipe;

/// @brief Field OemQuestion value: I32(191)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemQuestion;

/// @brief Field OemQuotes value: I32(222)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemQuotes;

/// @brief Field OemSemicolon value: I32(186)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const OemSemicolon;

/// @brief Field Oemcomma value: I32(188)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oemcomma;

/// @brief Field Oemplus value: I32(187)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oemplus;

/// @brief Field Oemtilde value: I32(192)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Oemtilde;

/// @brief Field P value: I32(80)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const P;

/// @brief Field Pa1 value: I32(253)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Pa1;

/// @brief Field Packet value: I32(231)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Packet;

/// @brief Field PageDown value: I32(34)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const PageDown;

/// @brief Field PageUp value: I32(33)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const PageUp;

/// @brief Field Pause value: I32(19)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Pause;

/// @brief Field Play value: I32(250)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Play;

/// @brief Field Print value: I32(42)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Print;

/// @brief Field PrintScreen value: I32(44)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const PrintScreen;

/// @brief Field Prior value: I32(33)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Prior;

/// @brief Field ProcessKey value: I32(229)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const ProcessKey;

/// @brief Field Q value: I32(81)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Q;

/// @brief Field R value: I32(82)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const R;

/// @brief Field RButton value: I32(2)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const RButton;

/// @brief Field RControlKey value: I32(163)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const RControlKey;

/// @brief Field RMenu value: I32(165)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const RMenu;

/// @brief Field RShiftKey value: I32(161)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const RShiftKey;

/// @brief Field RWin value: I32(92)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const RWin;

/// @brief Field Return value: I32(13)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Return;

/// @brief Field Right value: I32(39)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Right;

/// @brief Field S value: I32(83)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const S;

/// @brief Field Scroll value: I32(145)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Scroll;

/// @brief Field Select value: I32(41)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Select;

/// @brief Field SelectMedia value: I32(181)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const SelectMedia;

/// @brief Field Separator value: I32(108)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Separator;

/// @brief Field Shift value: I32(65536)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Shift;

/// @brief Field ShiftKey value: I32(16)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const ShiftKey;

/// @brief Field Sleep value: I32(95)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Sleep;

/// @brief Field Snapshot value: I32(44)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Snapshot;

/// @brief Field Space value: I32(32)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Space;

/// @brief Field Subtract value: I32(109)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Subtract;

/// @brief Field T value: I32(84)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const T;

/// @brief Field Tab value: I32(9)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Tab;

/// @brief Field U value: I32(85)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const U;

/// @brief Field Up value: I32(38)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Up;

/// @brief Field V value: I32(86)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const V;

/// @brief Field VolumeDown value: I32(174)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const VolumeDown;

/// @brief Field VolumeMute value: I32(173)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const VolumeMute;

/// @brief Field VolumeUp value: I32(175)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const VolumeUp;

/// @brief Field W value: I32(87)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const W;

/// @brief Field X value: I32(88)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const X;

/// @brief Field XButton1 value: I32(5)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const XButton1;

/// @brief Field XButton2 value: I32(6)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const XButton2;

/// @brief Field Y value: I32(89)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Y;

/// @brief Field Z value: I32(90)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Z;

/// @brief Field Zoom value: I32(251)
static ::Rewired::Libraries::SharpDX::Windows::Forms::Keys const Zoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Libraries::SharpDX::Windows::Forms::Keys, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Libraries::SharpDX::Windows::Forms::Keys) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Libraries::SharpDX::Windows::Forms
