#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::*)()>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e67930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: Some("{}") }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::CancellationTokenExtensions__ToCancellationTokenCore_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->cts = cts;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6::CancellationTokenExtensions__ToCancellationTokenCore_d__6()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::Cysharp::Threading::Tasks::UniTask)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e5dce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181e5db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToCancellationTokenCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationTokenSource*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationTokenCore)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationTokenCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> (*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181e5dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::Callback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.WaitUntilCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::CancellationTokenAwaitable (*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::WaitUntilCanceled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e5df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"WaitUntilCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.RegisterWithoutCaptureExecutionContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::Threading::CancellationToken, ::System::Action*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e5d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.RegisterWithoutCaptureExecutionContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e5d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.AddTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (*)(::System::IDisposable*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::AddTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e5d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"AddTo", {}, {::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenExtensions.DisposeCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenExtensions::DisposeCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"DisposeCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::setStaticF_cancellationTokenCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationTokenCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::CancellationTokenExtensions::getStaticF_cancellationTokenCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationTokenCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>();
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::setStaticF_disposeCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "disposeCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::CancellationTokenExtensions::getStaticF_disposeCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "disposeCallback", ::Cysharp::Threading::Tasks::CancellationTokenExtensions*>();
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  linkToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationToken", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task, linkToken);
}
template<typename T>
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                    {"ToCancellationToken", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task);
}
template<typename T>
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  linkToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                    {"ToCancellationToken", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method, task, linkToken);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::CancellationTokenExtensions::ToCancellationTokenCore(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToCancellationTokenCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, task, cts);
}
inline ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> Cysharp::Threading::Tasks::CancellationTokenExtensions::ToUniTask(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration>>(nullptr, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::Callback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"Callback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::CancellationTokenAwaitable Cysharp::Threading::Tasks::CancellationTokenExtensions::WaitUntilCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"WaitUntilCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, cancellationToken, callback);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"RegisterWithoutCaptureExecutionContext", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, cancellationToken, callback, state);
}
inline ::System::Threading::CancellationTokenRegistration Cysharp::Threading::Tasks::CancellationTokenExtensions::AddTo(::System::IDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"AddTo", {}, {::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(nullptr, ___internal_method, disposable, cancellationToken);
}
inline void Cysharp::Threading::Tasks::CancellationTokenExtensions::DisposeCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenExtensions*>(),
                        {"DisposeCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenExtensions::CancellationTokenExtensions()   {
}
