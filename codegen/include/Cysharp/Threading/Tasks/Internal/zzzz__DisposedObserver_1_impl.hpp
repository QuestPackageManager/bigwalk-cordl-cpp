#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/DisposedObserver_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__DisposedObserver_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::setStaticF_Instance(::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(std::forward<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>* Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>* Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>*>());
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::DisposedObserver_1<T>::DisposedObserver_1()   {
}
