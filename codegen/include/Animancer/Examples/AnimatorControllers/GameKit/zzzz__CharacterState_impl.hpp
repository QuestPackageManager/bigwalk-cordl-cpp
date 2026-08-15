#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterState.hpp"
#include "Animancer/FSM/zzzz__StateBehaviour_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__Character_def.hpp"
#include "Animancer/FSM/zzzz__IOwnedState_1_def.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine.get_Locomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::get_Locomotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {"get_Locomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine.get_Airborne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::get_Airborne)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {"get_Airborne", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803024c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_get__Locomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotion;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_get__Locomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotion;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_set__Locomotion(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locomotion = value;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_get__Airborne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Airborne;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_get__Airborne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Airborne;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::__cordl_internal_set__Airborne(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Airborne = value;
}
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::get_Locomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {"get_Locomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>(this, ___internal_method);
}
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::get_Airborne()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {"get_Airborne", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine* Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState_StateMachine::CharacterState_StateMachine()   {
}
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState.get_Character
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_Character)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {"get_Character", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState.get_OwnerStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FSM::StateMachine_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_OwnerStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f84a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {"get_OwnerStateMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState.get_StickToGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_StickToGround)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState.get_RootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_RootMotion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f84c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState.get_FullMovementControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_FullMovementControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>& Animancer::Examples::AnimatorControllers::GameKit::CharacterState::__cordl_internal_get__Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> const& Animancer::Examples::AnimatorControllers::GameKit::CharacterState::__cordl_internal_get__Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::CharacterState::__cordl_internal_set__Character(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Character = value;
}
inline ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_Character()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {"get_Character", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>>(this, ___internal_method);
}
inline ::Animancer::FSM::StateMachine_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_OwnerStateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {"get_OwnerStateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FSM::StateMachine_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*>(this, ___internal_method);
}
inline bool Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_StickToGround()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_RootMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Animancer::Examples::AnimatorControllers::GameKit::CharacterState::get_FullMovementControl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::CharacterState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState* Animancer::Examples::AnimatorControllers::GameKit::CharacterState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState*>());
}
/// @brief Convert operator to "::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>"
constexpr  Animancer::Examples::AnimatorControllers::GameKit::CharacterState::operator ::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*() noexcept {
return static_cast<::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>"
constexpr ::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* Animancer::Examples::AnimatorControllers::GameKit::CharacterState::i___Animancer__FSM__IOwnedState_1___UnityW___Animancer__Examples__AnimatorControllers__GameKit__CharacterState__() noexcept {
return static_cast<::Animancer::FSM::IOwnedState_1<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr  Animancer::Examples::AnimatorControllers::GameKit::CharacterState::operator ::Animancer::FSM::IState*() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* Animancer::Examples::AnimatorControllers::GameKit::CharacterState::i___Animancer__FSM__IState() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState::CharacterState()   {
}
