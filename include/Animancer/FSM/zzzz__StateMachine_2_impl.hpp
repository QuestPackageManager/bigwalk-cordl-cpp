#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine_2.hpp"
#include "Animancer/FSM/zzzz__StateMachine_1_impl.hpp"
#include "Animancer/FSM/zzzz__StateMachine_2_def.hpp"
#include "Animancer/FSM/zzzz__IKeyedStateMachine_1_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine_2_def.hpp"
#include "Animancer/FSM/zzzz__StateMachine`2_WithDefault_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TState>
constexpr TKey& Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::__cordl_internal_get__Key_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
template<typename TKey,typename TState>
constexpr TKey const& Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::__cordl_internal_get__Key_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
template<typename TKey,typename TState>
constexpr void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::__cordl_internal_set__Key_k__BackingField(TKey  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Key_k__BackingField = value;
}
template<typename TKey,typename TState>
inline TKey Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::set_Key(TKey  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {"set_Key", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::_ctor(::Animancer::FSM::StateMachine_2<TKey,TState>*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::Buffer(TKey  key, float_t  timeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {"Buffer", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, timeOut);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::Buffer(TKey  key, TState  state, float_t  timeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(),
                        {"Buffer", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, state, timeOut);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::TryEnterState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>* Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>());
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>* Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::New_ctor(::Animancer::FSM::StateMachine_2<TKey,TState>*  stateMachine)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>*>(stateMachine));
}
// Ctor Parameters []
template<typename TKey,typename TState>
constexpr ::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>::StateMachine_2_InputBuffer()   {
}
template<typename TKey,typename TState>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>*& Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_get__Dictionary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dictionary_k__BackingField;
}
template<typename TKey,typename TState>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>* const& Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_get__Dictionary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dictionary_k__BackingField;
}
template<typename TKey,typename TState>
constexpr void Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_set__Dictionary_k__BackingField(::System::Collections::Generic::IDictionary_2<TKey,TState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dictionary_k__BackingField = value;
}
template<typename TKey,typename TState>
constexpr TKey& Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_get__CurrentKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentKey;
}
template<typename TKey,typename TState>
constexpr TKey const& Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_get__CurrentKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentKey;
}
template<typename TKey,typename TState>
constexpr void Animancer::FSM::StateMachine_2<TKey,TState>::__cordl_internal_set__CurrentKey(TKey  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentKey = value;
}
template<typename TKey,typename TState>
inline ::System::Collections::Generic::IDictionary_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::get_Dictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_Dictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey,TState>*>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::set_Dictionary(::System::Collections::Generic::IDictionary_2<TKey,TState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"set_Dictionary", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TState>
inline TKey Animancer::FSM::StateMachine_2<TKey,TState>::get_CurrentKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_CurrentKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline TKey Animancer::FSM::StateMachine_2<TKey,TState>::get_PreviousKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_PreviousKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline TKey Animancer::FSM::StateMachine_2<TKey,TState>::get_NextKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_NextKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::_ctor(TKey  defaultKey, TState  defaultState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {".ctor", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultKey, defaultState);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary, TKey  defaultKey, TState  defaultState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TState>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary, defaultKey, defaultState);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::InitializeAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::TrySetState(TKey  key, TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"TrySetState", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
template<typename TKey,typename TState>
inline TState Animancer::FSM::StateMachine_2<TKey,TState>::TrySetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"TrySetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_2<TKey,TState>::Animancer_FSM_IKeyedStateMachine_TKey__TrySetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Animancer.FSM.IKeyedStateMachine<TKey>.TrySetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::TryResetState(TKey  key, TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"TryResetState", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
template<typename TKey,typename TState>
inline TState Animancer::FSM::StateMachine_2<TKey,TState>::TryResetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"TryResetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_2<TKey,TState>::Animancer_FSM_IKeyedStateMachine_TKey__TryResetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Animancer.FSM.IKeyedStateMachine<TKey>.TryResetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::ForceSetState(TKey  key, TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"ForceSetState", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, state);
}
template<typename TKey,typename TState>
inline TState Animancer::FSM::StateMachine_2<TKey,TState>::ForceSetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"ForceSetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline ::System::Object* Animancer::FSM::StateMachine_2<TKey,TState>::Animancer_FSM_IKeyedStateMachine_TKey__ForceSetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Animancer.FSM.IKeyedStateMachine<TKey>.ForceSetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline TState Animancer::FSM::StateMachine_2<TKey,TState>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::set_Item(TKey  key, TState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::TryGetValue(TKey  key, ::by_ref<TState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, state);
}
template<typename TKey,typename TState>
inline ::System::Collections::Generic::ICollection_1<TKey>* Animancer::FSM::StateMachine_2<TKey,TState>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline ::System::Collections::Generic::ICollection_1<TState>* Animancer::FSM::StateMachine_2<TKey,TState>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TState>*>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline int32_t Animancer::FSM::StateMachine_2<TKey,TState>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::Add(TKey  key, TState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, state);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::Add(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* Animancer::FSM::StateMachine_2<TKey,TState>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline ::System::Collections::IEnumerator* Animancer::FSM::StateMachine_2<TKey,TState>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TKey,typename TState>
inline bool Animancer::FSM::StateMachine_2<TKey,TState>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TState___get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TState>>.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline TState Animancer::FSM::StateMachine_2<TKey,TState>::GetState(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"GetState", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::AddRange(::ArrayW<TKey>  keys, ::ArrayW<TState>  states)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, states);
}
template<typename TKey,typename TState>
inline void Animancer::FSM::StateMachine_2<TKey,TState>::SetFakeKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(),
                        {"SetFakeKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template<typename TKey,typename TState>
inline ::StringW Animancer::FSM::StateMachine_2<TKey,TState>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::FSM::StateMachine_2<TKey,TState>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2<TKey,TState>*>());
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2<TKey,TState>*>(dictionary));
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::New_ctor(TKey  defaultKey, TState  defaultState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2<TKey,TState>*>(defaultKey, defaultState));
}
template<typename TKey,typename TState>
inline ::Animancer::FSM::StateMachine_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary, TKey  defaultKey, TState  defaultState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::StateMachine_2<TKey,TState>*>(dictionary, defaultKey, defaultState));
}
/// @brief Convert operator to "::Animancer::FSM::IKeyedStateMachine_1<TKey>"
template<typename TKey,typename TState>
constexpr  Animancer::FSM::StateMachine_2<TKey,TState>::operator ::Animancer::FSM::IKeyedStateMachine_1<TKey>*() noexcept {
return static_cast<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::FSM::IKeyedStateMachine_1<TKey>"
template<typename TKey,typename TState>
constexpr ::Animancer::FSM::IKeyedStateMachine_1<TKey>* Animancer::FSM::StateMachine_2<TKey,TState>::i___Animancer__FSM__IKeyedStateMachine_1_TKey_() noexcept {
return static_cast<::Animancer::FSM::IKeyedStateMachine_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TState>"
template<typename TKey,typename TState>
constexpr  Animancer::FSM::StateMachine_2<TKey,TState>::operator ::System::Collections::Generic::IDictionary_2<TKey,TState>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TState>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TState>"
template<typename TKey,typename TState>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>* Animancer::FSM::StateMachine_2<TKey,TState>::i___System__Collections__Generic__IDictionary_2_TKey_TState_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TState>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
template<typename TKey,typename TState>
constexpr  Animancer::FSM::StateMachine_2<TKey,TState>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
template<typename TKey,typename TState>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* Animancer::FSM::StateMachine_2<TKey,TState>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TState__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
template<typename TKey,typename TState>
constexpr  Animancer::FSM::StateMachine_2<TKey,TState>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
template<typename TKey,typename TState>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* Animancer::FSM::StateMachine_2<TKey,TState>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TState__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TState>
constexpr  Animancer::FSM::StateMachine_2<TKey,TState>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TState>
constexpr ::System::Collections::IEnumerable* Animancer::FSM::StateMachine_2<TKey,TState>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TState>
constexpr ::Animancer::FSM::StateMachine_2<TKey,TState>::StateMachine_2()   {
}
