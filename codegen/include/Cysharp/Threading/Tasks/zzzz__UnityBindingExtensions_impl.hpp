#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityBindingExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityBindingExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityBindingExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
template<typename TSource,typename TObject>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource,typename TObject>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TObject>
constexpr  Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TObject>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindAction", ty: "::System::Action_2<TObject,TSource>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindTarget", ty: "TObject", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename TSource,typename TObject>
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::UnityBindingExtensions__BindToCore_d__12_2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::System::Action_2<TObject,TSource>*  bindAction, TObject  bindTarget, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->rebindOnError = rebindOnError;
this->bindAction = bindAction;
this->bindTarget = bindTarget;
this->_repeat_5__2 = _repeat_5__2;
this->_e_5__3 = _e_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TSource,typename TObject>
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource,TObject>::UnityBindingExtensions__BindToCore_d__12_2()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::*)()>(&::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x181e806f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::UnityW<::UnityEngine::UI::Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::UnityBindingExtensions__BindToCore_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->rebindOnError = rebindOnError;
this->text = text;
this->_repeat_5__2 = _repeat_5__2;
this->_e_5__3 = _e_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2::UnityBindingExtensions__BindToCore_d__2()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::UnityW<::UnityEngine::UI::Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::UnityBindingExtensions__BindToCore_d__6_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->rebindOnError = rebindOnError;
this->text = text;
this->_repeat_5__2 = _repeat_5__2;
this->_e_5__3 = _e_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>::UnityBindingExtensions__BindToCore_d__6_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::*)()>(&::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x181e81110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectable", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<bool>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::UnityBindingExtensions__BindToCore_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Selectable>  selectable, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<bool>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->rebindOnError = rebindOnError;
this->selectable = selectable;
this->_repeat_5__2 = _repeat_5__2;
this->_e_5__3 = _e_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9::UnityBindingExtensions__BindToCore_d__9()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::UnityEngine::UI::Text*, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e87270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e87260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindToCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::UnityEngine::UI::Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e87080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*, ::UnityEngine::UI::Selectable*, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e87200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e87250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityBindingExtensions.BindToCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*, ::UnityEngine::UI::Selectable*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e87140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindToCore", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, selectable, rebindOnError);
}
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, selectable, cancellationToken, rebindOnError);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, selectable, cancellationToken, rebindOnError);
}
template<typename TSource,typename TObject>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  monoBehaviour, ::System::Action_2<TObject,TSource>*  bindAction, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindTo", {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TObject>(), ::i2c::type_of<::System::Action_2<TObject,TSource>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, monoBehaviour, bindAction, rebindOnError);
}
template<typename TSource,typename TObject>
inline void Cysharp::Threading::Tasks::UnityBindingExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindTo", {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TObject>(), ::i2c::type_of<::System::Action_2<TObject,TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, bindTarget, bindAction, cancellationToken, rebindOnError);
}
template<typename TSource,typename TObject>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UnityBindingExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityBindingExtensions*>(),
                    {"BindToCore", {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TObject>(), ::i2c::type_of<::System::Action_2<TObject,TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, bindTarget, bindAction, cancellationToken, rebindOnError);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityBindingExtensions::UnityBindingExtensions()   {
}
