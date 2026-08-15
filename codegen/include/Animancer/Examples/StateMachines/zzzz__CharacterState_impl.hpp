#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterState.hpp"
#include "Animancer/FSM/zzzz__StateBehaviour_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Character_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState_StateMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::CharacterState_StateMachine::*)()>(&::Animancer::Examples::StateMachines::CharacterState_StateMachine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803024d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState_StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Examples::StateMachines::CharacterState_StateMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState_StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterState_StateMachine* Animancer::Examples::StateMachines::CharacterState_StateMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::CharacterState_StateMachine*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::CharacterState_StateMachine::CharacterState_StateMachine()   {
}
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState.get_Character
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Character> (::Animancer::Examples::StateMachines::CharacterState::*)()>(&::Animancer::Examples::StateMachines::CharacterState::get_Character)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                        {"get_Character", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterStatePriority (::Animancer::Examples::StateMachines::CharacterState::*)()>(&::Animancer::Examples::StateMachines::CharacterState::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState.get_CanInterruptSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::CharacterState::*)()>(&::Animancer::Examples::StateMachines::CharacterState::get_CanInterruptSelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState.get_CanExitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::StateMachines::CharacterState::*)()>(&::Animancer::Examples::StateMachines::CharacterState::get_CanExitState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f83c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::CharacterState::*)()>(&::Animancer::Examples::StateMachines::CharacterState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& Animancer::Examples::StateMachines::CharacterState::__cordl_internal_get__Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& Animancer::Examples::StateMachines::CharacterState::__cordl_internal_get__Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr void Animancer::Examples::StateMachines::CharacterState::__cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Character = value;
}
inline ::UnityW<::Animancer::Examples::StateMachines::Character> Animancer::Examples::StateMachines::CharacterState::get_Character()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                        {"get_Character", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Character>>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterStatePriority Animancer::Examples::StateMachines::CharacterState::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterStatePriority>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::CharacterState::get_CanInterruptSelf()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::Examples::StateMachines::CharacterState::get_CanExitState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::CharacterState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterState* Animancer::Examples::StateMachines::CharacterState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::CharacterState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::CharacterState::CharacterState()   {
}
