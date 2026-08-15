#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/WeaponsCharacterBrain.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Weapon_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__WeaponsCharacterBrain_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Character_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__EquipState_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180303630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180303790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateMovement)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1802ff2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain.UpdateEquip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateEquip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803036f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateEquip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain.UpdateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateAction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803036a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::WeaponsCharacterBrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::WeaponsCharacterBrain::*)()>(&::Animancer::Examples::StateMachines::WeaponsCharacterBrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character>& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Character()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Character> const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Character() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Character;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__Character(::UnityW<::Animancer::Examples::StateMachines::Character>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Character = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__Move(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState>& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attack;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::CharacterState> const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attack;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__Attack(::UnityW<::Animancer::Examples::StateMachines::CharacterState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attack = value;
}
constexpr float_t& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__InputTimeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputTimeOut;
}
constexpr float_t const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__InputTimeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputTimeOut;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__InputTimeOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputTimeOut = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::EquipState>& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Equip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Equip;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::EquipState> const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Equip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Equip;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__Equip(::UnityW<::Animancer::Examples::StateMachines::EquipState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Equip = value;
}
constexpr ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Weapons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weapons;
}
constexpr ::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>> const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__Weapons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weapons;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__Weapons(::ArrayW<::UnityW<::Animancer::Examples::StateMachines::Weapon>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weapons = value;
}
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__InputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputBuffer;
}
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>* const& Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_get__InputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputBuffer;
}
constexpr void Animancer::Examples::StateMachines::WeaponsCharacterBrain::__cordl_internal_set__InputBuffer(::Animancer::FSM::StateMachine_1_InputBuffer<::UnityW<::Animancer::Examples::StateMachines::CharacterState>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputBuffer = value;
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateEquip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateEquip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::UpdateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {"UpdateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::WeaponsCharacterBrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::WeaponsCharacterBrain* Animancer::Examples::StateMachines::WeaponsCharacterBrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::WeaponsCharacterBrain*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::WeaponsCharacterBrain::WeaponsCharacterBrain()   {
}
