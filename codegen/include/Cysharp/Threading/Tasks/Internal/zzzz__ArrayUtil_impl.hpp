#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayUtil::EnsureCapacity(::by_ref<::ArrayW<T>>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayUtil*>(),
                    {"EnsureCapacity", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayUtil::EnsureCore(::by_ref<::ArrayW<T>>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayUtil*>(),
                    {"EnsureCore", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline ::System::ValueTuple_2<::ArrayW<T>,int32_t> Cysharp::Threading::Tasks::Internal::ArrayUtil::Materialize(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayUtil*>(),
                    {"Materialize", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<T>,int32_t>>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::ArrayUtil::ArrayUtil()   {
}
