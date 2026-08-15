#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterParameters.get_MovementDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Examples::StateMachines::CharacterParameters::*)()>(&::Animancer::Examples::StateMachines::CharacterParameters::get_MovementDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f80b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"get_MovementDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterParameters.set_MovementDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::CharacterParameters::*)(::UnityEngine::Vector3)>(&::Animancer::Examples::StateMachines::CharacterParameters::set_MovementDirection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802f8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"set_MovementDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterParameters.get_WantsToRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::Animancer::Examples::StateMachines::CharacterParameters::*)()>(&::Animancer::Examples::StateMachines::CharacterParameters::get_WantsToRun)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"get_WantsToRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::CharacterParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::CharacterParameters::*)()>(&::Animancer::Examples::StateMachines::CharacterParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_get__MovementDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementDirection;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_get__MovementDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementDirection;
}
constexpr void Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_set__MovementDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementDirection = value;
}
constexpr bool& Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_get__WantsToRun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WantsToRun;
}
constexpr bool const& Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_get__WantsToRun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WantsToRun;
}
constexpr void Animancer::Examples::StateMachines::CharacterParameters::__cordl_internal_set__WantsToRun(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WantsToRun = value;
}
inline ::UnityEngine::Vector3 Animancer::Examples::StateMachines::CharacterParameters::get_MovementDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"get_MovementDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::CharacterParameters::set_MovementDirection(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"set_MovementDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::by_ref<bool> Animancer::Examples::StateMachines::CharacterParameters::get_WantsToRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {"get_WantsToRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::CharacterParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::CharacterParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::CharacterParameters* Animancer::Examples::StateMachines::CharacterParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::CharacterParameters*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::CharacterParameters::CharacterParameters()   {
}
