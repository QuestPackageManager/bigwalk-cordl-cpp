#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAwaitableExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_1_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAwaitableExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAwaitableExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::*)()>(&::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181e80550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "awaitable", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::UnityEngine::Awaitable_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::UnityAwaitableExtensions__AsUniTask_d__0(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityEngine::Awaitable*  awaitable, ::UnityEngine::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->awaitable = awaitable;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0::UnityAwaitableExtensions__AsUniTask_d__0()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "awaitable", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::UnityEngine::Awaitable_1_Awaiter<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::UnityAwaitableExtensions__AsUniTask_d__1_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::UnityEngine::Awaitable_1<T>*  awaitable, ::UnityEngine::Awaitable_1_Awaiter<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->awaitable = awaitable;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>::UnityAwaitableExtensions__AsUniTask_d__1_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAwaitableExtensions.AsUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::Awaitable*)>(&::Cysharp::Threading::Tasks::UnityAwaitableExtensions::AsUniTask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e87000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions*>(),
                        {"AsUniTask", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAwaitableExtensions::AsUniTask(::UnityEngine::Awaitable*  awaitable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions*>(),
                        {"AsUniTask", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, awaitable);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UnityAwaitableExtensions::AsUniTask(::UnityEngine::Awaitable_1<T>*  awaitable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAwaitableExtensions*>(),
                    {"AsUniTask", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Awaitable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, awaitable);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAwaitableExtensions::UnityAwaitableExtensions()   {
}
