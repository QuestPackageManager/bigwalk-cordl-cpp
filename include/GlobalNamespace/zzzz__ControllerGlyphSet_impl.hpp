#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerGlyphSet.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerGlyphSet_def.hpp"
#include "GlobalNamespace/zzzz__ControllerGlyphSet_def.hpp"
#include "GlobalNamespace/zzzz__GamepadGlyphs_def.hpp"
#include "GlobalNamespace/zzzz__GlyphButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GlyphControllerType_def.hpp"
#include "GlobalNamespace/zzzz__GlyphText_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "keyCode", ty: "::Rewired::KeyboardKeyCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphCharacter", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping::ControllerGlyphSet_KeyboardGlyphMapping(::Rewired::KeyboardKeyCode  keyCode, ::StringW  glyphCharacter) noexcept  {
this->keyCode = keyCode;
this->glyphCharacter = glyphCharacter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping::ControllerGlyphSet_KeyboardGlyphMapping()   {
}
// Ctor Parameters [CppParam { name: "leftButton", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightButton", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "middleButton", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "movementButton", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs::ControllerGlyphSet_MouseGlyphs(::StringW  leftButton, ::StringW  rightButton, ::StringW  middleButton, ::StringW  movementButton) noexcept  {
this->leftButton = leftButton;
this->rightButton = rightButton;
this->middleButton = middleButton;
this->movementButton = movementButton;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs::ControllerGlyphSet_MouseGlyphs()   {
}
//  Writing Method size for method: ::GlobalNamespace::ControllerGlyphSet.WrapInTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ControllerGlyphSet::*)(::GlobalNamespace::GlyphText, ::GlobalNamespace::LocalizedText_MaterialType)>(&::GlobalNamespace::ControllerGlyphSet::WrapInTags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803e5d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"WrapInTags", {}, {::i2c::type_of<::GlobalNamespace::GlyphText>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerGlyphSet.GetGamepadGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphText (::GlobalNamespace::ControllerGlyphSet::*)(::GlobalNamespace::GlyphControllerType, ::GlobalNamespace::GlyphButtonType)>(&::GlobalNamespace::ControllerGlyphSet::GetGamepadGlyph)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetGamepadGlyph", {}, {::i2c::type_of<::GlobalNamespace::GlyphControllerType>(), ::i2c::type_of<::GlobalNamespace::GlyphButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerGlyphSet.GetKeyboardGlyphForKeyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphText (::GlobalNamespace::ControllerGlyphSet::*)(::Rewired::KeyboardKeyCode)>(&::GlobalNamespace::ControllerGlyphSet::GetKeyboardGlyphForKeyCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803e5b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetKeyboardGlyphForKeyCode", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerGlyphSet.GetMouseGlyphForElementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphText (::GlobalNamespace::ControllerGlyphSet::*)(::StringW)>(&::GlobalNamespace::ControllerGlyphSet::GetMouseGlyphForElementName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803e5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetMouseGlyphForElementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerGlyphSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerGlyphSet::*)()>(&::GlobalNamespace::ControllerGlyphSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_openingTagTransparent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingTagTransparent;
}
constexpr ::StringW const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_openingTagTransparent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingTagTransparent;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_openingTagTransparent(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openingTagTransparent = value;
}
constexpr ::StringW& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_closingTagTransparent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingTagTransparent;
}
constexpr ::StringW const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_closingTagTransparent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingTagTransparent;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_closingTagTransparent(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closingTagTransparent = value;
}
constexpr ::StringW& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_openingTagCutout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingTagCutout;
}
constexpr ::StringW const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_openingTagCutout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingTagCutout;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_openingTagCutout(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openingTagCutout = value;
}
constexpr ::StringW& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_closingTagCutout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingTagCutout;
}
constexpr ::StringW const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_closingTagCutout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingTagCutout;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_closingTagCutout(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closingTagCutout = value;
}
constexpr ::GlobalNamespace::GamepadGlyphs*& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadXboxOne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadXboxOne;
}
constexpr ::GlobalNamespace::GamepadGlyphs* const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadXboxOne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadXboxOne;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_gamepadXboxOne(::GlobalNamespace::GamepadGlyphs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamepadXboxOne = value;
}
constexpr ::GlobalNamespace::GamepadGlyphs*& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadPS4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadPS4;
}
constexpr ::GlobalNamespace::GamepadGlyphs* const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadPS4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadPS4;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_gamepadPS4(::GlobalNamespace::GamepadGlyphs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamepadPS4 = value;
}
constexpr ::GlobalNamespace::GamepadGlyphs*& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadPS5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadPS5;
}
constexpr ::GlobalNamespace::GamepadGlyphs* const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadPS5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadPS5;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_gamepadPS5(::GlobalNamespace::GamepadGlyphs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamepadPS5 = value;
}
constexpr ::GlobalNamespace::GamepadGlyphs*& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadSwitch2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadSwitch2;
}
constexpr ::GlobalNamespace::GamepadGlyphs* const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadSwitch2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadSwitch2;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_gamepadSwitch2(::GlobalNamespace::GamepadGlyphs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamepadSwitch2 = value;
}
constexpr ::GlobalNamespace::GamepadGlyphs*& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadSteam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadSteam;
}
constexpr ::GlobalNamespace::GamepadGlyphs* const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_gamepadSteam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamepadSteam;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_gamepadSteam(::GlobalNamespace::GamepadGlyphs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamepadSteam = value;
}
constexpr ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_keyboardGlyphMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardGlyphMappings;
}
constexpr ::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping> const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_keyboardGlyphMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardGlyphMappings;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_keyboardGlyphMappings(::ArrayW<::GlobalNamespace::ControllerGlyphSet_KeyboardGlyphMapping>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyboardGlyphMappings = value;
}
constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_mouseGlyphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseGlyphs;
}
constexpr ::GlobalNamespace::ControllerGlyphSet_MouseGlyphs const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_mouseGlyphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseGlyphs;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_mouseGlyphs(::GlobalNamespace::ControllerGlyphSet_MouseGlyphs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouseGlyphs = value;
}
constexpr bool& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ControllerGlyphSet::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ControllerGlyphSet::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline ::StringW GlobalNamespace::ControllerGlyphSet::WrapInTags(::GlobalNamespace::GlyphText  glyphText, ::GlobalNamespace::LocalizedText_MaterialType  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"WrapInTags", {}, {::i2c::type_of<::GlobalNamespace::GlyphText>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, glyphText, materialType);
}
inline ::GlobalNamespace::GlyphText GlobalNamespace::ControllerGlyphSet::GetGamepadGlyph(::GlobalNamespace::GlyphControllerType  controllerType, ::GlobalNamespace::GlyphButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetGamepadGlyph", {}, {::i2c::type_of<::GlobalNamespace::GlyphControllerType>(), ::i2c::type_of<::GlobalNamespace::GlyphButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphText>(this, ___internal_method, controllerType, buttonType);
}
inline ::GlobalNamespace::GlyphText GlobalNamespace::ControllerGlyphSet::GetKeyboardGlyphForKeyCode(::Rewired::KeyboardKeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetKeyboardGlyphForKeyCode", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphText>(this, ___internal_method, keyCode);
}
inline ::GlobalNamespace::GlyphText GlobalNamespace::ControllerGlyphSet::GetMouseGlyphForElementName(::StringW  elementName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {"GetMouseGlyphForElementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphText>(this, ___internal_method, elementName);
}
inline void GlobalNamespace::ControllerGlyphSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerGlyphSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ControllerGlyphSet* GlobalNamespace::ControllerGlyphSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerGlyphSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerGlyphSet::ControllerGlyphSet()   {
}
