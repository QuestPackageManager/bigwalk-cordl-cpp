#pragma once
// IWYU pragma private; include "GlobalNamespace/KickConfirmMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KickConfirmMenu_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KickConfirmMenu.ActionReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KickConfirmMenu::*)()>(&::GlobalNamespace::KickConfirmMenu::ActionReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"ActionReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KickConfirmMenu.ActionServerKickAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KickConfirmMenu::*)()>(&::GlobalNamespace::KickConfirmMenu::ActionServerKickAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180435540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"ActionServerKickAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KickConfirmMenu.Kick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KickConfirmMenu::*)()>(&::GlobalNamespace::KickConfirmMenu::Kick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180435600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"Kick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KickConfirmMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KickConfirmMenu::*)()>(&::GlobalNamespace::KickConfirmMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KickConfirmMenu::ActionReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"ActionReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KickConfirmMenu::ActionServerKickAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"ActionServerKickAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KickConfirmMenu::Kick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {"Kick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KickConfirmMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KickConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KickConfirmMenu* GlobalNamespace::KickConfirmMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KickConfirmMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KickConfirmMenu::KickConfirmMenu()   {
}
