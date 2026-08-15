#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__UnsafeListExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
template<typename T>
inline T MA::Flora::UnsafeListExtensions::Pop(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnsafeListExtensions*>(),
                    {"Pop", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::MA::Flora::UnsafeListExtensions::UnsafeListExtensions()   {
}
