#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerGlyphSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerGlyphSet)
namespace GlobalNamespace {
struct ControllerGlyphSet_KeyboardGlyphMapping;
}
namespace GlobalNamespace {
struct ControllerGlyphSet_MouseGlyphs;
}
namespace GlobalNamespace {
class GamepadGlyphs;
}
namespace GlobalNamespace {
struct GlyphButtonType;
}
namespace GlobalNamespace {
struct GlyphControllerType;
}
namespace GlobalNamespace {
struct GlyphText;
}
namespace GlobalNamespace {
struct LocalizedText_MaterialType;
}
namespace Rewired {
struct KeyboardKeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerGlyphSet;
}
namespace GlobalNamespace {
struct ControllerGlyphSet_KeyboardGlyphMapping;
}
namespace GlobalNamespace {
struct ControllerGlyphSet_MouseGlyphs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ControllerGlyphSet*);
MARK_VAL_T(::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping);
MARK_VAL_T(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerGlyphSet*, "", "ControllerGlyphSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping, "", "ControllerGlyphSet/KeyboardGlyphMapping");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs, "", "ControllerGlyphSet/MouseGlyphs");
// Dependencies Rewired.KeyboardKeyCode
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControllerGlyphSet/KeyboardGlyphMapping
struct CORDL_TYPE ControllerGlyphSet_KeyboardGlyphMapping {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ControllerGlyphSet_KeyboardGlyphMapping() ;

// Ctor Parameters [CppParam { name: "keyCode", ty: "::Rewired::KeyboardKeyCode", modifiers: "", def_value: None }, CppParam { name: "glyphCharacter", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ControllerGlyphSet_KeyboardGlyphMapping(::Rewired::KeyboardKeyCode  keyCode, ::StringW  glyphCharacter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4997};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field keyCode, offset: 0x0, size: 0x4, def value: None
 ::Rewired::KeyboardKeyCode  keyCode;

/// @brief Field glyphCharacter, offset: 0x8, size: 0x8, def value: None
 ::StringW  glyphCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping, keyCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping, glyphCharacter) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControllerGlyphSet/MouseGlyphs
struct CORDL_TYPE ControllerGlyphSet_MouseGlyphs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ControllerGlyphSet_MouseGlyphs() ;

// Ctor Parameters [CppParam { name: "leftButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rightButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "middleButton", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "movementButton", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ControllerGlyphSet_MouseGlyphs(::StringW  leftButton, ::StringW  rightButton, ::StringW  middleButton, ::StringW  movementButton) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field leftButton, offset: 0x0, size: 0x8, def value: None
 ::StringW  leftButton;

/// @brief Field rightButton, offset: 0x8, size: 0x8, def value: None
 ::StringW  rightButton;

/// @brief Field middleButton, offset: 0x10, size: 0x8, def value: None
 ::StringW  middleButton;

/// @brief Field movementButton, offset: 0x18, size: 0x8, def value: None
 ::StringW  movementButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs, leftButton) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs, rightButton) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs, middleButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs, movementButton) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ControllerGlyphSet::KeyboardGlyphMapping, ControllerGlyphSet::MouseGlyphs, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerGlyphSet
class CORDL_TYPE ControllerGlyphSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using KeyboardGlyphMapping = ::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping;

using MouseGlyphs = ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs;

/// @brief Field closingTagCutout, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_closingTagCutout, put=__cordl_internal_set_closingTagCutout)) ::StringW  closingTagCutout;

/// @brief Field closingTagTransparent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_closingTagTransparent, put=__cordl_internal_set_closingTagTransparent)) ::StringW  closingTagTransparent;

/// @brief Field gamepadPS4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamepadPS4, put=__cordl_internal_set_gamepadPS4)) ::GlobalNamespace::GamepadGlyphs*  gamepadPS4;

/// @brief Field gamepadPS5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamepadPS5, put=__cordl_internal_set_gamepadPS5)) ::GlobalNamespace::GamepadGlyphs*  gamepadPS5;

