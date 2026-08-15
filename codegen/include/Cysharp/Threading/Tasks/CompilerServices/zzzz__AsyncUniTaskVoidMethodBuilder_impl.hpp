#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__IStateMachineRunner_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder (*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::get_Task)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder.SetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180347180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder.SetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::*)()>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetResult)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803471e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(nullptr, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                    {"AwaitOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename TAwaiter,typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                    {"AwaitUnsafeOnCompleted", {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template<typename TStateMachine>
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::Start(::by_ref<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                    {"Start", {::i2c::class_of<TStateMachine>()}, {::i2c::type_of<::by_ref<TStateMachine>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStateMachine>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
inline void Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "runner", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::AsyncUniTaskVoidMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*  runner) noexcept  {
this->runner = runner;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder::AsyncUniTaskVoidMethodBuilder()   {
}
