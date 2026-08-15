#pragma once
// IWYU pragma private; include "Animancer/FSM/IOwnedState_1.hpp"
#include "Animancer/FSM/zzzz__IOwnedState_1_def.hpp"
#include "Animancer/FSM/zzzz__IState_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
template<typename TState>
inline ::Animancer::FSM::StateMachine_1<TState>* Animancer::FSM::IOwnedState_1<TState>::get_OwnerStateMachine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IOwnedState_1<TState>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FSM::StateMachine_1<TState>*>(this, ___internal_method);
}
/// @brief Convert operator to "::Animancer::FSM::IState"
template<typename TState>
constexpr  Animancer::FSM::IOwnedState_1<TState>::operator ::Animancer::FSM::IState*() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IState"
template<typename TState>
constexpr ::Animancer::FSM::IState* Animancer::FSM::IOwnedState_1<TState>::i___Animancer__FSM__IState() noexcept {
return static_cast<::Animancer::FSM::IState*>(static_cast<void*>(this));
}
