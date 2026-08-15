#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/AsyncSubject_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__AsyncSubject_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__AsyncSubject_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Object*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename T>
constexpr ::System::Object* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_set_gate(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::IObserver_1<T>*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_unsubscribeTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribeTarget;
}
template<typename T>
constexpr ::System::IObserver_1<T>* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_get_unsubscribeTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribeTarget;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::__cordl_internal_set_unsubscribeTarget(::System::IObserver_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsubscribeTarget = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::_ctor(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  parent, ::System::IObserver_1<T>*  unsubscribeTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(), ::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, unsubscribeTarget);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>* Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::New_ctor(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  parent, ::System::IObserver_1<T>*  unsubscribeTarget)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>*>(parent, unsubscribeTarget));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>::AsyncSubject_1_Subscription()   {
}
template<typename T>
constexpr ::System::Object*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_observerLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerLock;
}
template<typename T>
constexpr ::System::Object* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_observerLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerLock;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_observerLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observerLock = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_lastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValue;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_lastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_lastValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastValue = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_hasValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_hasValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_hasValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasValue = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_isStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStopped;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_isStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStopped;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_isStopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStopped = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
template<typename T>
constexpr ::System::Exception*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_lastError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastError;
}
template<typename T>
constexpr ::System::Exception* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_lastError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastError;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_lastError(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastError = value;
}
template<typename T>
constexpr ::System::IObserver_1<T>*& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_outObserver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outObserver;
}
template<typename T>
constexpr ::System::IObserver_1<T>* const& Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_get_outObserver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outObserver;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::__cordl_internal_set_outObserver(::System::IObserver_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outObserver = value;
}
template<typename T>
inline T Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::get_HasObservers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"get_HasObservers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::Subscribe(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"Subscribe", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::ThrowIfDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {"ThrowIfDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>());
}
/// @brief Convert operator to "::System::IObservable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::operator ::System::IObservable_1<T>*() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<T>"
template<typename T>
constexpr ::System::IObservable_1<T>* Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::i___System__IObservable_1_T_() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>::AsyncSubject_1()   {
}
