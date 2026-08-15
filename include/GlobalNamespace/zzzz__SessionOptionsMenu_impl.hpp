#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionOptionsMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SessionOptionsMenu_def.hpp"
#include "GlobalNamespace/zzzz__SettingsRow_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SessionOptionsMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionOptionsMenu::*)()>(&::GlobalNamespace::SessionOptionsMenu::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18043d720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionOptionsMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionOptionsMenu::*)()>(&::GlobalNamespace::SessionOptionsMenu::ActionBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionOptionsMenu.Back
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionOptionsMenu::*)()>(&::GlobalNamespace::SessionOptionsMenu::Back)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"Back", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionOptionsMenu.GoToPlayerCountMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionOptionsMenu::*)()>(&::GlobalNamespace::SessionOptionsMenu::GoToPlayerCountMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"GoToPlayerCountMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionOptionsMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionOptionsMenu::*)()>(&::GlobalNamespace::SessionOptionsMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SettingsRow>& GlobalNamespace::SessionOptionsMenu::__cordl_internal_get_settingsRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsRow;
}
constexpr ::UnityW<::GlobalNamespace::SettingsRow> const& GlobalNamespace::SessionOptionsMenu::__cordl_internal_get_settingsRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsRow;
}
constexpr void GlobalNamespace::SessionOptionsMenu::__cordl_internal_set_settingsRow(::UnityW<::GlobalNamespace::SettingsRow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsRow = value;
}
inline void GlobalNamespace::SessionOptionsMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionOptionsMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionOptionsMenu::Back()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"Back", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionOptionsMenu::GoToPlayerCountMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {"GoToPlayerCountMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionOptionsMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionOptionsMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SessionOptionsMenu* GlobalNamespace::SessionOptionsMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SessionOptionsMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SessionOptionsMenu::SessionOptionsMenu()   {
}
