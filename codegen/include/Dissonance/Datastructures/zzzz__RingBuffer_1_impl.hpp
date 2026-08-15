#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/RingBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::ArrayW<T> const& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_set__items(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
constexpr int32_t& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr void Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
template<typename T>
constexpr int32_t& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_get__end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
template<typename T>
constexpr void Dissonance::Datastructures::RingBuffer_1<T>::__cordl_internal_set__end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____end = value;
}
template<typename T>
inline int32_t Dissonance::Datastructures::RingBuffer_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::RingBuffer_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t Dissonance::Datastructures::RingBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::RingBuffer_1<T>::_ctor(uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template<typename T>
inline ::System::Nullable_1<T> Dissonance::Datastructures::RingBuffer_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(this, ___internal_method, item);
}
template<typename T>
inline void Dissonance::Datastructures::RingBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::RingBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Datastructures::RingBuffer_1<T>* Dissonance::Datastructures::RingBuffer_1<T>::New_ctor(uint32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::RingBuffer_1<T>*>(size));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Datastructures::RingBuffer_1<T>::RingBuffer_1()   {
}
