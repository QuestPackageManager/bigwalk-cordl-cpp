#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSource.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ExceptionHolder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.MarkHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::MarkHandled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e69810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"MarkHandled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::get_Task)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e69df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.TrySetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e69ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.TrySetCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetCanceled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e69a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.TrySetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181e69aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e69740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::GetStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::OnCompleted)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181e69820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskCompletionSource.TrySignalCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UniTaskCompletionSource::*)(::Cysharp::Threading::Tasks::UniTaskStatus)>(&::Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySignalCompletion)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181e69bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySignalCompletion", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::ExceptionHolder*& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
constexpr ::Cysharp::Threading::Tasks::ExceptionHolder* const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_exception(::Cysharp::Threading::Tasks::ExceptionHolder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_gate(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_singleContinuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleContinuation;
}
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_singleContinuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleContinuation;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_singleContinuation(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleContinuation = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_singleState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleState;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_singleState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleState;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_singleState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleState = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_secondaryContinuationList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryContinuationList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>* const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_secondaryContinuationList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryContinuationList;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_secondaryContinuationList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryContinuationList = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_intStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intStatus;
}
constexpr int32_t const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_intStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intStatus;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_intStatus(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intStatus = value;
}
constexpr bool& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_handled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handled;
}
constexpr bool const& Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_get_handled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handled;
}
constexpr void Cysharp::Threading::Tasks::UniTaskCompletionSource::__cordl_internal_set_handled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handled = value;
}
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource::MarkHandled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"MarkHandled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UniTaskCompletionSource::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cancellationToken);
}
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTaskCompletionSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskCompletionSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UniTaskCompletionSource::TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>(),
                        {"TrySignalCompletion", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource* Cysharp::Threading::Tasks::UniTaskCompletionSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise"
constexpr ::Cysharp::Threading::Tasks::IPromise* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___Cysharp__Threading__Tasks__IPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___Cysharp__Threading__Tasks__IResolvePromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr  Cysharp::Threading::Tasks::UniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::UniTaskCompletionSource::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource::UniTaskCompletionSource()   {
}
