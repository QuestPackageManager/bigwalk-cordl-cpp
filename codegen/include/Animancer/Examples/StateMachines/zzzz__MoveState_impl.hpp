#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/MoveState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__MoveState_def.hpp"
#include "Animancer/zzzz__LinearMixerTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::MoveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::MoveState::*)()>(&::Animancer::Examples::StateMachines::MoveState::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802feed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::MoveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::MoveState::*)()>(&::Animancer::Examples::StateMachines::MoveState::Update)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1802ff070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::MoveState.UpdateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::MoveState::*)()>(&::Animancer::Examples::StateMachines::MoveState::UpdateSpeed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802fef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"UpdateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::MoveState.UpdateTurning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::MoveState::*)()>(&::Animancer::Examples::StateMachines::MoveState::UpdateTurning)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802fca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"UpdateTurning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::MoveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::MoveState::*)()>(&::Animancer::Examples::StateMachines::MoveState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802fce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__TurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr float_t const& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__TurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr void Animancer::Examples::StateMachines::MoveState::__cordl_internal_set__TurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TurnSpeed = value;
}
constexpr float_t& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__ParameterFadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterFadeSpeed;
}
constexpr float_t const& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__ParameterFadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterFadeSpeed;
}
constexpr void Animancer::Examples::StateMachines::MoveState::__cordl_internal_set__ParameterFadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterFadeSpeed = value;
}
constexpr ::Animancer::LinearMixerTransition*& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__Animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr ::Animancer::LinearMixerTransition* const& Animancer::Examples::StateMachines::MoveState::__cordl_internal_get__Animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr void Animancer::Examples::StateMachines::MoveState::__cordl_internal_set__Animation(::Animancer::LinearMixerTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animation = value;
}
inline void Animancer::Examples::StateMachines::MoveState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::MoveState::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::MoveState::UpdateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"UpdateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::MoveState::UpdateTurning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {"UpdateTurning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::MoveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::MoveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::MoveState* Animancer::Examples::StateMachines::MoveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::MoveState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::MoveState::MoveState()   {
}
