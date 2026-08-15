#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine_1.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
#include "Animancer/FSM/zzzz__IStateMachine_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine`1_WithDefault_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TState,typename TStateMachine>
constexpr TStateMachine& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__StateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateMachine;
}
template<typename TState,typename TStateMachine>
constexpr TStateMachine const& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__StateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateMachine;
}
template<typename TState,typename TStateMachine>
constexpr void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_set__StateMachine(TStateMachine  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StateMachine = value;
}
template<typename TState,typename TStateMachine>
constexpr TState& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
template<typename TState,typename TStateMachine>
constexpr TState const& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
template<typename TState,typename TStateMachine>
constexpr void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_set__State_k__BackingField(TState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
template<typename TState,typename TStateMachine>
constexpr float_t& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__TimeOut_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOut_k__BackingField;
}
template<typename TState,typename TStateMachine>
constexpr float_t const& Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_get__TimeOut_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOut_k__BackingField;
}
template<typename TState,typename TStateMachine>
constexpr void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::__cordl_internal_set__TimeOut_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeOut_k__BackingField = value;
}
template<typename TState,typename TStateMachine>
inline TStateMachine Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::get_StateMachine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"get_StateMachine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TStateMachine>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::set_StateMachine(TStateMachine  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"set_StateMachine", {}, {::i2c::type_of<TStateMachine>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState,typename TStateMachine>
inline TState Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::set_State(TState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"set_State", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState,typename TStateMachine>
inline float_t Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::get_TimeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"get_TimeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::set_TimeOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"set_TimeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState,typename TStateMachine>
inline bool Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::_ctor(TStateMachine  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {".ctor", {}, {::i2c::type_of<TStateMachine>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::Buffer(TState  state, float_t  timeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"Buffer", {}, {::i2c::type_of<TState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, timeOut);
}
template<typename TState,typename TStateMachine>
inline bool Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::TryEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline bool Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline bool Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::Update(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deltaTime);
}
template<typename TState,typename TStateMachine>
inline void Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState,typename TStateMachine>
inline ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>* Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>());
}
template<typename TState,typename TStateMachine>
inline ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>* Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::New_ctor(TStateMachine  stateMachine)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>*>(stateMachine));
}
// Ctor Parameters []
template<typename TState,typename TStateMachine>
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>::StateMachine_1_InputBuffer_1()   {
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1_InputBuffer<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1_InputBuffer<TState>::_ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_InputBuffer<TState>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::FSM::StateMachine_1<TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1_InputBuffer<TState>* Animancer::FSM::StateMachine_1_InputBuffer<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1_InputBuffer<TState>*>());
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1_InputBuffer<TState>* Animancer::FSM::StateMachine_1_InputBuffer<TState>::New_ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1_InputBuffer<TState>*>(stateMachine));
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::FSM::StateMachine_1_InputBuffer<TState>::StateMachine_1_InputBuffer()   {
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1_StateSelector<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1_StateSelector<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
template<typename TPrioritizable>
inline void Animancer::FSM::StateMachine_1_StateSelector<TState>::Add(TPrioritizable  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::FSM::StateMachine_1_StateSelector<TState>*>(),
                    {"Add", {::i2c::class_of<TPrioritizable>()}, {::i2c::type_of<TPrioritizable>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPrioritizable>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1_StateSelector<TState>* Animancer::FSM::StateMachine_1_StateSelector<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1_StateSelector<TState>*>());
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::FSM::StateMachine_1_StateSelector<TState>::StateMachine_1_StateSelector()   {
}
template<typename TState>
constexpr TState& Animancer::FSM::StateMachine_1<TState>::__cordl_internal_get__CurrentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
template<typename TState>
constexpr TState const& Animancer::FSM::StateMachine_1<TState>::__cordl_internal_get__CurrentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
template<typename TState>
constexpr void Animancer::FSM::StateMachine_1<TState>::__cordl_internal_set__CurrentState(TState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentState = value;
}
template<typename TState>
inline TState Animancer::FSM::StateMachine_1<TState>::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline TState Animancer::FSM::StateMachine_1<TState>::get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline TState Animancer::FSM::StateMachine_1<TState>::get_NextState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"get_NextState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::_ctor(TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {".ctor", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::InitializeAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::CanSetState(TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"CanSetState", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline TState Animancer::FSM::StateMachine_1<TState>::CanSetState(::System::Collections::Generic::IList_1<TState>*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"CanSetState", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, states);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::TrySetState(TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"TrySetState", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::TrySetState(::System::Collections::Generic::IList_1<TState>*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"TrySetState", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::TryResetState(TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"TryResetState", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::TryResetState(::System::Collections::Generic::IList_1<TState>*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"TryResetState", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::ForceSetState(TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"ForceSetState", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline ::StringW Animancer::FSM::StateMachine_1<TState>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::SetAllowNullStates(bool  allow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"SetAllowNullStates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow);
}
template<typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_get_NextState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.get_NextState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_CanSetState(::System::Collections::IList*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.CanSetState", {}, {::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, states);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_CanSetState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.CanSetState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_ForceSetState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.ForceSetState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_TryResetState(::System::Collections::IList*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.TryResetState", {}, {::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_TryResetState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.TryResetState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_TrySetState(::System::Collections::IList*  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.TrySetState", {}, {::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, states);
}
template<typename TState>
inline bool Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_TrySetState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.TrySetState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
template<typename TState>
inline void Animancer::FSM::StateMachine_1<TState>::Animancer_FSM_IStateMachine_SetAllowNullStates(bool  allow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_1<TState>*>(),
                        {"Animancer.FSM.IStateMachine.SetAllowNullStates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow);
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1<TState>* Animancer::FSM::StateMachine_1<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1<TState>*>());
}
template<typename TState>
inline ::Animancer::FSM::StateMachine_1<TState>* Animancer::FSM::StateMachine_1<TState>::New_ctor(TState  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_1<TState>*>(state));
}
/// @brief Convert operator to "::Animancer::FSM::IStateMachine"
template<typename TState>
constexpr  Animancer::FSM::StateMachine_1<TState>::operator ::Animancer::FSM::IStateMachine*() noexcept {
return static_cast<::Animancer::FSM::IStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IStateMachine"
template<typename TState>
constexpr ::Animancer::FSM::IStateMachine* Animancer::FSM::StateMachine_1<TState>::i___Animancer__FSM__IStateMachine() noexcept {
return static_cast<::Animancer::FSM::IStateMachine*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::FSM::StateMachine_1<TState>::StateMachine_1()   {
}
