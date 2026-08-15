#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridMoveState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/zzzz__HybridMoveState_def.hpp"
#include "Animancer/zzzz__HybridAnimancerComponent_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState.get_HybridAnimancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::HybridAnimancerComponent> (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::get_HybridAnimancer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"get_HybridAnimancer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::OnEnable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1802fc7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::Update)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1802fcbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState.UpdateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::UpdateAnimation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802fc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"UpdateAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState.UpdateTurning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::UpdateTurning)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802fca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"UpdateTurning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridMoveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridMoveState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridMoveState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802fce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__TurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__TurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr void Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_set__TurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TurnSpeed = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__ParameterFadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterFadeSpeed;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__ParameterFadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterFadeSpeed;
}
constexpr void Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_set__ParameterFadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterFadeSpeed = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__MoveBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveBlend;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_get__MoveBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveBlend;
}
constexpr void Animancer::Examples::AnimatorControllers::HybridMoveState::__cordl_internal_set__MoveBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MoveBlend = value;
}
inline ::UnityW<::Animancer::HybridAnimancerComponent> Animancer::Examples::AnimatorControllers::HybridMoveState::get_HybridAnimancer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"get_HybridAnimancer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::HybridAnimancerComponent>>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridMoveState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridMoveState::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridMoveState::UpdateAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"UpdateAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridMoveState::UpdateTurning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {"UpdateTurning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridMoveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridMoveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::HybridMoveState* Animancer::Examples::AnimatorControllers::HybridMoveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::HybridMoveState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::HybridMoveState::HybridMoveState()   {
}
