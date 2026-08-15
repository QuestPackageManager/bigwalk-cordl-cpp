#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/BasicCharacterBrain.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__BasicCharacterBrain_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Character_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::BasicCharacterBrain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::BasicCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::BasicCharacterBrain::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::BasicCharacterBrain.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::BasicCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::BasicCharacterBrain::UpdateMovement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f7060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::BasicCharacterBrain.UpdateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::BasicCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::BasicCharacterBrain::UpdateAction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f7010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"UpdateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::BasicCharacterBrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::BasicCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::BasicCharacterBrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr void Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Character = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_set__Move(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::StateMachines::BasicCharacterBrain::__cordl_internal_set__Action(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
inline void Animancer::Examples::StateMachines::BasicCharacterBrain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::BasicCharacterBrain::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::BasicCharacterBrain::UpdateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {"UpdateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::BasicCharacterBrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::BasicCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::BasicCharacterBrain* Animancer::Examples::StateMachines::BasicCharacterBrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::BasicCharacterBrain*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::BasicCharacterBrain::BasicCharacterBrain()   {
}
