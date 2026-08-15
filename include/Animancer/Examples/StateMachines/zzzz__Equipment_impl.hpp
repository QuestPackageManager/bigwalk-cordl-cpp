#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Equipment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Equipment_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Weapon_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment.get_Weapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Weapon> (::Animancer::Examples::StateMachines::Equipment::*)()>(&::Animancer::Examples::StateMachines::Equipment::get_Weapon)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"get_Weapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment.set_Weapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Equipment::*)(::Animancer::Examples::StateMachines::Weapon*)>(&::Animancer::Examples::StateMachines::Equipment::set_Weapon)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802fb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"set_Weapon", {}, {::i2c::type_of<::Animancer::Examples::StateMachines::Weapon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Equipment::*)()>(&::Animancer::Examples::StateMachines::Equipment::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fb060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment.AttachWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Equipment::*)()>(&::Animancer::Examples::StateMachines::Equipment::AttachWeapon)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802faf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"AttachWeapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment.DetachWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Equipment::*)()>(&::Animancer::Examples::StateMachines::Equipment::DetachWeapon)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802fb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"DetachWeapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Equipment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Equipment::*)()>(&::Animancer::Examples::StateMachines::Equipment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::StateMachines::Equipment::__cordl_internal_get__WeaponHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeaponHolder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::StateMachines::Equipment::__cordl_internal_get__WeaponHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeaponHolder;
}
constexpr void Animancer::Examples::StateMachines::Equipment::__cordl_internal_set__WeaponHolder(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeaponHolder = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon>& Animancer::Examples::StateMachines::Equipment::__cordl_internal_get__Weapon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weapon;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon> const& Animancer::Examples::StateMachines::Equipment::__cordl_internal_get__Weapon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weapon;
}
constexpr void Animancer::Examples::StateMachines::Equipment::__cordl_internal_set__Weapon(::UnityW<::Animancer::Examples::StateMachines::Weapon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weapon = value;
}
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> Animancer::Examples::StateMachines::Equipment::get_Weapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"get_Weapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Weapon>>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Equipment::set_Weapon(::Animancer::Examples::StateMachines::Weapon*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"set_Weapon", {}, {::i2c::type_of<::Animancer::Examples::StateMachines::Weapon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::StateMachines::Equipment::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Equipment::AttachWeapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"AttachWeapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Equipment::DetachWeapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {"DetachWeapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Equipment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Equipment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::Equipment* Animancer::Examples::StateMachines::Equipment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::Equipment*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::Equipment::Equipment()   {
}
