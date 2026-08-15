#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectConfirmMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectConfirmMenu_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisconnectConfirmMenu.ActionReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectConfirmMenu::*)()>(&::GlobalNamespace::DisconnectConfirmMenu::ActionReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804318b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {"ActionReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectConfirmMenu.ActionDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectConfirmMenu::*)()>(&::GlobalNamespace::DisconnectConfirmMenu::ActionDisconnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180431780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {"ActionDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisconnectConfirmMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectConfirmMenu::*)()>(&::GlobalNamespace::DisconnectConfirmMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DisconnectConfirmMenu::ActionReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {"ActionReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectConfirmMenu::ActionDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {"ActionDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisconnectConfirmMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisconnectConfirmMenu* GlobalNamespace::DisconnectConfirmMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisconnectConfirmMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectConfirmMenu::DisconnectConfirmMenu()   {
}
