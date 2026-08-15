#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Weapon.hpp"
#include "Animancer/zzzz__ClipTransition_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Weapon_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Weapon.get_AttackAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Animancer::ClipTransition*> (::Animancer::Examples::StateMachines::Weapon::*)()>(&::Animancer::Examples::StateMachines::Weapon::get_AttackAnimations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_AttackAnimations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Weapon.get_EquipAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipTransition* (::Animancer::Examples::StateMachines::Weapon::*)()>(&::Animancer::Examples::StateMachines::Weapon::get_EquipAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_EquipAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Weapon.get_UnequipAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipTransition* (::Animancer::Examples::StateMachines::Weapon::*)()>(&::Animancer::Examples::StateMachines::Weapon::get_UnequipAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_UnequipAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Weapon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Weapon::*)()>(&::Animancer::Examples::StateMachines::Weapon::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Animancer::ClipTransition*>& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__AttackAnimations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackAnimations;
}
constexpr ::ArrayW<::Animancer::ClipTransition*> const& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__AttackAnimations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackAnimations;
}
constexpr void Animancer::Examples::StateMachines::Weapon::__cordl_internal_set__AttackAnimations(::ArrayW<::Animancer::ClipTransition*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttackAnimations = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__EquipAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EquipAnimation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__EquipAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EquipAnimation;
}
constexpr void Animancer::Examples::StateMachines::Weapon::__cordl_internal_set__EquipAnimation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EquipAnimation = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__UnequipAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnequipAnimation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::StateMachines::Weapon::__cordl_internal_get__UnequipAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnequipAnimation;
}
constexpr void Animancer::Examples::StateMachines::Weapon::__cordl_internal_set__UnequipAnimation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnequipAnimation = value;
}
inline ::ArrayW<::Animancer::ClipTransition*> Animancer::Examples::StateMachines::Weapon::get_AttackAnimations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_AttackAnimations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Animancer::ClipTransition*>>(this, ___internal_method);
}
inline ::Animancer::ClipTransition* Animancer::Examples::StateMachines::Weapon::get_EquipAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_EquipAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipTransition*>(this, ___internal_method);
}
inline ::Animancer::ClipTransition* Animancer::Examples::StateMachines::Weapon::get_UnequipAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {"get_UnequipAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipTransition*>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Weapon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Weapon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::Weapon* Animancer::Examples::StateMachines::Weapon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::Weapon*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::Weapon::Weapon()   {
}
