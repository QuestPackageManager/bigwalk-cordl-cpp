#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IConnectableUniTaskAsyncEnumerable_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IConnectableUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline ::System::IDisposable* Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<T>::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
