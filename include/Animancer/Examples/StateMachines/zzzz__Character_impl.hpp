#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/Character.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Character_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterParameters_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__Equipment_def.hpp"
#include "Animancer/Examples/StateMachines/zzzz__HealthPool_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.get_Animancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::AnimancerComponent> (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::get_Animancer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Animancer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.get_StateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterState_StateMachine* (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::get_StateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_StateMachine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.get_Health
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::HealthPool> (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::get_Health)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Health", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Examples::StateMachines::CharacterParameters* (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::get_Parameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character.get_Equipment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::Examples::StateMachines::Equipment> (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::get_Equipment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Equipment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::Character._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::Character::*)()>(&::Animancer::Examples::StateMachines::Character::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::StateMachines::Character::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::Examples::StateMachines::CharacterState_StateMachine*& Animancer::Examples::StateMachines::Character::__cordl_internal_get__StateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateMachine;
}
constexpr ::Animancer::Examples::StateMachines::CharacterState_StateMachine* const& Animancer::Examples::StateMachines::Character::__cordl_internal_get__StateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateMachine;
}
constexpr void Animancer::Examples::StateMachines::Character::__cordl_internal_set__StateMachine(::Animancer::Examples::StateMachines::CharacterState_StateMachine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StateMachine = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::HealthPool>& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Health()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Health;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::HealthPool> const& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Health() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Health;
}
constexpr void Animancer::Examples::StateMachines::Character::__cordl_internal_set__Health(::UnityW<::Animancer::Examples::StateMachines::HealthPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Health = value;
}
constexpr ::Animancer::Examples::StateMachines::CharacterParameters*& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters;
}
constexpr ::Animancer::Examples::StateMachines::CharacterParameters* const& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters;
}
constexpr void Animancer::Examples::StateMachines::Character::__cordl_internal_set__Parameters(::Animancer::Examples::StateMachines::CharacterParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameters = value;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Equipment>& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Equipment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Equipment;
}
constexpr ::UnityW<::Animancer::Examples::StateMachines::Equipment> const& Animancer::Examples::StateMachines::Character::__cordl_internal_get__Equipment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Equipment;
}
constexpr void Animancer::Examples::StateMachines::Character::__cordl_internal_set__Equipment(::UnityW<::Animancer::Examples::StateMachines::Equipment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Equipment = value;
}
inline ::UnityW<::Animancer::AnimancerComponent> Animancer::Examples::StateMachines::Character::get_Animancer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Animancer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::AnimancerComponent>>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterState_StateMachine* Animancer::Examples::StateMachines::Character::get_StateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_StateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterState_StateMachine*>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Character::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Animancer::Examples::StateMachines::HealthPool> Animancer::Examples::StateMachines::Character::get_Health()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Health", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::HealthPool>>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterParameters* Animancer::Examples::StateMachines::Character::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Examples::StateMachines::CharacterParameters*>(this, ___internal_method);
}
inline ::UnityW<::Animancer::Examples::StateMachines::Equipment> Animancer::Examples::StateMachines::Character::get_Equipment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {"get_Equipment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::Examples::StateMachines::Equipment>>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::Character::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::Character*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::Character* Animancer::Examples::StateMachines::Character::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::Character*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::Character::Character()   {
}
