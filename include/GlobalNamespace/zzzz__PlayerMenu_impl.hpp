#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMenu_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerMenu::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180354410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180354510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.get_hasMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::get_hasMenuEyes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180354920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"get_hasMenuEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.SetMenuOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)(bool)>(&::GlobalNamespace::PlayerMenu::SetMenuOpen)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180354680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetMenuOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.BlockActionsPostMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::BlockActionsPostMenu)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803543e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"BlockActionsPostMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.SetFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)(bool)>(&::GlobalNamespace::PlayerMenu::SetFocus)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180354600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.SetSteamOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::SetSteamOverlay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180354750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetSteamOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.UpdateRemoteMenuEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::UpdateRemoteMenuEyes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803547d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"UpdateRemoteMenuEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180354820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMenu::*)()>(&::GlobalNamespace::PlayerMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerMenu::__cordl_internal_get_smoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr float_t const& GlobalNamespace::PlayerMenu::__cordl_internal_get_smoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_smoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothTime = value;
}
constexpr bool& GlobalNamespace::PlayerMenu::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerMenu::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerMenu::__cordl_internal_get_lockMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockMenu;
}
constexpr bool const& GlobalNamespace::PlayerMenu::__cordl_internal_get_lockMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockMenu;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_lockMenu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockMenu = value;
}
constexpr bool& GlobalNamespace::PlayerMenu::__cordl_internal_get_localHasMenuOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHasMenuOpen;
}
constexpr bool const& GlobalNamespace::PlayerMenu::__cordl_internal_get_localHasMenuOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHasMenuOpen;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_localHasMenuOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localHasMenuOpen = value;
}
constexpr bool& GlobalNamespace::PlayerMenu::__cordl_internal_get_localApplicationHasNoFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localApplicationHasNoFocus;
}
constexpr bool const& GlobalNamespace::PlayerMenu::__cordl_internal_get_localApplicationHasNoFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localApplicationHasNoFocus;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_localApplicationHasNoFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localApplicationHasNoFocus = value;
}
constexpr bool& GlobalNamespace::PlayerMenu::__cordl_internal_get_localHasSteamOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHasSteamOverlay;
}
constexpr bool const& GlobalNamespace::PlayerMenu::__cordl_internal_get_localHasSteamOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHasSteamOverlay;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_localHasSteamOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localHasSteamOverlay = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerMenu::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerMenu::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerMenu::__cordl_internal_get__menuEyesDamped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuEyesDamped;
}
constexpr float_t const& GlobalNamespace::PlayerMenu::__cordl_internal_get__menuEyesDamped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuEyesDamped;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set__menuEyesDamped(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuEyesDamped = value;
}
constexpr float_t& GlobalNamespace::PlayerMenu::__cordl_internal_get__menuEyesVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuEyesVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerMenu::__cordl_internal_get__menuEyesVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuEyesVelocity;
}
constexpr void GlobalNamespace::PlayerMenu::__cordl_internal_set__menuEyesVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuEyesVelocity = value;
}
inline void GlobalNamespace::PlayerMenu::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerMenu::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMenu::get_hasMenuEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"get_hasMenuEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMenu::SetMenuOpen(bool  hasMenuOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetMenuOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasMenuOpen);
}
inline void GlobalNamespace::PlayerMenu::BlockActionsPostMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"BlockActionsPostMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMenu::SetFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::PlayerMenu::SetSteamOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"SetSteamOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMenu::UpdateRemoteMenuEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"UpdateRemoteMenuEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerMenu* GlobalNamespace::PlayerMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMenu::PlayerMenu()   {
}
