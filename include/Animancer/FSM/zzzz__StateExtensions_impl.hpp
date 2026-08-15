#pragma once
// IWYU pragma private; include "Animancer/FSM/StateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/FSM/zzzz__StateExtensions_def.hpp"
template<typename TState>
inline TState Animancer::FSM::StateExtensions::GetPreviousState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"GetPreviousState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<TState>(nullptr, ___internal_method, state);
}
template<typename TState>
inline TState Animancer::FSM::StateExtensions::GetNextState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"GetNextState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<TState>(nullptr, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateExtensions::IsCurrentState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"IsCurrentState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateExtensions::TryEnterState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"TryEnterState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateExtensions::TryReEnterState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"TryReEnterState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
template<typename TState>
inline void Animancer::FSM::StateExtensions::ForceEnterState(TState  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateExtensions*>(),
                    {"ForceEnterState", {::i2c::class_of<TState>()}, {::i2c::type_of<TState>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TState>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Animancer::FSM::StateExtensions::StateExtensions()   {
}
