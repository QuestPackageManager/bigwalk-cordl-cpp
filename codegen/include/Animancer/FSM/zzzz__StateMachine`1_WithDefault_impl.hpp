#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine`1_WithDefault.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename TState>
constexpr TState& GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_get__DefaultState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultState;
}
template<typename TState>
constexpr TState const& GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_get__DefaultState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultState;
}
template<typename TState>
constexpr void GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_set__DefaultState(TState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultState = value;
}
template<typename TState>
constexpr ::System::Action*& GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_get_ForceSetDefaultState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceSetDefaultState;
}
template<typename TState>
constexpr ::System::Action* const& GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_get_ForceSetDefaultState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceSetDefaultState;
}
template<typename TState>
constexpr void GlobalNamespace::StateMachine_1_WithDefault<TState>::__cordl_internal_set_ForceSetDefaultState(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceSetDefaultState = value;
}
template<typename TState>
inline TState GlobalNamespace::StateMachine_1_WithDefault<TState>::get_DefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {"get_DefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline void GlobalNamespace::StateMachine_1_WithDefault<TState>::set_DefaultState(TState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {"set_DefaultState", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline void GlobalNamespace::StateMachine_1_WithDefault<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline void GlobalNamespace::StateMachine_1_WithDefault<TState>::_ctor(TState  defaultState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {".ctor", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultState);
}
template<typename TState>
inline void GlobalNamespace::StateMachine_1_WithDefault<TState>::InitializeAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline bool GlobalNamespace::StateMachine_1_WithDefault<TState>::TrySetDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {"TrySetDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState>
inline bool GlobalNamespace::StateMachine_1_WithDefault<TState>::TryResetDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {"TryResetDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState>
inline void GlobalNamespace::StateMachine_1_WithDefault<TState>::__ctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(),
                        {"<.ctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline ::GlobalNamespace::StateMachine_1_WithDefault<TState>* GlobalNamespace::StateMachine_1_WithDefault<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>());
}
template<typename TState>
inline ::GlobalNamespace::StateMachine_1_WithDefault<TState>* GlobalNamespace::StateMachine_1_WithDefault<TState>::New_ctor(TState  defaultState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateMachine_1_WithDefault<TState>*>(defaultState));
}
// Ctor Parameters []
template<typename TState>
constexpr ::GlobalNamespace::StateMachine_1_WithDefault<TState>::StateMachine_1_WithDefault()   {
}
