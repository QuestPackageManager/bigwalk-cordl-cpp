#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StateTuple_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T1>
constexpr T1& Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::__cordl_internal_get_Item1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item1;
}
template<typename T1>
constexpr T1 const& Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::__cordl_internal_get_Item1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Item1;
}
template<typename T1>
constexpr void Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::__cordl_internal_set_Item1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Item1 = value;
}
template<typename T1>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::Deconstruct(::by_ref<T1>  item1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<T1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item1);
}
template<typename T1>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1>
inline void Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>* Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T1>
constexpr  Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T1>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1>
constexpr ::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>::StateTuple_1()   {
}
