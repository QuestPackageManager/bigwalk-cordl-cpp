#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskValueTaskExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskValueTaskExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskValueTaskExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::ValueTask_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::UniTaskValueTaskExtensions__AsUniTask_d__2_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::Tasks::ValueTask_1<T>  task, ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>::UniTaskValueTaskExtensions__AsUniTask_d__2_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::*)()>(&::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181e64150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::UniTaskValueTaskExtensions__AsUniTask_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::ValueTask  task, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3::UniTaskValueTaskExtensions__AsUniTask_d__3()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions.AsValueTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (*)(::by_ref<::Cysharp::Threading::Tasks::UniTask>)>(&::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsValueTask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e6c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                        {"AsValueTask", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions.AsUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::System::Threading::Tasks::ValueTask)>(&::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsUniTask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e6c690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                        {"AsUniTask", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::ValueTask Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsValueTask(::by_ref<::Cysharp::Threading::Tasks::UniTask>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                        {"AsValueTask", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(nullptr, ___internal_method, task);
}
template<typename T>
inline ::System::Threading::Tasks::ValueTask_1<T> Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsValueTask(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                    {"AsValueTask", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<T>>(nullptr, ___internal_method, task);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsUniTask(::System::Threading::Tasks::ValueTask_1<T>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                    {"AsUniTask", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Threading::Tasks::ValueTask_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, task);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::AsUniTask(::System::Threading::Tasks::ValueTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*>(),
                        {"AsUniTask", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions::UniTaskValueTaskExtensions()   {
}
