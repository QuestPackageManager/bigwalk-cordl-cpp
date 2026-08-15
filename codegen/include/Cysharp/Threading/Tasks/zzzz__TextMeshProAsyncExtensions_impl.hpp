#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TextMeshProAsyncExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextMeshProAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncDeselectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndEditEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSelectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSubmitEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncValueChangedEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TextMeshProAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::*)()>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::MoveNext)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x181e71c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::TextMeshProAsyncExtensions__BindToCore_d__44(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::TMPro::TMP_Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
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
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__44::TextMeshProAsyncExtensions__BindToCore_d__44()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::TextMeshProAsyncExtensions__BindToCore_d__48_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::TMPro::TMP_Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
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
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions__BindToCore_d__48_1<T>::TextMeshProAsyncExtensions__BindToCore_d__48_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e71b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e71b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e71a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e71ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e71130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e710b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e71050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e708f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncEndTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e70980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e71370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e712d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e71240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnEndTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e711c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e70c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncTextSelectionEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e70bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e718f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e719a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e71860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnTextSelectionAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e717e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncDeselectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncDeselectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e70ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnDeselectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e70e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSelectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSelectEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e714f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e71580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e71480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSelectAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e71420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSubmitEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e70b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.GetAsyncSubmitEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e70b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e716d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e71760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e71660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.OnSubmitAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::TMPro::TMP_InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e71600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e706c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e706b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions.BindToCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*, ::TMPro::TMP_Text*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e705f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncEndTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnEndTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncTextSelectionEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnTextSelectionAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_3<::StringW,int32_t,int32_t>>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncDeselectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnDeselectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSelectEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSelectAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"GetAsyncSubmitEventHandler", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsync(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsync", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(::TMPro::TMP_InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"OnSubmitAsAsyncEnumerable", {}, {::i2c::type_of<::TMPro::TMP_InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindTo", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                        {"BindToCore", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
template<typename T>
inline void Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::TMPro::TMP_Text*  text, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindTo", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, text, rebindOnError);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::TMPro::TMP_Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions*>(),
                    {"BindToCore", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, source, text, cancellationToken, rebindOnError);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::TextMeshProAsyncExtensions::TextMeshProAsyncExtensions()   {
}