/// @brief Field gamepadSteam, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamepadSteam, put=__cordl_internal_set_gamepadSteam)) ::GlobalNamespace::GamepadGlyphs*  gamepadSteam;

/// @brief Field gamepadSwitch2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamepadSwitch2, put=__cordl_internal_set_gamepadSwitch2)) ::GlobalNamespace::GamepadGlyphs*  gamepadSwitch2;

/// @brief Field gamepadXboxOne, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamepadXboxOne, put=__cordl_internal_set_gamepadXboxOne)) ::GlobalNamespace::GamepadGlyphs*  gamepadXboxOne;

/// @brief Field keyboardGlyphMappings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyboardGlyphMappings, put=__cordl_internal_set_keyboardGlyphMappings)) ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>  keyboardGlyphMappings;

/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field mouseGlyphs, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get_mouseGlyphs, put=__cordl_internal_set_mouseGlyphs)) ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs  mouseGlyphs;

/// @brief Field openingTagCutout, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_openingTagCutout, put=__cordl_internal_set_openingTagCutout)) ::StringW  openingTagCutout;

/// @brief Field openingTagTransparent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_openingTagTransparent, put=__cordl_internal_set_openingTagTransparent)) ::StringW  openingTagTransparent;

/// @brief Method GetGamepadGlyph, addr 0x1803e5a20, size 0x160, virtual false, abstract: false, final false
inline ::GlobalNamespace::GlyphText GetGamepadGlyph(::GlobalNamespace::GlyphControllerType  controllerType, ::GlobalNamespace::GlyphButtonType  buttonType) ;

/// @brief Method GetKeyboardGlyphForKeyCode, addr 0x1803e5b80, size 0x120, virtual false, abstract: false, final false
inline ::GlobalNamespace::GlyphText GetKeyboardGlyphForKeyCode(::Rewired::KeyboardKeyCode  keyCode) ;

/// @brief Method GetMouseGlyphForElementName, addr 0x1803e5ca0, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GlyphText GetMouseGlyphForElementName(::StringW  elementName) ;

static inline ::GlobalNamespace::ControllerGlyphSet* New_ctor() ;

/// @brief Method WrapInTags, addr 0x1803e5d80, size 0x60, virtual false, abstract: false, final false
inline ::StringW WrapInTags(::GlobalNamespace::GlyphText  glyphText, ::GlobalNamespace::LocalizedText_MaterialType  materialType) ;

constexpr ::StringW const& __cordl_internal_get_closingTagCutout() const;

constexpr ::StringW& __cordl_internal_get_closingTagCutout() ;

constexpr ::StringW const& __cordl_internal_get_closingTagTransparent() const;

constexpr ::StringW& __cordl_internal_get_closingTagTransparent() ;

constexpr ::GlobalNamespace::GamepadGlyphs* const& __cordl_internal_get_gamepadPS4() const;

constexpr ::GlobalNamespace::GamepadGlyphs*& __cordl_internal_get_gamepadPS4() ;

constexpr ::GlobalNamespace::GamepadGlyphs* const& __cordl_internal_get_gamepadPS5() const;

constexpr ::GlobalNamespace::GamepadGlyphs*& __cordl_internal_get_gamepadPS5() ;

constexpr ::GlobalNamespace::GamepadGlyphs* const& __cordl_internal_get_gamepadSteam() const;

constexpr ::GlobalNamespace::GamepadGlyphs*& __cordl_internal_get_gamepadSteam() ;

constexpr ::GlobalNamespace::GamepadGlyphs* const& __cordl_internal_get_gamepadSwitch2() const;

constexpr ::GlobalNamespace::GamepadGlyphs*& __cordl_internal_get_gamepadSwitch2() ;

constexpr ::GlobalNamespace::GamepadGlyphs* const& __cordl_internal_get_gamepadXboxOne() const;

constexpr ::GlobalNamespace::GamepadGlyphs*& __cordl_internal_get_gamepadXboxOne() ;

