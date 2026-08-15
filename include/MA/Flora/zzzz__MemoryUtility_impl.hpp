#pragma once
// IWYU pragma private; include "MA/Flora/MemoryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__MemoryUtility_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
template<typename T>
inline T* MA::Flora::MemoryUtility::Allocate(int32_t  count, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::MemoryUtility*>(),
                    {"Allocate", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, count, allocator, options);
}
template<typename T>
inline void MA::Flora::MemoryUtility::Free(T*  ptr, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::MemoryUtility*>(),
                    {"Free", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, allocator);
}
// Ctor Parameters []
constexpr ::MA::Flora::MemoryUtility::MemoryUtility()   {
}
