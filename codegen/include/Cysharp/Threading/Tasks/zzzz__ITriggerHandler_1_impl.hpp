#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ITriggerHandler_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITriggerHandler_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::OnNext(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::OnError(::System::Exception*  ex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::OnCompleted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::OnCanceled(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ITriggerHandler_1<T>::get_Prev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp::Threading::Tasks::ITriggerHandler_1<T>::get_Next()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::ITriggerHandler_1<T>::set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
