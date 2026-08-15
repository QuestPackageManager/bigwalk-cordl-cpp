#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITriggerHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::UnityW<T>& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::UnityW<T> const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set_parent(::UnityW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_registration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_registration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_called()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_called() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set_called(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___called = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set__Current_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::getStaticF_cancellationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::OnCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::OnError(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::set_Current(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"set_Current", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Prev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Prev", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Next", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>*>(parent, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::operator ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>::AsyncTriggerBase_1_AsyncTriggerEnumerator()   {
}
template<typename T>
constexpr ::UnityW<T>& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::__cordl_internal_get_trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
template<typename T>
constexpr ::UnityW<T> const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::__cordl_internal_get_trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::__cordl_internal_set_trigger(::UnityW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>*>(trigger));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>::AsyncTriggerBase_1_AwakeMonitor()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_triggerEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T> const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_triggerEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_set_triggerEvent(::Cysharp::Threading::Tasks::TriggerEvent_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEvent = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_calledAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledAwake;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_calledAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledAwake;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_set_calledAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calledAwake = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_calledDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledDestroy;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_get_calledDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledDestroy;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::__cordl_internal_set_calledDestroy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calledDestroy = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::AddHandler(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"AddHandler", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::RemoveHandler(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"RemoveHandler", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::RaiseEvent(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>::AsyncTriggerBase_1()   {
}
