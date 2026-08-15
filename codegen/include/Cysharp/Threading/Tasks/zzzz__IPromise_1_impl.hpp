#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IPromise_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_1_def.hpp"
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IPromise_1<T>::operator ::Cysharp::Threading::Tasks::IResolvePromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IResolvePromise_1<T>* Cysharp::Threading::Tasks::IPromise_1<T>::i___Cysharp__Threading__Tasks__IResolvePromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IPromise_1<T>::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::IPromise_1<T>::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IPromise_1<T>::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::IPromise_1<T>::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
