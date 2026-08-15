#pragma once
// IWYU pragma private; include "MA/Flora/ParallelBitArrayHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__ParallelBitArrayHelpers_def.hpp"
#include "MA/Flora/zzzz__ParallelBitArray_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::ParallelBitArrayHelpers.AsParallelBitArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ParallelBitArray (*)(::Unity::Collections::NativeArray_1<int64_t>)>(&::MA::Flora::ParallelBitArrayHelpers::AsParallelBitArray)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181460a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArrayHelpers*>(),
                        {"AsParallelBitArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArrayHelpers.AsParallelBitArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ParallelBitArray (*)(::Unity::Collections::NativeArray_1<uint64_t>)>(&::MA::Flora::ParallelBitArrayHelpers::AsParallelBitArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814609d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArrayHelpers*>(),
                        {"AsParallelBitArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::ParallelBitArray MA::Flora::ParallelBitArrayHelpers::AsParallelBitArray(::Unity::Collections::NativeArray_1<int64_t>  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArrayHelpers*>(),
                        {"AsParallelBitArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ParallelBitArray>(nullptr, ___internal_method, bits);
}
inline ::MA::Flora::ParallelBitArray MA::Flora::ParallelBitArrayHelpers::AsParallelBitArray(::Unity::Collections::NativeArray_1<uint64_t>  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArrayHelpers*>(),
                        {"AsParallelBitArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ParallelBitArray>(nullptr, ___internal_method, bits);
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelBitArrayHelpers::ParallelBitArrayHelpers()   {
}
