#pragma once
// IWYU pragma private; include "Animancer/FSM/StateChange_1.hpp"
#include "Animancer/FSM/zzzz__StateChange_1_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TState>
inline void Animancer::FSM::StateChange_1<TState>::setStaticF__Current(::Animancer::FSM::StateChange_1<TState>  value)  {
::cordl_internals::setStaticField<::Animancer::FSM::StateChange_1<TState>, "_Current", ::Animancer::FSM::StateChange_1<TState>>(std::forward<::Animancer::FSM::StateChange_1<TState>>(value));
}
template<typename TState>
inline ::Animancer::FSM::StateChange_1<TState> Animancer::FSM::StateChange_1<TState>::getStaticF__Current()  {
return ::cordl_internals::getStaticField<::Animancer::FSM::StateChange_1<TState>, "_Current", ::Animancer::FSM::StateChange_1<TState>>();
}
template<typename TState>
inline bool Animancer::FSM::StateChange_1<TState>::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1<TState>* Animancer::FSM::StateChange_1<TState>::get_StateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"get_StateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FSM::StateMachine_1<TState>*>(nullptr, ___internal_method);
}
template<typename TState>
inline TState Animancer::FSM::StateChange_1<TState>::get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(nullptr, ___internal_method);
}
template<typename TState>
inline TState Animancer::FSM::StateChange_1<TState>::get_NextState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"get_NextState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(nullptr, ___internal_method);
}
template<typename TState>
inline void Animancer::FSM::StateChange_1<TState>::_ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine, TState  previousState, TState  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::FSM::StateMachine_1<TState>*>(), ::i2c::type_of<TState>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine, previousState, nextState);
}
template<typename TState>
inline void Animancer::FSM::StateChange_1<TState>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TState>
inline ::StringW Animancer::FSM::StateChange_1<TState>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename TState>
inline ::StringW Animancer::FSM::StateChange_1<TState>::CurrentToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateChange_1<TState>>(),
                        {"CurrentToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TState>
constexpr  Animancer::FSM::StateChange_1<TState>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TState>
constexpr ::System::IDisposable* Animancer::FSM::StateChange_1<TState>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_StateMachine", ty: "::Animancer::FSM::StateMachine_1<TState>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PreviousState", ty: "TState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NextState", ty: "TState", modifiers: "", def_value: Some("{}") }]
template<typename TState>
constexpr ::Animancer::FSM::StateChange_1<TState>::StateChange_1(::Animancer::FSM::StateMachine_1<TState>*  _StateMachine, TState  _PreviousState, TState  _NextState) noexcept  {
this->_StateMachine = _StateMachine;
this->_PreviousState = _PreviousState;
this->_NextState = _NextState;
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::FSM::StateChange_1<TState>::StateChange_1()   {
}
