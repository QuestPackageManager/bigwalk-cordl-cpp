#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSource_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ExceptionHolder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_result(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ExceptionHolder*& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ExceptionHolder* const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_exception(::Cysharp::Threading::Tasks::ExceptionHolder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception = value;
}
template<typename T>
constexpr ::System::Object*& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename T>
constexpr ::System::Object* const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_gate(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_singleContinuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleContinuation;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_singleContinuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleContinuation;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_singleContinuation(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleContinuation = value;
}
template<typename T>
constexpr ::System::Object*& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_singleState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleState;
}
template<typename T>
constexpr ::System::Object* const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_singleState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleState;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_singleState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleState = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_secondaryContinuationList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryContinuationList;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>* const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_secondaryContinuationList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryContinuationList;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_secondaryContinuationList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryContinuationList = value;
}
template<typename T>
constexpr int32_t& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_intStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intStatus;
}
template<typename T>
constexpr int32_t const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_intStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intStatus;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_intStatus(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intStatus = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_handled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handled;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_get_handled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handled;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::__cordl_internal_set_handled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handled = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::MarkHandled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"MarkHandled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::TrySetResult(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"TrySetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::TrySetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
template<typename T>
inline T Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(),
                        {"TrySignalCompletion", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IPromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IPromise_1<T>* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IPromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IResolvePromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IResolvePromise_1<T>* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IResolvePromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>::UniTaskCompletionSource_1()   {
}
