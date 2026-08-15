#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunnerPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder (*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180378de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder.SetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder.SetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180378dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(nullptr, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                    {"AwaitOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                    {"AwaitUnsafeOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::Start(::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                    {"Start", {::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "runnerPromise", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ex", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::AsyncUniTaskMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*  runnerPromise, ::System::Exception*  ex) noexcept  {
this->runnerPromise = runnerPromise;
this->ex = ex;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder::AsyncUniTaskMethodBuilder()   {
}
