#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTask_2.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTask_2_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTask_2_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*, "<>9", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>(std::forward<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>(value));
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*, "<>9", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>();
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline int32_t Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::__cctor_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>(),
                        {"<.cctor>b__12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*>());
}
// Ctor Parameters []
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>::AsyncUniTask_2___c()   {
}
template<typename TStateMachine,typename T>
constexpr ::System::Action*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_returnDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDelegate;
}
template<typename TStateMachine,typename T>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_returnDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDelegate;
}
template<typename TStateMachine,typename T>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_set_returnDelegate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnDelegate = value;
}
template<typename TStateMachine,typename T>
constexpr ::System::Action*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get__MoveNext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveNext_k__BackingField;
}
template<typename TStateMachine,typename T>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get__MoveNext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveNext_k__BackingField;
}
template<typename TStateMachine,typename T>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_set__MoveNext_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MoveNext_k__BackingField = value;
}
template<typename TStateMachine,typename T>
constexpr TStateMachine& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
template<typename TStateMachine,typename T>
constexpr TStateMachine const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
template<typename TStateMachine,typename T>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_set_stateMachine(TStateMachine  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateMachine = value;
}
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename TStateMachine,typename T>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename TStateMachine,typename T>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>, "pool", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>>(value));
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>, "pool", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>();
}
template<typename TStateMachine,typename T>
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::get_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"get_MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::SetStateMachine(::by_ref<TStateMachine>  stateMachine, ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>  runnerPromiseFieldRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::by_ref<TStateMachine>>(), ::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stateMachine, runnerPromiseFieldRef);
}
template<typename TStateMachine,typename T>
inline ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::Return()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"Return", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline bool Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::SetResult(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"SetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template<typename TStateMachine,typename T>
inline T Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename TStateMachine,typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename TStateMachine,typename T>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>"
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___Cysharp__Threading__Tasks__CompilerServices__IStateMachineRunnerPromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename TStateMachine,typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename TStateMachine,typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>"
template<typename TStateMachine,typename T>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>"
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__CompilerServices__AsyncUniTask_2_TStateMachine_T___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TStateMachine,typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>::AsyncUniTask_2()   {
}
