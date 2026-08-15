#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPool_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__MinimumQueue_1_impl.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPool_1_def.hpp"
template<typename T>
constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>& Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_get_buckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
template<typename T>
constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*> const& Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_get_buckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buckets;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_set_buckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buckets = value;
}
template<typename T>
constexpr ::ArrayW<::System::Threading::SpinLock>& Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_get_locks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locks;
}
template<typename T>
constexpr ::ArrayW<::System::Threading::SpinLock> const& Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_get_locks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locks;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::__cordl_internal_set_locks(::ArrayW<::System::Threading::SpinLock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locks = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::setStaticF_EmptyArray(::ArrayW<T>  value)  {
::cordl_internals::setStaticField<::ArrayW<T>, "EmptyArray", ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template<typename T>
inline ::ArrayW<T> Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::getStaticF_EmptyArray()  {
return ::cordl_internals::getStaticField<::ArrayW<T>, "EmptyArray", ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::setStaticF_Shared(::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*, "Shared", ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(std::forward<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::getStaticF_Shared()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*, "Shared", ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(),
                        {"Rent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, minimumLength);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::Return(::ArrayW<T>  array, bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, clearArray);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::CalculateSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(),
                        {"CalculateSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::GetQueueIndex(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>(),
                        {"GetQueueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>::ArrayPool_1()   {
}
