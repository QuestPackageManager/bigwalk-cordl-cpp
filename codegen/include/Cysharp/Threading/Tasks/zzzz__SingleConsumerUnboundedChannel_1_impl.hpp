#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SingleConsumerUnboundedChannel_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelReader_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelWriter_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SingleConsumerUnboundedChannel_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SingleConsumerUnboundedChannel_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::TryWrite(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::TryComplete(::System::Exception*  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>*>(parent));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter()   {
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_CancellationCallback1Delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallback1Delegate;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_CancellationCallback1Delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallback1Delegate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_CancellationCallback1Delegate(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancellationCallback1Delegate = value;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_CancellationCallback2Delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallback2Delegate;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_CancellationCallback2Delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallback2Delegate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_CancellationCallback2Delegate(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancellationCallback2Delegate = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationToken1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationToken1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken1 = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationToken2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationToken2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken2 = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationTokenRegistration1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationTokenRegistration1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration1 = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationTokenRegistration2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration2;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cancellationTokenRegistration2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration2;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_cancellationTokenRegistration2(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration2 = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cacheValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheValue;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_cacheValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_cacheValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheValue = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_get_running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::__cordl_internal_set_running(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___running = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline T Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::CancellationCallback1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"CancellationCallback1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::CancellationCallback2(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(),
                        {"CancellationCallback2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>*>(parent, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable()   {
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_CancellationCallbackDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallbackDelegate;
}
template<typename T>
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_CancellationCallbackDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationCallbackDelegate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_CancellationCallbackDelegate(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancellationCallbackDelegate = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool> const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_isWaiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWaiting;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_get_isWaiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWaiting;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::__cordl_internal_set_isWaiting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isWaiting = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::get_Completion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::TryRead(::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::WaitToReadAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::SingalContinuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"SingalContinuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::SingalCancellation(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"SingalCancellation", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::SingalCompleted(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"SingalCompleted", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::ReadAllAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::Cysharp_Threading_Tasks_IUniTaskSource_System_Boolean__GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource<System.Boolean>.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*>(parent));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_bool_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_bool_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader()   {
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_items(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_readerSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readerSource;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_readerSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readerSource;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_readerSource(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readerSource = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completedTaskSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedTaskSource;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completedTaskSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedTaskSource;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_completedTaskSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedTaskSource = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completedTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedTask;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completedTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedTask;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_completedTask(::Cysharp::Threading::Tasks::UniTask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedTask = value;
}
template<typename T>
constexpr ::System::Exception*& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completionError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionError;
}
template<typename T>
constexpr ::System::Exception* const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_completionError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionError;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_completionError(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionError = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_get_closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::__cordl_internal_set_closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closed = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>::SingleConsumerUnboundedChannel_1()   {
}