constexpr ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping> const& __cordl_internal_get_keyboardGlyphMappings() const;

constexpr ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>& __cordl_internal_get_keyboardGlyphMappings() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs const& __cordl_internal_get_mouseGlyphs() const;

constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs& __cordl_internal_get_mouseGlyphs() ;

constexpr ::StringW const& __cordl_internal_get_openingTagCutout() const;

constexpr ::StringW& __cordl_internal_get_openingTagCutout() ;

constexpr ::StringW const& __cordl_internal_get_openingTagTransparent() const;

constexpr ::StringW& __cordl_internal_get_openingTagTransparent() ;

constexpr void __cordl_internal_set_closingTagCutout(::StringW  value) ;

constexpr void __cordl_internal_set_closingTagTransparent(::StringW  value) ;

constexpr void __cordl_internal_set_gamepadPS4(::GlobalNamespace::GamepadGlyphs*  value) ;

constexpr void __cordl_internal_set_gamepadPS5(::GlobalNamespace::GamepadGlyphs*  value) ;

constexpr void __cordl_internal_set_gamepadSteam(::GlobalNamespace::GamepadGlyphs*  value) ;

constexpr void __cordl_internal_set_gamepadSwitch2(::GlobalNamespace::GamepadGlyphs*  value) ;

constexpr void __cordl_internal_set_gamepadXboxOne(::GlobalNamespace::GamepadGlyphs*  value) ;

constexpr void __cordl_internal_set_keyboardGlyphMappings(::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_mouseGlyphs(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs  value) ;

constexpr void __cordl_internal_set_openingTagCutout(::StringW  value) ;

constexpr void __cordl_internal_set_openingTagTransparent(::StringW  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerGlyphSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerGlyphSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerGlyphSet(ControllerGlyphSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerGlyphSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerGlyphSet(ControllerGlyphSet const& ) = delete;

/// @brief Field MOUSE_AXIS_HORIZONTAL offset 0xffffffff size 0x8
static constexpr ::ConstString  MOUSE_AXIS_HORIZONTAL{u"Axis 0"};

/// @brief Field MOUSE_BUTTON_LEFT offset 0xffffffff size 0x8
static constexpr ::ConstString  MOUSE_BUTTON_LEFT{u"Button 0"};

/// @brief Field MOUSE_BUTTON_MIDDLE offset 0xffffffff size 0x8
static constexpr ::ConstString  MOUSE_BUTTON_MIDDLE{u"Button 2"};

/// @brief Field MOUSE_BUTTON_RIGHT offset 0xffffffff size 0x8
static constexpr ::ConstString  MOUSE_BUTTON_RIGHT{u"Button 1"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4999};

/// @brief Field openingTagTransparent, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___openingTagTransparent;

/// @brief Field closingTagTransparent, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___closingTagTransparent;

/// @brief Field openingTagCutout, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___openingTagCutout;

/// @brief Field closingTagCutout, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___closingTagCutout;

/// @brief Field gamepadXboxOne, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::GamepadGlyphs*  ___gamepadXboxOne;

/// @brief Field gamepadPS4, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::GamepadGlyphs*  ___gamepadPS4;

/// @brief Field gamepadPS5, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::GamepadGlyphs*  ___gamepadPS5;

/// @brief Field gamepadSwitch2, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GamepadGlyphs*  ___gamepadSwitch2;

/// @brief Field gamepadSteam, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::GamepadGlyphs*  ___gamepadSteam;

/// @brief Field keyboardGlyphMappings, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>  ___keyboardGlyphMappings;

/// @brief Field mouseGlyphs, offset: 0x68, size: 0x20, def value: None
 ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs  ___mouseGlyphs;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___openingTagTransparent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___closingTagTransparent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___openingTagCutout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___closingTagCutout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___gamepadXboxOne) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___gamepadPS4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___gamepadPS5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___gamepadSwitch2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___gamepadSteam) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___keyboardGlyphMappings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___mouseGlyphs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerGlyphSet, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerGlyphSet) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
