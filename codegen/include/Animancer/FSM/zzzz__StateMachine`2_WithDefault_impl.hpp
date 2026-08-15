#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine`2_WithDefault.hpp"
#include "Animancer/FSM/zzzz__StateMachine_2_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine`2_WithDefault_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename TKey,typename TState>
constexpr TKey& GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_get__DefaultKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultKey;
}
template<typename TKey,typename TState>
constexpr TKey const& GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_get__DefaultKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultKey;
}
template<typename TKey,typename TState>
constexpr void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_set__DefaultKey(TKey  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultKey = value;
}
template<typename TKey,typename TState>
constexpr ::System::Action*& GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_get_ForceSetDefaultState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceSetDefaultState;
}
template<typename TKey,typename TState>
constexpr ::System::Action* const& GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_get_ForceSetDefaultState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceSetDefaultState;
}
template<typename TKey,typename TState>
constexpr void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__cordl_internal_set_ForceSetDefaultState(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceSetDefaultState = value;
}
template<typename TKey,typename TState>
inline TKey GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::get_DefaultKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {"get_DefaultKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::set_DefaultKey(TKey  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {"set_DefaultKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TState>
inline void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::_ctor(TKey  defaultKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {".ctor", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultKey);
}
template<typename TKey,typename TState>
inline void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::InitializeAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline TState GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::TrySetDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {"TrySetDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline TState GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::TryResetDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {"TryResetDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::__ctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(),
                        {"<.ctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline ::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>* GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>());
}
template<typename TKey,typename TState>
inline ::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>* GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::New_ctor(TKey  defaultKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>*>(defaultKey));
}
// Ctor Parameters []
template<typename TKey,typename TState>
constexpr ::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>::StateMachine_2_WithDefault()   {
}
