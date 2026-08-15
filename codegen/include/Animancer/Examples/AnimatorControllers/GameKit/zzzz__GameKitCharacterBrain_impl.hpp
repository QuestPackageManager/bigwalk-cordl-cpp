#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/GameKitCharacterBrain.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__GameKitCharacterBrain_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__AirborneState_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__Character_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802fbb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::Update)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802fbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::UpdateMovement)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1802fbc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain.UpdateActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::UpdateActions)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802fbb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"UpdateActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> const& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_set__Character(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Character = value;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Jump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jump;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState> const& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Jump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jump;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_set__Jump(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jump = value;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attack;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState> const& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__Attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attack;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_set__Attack(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attack = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__AttackInputTimeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackInputTimeOut;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__AttackInputTimeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttackInputTimeOut;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_set__AttackInputTimeOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttackInputTimeOut = value;
}
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__InputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputBuffer;
}
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>* const& Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_get__InputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputBuffer;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::__cordl_internal_set__InputBuffer(::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::CharacterState>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputBuffer = value;
}
inline void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::UpdateActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {"UpdateActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain* Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::GameKitCharacterBrain::GameKitCharacterBrain()   {
}
