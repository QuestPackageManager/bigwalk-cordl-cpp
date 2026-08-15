#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IPromise.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_def.hpp"
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr  Cysharp::Threading::Tasks::IPromise::operator ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* Cysharp::Threading::Tasks::IPromise::i___Cysharp__Threading__Tasks__IResolvePromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr  Cysharp::Threading::Tasks::IPromise::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::IPromise::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr  Cysharp::Threading::Tasks::IPromise::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::IPromise::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
