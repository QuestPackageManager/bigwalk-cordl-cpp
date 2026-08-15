#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindMachine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RebindMachine_def.hpp"
#include "GlobalNamespace/zzzz__RebindMenu_def.hpp"
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RebindMachine.get_rebindPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (*)()>(&::GlobalNamespace::RebindMachine::get_rebindPlayer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"get_rebindPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMachine.get_fallbackControllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)()>(&::GlobalNamespace::RebindMachine::get_fallbackControllerId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043c100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"get_fallbackControllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMachine.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Rebinder_RebindType, ::GlobalNamespace::RebindMenu*)>(&::GlobalNamespace::RebindMachine::ResetToDefault)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18043bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"ResetToDefault", {}, {::i2c::type_of<::GlobalNamespace::Rebinder_RebindType>(), ::i2c::type_of<::GlobalNamespace::RebindMenu*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMachine::*)()>(&::GlobalNamespace::RebindMachine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::Player* GlobalNamespace::RebindMachine::get_rebindPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"get_rebindPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(nullptr, ___internal_method);
}
inline ::System::Guid GlobalNamespace::RebindMachine::get_fallbackControllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"get_fallbackControllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RebindMachine::ResetToDefault(::GlobalNamespace::Rebinder_RebindType  rebindType, ::GlobalNamespace::RebindMenu*  rebindMenu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {"ResetToDefault", {}, {::i2c::type_of<::GlobalNamespace::Rebinder_RebindType>(), ::i2c::type_of<::GlobalNamespace::RebindMenu*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rebindType, rebindMenu);
}
inline void GlobalNamespace::RebindMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RebindMachine* GlobalNamespace::RebindMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindMachine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindMachine::RebindMachine()   {
}
