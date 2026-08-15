#pragma once
// IWYU pragma private; include "Animancer/FSM/KeyChange_1.hpp"
#include "Animancer/FSM/zzzz__KeyChange_1_def.hpp"
#include "Animancer/FSM/zzzz__IKeyedStateMachine_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TKey>
inline void Animancer::FSM::KeyChange_1<TKey>::setStaticF__Current(::Animancer::FSM::KeyChange_1<TKey>  value)  {
::cordl_internals::setStaticField<::Animancer::FSM::KeyChange_1<TKey>, "_Current", ::Animancer::FSM::KeyChange_1<TKey>>(std::forward<::Animancer::FSM::KeyChange_1<TKey>>(value));
}
template<typename TKey>
inline ::Animancer::FSM::KeyChange_1<TKey> Animancer::FSM::KeyChange_1<TKey>::getStaticF__Current()  {
return ::cordl_internals::getStaticField<::Animancer::FSM::KeyChange_1<TKey>, "_Current", ::Animancer::FSM::KeyChange_1<TKey>>();
}
template<typename TKey>
inline bool Animancer::FSM::KeyChange_1<TKey>::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename TKey>
inline ::Animancer::FSM::IKeyedStateMachine_1<TKey>* Animancer::FSM::KeyChange_1<TKey>::get_StateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"get_StateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(nullptr, ___internal_method);
}
template<typename TKey>
inline TKey Animancer::FSM::KeyChange_1<TKey>::get_PreviousKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"get_PreviousKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(nullptr, ___internal_method);
}
template<typename TKey>
inline TKey Animancer::FSM::KeyChange_1<TKey>::get_NextKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"get_NextKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(nullptr, ___internal_method);
}
template<typename TKey>
inline void Animancer::FSM::KeyChange_1<TKey>::_ctor(::Animancer::FSM::IKeyedStateMachine_1<TKey>*  stateMachine, TKey  previousKey, TKey  nextKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine, previousKey, nextKey);
}
template<typename TKey>
inline void Animancer::FSM::KeyChange_1<TKey>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey>
inline ::StringW Animancer::FSM::KeyChange_1<TKey>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename TKey>
inline ::StringW Animancer::FSM::KeyChange_1<TKey>::CurrentToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::KeyChange_1<TKey>>(),
                        {"CurrentToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey>
constexpr  Animancer::FSM::KeyChange_1<TKey>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey>
constexpr ::System::IDisposable* Animancer::FSM::KeyChange_1<TKey>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_StateMachine", ty: "::Animancer::FSM::IKeyedStateMachine_1<TKey>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PreviousKey", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NextKey", ty: "TKey", modifiers: "", def_value: Some("{}") }]
template<typename TKey>
constexpr ::Animancer::FSM::KeyChange_1<TKey>::KeyChange_1(::Animancer::FSM::IKeyedStateMachine_1<TKey>*  _StateMachine, TKey  _PreviousKey, TKey  _NextKey) noexcept  {
this->_StateMachine = _StateMachine;
this->_PreviousKey = _PreviousKey;
this->_NextKey = _NextKey;
}
// Ctor Parameters []
template<typename TKey>
constexpr ::Animancer::FSM::KeyChange_1<TKey>::KeyChange_1()   {
}
