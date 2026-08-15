#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledButton.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledButton_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledButton::*)(::StringW)>(&::Boxophobic::StyledGUI::StyledButton::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledButton::*)(::StringW, float_t, float_t)>(&::Boxophobic::StyledGUI::StyledButton::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804bd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Boxophobic::StyledGUI::StyledButton::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Boxophobic::StyledGUI::StyledButton::__cordl_internal_set_top(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledButton::__cordl_internal_get_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr void Boxophobic::StyledGUI::StyledButton::__cordl_internal_set_down(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___down = value;
}
inline void Boxophobic::StyledGUI::StyledButton::_ctor(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Boxophobic::StyledGUI::StyledButton::_ctor(::StringW  text, float_t  top, float_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledButton*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, top, down);
}
inline ::Boxophobic::StyledGUI::StyledButton* Boxophobic::StyledGUI::StyledButton::New_ctor(::StringW  text)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledButton*>(text));
}
inline ::Boxophobic::StyledGUI::StyledButton* Boxophobic::StyledGUI::StyledButton::New_ctor(::StringW  text, float_t  top, float_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledButton*>(text, top, down));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledButton::StyledButton()   {
}
