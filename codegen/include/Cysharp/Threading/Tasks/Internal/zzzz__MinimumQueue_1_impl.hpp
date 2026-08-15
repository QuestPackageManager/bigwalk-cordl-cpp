#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/MinimumQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__MinimumQueue_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr ::ArrayW<T> const& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_set_array(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
template<typename T>
constexpr int32_t& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
template<typename T>
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_set_head(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
template<typename T>
constexpr int32_t& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
template<typename T>
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_set_tail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tail = value;
}
template<typename T>
constexpr int32_t& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename T>
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::__cordl_internal_set_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::Enqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::SetCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::MoveNext(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"MoveNext", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::ThrowForEmptyQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(),
                        {"ThrowForEmptyQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>* Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>::MinimumQueue_1()   {
}
