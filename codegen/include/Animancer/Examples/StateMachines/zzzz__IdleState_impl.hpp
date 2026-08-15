#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/IdleState.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__IdleState_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::IdleState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::IdleState::*)()>(&::Animancer::Examples::StateMachines::IdleState::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::IdleState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::IdleState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::IdleState::*)()>(&::Animancer::Examples::StateMachines::IdleState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::IdleState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ClipTransition*& Animancer::Examples::StateMachines::IdleState::__cordl_internal_get__Animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::StateMachines::IdleState::__cordl_internal_get__Animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animation;
}
constexpr void Animancer::Examples::StateMachines::IdleState::__cordl_internal_set__Animation(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animation = value;
}
inline void Animancer::Examples::StateMachines::IdleState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::IdleState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::IdleState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::IdleState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::IdleState* Animancer::Examples::StateMachines::IdleState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::IdleState*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::IdleState::IdleState()   {
}
