#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/RootMotionRedirect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__RootMotionRedirect_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::RootMotionRedirect.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::RootMotionRedirect::*)()>(&::Animancer::Examples::StateMachines::RootMotionRedirect::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x180300c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::RootMotionRedirect*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::RootMotionRedirect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::RootMotionRedirect::*)()>(&::Animancer::Examples::StateMachines::RootMotionRedirect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::RootMotionRedirect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_get__Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_get__Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rigidbody;
}
constexpr void Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_set__Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_get__Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_get__Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr void Animancer::Examples::StateMachines::RootMotionRedirect::__cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animator = value;
}
inline void Animancer::Examples::StateMachines::RootMotionRedirect::OnAnimatorMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::RootMotionRedirect*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::RootMotionRedirect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::RootMotionRedirect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::RootMotionRedirect* Animancer::Examples::StateMachines::RootMotionRedirect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::RootMotionRedirect*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::RootMotionRedirect::RootMotionRedirect()   {
}
