#pragma once
// IWYU pragma private; include "Animancer/LazyStack_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__LazyStack_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& Animancer::LazyStack_1<T>::__cordl_internal_get_Stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& Animancer::LazyStack_1<T>::__cordl_internal_get_Stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
template<typename T>
constexpr void Animancer::LazyStack_1<T>::__cordl_internal_set_Stack(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stack = value;
}
template<typename T>
constexpr int32_t& Animancer::LazyStack_1<T>::__cordl_internal_get__CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentIndex;
}
template<typename T>
constexpr int32_t const& Animancer::LazyStack_1<T>::__cordl_internal_get__CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentIndex;
}
template<typename T>
constexpr void Animancer::LazyStack_1<T>::__cordl_internal_set__CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentIndex = value;
}
template<typename T>
constexpr T& Animancer::LazyStack_1<T>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr T const& Animancer::LazyStack_1<T>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr void Animancer::LazyStack_1<T>::__cordl_internal_set__Current_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename T>
inline T Animancer::LazyStack_1<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Animancer::LazyStack_1<T>::set_Current(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {"set_Current", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Animancer::LazyStack_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Animancer::LazyStack_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline T Animancer::LazyStack_1<T>::Increment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {"Increment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Animancer::LazyStack_1<T>::Decrement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LazyStack_1<T>*>(),
                        {"Decrement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Animancer::LazyStack_1<T>* Animancer::LazyStack_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::LazyStack_1<T>*>());
}
template<typename T>
inline ::Animancer::LazyStack_1<T>* Animancer::LazyStack_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::LazyStack_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::LazyStack_1<T>::LazyStack_1()   {
}
