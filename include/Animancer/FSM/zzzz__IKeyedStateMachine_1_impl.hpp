#pragma once
// IWYU pragma private; include "Animancer/FSM/IKeyedStateMachine_1.hpp"
#include "Animancer/FSM/zzzz__IKeyedStateMachine_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey>
inline TKey Animancer::FSM::IKeyedStateMachine_1<TKey>::get_CurrentKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey>
inline TKey Animancer::FSM::IKeyedStateMachine_1<TKey>::get_PreviousKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey>
inline TKey Animancer::FSM::IKeyedStateMachine_1<TKey>::get_NextKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey>
inline ::System::Object* Animancer::FSM::IKeyedStateMachine_1<TKey>::TrySetState(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey>
inline ::System::Object* Animancer::FSM::IKeyedStateMachine_1<TKey>::TryResetState(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey>
inline ::System::Object* Animancer::FSM::IKeyedStateMachine_1<TKey>::ForceSetState(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
