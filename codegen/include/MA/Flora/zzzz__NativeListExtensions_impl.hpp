#pragma once
// IWYU pragma private; include "MA/Flora/NativeListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__NativeListExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template<typename T>
inline bool MA::Flora::NativeListExtensions::IsValidIndex(::by_ref<::Unity::Collections::NativeList_1<T>>  list, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"IsValidIndex", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, index);
}
template<typename T>
inline void MA::Flora::NativeListExtensions::SetOrAdd(::Unity::Collections::NativeList_1<T>  list, int32_t  index, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"SetOrAdd", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, index, value);
}
template<typename T>
inline T MA::Flora::NativeListExtensions::Pop(::Unity::Collections::NativeList_1<T>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"Pop", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, list);
}
template<typename T>
inline void MA::Flora::NativeListExtensions::Fill(::Unity::Collections::NativeList_1<T>  list, T  value, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"Fill", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, value, startIndex, length);
}
template<typename T>
inline void MA::Flora::NativeListExtensions::Initialize(::Unity::Collections::NativeList_1<T>  list, ::by_ref<T>  initValue, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"Initialize", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, initValue, count);
}
template<typename T>
inline void MA::Flora::NativeListExtensions::Reserve(::Unity::Collections::NativeList_1<T>  list, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"Reserve", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, count);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeListExtensions::TransferOwnershipToNativeArray(::by_ref<::Unity::Collections::NativeList_1<T>>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeListExtensions*>(),
                    {"TransferOwnershipToNativeArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeListExtensions::NativeListExtensions()   {
}
