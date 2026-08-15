#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StateTuple_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T1,typename T2,typename T3>
constexpr T1& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item1;
}
template<typename T1,typename T2,typename T3>
constexpr T1 const& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item1;
}
template<typename T1,typename T2,typename T3>
constexpr void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_set_Item1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Item1 = value;
}
template<typename T1,typename T2,typename T3>
constexpr T2& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item2;
}
template<typename T1,typename T2,typename T3>
constexpr T2 const& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item2;
}
template<typename T1,typename T2,typename T3>
constexpr void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_set_Item2(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Item2 = value;
}
template<typename T1,typename T2,typename T3>
constexpr T3& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item3;
}
template<typename T1,typename T2,typename T3>
constexpr T3 const& Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_get_Item3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item3;
}
template<typename T1,typename T2,typename T3>
constexpr void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::__cordl_internal_set_Item3(T3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Item3 = value;
}
template<typename T1,typename T2,typename T3>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::Deconstruct(::by_ref<T1>  item1, ::by_ref<T2>  item2, ::by_ref<T3>  item3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item1, item2, item3);
}
template<typename T1,typename T2,typename T3>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2,typename T3>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>* Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1,typename T2,typename T3>
constexpr  Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1,typename T2,typename T3>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>::StateTuple_3()   {
}
