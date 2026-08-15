#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTask_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*, "<>9", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>(std::forward<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>(value));
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*, "<>9", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>();
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine>
inline int32_t Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::__cctor_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>(),
                        {"<.cctor>b__12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*>());
}
// Ctor Parameters []
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>::AsyncUniTask_1___c()   {
}
template<typename TStateMachine>
constexpr ::System::Action*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_returnDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDelegate;
}
template<typename TStateMachine>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_returnDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDelegate;
}
template<typename TStateMachine>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_set_returnDelegate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnDelegate = value;
}
template<typename TStateMachine>
constexpr ::System::Action*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get__MoveNext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveNext_k__BackingField;
}
template<typename TStateMachine>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get__MoveNext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveNext_k__BackingField;
}
template<typename TStateMachine>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_set__MoveNext_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MoveNext_k__BackingField = value;
}
template<typename TStateMachine>
constexpr TStateMachine& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
template<typename TStateMachine>
constexpr TStateMachine const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
template<typename TStateMachine>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_set_stateMachine(TStateMachine  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateMachine = value;
}
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename TStateMachine>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>* const& Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename TStateMachine>
constexpr void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>, "pool", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>>(value));
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>, "pool", ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>();
}
template<typename TStateMachine>
inline ::System::Action* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::get_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"get_MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::SetStateMachine(::by_ref<TStateMachine>  stateMachine, ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>  runnerPromiseFieldRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::by_ref<TStateMachine>>(), ::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stateMachine, runnerPromiseFieldRef);
}
template<typename TStateMachine>
inline ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::Return()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"Return", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine>
inline bool Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::SetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"SetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename TStateMachine>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise"
template<typename TStateMachine>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::operator ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise"
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::i___Cysharp__Threading__Tasks__CompilerServices__IStateMachineRunnerPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename TStateMachine>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename TStateMachine>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename TStateMachine>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>"
template<typename TStateMachine>
constexpr  Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>"
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>* Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__CompilerServices__AsyncUniTask_1_TStateMachine___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TStateMachine>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>::AsyncUniTask_1()   {
}
