#pragma once
// IWYU pragma private; include "MA/InternalBridge/CollectionsBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__CollectionsBridge_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template<typename T>
inline ::Unity::Collections::Allocator MA::InternalBridge::CollectionsBridge::GetAllocatorLabel(::by_ref<::Unity::Collections::NativeArray_1<T>>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::CollectionsBridge*>(),
                    {"GetAllocatorLabel", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(nullptr, ___internal_method, array);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::CollectionsBridge::CollectionsBridge()   {
}
