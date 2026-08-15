#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/ConcurrentPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__IRecycler_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::System::Func_1<T>*& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr void Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_set__factory(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____factory = value;
}
template<typename T>
constexpr ::Dissonance::Datastructures::TransferBuffer_1<T>*& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::Dissonance::Datastructures::TransferBuffer_1<T>* const& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_set__items(::Dissonance::Datastructures::TransferBuffer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__getter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getter;
}
template<typename T>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>* const& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__getter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getter;
}
template<typename T>
constexpr void Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_set__getter(::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getter = value;
}
template<typename T>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__putter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____putter;
}
template<typename T>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>* const& Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_get__putter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____putter;
}
template<typename T>
constexpr void Dissonance::Datastructures::ConcurrentPool_1<T>::__cordl_internal_set__putter(::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____putter = value;
}
template<typename T>
inline void Dissonance::Datastructures::ConcurrentPool_1<T>::_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::ConcurrentPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxSize, factory);
}
template<typename T>
inline T Dissonance::Datastructures::ConcurrentPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::ConcurrentPool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::ConcurrentPool_1<T>::Put(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::ConcurrentPool_1<T>*>(),
                        {"Put", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Dissonance::Datastructures::ConcurrentPool_1<T>::Dissonance_Datastructures_IRecycler_T__Recycle(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::ConcurrentPool_1<T>*>(),
                        {"Dissonance.Datastructures.IRecycler<T>.Recycle", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline ::Dissonance::Datastructures::ConcurrentPool_1<T>* Dissonance::Datastructures::ConcurrentPool_1<T>::New_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::ConcurrentPool_1<T>*>(maxSize, factory));
}
/// @brief Convert operator to "::Dissonance::Datastructures::IRecycler_1<T>"
template<typename T>
constexpr  Dissonance::Datastructures::ConcurrentPool_1<T>::operator ::Dissonance::Datastructures::IRecycler_1<T>*() noexcept {
return static_cast<::Dissonance::Datastructures::IRecycler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Datastructures::IRecycler_1<T>"
template<typename T>
constexpr ::Dissonance::Datastructures::IRecycler_1<T>* Dissonance::Datastructures::ConcurrentPool_1<T>::i___Dissonance__Datastructures__IRecycler_1_T_() noexcept {
return static_cast<::Dissonance::Datastructures::IRecycler_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<T>::ConcurrentPool_1()   {
}
