#pragma once
// IWYU pragma private; include "GlobalNamespace/GamepadGlyphs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GamepadGlyphs_def.hpp"
#include "GlobalNamespace/zzzz__GlyphButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GlyphText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GamepadGlyphs.GetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphText (::GlobalNamespace::GamepadGlyphs::*)(::GlobalNamespace::GlyphButtonType)>(&::GlobalNamespace::GamepadGlyphs::GetGlyph)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803e7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamepadGlyphs*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::GlobalNamespace::GlyphButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamepadGlyphs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamepadGlyphs::*)()>(&::GlobalNamespace::GamepadGlyphs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamepadGlyphs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadUp;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadUp;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_dpadUp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadUp = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadDown;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadDown;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_dpadDown(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadDown = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_dpadLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_dpadRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_dpadRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_stickLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_stickRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickButtonLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickButtonLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickButtonLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickButtonLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_stickButtonLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickButtonLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickButtonRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickButtonRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_stickButtonRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickButtonRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_stickButtonRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickButtonRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceUp;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceUp;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_faceUp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceUp = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDown;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceDown;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_faceDown(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceDown = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_faceLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_faceRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_faceRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_shoulderLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_shoulderLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_shoulderLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shoulderLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_triggerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLeft;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_triggerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLeft;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_triggerLeft(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerLeft = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_shoulderRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_shoulderRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_shoulderRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shoulderRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_triggerRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRight;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_triggerRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRight;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_triggerRight(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerRight = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_start(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_select()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_select() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_select(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___select = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_l4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___l4;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_l4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___l4;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_l4(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___l4 = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_l5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___l5;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_l5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___l5;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_l5(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___l5 = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_r4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r4;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_r4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r4;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_r4(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r4 = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_r5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r5;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_r5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r5;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_r5(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r5 = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_touchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchpad;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_touchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchpad;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_touchpad(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchpad = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_psButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psButton;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_psButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psButton;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_psButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psButton = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_nMouseR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseR;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_nMouseR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseR;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_nMouseR(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nMouseR = value;
}
constexpr ::StringW& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_nMouseL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseL;
}
constexpr ::StringW const& GlobalNamespace::GamepadGlyphs::__cordl_internal_get_nMouseL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseL;
}
constexpr void GlobalNamespace::GamepadGlyphs::__cordl_internal_set_nMouseL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nMouseL = value;
}
inline ::GlobalNamespace::GlyphText GlobalNamespace::GamepadGlyphs::GetGlyph(::GlobalNamespace::GlyphButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamepadGlyphs*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::GlobalNamespace::GlyphButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphText>(this, ___internal_method, buttonType);
}
inline void GlobalNamespace::GamepadGlyphs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamepadGlyphs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GamepadGlyphs* GlobalNamespace::GamepadGlyphs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamepadGlyphs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamepadGlyphs::GamepadGlyphs()   {
}
