#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionPasswordMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SessionPasswordMenu_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804374f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu.ActionConfirm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::ActionConfirm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18043d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"ActionConfirm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu.ActionCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::ActionCancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18043d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"ActionCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu.GoToSessionMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::GoToSessionMenu)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"GoToSessionMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionPasswordMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionPasswordMenu::*)()>(&::GlobalNamespace::SessionPasswordMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::SessionPasswordMenu::__cordl_internal_get_inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::SessionPasswordMenu::__cordl_internal_get_inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr void GlobalNamespace::SessionPasswordMenu::__cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputField = value;
}
inline void GlobalNamespace::SessionPasswordMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionPasswordMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionPasswordMenu::ActionConfirm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"ActionConfirm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionPasswordMenu::ActionCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"ActionCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionPasswordMenu::GoToSessionMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {"GoToSessionMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionPasswordMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionPasswordMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SessionPasswordMenu* GlobalNamespace::SessionPasswordMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SessionPasswordMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SessionPasswordMenu::SessionPasswordMenu()   {
}
