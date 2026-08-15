#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*& Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* const& Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::System::ValueTuple_2<bool,T> Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,T>>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>* Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>* Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_2_bool_T__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>* Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1___System__ValueTuple_2_bool_T__() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>::UniTask_1_IsCanceledSource()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* const& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_set_result(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus const& Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::__cordl_internal_set_status(::Cysharp::Threading::Tasks::UniTaskStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline T Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>* Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>::UniTask_1_MemoizeSource()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1<T>::_ctor(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UniTask_1<T>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> Cysharp::Threading::Tasks::UniTask_1<T>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UniTask_1<T>::Preserve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"Preserve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UniTask_1<T>::AsUniTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"AsUniTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UniTask_1<T>::op_Implicit___Cysharp__Threading__Tasks__UniTask(::Cysharp::Threading::Tasks::UniTask_1<T>  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, self);
}
template<typename T>
inline ::System::Threading::Tasks::ValueTask_1<T> Cysharp::Threading::Tasks::UniTask_1<T>::op_Implicit___System__Threading__Tasks__ValueTask_1_T_(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<T>>(nullptr, ___internal_method, self);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,T>> Cysharp::Threading::Tasks::UniTask_1<T>::SuppressCancellationThrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(),
                        {"SuppressCancellationThrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,T>>>(*this, ___internal_method);
}
template<typename T>
inline ::StringW Cysharp::Threading::Tasks::UniTask_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>::UniTask_1(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source, T  result, int16_t  token) noexcept  {
this->source = source;
this->result = result;
this->token = token;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>::UniTask_1()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::_ctor(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::SourceOnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(),
                        {"SourceOnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename T>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename T>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::UniTask_1_Awaiter(::Cysharp::Threading::Tasks::UniTask_1<T>  task) noexcept  {
this->task = task;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>::UniTask_1_Awaiter()   {
}
