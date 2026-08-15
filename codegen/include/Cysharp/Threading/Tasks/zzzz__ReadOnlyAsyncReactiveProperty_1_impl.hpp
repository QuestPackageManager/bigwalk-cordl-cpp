#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReadOnlyAsyncReactiveProperty_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReadOnlyAsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IReadOnlyAsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITriggerHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ReadOnlyAsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::setStaticF___9(::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>(std::forward<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>* Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>* Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c<T>::WaitAsyncSource_ReadOnlyAsyncReactiveProperty_1___c()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::getStaticF_cancellationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>, "pool", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*> Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>, "pool", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>();
}
template<typename T>
inline ::by_ref<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*> Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_ITaskPoolNode_Cysharp_Threading_Tasks_ReadOnlyAsyncReactiveProperty_T__WaitAsyncSource__get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.ITaskPoolNode<Cysharp.Threading.Tasks.ReadOnlyAsyncReactiveProperty<T>.WaitAsyncSource>.get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Create(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Create", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(nullptr, ___internal_method, parent, cancellationToken, token);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline T Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Prev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Prev", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Next", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::OnCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::OnError(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource_T___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource<T>::ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::_ctor(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::New_ctor(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>*>(parent));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable<T>::ReadOnlyAsyncReactiveProperty_1_WithoutCurrentEnumerable()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_firstCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstCall;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get_firstCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstCall;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set_firstCall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstCall = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::getStaticF_cancellationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::_ctor(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, bool  publishCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, cancellationToken, publishCurrentValue);
}
template<typename T>
inline T Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Prev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Prev", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Next", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::OnCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::OnError(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::New_ctor(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, bool  publishCurrentValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>*>(parent, cancellationToken, publishCurrentValue));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::operator ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1_Enumerator<T>::ReadOnlyAsyncReactiveProperty_1_Enumerator()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  __4__this, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->source = source;
this->cancellationToken = cancellationToken;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7<T>::ReadOnlyAsyncReactiveProperty_1__ConsumeEnumerator_d__7()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_triggerEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T> const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_triggerEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_set_triggerEvent(::Cysharp::Threading::Tasks::TriggerEvent_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEvent = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_latestValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_latestValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_set_latestValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestValue = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* const& Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::setStaticF_isValueType(bool  value)  {
::cordl_internals::setStaticField<bool, "isValueType", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::getStaticF_isValueType()  {
return ::cordl_internals::getStaticField<bool, "isValueType", ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>();
}
template<typename T>
inline T Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::_ctor(T  initialValue, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialValue, source, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::ConsumeEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"ConsumeEnumerator", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, source, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::WithoutCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"WithoutCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::op_Implicit_T(::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value);
}
template<typename T>
inline ::StringW Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::WaitAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::New_ctor(T  initialValue, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(initialValue, source, cancellationToken));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::operator ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::i___Cysharp__Threading__Tasks__IReadOnlyAsyncReactiveProperty_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>::ReadOnlyAsyncReactiveProperty_1()   {
}
