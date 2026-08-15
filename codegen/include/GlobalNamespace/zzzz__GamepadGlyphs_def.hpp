#pragma once
// IWYU pragma private; include "GlobalNamespace/GamepadGlyphs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GamepadGlyphs)
namespace GlobalNamespace {
struct GlyphButtonType;
}
namespace GlobalNamespace {
struct GlyphText;
}
// Forward declare root types
namespace GlobalNamespace {
class GamepadGlyphs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GamepadGlyphs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamepadGlyphs*, "", "GamepadGlyphs");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamepadGlyphs
class CORDL_TYPE GamepadGlyphs : public ::System::Object {
public:
// Declarations
/// @brief Field dpadDown, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadDown, put=__cordl_internal_set_dpadDown)) ::StringW  dpadDown;

/// @brief Field dpadLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadLeft, put=__cordl_internal_set_dpadLeft)) ::StringW  dpadLeft;

/// @brief Field dpadRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadRight, put=__cordl_internal_set_dpadRight)) ::StringW  dpadRight;

/// @brief Field dpadUp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadUp, put=__cordl_internal_set_dpadUp)) ::StringW  dpadUp;

/// @brief Field faceDown, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceDown, put=__cordl_internal_set_faceDown)) ::StringW  faceDown;

/// @brief Field faceLeft, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceLeft, put=__cordl_internal_set_faceLeft)) ::StringW  faceLeft;

/// @brief Field faceRight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceRight, put=__cordl_internal_set_faceRight)) ::StringW  faceRight;

/// @brief Field faceUp, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceUp, put=__cordl_internal_set_faceUp)) ::StringW  faceUp;

/// @brief Field l4, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_l4, put=__cordl_internal_set_l4)) ::StringW  l4;

/// @brief Field l5, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_l5, put=__cordl_internal_set_l5)) ::StringW  l5;

/// @brief Field nMouseL, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nMouseL, put=__cordl_internal_set_nMouseL)) ::StringW  nMouseL;

/// @brief Field nMouseR, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nMouseR, put=__cordl_internal_set_nMouseR)) ::StringW  nMouseR;

/// @brief Field psButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_psButton, put=__cordl_internal_set_psButton)) ::StringW  psButton;

/// @brief Field r4, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_r4, put=__cordl_internal_set_r4)) ::StringW  r4;

/// @brief Field r5, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_r5, put=__cordl_internal_set_r5)) ::StringW  r5;

/// @brief Field select, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_select, put=__cordl_internal_set_select)) ::StringW  select;

/// @brief Field shoulderLeft, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_shoulderLeft, put=__cordl_internal_set_shoulderLeft)) ::StringW  shoulderLeft;

/// @brief Field shoulderRight, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_shoulderRight, put=__cordl_internal_set_shoulderRight)) ::StringW  shoulderRight;

/// @brief Field start, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::StringW  start;

/// @brief Field stickButtonLeft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickButtonLeft, put=__cordl_internal_set_stickButtonLeft)) ::StringW  stickButtonLeft;

/// @brief Field stickButtonRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickButtonRight, put=__cordl_internal_set_stickButtonRight)) ::StringW  stickButtonRight;

/// @brief Field stickLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickLeft, put=__cordl_internal_set_stickLeft)) ::StringW  stickLeft;

/// @brief Field stickRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickRight, put=__cordl_internal_set_stickRight)) ::StringW  stickRight;

/// @brief Field touchpad, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchpad, put=__cordl_internal_set_touchpad)) ::StringW  touchpad;

/// @brief Field triggerLeft, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerLeft, put=__cordl_internal_set_triggerLeft)) ::StringW  triggerLeft;

/// @brief Field triggerRight, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerRight, put=__cordl_internal_set_triggerRight)) ::StringW  triggerRight;

/// @brief Method GetGlyph, addr 0x1803e7960, size 0x2e0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GlyphText GetGlyph(::GlobalNamespace::GlyphButtonType  buttonType) ;

static inline ::GlobalNamespace::GamepadGlyphs* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_dpadDown() const;

constexpr ::StringW& __cordl_internal_get_dpadDown() ;

constexpr ::StringW const& __cordl_internal_get_dpadLeft() const;

constexpr ::StringW& __cordl_internal_get_dpadLeft() ;

constexpr ::StringW const& __cordl_internal_get_dpadRight() const;

constexpr ::StringW& __cordl_internal_get_dpadRight() ;

constexpr ::StringW const& __cordl_internal_get_dpadUp() const;

constexpr ::StringW& __cordl_internal_get_dpadUp() ;

constexpr ::StringW const& __cordl_internal_get_faceDown() const;

constexpr ::StringW& __cordl_internal_get_faceDown() ;

constexpr ::StringW const& __cordl_internal_get_faceLeft() const;

constexpr ::StringW& __cordl_internal_get_faceLeft() ;

constexpr ::StringW const& __cordl_internal_get_faceRight() const;

constexpr ::StringW& __cordl_internal_get_faceRight() ;

constexpr ::StringW const& __cordl_internal_get_faceUp() const;

constexpr ::StringW& __cordl_internal_get_faceUp() ;

constexpr ::StringW const& __cordl_internal_get_l4() const;

constexpr ::StringW& __cordl_internal_get_l4() ;

constexpr ::StringW const& __cordl_internal_get_l5() const;

constexpr ::StringW& __cordl_internal_get_l5() ;

constexpr ::StringW const& __cordl_internal_get_nMouseL() const;

constexpr ::StringW& __cordl_internal_get_nMouseL() ;

constexpr ::StringW const& __cordl_internal_get_nMouseR() const;

constexpr ::StringW& __cordl_internal_get_nMouseR() ;

constexpr ::StringW const& __cordl_internal_get_psButton() const;

constexpr ::StringW& __cordl_internal_get_psButton() ;

constexpr ::StringW const& __cordl_internal_get_r4() const;

constexpr ::StringW& __cordl_internal_get_r4() ;

constexpr ::StringW const& __cordl_internal_get_r5() const;

constexpr ::StringW& __cordl_internal_get_r5() ;

constexpr ::StringW const& __cordl_internal_get_select() const;

constexpr ::StringW& __cordl_internal_get_select() ;

constexpr ::StringW const& __cordl_internal_get_shoulderLeft() const;

constexpr ::StringW& __cordl_internal_get_shoulderLeft() ;

constexpr ::StringW const& __cordl_internal_get_shoulderRight() const;

constexpr ::StringW& __cordl_internal_get_shoulderRight() ;

constexpr ::StringW const& __cordl_internal_get_start() const;

constexpr ::StringW& __cordl_internal_get_start() ;

constexpr ::StringW const& __cordl_internal_get_stickButtonLeft() const;

constexpr ::StringW& __cordl_internal_get_stickButtonLeft() ;

constexpr ::StringW const& __cordl_internal_get_stickButtonRight() const;

constexpr ::StringW& __cordl_internal_get_stickButtonRight() ;

constexpr ::StringW const& __cordl_internal_get_stickLeft() const;

constexpr ::StringW& __cordl_internal_get_stickLeft() ;

constexpr ::StringW const& __cordl_internal_get_stickRight() const;

constexpr ::StringW& __cordl_internal_get_stickRight() ;

constexpr ::StringW const& __cordl_internal_get_touchpad() const;

constexpr ::StringW& __cordl_internal_get_touchpad() ;

constexpr ::StringW const& __cordl_internal_get_triggerLeft() const;

constexpr ::StringW& __cordl_internal_get_triggerLeft() ;

constexpr ::StringW const& __cordl_internal_get_triggerRight() const;

constexpr ::StringW& __cordl_internal_get_triggerRight() ;

constexpr void __cordl_internal_set_dpadDown(::StringW  value) ;

constexpr void __cordl_internal_set_dpadLeft(::StringW  value) ;

constexpr void __cordl_internal_set_dpadRight(::StringW  value) ;

constexpr void __cordl_internal_set_dpadUp(::StringW  value) ;

constexpr void __cordl_internal_set_faceDown(::StringW  value) ;

constexpr void __cordl_internal_set_faceLeft(::StringW  value) ;

constexpr void __cordl_internal_set_faceRight(::StringW  value) ;

constexpr void __cordl_internal_set_faceUp(::StringW  value) ;

constexpr void __cordl_internal_set_l4(::StringW  value) ;

constexpr void __cordl_internal_set_l5(::StringW  value) ;

constexpr void __cordl_internal_set_nMouseL(::StringW  value) ;

constexpr void __cordl_internal_set_nMouseR(::StringW  value) ;

constexpr void __cordl_internal_set_psButton(::StringW  value) ;

constexpr void __cordl_internal_set_r4(::StringW  value) ;

constexpr void __cordl_internal_set_r5(::StringW  value) ;

constexpr void __cordl_internal_set_select(::StringW  value) ;

constexpr void __cordl_internal_set_shoulderLeft(::StringW  value) ;

constexpr void __cordl_internal_set_shoulderRight(::StringW  value) ;

constexpr void __cordl_internal_set_start(::StringW  value) ;

constexpr void __cordl_internal_set_stickButtonLeft(::StringW  value) ;

constexpr void __cordl_internal_set_stickButtonRight(::StringW  value) ;

constexpr void __cordl_internal_set_stickLeft(::StringW  value) ;

constexpr void __cordl_internal_set_stickRight(::StringW  value) ;

constexpr void __cordl_internal_set_touchpad(::StringW  value) ;

constexpr void __cordl_internal_set_triggerLeft(::StringW  value) ;

constexpr void __cordl_internal_set_triggerRight(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamepadGlyphs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamepadGlyphs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GamepadGlyphs(GamepadGlyphs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamepadGlyphs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamepadGlyphs(GamepadGlyphs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5000};

/// @brief Field dpadUp, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___dpadUp;

/// @brief Field dpadDown, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___dpadDown;

/// @brief Field dpadLeft, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___dpadLeft;

/// @brief Field dpadRight, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___dpadRight;

/// @brief Field stickLeft, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___stickLeft;

/// @brief Field stickRight, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___stickRight;

/// @brief Field stickButtonLeft, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___stickButtonLeft;

/// @brief Field stickButtonRight, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___stickButtonRight;

/// @brief Field faceUp, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___faceUp;

/// @brief Field faceDown, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___faceDown;

/// @brief Field faceLeft, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___faceLeft;

/// @brief Field faceRight, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___faceRight;

/// @brief Field shoulderLeft, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___shoulderLeft;

/// @brief Field triggerLeft, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___triggerLeft;

/// @brief Field shoulderRight, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___shoulderRight;

/// @brief Field triggerRight, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___triggerRight;

/// @brief Field start, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___start;

/// @brief Field select, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___select;

/// @brief Field l4, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___l4;

/// @brief Field l5, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___l5;

/// @brief Field r4, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___r4;

/// @brief Field r5, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___r5;

/// @brief Field touchpad, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___touchpad;

/// @brief Field psButton, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___psButton;

/// @brief Field nMouseR, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___nMouseR;

/// @brief Field nMouseL, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___nMouseL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___dpadUp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___dpadDown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___dpadLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___dpadRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___stickLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___stickRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___stickButtonLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___stickButtonRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___faceUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___faceDown) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___faceLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___faceRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___shoulderLeft) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___triggerLeft) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___shoulderRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___triggerRight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___start) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___select) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___l4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___l5) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___r4) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___r5) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___touchpad) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___psButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___nMouseR) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamepadGlyphs, ___nMouseL) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamepadGlyphs) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
