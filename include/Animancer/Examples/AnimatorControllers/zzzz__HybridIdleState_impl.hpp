#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridIdleState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/AnimatorControllers/zzzz__HybridIdleState_def.hpp"
#include "Animancer/zzzz__HybridAnimancerComponent_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridIdleState.get_HybridAnimancer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Animancer::HybridAnimancerComponent> (::Animancer::Examples::AnimatorControllers::HybridIdleState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridIdleState::get_HybridAnimancer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {"get_HybridAnimancer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridIdleState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridIdleState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridIdleState::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802fc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::AnimatorControllers::HybridIdleState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::AnimatorControllers::HybridIdleState::*)()>(&::Animancer::Examples::AnimatorControllers::HybridIdleState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Animancer::HybridAnimancerComponent> Animancer::Examples::AnimatorControllers::HybridIdleState::get_HybridAnimancer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {"get_HybridAnimancer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Animancer::HybridAnimancerComponent>>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridIdleState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::AnimatorControllers::HybridIdleState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::AnimatorControllers::HybridIdleState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::AnimatorControllers::HybridIdleState* Animancer::Examples::AnimatorControllers::HybridIdleState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::AnimatorControllers::HybridIdleState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::AnimatorControllers::HybridIdleState::HybridIdleState()   {
}
