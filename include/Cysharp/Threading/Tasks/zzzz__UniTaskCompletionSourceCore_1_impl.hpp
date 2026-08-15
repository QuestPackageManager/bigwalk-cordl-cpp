#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TResult>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TResult>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::ReportUnhandledError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"ReportUnhandledError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TResult>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::MarkHandled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"MarkHandled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TResult>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::TrySetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"TrySetResult", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
template<typename TResult>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::TrySetException(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, error);
}
template<typename TResult>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, cancellationToken);
}
template<typename TResult>
inline int16_t Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
template<typename TResult>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(*this, ___internal_method, token);
}
template<typename TResult>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(*this, ___internal_method);
}
template<typename TResult>
inline TResult Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method, token);
}
template<typename TResult>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation, state, token);
}
template<typename TResult>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::ValidateToken(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>>(),
                        {"ValidateToken", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, token);
}
// Ctor Parameters [CppParam { name: "result", ty: "TResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "error", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasUnhandledError", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "completedCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuation", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationState", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
template<typename TResult>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::UniTaskCompletionSourceCore_1(TResult  result, ::System::Object*  error, int16_t  version, bool  hasUnhandledError, int32_t  completedCount, ::System::Action_1<::System::Object*>*  continuation, ::System::Object*  continuationState) noexcept  {
this->result = result;
this->error = error;
this->version = version;
this->hasUnhandledError = hasUnhandledError;
this->completedCount = completedCount;
this->continuation = continuation;
this->continuationState = continuationState;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<TResult>::UniTaskCompletionSourceCore_1()   {
}
