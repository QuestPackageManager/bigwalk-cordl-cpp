#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ImmutableList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ImmutableList_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr ::ArrayW<T> const& Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::__cordl_internal_set_data(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::setStaticF_Empty(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*, "Empty", ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(std::forward<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*, "Empty", ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>();
}
template<typename T>
inline ::ArrayW<T> Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::_ctor(::ArrayW<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::Add(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::Remove(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(this, ___internal_method, value);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::IndexOf(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(),
                        {"IndexOf", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>());
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::New_ctor(::ArrayW<T>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*>(data));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>::ImmutableList_1()   {
}
