#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PasswordMenu_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PasswordMenu.SubmitPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordMenu::*)()>(&::GlobalNamespace::PasswordMenu::SubmitPassword)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180438e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"SubmitPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordMenu.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordMenu::*)()>(&::GlobalNamespace::PasswordMenu::Cancel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180438d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordMenu.GoToConnectingMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordMenu::*)()>(&::GlobalNamespace::PasswordMenu::GoToConnectingMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180438dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"GoToConnectingMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordMenu.GoToJoinMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordMenu::*)()>(&::GlobalNamespace::PasswordMenu::GoToJoinMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804313d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"GoToJoinMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PasswordMenu::*)()>(&::GlobalNamespace::PasswordMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::PasswordMenu::__cordl_internal_get_passwordField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::PasswordMenu::__cordl_internal_get_passwordField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordField;
}
constexpr void GlobalNamespace::PasswordMenu::__cordl_internal_set_passwordField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passwordField = value;
}
inline void GlobalNamespace::PasswordMenu::SubmitPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"SubmitPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordMenu::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordMenu::GoToConnectingMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"GoToConnectingMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordMenu::GoToJoinMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {"GoToJoinMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PasswordMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PasswordMenu* GlobalNamespace::PasswordMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PasswordMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PasswordMenu::PasswordMenu()   {
}
