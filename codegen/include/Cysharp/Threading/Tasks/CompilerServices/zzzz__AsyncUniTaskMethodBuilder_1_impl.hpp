#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(nullptr, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template<typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::SetResult(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                        {"SetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename T>
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                    {"AwaitOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename T>
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                    {"AwaitUnsafeOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename T>
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::Start(::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                    {"Start", {::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template<typename T>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "runnerPromise", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ex", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::AsyncUniTaskMethodBuilder_1(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*  runnerPromise, ::System::Exception*  ex, T  result) noexcept  {
this->runnerPromise = runnerPromise;
this->ex = ex;
this->result = result;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>::AsyncUniTaskMethodBuilder_1()   {
}
