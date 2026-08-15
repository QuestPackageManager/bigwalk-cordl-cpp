#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AutoResetUniTaskCompletionSource_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AutoResetUniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AutoResetUniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::setStaticF___9(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>(std::forward<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>::AutoResetUniTaskCompletionSource_1___c()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
constexpr int16_t& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
template<typename T>
constexpr int16_t const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::__cordl_internal_set_version(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>, "pool", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*> Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>, "pool", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>();
}
template<typename T>
inline ::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*> Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::CreateFromCanceled(::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"CreateFromCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(nullptr, ___internal_method, cancellationToken, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::CreateFromException(::System::Exception*  exception, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"CreateFromException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(nullptr, ___internal_method, exception, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::CreateFromResult(T  result, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"CreateFromResult", {}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(nullptr, ___internal_method, result, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::TrySetResult(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"TrySetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::TrySetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
template<typename T>
inline T Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
template<typename T>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AutoResetUniTaskCompletionSource_1_T___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IPromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IPromise_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IPromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IResolvePromise_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IResolvePromise_1<T>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IResolvePromise_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>::AutoResetUniTaskCompletionSource_1()   {
}
