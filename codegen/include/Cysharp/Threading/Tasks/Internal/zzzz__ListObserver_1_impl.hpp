#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ListObserver_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ListObserver_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ImmutableList_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*& Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::__cordl_internal_get__observers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____observers;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>* const& Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::__cordl_internal_get__observers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____observers;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::__cordl_internal_set__observers(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____observers = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::_ctor(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  observers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observers);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::Add(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IObserver_1<T>*>(this, ___internal_method, observer);
}
template<typename T>
inline ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::Remove(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IObserver_1<T>*>(this, ___internal_method, observer);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>* Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::New_ctor(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<::System::IObserver_1<T>*>*  observers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>*>(observers));
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::ListObserver_1<T>::ListObserver_1()   {
}
