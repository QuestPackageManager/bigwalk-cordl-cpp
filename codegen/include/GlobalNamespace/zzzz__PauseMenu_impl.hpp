#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseMenu_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.get_networkManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkManager> (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::get_networkManager)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x180379040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"get_networkManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804374f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.ActionGoToSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::ActionGoToSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180438fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionGoToSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.ActionDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::ActionDisconnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180438ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.ActionResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::ActionResume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180439010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionResume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu.ActionGoToSessionMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::ActionGoToSessionMenu)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionGoToSessionMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseMenu::*)()>(&::GlobalNamespace::PauseMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Mirror::NetworkManager> GlobalNamespace::PauseMenu::get_networkManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"get_networkManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkManager>>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::ActionGoToSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionGoToSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::ActionDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::ActionResume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionResume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::ActionGoToSessionMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {"ActionGoToSessionMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PauseMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PauseMenu* GlobalNamespace::PauseMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PauseMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseMenu::PauseMenu()   {
}
