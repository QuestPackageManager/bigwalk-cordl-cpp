#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Pool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__IRecycler_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr int32_t& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__maxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSize;
}
template<typename T>
constexpr int32_t const& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__maxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSize;
}
template<typename T>
constexpr void Dissonance::Datastructures::Pool_1<T>::__cordl_internal_set__maxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSize = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factory;
}
template<typename T>
constexpr void Dissonance::Datastructures::Pool_1<T>::__cordl_internal_set__factory(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____factory = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& Dissonance::Datastructures::Pool_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void Dissonance::Datastructures::Pool_1<T>::__cordl_internal_set__items(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
inline int32_t Dissonance::Datastructures::Pool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Dissonance::Datastructures::Pool_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Datastructures::Pool_1<T>::_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxSize, factory);
}
template<typename T>
inline T Dissonance::Datastructures::Pool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Dissonance::Datastructures::Pool_1<T>::Put(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {"Put", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void Dissonance::Datastructures::Pool_1<T>::Dissonance_Datastructures_IRecycler_T__Recycle(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Pool_1<T>*>(),
                        {"Dissonance.Datastructures.IRecycler<T>.Recycle", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline ::Dissonance::Datastructures::Pool_1<T>* Dissonance::Datastructures::Pool_1<T>::New_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::Pool_1<T>*>(maxSize, factory));
}
/// @brief Convert operator to "::Dissonance::Datastructures::IRecycler_1<T>"
template<typename T>
constexpr  Dissonance::Datastructures::Pool_1<T>::operator ::Dissonance::Datastructures::IRecycler_1<T>*() noexcept {
return static_cast<::Dissonance::Datastructures::IRecycler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Datastructures::IRecycler_1<T>"
template<typename T>
constexpr ::Dissonance::Datastructures::IRecycler_1<T>* Dissonance::Datastructures::Pool_1<T>::i___Dissonance__Datastructures__IRecycler_1_T_() noexcept {
return static_cast<::Dissonance::Datastructures::IRecycler_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Datastructures::Pool_1<T>::Pool_1()   {
}
