#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordHideShowButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PasswordHideShowButton_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PasswordHideShowButton.HideShowPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordHideShowButton::*)()>(&::GlobalNamespace::PasswordHideShowButton::HideShowPassword)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180427d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordHideShowButton*>(),
                        {"HideShowPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordHideShowButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordHideShowButton::*)()>(&::GlobalNamespace::PasswordHideShowButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordHideShowButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr void GlobalNamespace::PasswordHideShowButton::__cordl_internal_set_buttonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonText = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_passwordField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_passwordField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordField;
}
constexpr void GlobalNamespace::PasswordHideShowButton::__cordl_internal_set_passwordField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passwordField = value;
}
constexpr ::StringW& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_characterWhenHidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterWhenHidden;
}
constexpr ::StringW const& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_characterWhenHidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterWhenHidden;
}
constexpr void GlobalNamespace::PasswordHideShowButton::__cordl_internal_set_characterWhenHidden(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterWhenHidden = value;
}
constexpr ::StringW& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_characterWhenNotHidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterWhenNotHidden;
}
constexpr ::StringW const& GlobalNamespace::PasswordHideShowButton::__cordl_internal_get_characterWhenNotHidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterWhenNotHidden;
}
constexpr void GlobalNamespace::PasswordHideShowButton::__cordl_internal_set_characterWhenNotHidden(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterWhenNotHidden = value;
}
inline void GlobalNamespace::PasswordHideShowButton::HideShowPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordHideShowButton*>(),
                        {"HideShowPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordHideShowButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordHideShowButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PasswordHideShowButton* GlobalNamespace::PasswordHideShowButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PasswordHideShowButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PasswordHideShowButton::PasswordHideShowButton()   {
}
