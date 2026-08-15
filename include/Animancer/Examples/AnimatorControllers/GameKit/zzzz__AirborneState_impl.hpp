#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/AirborneState.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__AirborneState_def.hpp"
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__LandingState_def.hpp"
#include "Animancer/zzzz__LinearMixerTransition_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.get_StickToGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::get_StickToGround)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.get_RootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::get_RootMotion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                    {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::FixedUpdate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1802f6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.TryJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::TryJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802f6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"TryJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState.CancelJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::CancelJump)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"CancelJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::*)()>(&::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::LinearMixerTransition*& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__Animations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr ::Animancer::LinearMixerTransition* const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__Animations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__Animations(::Animancer::LinearMixerTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animations = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__JumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpSpeed;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__JumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpSpeed;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__JumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JumpSpeed = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__JumpAbortSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpAbortSpeed;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__JumpAbortSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JumpAbortSpeed;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__JumpAbortSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JumpAbortSpeed = value;
}
constexpr float_t& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__TurnSpeedProportion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeedProportion;
}
constexpr float_t const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__TurnSpeedProportion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeedProportion;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__TurnSpeedProportion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TurnSpeedProportion = value;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__LandingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LandingState;
}
constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState> const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__LandingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LandingState;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__LandingState(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::LandingState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LandingState = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__PlayAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayAudio;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__PlayAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayAudio;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__PlayAudio(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayAudio = value;
}
constexpr bool& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__IsJumping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsJumping;
}
constexpr bool const& Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_get__IsJumping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsJumping;
}
constexpr void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::__cordl_internal_set__IsJumping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsJumping = value;
}
inline void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::AnimatorControllers::GameKit::AirborneState::get_StickToGround()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::Examples::AnimatorControllers::GameKit::AirborneState::get_RootMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::Examples::AnimatorControllers::GameKit::AirborneState::TryJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"TryJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::CancelJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {"CancelJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::GameKit::AirborneState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState* Animancer::Examples::AnimatorControllers::GameKit::AirborneState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::GameKit::AirborneState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::GameKit::AirborneState::AirborneState()   {
}
