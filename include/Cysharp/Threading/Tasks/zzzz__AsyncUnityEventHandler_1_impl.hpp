#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnityEventHandler_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncDeselectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndEditEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSelectEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncSubmitEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncTextSelectionEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncValueChangedEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>*& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityAction_1<T>* const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_action(::UnityEngine::Events::UnityAction_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent_1<T>*& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
template<typename T>
constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_registration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_registration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_callOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callOnce;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_callOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callOnce;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_callOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callOnce = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::getStaticF_cancellationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::_ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unityEvent, cancellationToken, callOnce);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::OnInvokeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"OnInvokeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Invoke(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Invoke", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncValueChangedEventHandler_T__OnValueChangedAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler<T>.OnValueChangedAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncEndEditEventHandler_T__OnEndEditAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncEndEditEventHandler<T>.OnEndEditAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncEndTextSelectionEventHandler_T__OnEndTextSelectionAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler<T>.OnEndTextSelectionAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncTextSelectionEventHandler_T__OnTextSelectionAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler<T>.OnTextSelectionAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncDeselectEventHandler_T__OnDeselectAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncDeselectEventHandler<T>.OnDeselectAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncSelectEventHandler_T__OnSelectAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncSelectEventHandler<T>.OnSelectAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IAsyncSubmitEventHandler_T__OnSubmitAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IAsyncSubmitEventHandler<T>.OnSubmitAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_T__GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource<T>.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::New_ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(unityEvent, cancellationToken, callOnce));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncValueChangedEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncEndEditEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncEndTextSelectionEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncTextSelectionEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncDeselectEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncSelectEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::operator ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>* Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::i___Cysharp__Threading__Tasks__IAsyncSubmitEventHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>::AsyncUnityEventHandler_1()   {
}
