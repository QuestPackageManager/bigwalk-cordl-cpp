#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/LoginUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/Chat/zzzz__LoginUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Chat::LoginUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::LoginUI::*)()>(&::Mirror::Examples::Chat::LoginUI::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18155a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::LoginUI.ToggleButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::LoginUI::*)(::StringW)>(&::Mirror::Examples::Chat::LoginUI::ToggleButtons)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18155a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {"ToggleButtons", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::LoginUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::LoginUI::*)()>(&::Mirror::Examples::Chat::LoginUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::InputField>& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_usernameInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usernameInput;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_usernameInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usernameInput;
}
constexpr void Mirror::Examples::Chat::LoginUI::__cordl_internal_set_usernameInput(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usernameInput = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_hostButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_hostButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostButton;
}
constexpr void Mirror::Examples::Chat::LoginUI::__cordl_internal_set_hostButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_clientButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_clientButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientButton;
}
constexpr void Mirror::Examples::Chat::LoginUI::__cordl_internal_set_clientButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::Chat::LoginUI::__cordl_internal_get_errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr void Mirror::Examples::Chat::LoginUI::__cordl_internal_set_errorText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorText = value;
}
inline void Mirror::Examples::Chat::LoginUI::setStaticF_instance(::UnityW<::Mirror::Examples::Chat::LoginUI>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::Examples::Chat::LoginUI>, "instance", ::Mirror::Examples::Chat::LoginUI*>(std::forward<::UnityW<::Mirror::Examples::Chat::LoginUI>>(value));
}
inline ::UnityW<::Mirror::Examples::Chat::LoginUI> Mirror::Examples::Chat::LoginUI::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::Examples::Chat::LoginUI>, "instance", ::Mirror::Examples::Chat::LoginUI*>();
}
inline void Mirror::Examples::Chat::LoginUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::LoginUI::ToggleButtons(::StringW  username)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {"ToggleButtons", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, username);
}
inline void Mirror::Examples::Chat::LoginUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::LoginUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Chat::LoginUI* Mirror::Examples::Chat::LoginUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Chat::LoginUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::LoginUI::LoginUI()   {
}
