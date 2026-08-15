#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/PooledDelegate_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PooledDelegate_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PooledDelegate_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::setStaticF___9(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>(std::forward<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>* Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*, "<>9", ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>* Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1___c<T>::PooledDelegate_1___c()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* const& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_runDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runDelegate;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_runDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runDelegate;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_set_runDelegate(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runDelegate = value;
}
template<typename T>
constexpr ::System::Action*& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
template<typename T>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_get_continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::__cordl_internal_set_continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuation = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>, "pool", ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*> Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>, "pool", ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>();
}
template<typename T>
inline ::by_ref<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*> Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Action_1<T>* Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::Create(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>(),
                        {"Create", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(nullptr, ___internal_method, continuation);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::Run(T  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>(),
                        {"Run", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>* Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__Internal__PooledDelegate_1_T___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>::PooledDelegate_1()   {
}
