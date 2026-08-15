#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StateTuple.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_2_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__StateTuple_3_def.hpp"
template<typename T1>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>* Cysharp::Threading::Tasks::Internal::StateTuple::Create(T1  item1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple*>(),
                    {"Create", {::i2c::class_of<T1>()}, {::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>(nullptr, ___internal_method, item1);
}
template<typename T1,typename T2>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>* Cysharp::Threading::Tasks::Internal::StateTuple::Create(T1  item1, T2  item2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple*>(),
                    {"Create", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>(nullptr, ___internal_method, item1, item2);
}
template<typename T1,typename T2,typename T3>
inline ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>* Cysharp::Threading::Tasks::Internal::StateTuple::Create(T1  item1, T2  item2, T3  item3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::StateTuple*>(),
                    {"Create", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>*>(nullptr, ___internal_method, item1, item2, item3);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::StateTuple::StateTuple()   {
}
