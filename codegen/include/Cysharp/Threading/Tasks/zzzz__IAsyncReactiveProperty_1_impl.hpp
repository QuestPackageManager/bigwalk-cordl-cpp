#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IAsyncReactiveProperty_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IReadOnlyAsyncReactiveProperty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
template<typename T>
inline T Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::set_Value(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::operator ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>* Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::i___Cysharp__Threading__Tasks__IReadOnlyAsyncReactiveProperty_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
