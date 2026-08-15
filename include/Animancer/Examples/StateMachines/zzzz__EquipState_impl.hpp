#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/EquipState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__EquipState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Weapon_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.get_NextWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Weapon> (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::get_NextWeapon)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"get_NextWeapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.set_NextWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::EquipState::*)(::Animancer::Examples::StateMachines::Weapon*)>(&::Animancer::Examples::StateMachines::EquipState::set_NextWeapon)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"set_NextWeapon", {}, {::i2c::type_of<::Animancer::Examples::StateMachines::Weapon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.get_CurrentWeapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Weapon> (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::get_CurrentWeapon)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"get_CurrentWeapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fac00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.get_CanEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::get_CanEnterState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802faf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802fac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.OnUnequipEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::OnUnequipEnd)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1802fad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"OnUnequipEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterStatePriority (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::EquipState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::EquipState::*)()>(&::Animancer::Examples::StateMachines::EquipState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Animancer::Examples::StateMachines::EquipState::__cordl_internal_get__OnUnequipEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUnequipEnd;
}
constexpr ::System::Action* const& Animancer::Examples::StateMachines::EquipState::__cordl_internal_get__OnUnequipEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUnequipEnd;
}
constexpr void Animancer::Examples::StateMachines::EquipState::__cordl_internal_set__OnUnequipEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnUnequipEnd = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon>& Animancer::Examples::StateMachines::EquipState::__cordl_internal_get__NextWeapon_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextWeapon_k__BackingField;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Weapon> const& Animancer::Examples::StateMachines::EquipState::__cordl_internal_get__NextWeapon_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextWeapon_k__BackingField;
}
constexpr void Animancer::Examples::StateMachines::EquipState::__cordl_internal_set__NextWeapon_k__BackingField(::UnityW<::Animancer::Examples::StateMachines::Weapon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NextWeapon_k__BackingField = value;
}
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> Animancer::Examples::StateMachines::EquipState::get_NextWeapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"get_NextWeapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Weapon>>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::EquipState::set_NextWeapon(::Animancer::Examples::StateMachines::Weapon*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"set_NextWeapon", {}, {::i2c::type_of<::Animancer::Examples::StateMachines::Weapon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> Animancer::Examples::StateMachines::EquipState::get_CurrentWeapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"get_CurrentWeapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Weapon>>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::EquipState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::EquipState::get_CanEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::EquipState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::EquipState::OnUnequipEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {"OnUnequipEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterStatePriority Animancer::Examples::StateMachines::EquipState::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterStatePriority>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::EquipState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::EquipState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::EquipState* Animancer::Examples::StateMachines::EquipState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::EquipState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::EquipState::EquipState()   {
}
