#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/AttackState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__AttackState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Weapon_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState.get_Weapon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Weapon> (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::get_Weapon)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"get_Weapon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState.get_CanEnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::get_CanEnterState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802f6a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState.ShouldRestartCombo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::ShouldRestartCombo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f6bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"ShouldRestartCombo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterStatePriority (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::AttackState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::AttackState::*)()>(&::Animancer::Examples::StateMachines::AttackState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Animancer::Examples::StateMachines::AttackState::__cordl_internal_get__AttackIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackIndex;
}
constexpr int32_t const& Animancer::Examples::StateMachines::AttackState::__cordl_internal_get__AttackIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackIndex;
}
constexpr void Animancer::Examples::StateMachines::AttackState::__cordl_internal_set__AttackIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttackIndex = value;
}
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> Animancer::Examples::StateMachines::AttackState::get_Weapon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"get_Weapon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Weapon>>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::AttackState::get_CanEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::AttackState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::AttackState::ShouldRestartCombo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {"ShouldRestartCombo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterStatePriority Animancer::Examples::StateMachines::AttackState::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterStatePriority>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::AttackState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::AttackState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::AttackState* Animancer::Examples::StateMachines::AttackState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::AttackState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::AttackState::AttackState()   {
}
