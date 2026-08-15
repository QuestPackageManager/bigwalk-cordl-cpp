#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncLazy_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncLazy_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_taskFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskFactory;
}
template<typename T>
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* const& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_taskFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskFactory;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_set_taskFactory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taskFactory = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_completionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_completionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionSource = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> const& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_set_awaiter(::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename T>
constexpr ::System::Object*& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_syncLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncLock;
}
template<typename T>
constexpr ::System::Object* const& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_syncLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncLock;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_set_syncLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncLock = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AsyncLazy_1<T>::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::setStaticF_continuation(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "continuation", ::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncLazy_1<T>::getStaticF_continuation()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "continuation", ::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  taskFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taskFactory);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AsyncLazy_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> Cysharp::Threading::Tasks::AsyncLazy_1<T>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::EnsureInitializedCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"EnsureInitializedCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::SetCompletionSource(::by_ref<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>  awaiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awaiter);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncLazy_1<T>::SetCompletionSource(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* Cysharp::Threading::Tasks::AsyncLazy_1<T>::New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  taskFactory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(taskFactory));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* Cysharp::Threading::Tasks::AsyncLazy_1<T>::New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncLazy_1<T>*>(task));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AsyncLazy_1<T>::AsyncLazy_1()   {
}
