#pragma once
// IWYU pragma private; include "MA/Flora/ParallelBitArray.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__ParallelBitArray_def.hpp"
#include "MA/Flora/zzzz__SetBitEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::get_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.get_ChunkLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::get_ChunkLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_ChunkLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, ::Unity::Collections::Allocator, ::Unity::Collections::NativeArrayOptions)>(&::MA::Flora::ParallelBitArray::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181461070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, ::by_ref<::Unity::Collections::RewindableAllocator>, ::Unity::Collections::NativeArrayOptions)>(&::MA::Flora::ParallelBitArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181461010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FromExternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ParallelBitArray (*)(uint64_t*, int32_t, ::Unity::Collections::Allocator)>(&::MA::Flora::ParallelBitArray::FromExternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181460d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FromExternal", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181460b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::ParallelBitArray::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181460ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::Resize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181460e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.IsValidIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::IsValidIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"IsValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FillZeroes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::FillZeroes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181460c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FillZeroes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FillOnes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::FillOnes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181460c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FillOnes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, bool)>(&::MA::Flora::ParallelBitArray::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181455030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.SetAtomic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, bool)>(&::MA::Flora::ParallelBitArray::SetAtomic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181454dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetAtomic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.GetChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::GetChunk)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.SetChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, uint64_t)>(&::MA::Flora::ParallelBitArray::SetChunk)> {
  constexpr static std::size_t size = 0x250a0;
  constexpr static std::size_t addrs = 0x180bd4cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.InterlockedReadChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::InterlockedReadChunk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"InterlockedReadChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.InterlockedOrChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, uint64_t)>(&::MA::Flora::ParallelBitArray::InterlockedOrChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181454cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"InterlockedOrChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.AsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::AsArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181454750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.GetSubArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ParallelBitArray (::MA::Flora::ParallelBitArray::*)(int32_t)>(&::MA::Flora::ParallelBitArray::GetSubArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181454c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetSubArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.AsUnsafeBitArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::AsUnsafeBitArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181454780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsUnsafeBitArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.AsReadOnlyUnsafeBitArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::AsReadOnlyUnsafeBitArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181454780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsReadOnlyUnsafeBitArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, bool, int32_t)>(&::MA::Flora::ParallelBitArray::SetRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181454ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.SetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, uint64_t, int32_t)>(&::MA::Flora::ParallelBitArray::SetRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181454f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FindFirstSetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::FindFirstSetBit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181454ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindFirstSetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FindFirstZeroBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::FindFirstZeroBit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181454b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindFirstZeroBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.FindLastSetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::FindLastSetBit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181454bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindLastSetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.CountBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::CountBits)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181454a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CountBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.GetUnsafeReadOnlyPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t* (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::GetUnsafeReadOnlyPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafeReadOnlyPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.GetUnsafePtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t* (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::GetUnsafePtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.GetUnsafePtrUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t* (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::GetUnsafePtrUnchecked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafePtrUnchecked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(::MA::Flora::ParallelBitArray)>(&::MA::Flora::ParallelBitArray::CopyFrom)> {
  constexpr static std::size_t size = 0x5900;
  constexpr static std::size_t addrs = 0x18071b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(::MA::Flora::ParallelBitArray, int32_t, int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::CopyFrom)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814547c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(::MA::Flora::ParallelBitArray)>(&::MA::Flora::ParallelBitArray::CopyTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814548d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyTo", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::Copy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814549a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Copy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>, int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::Copy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181454900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Copy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(::MA::Flora::ParallelBitArray)>(&::MA::Flora::ParallelBitArray::Or)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181454d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Or", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.get_SetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::ParallelBitArray::*)()>(&::MA::Flora::ParallelBitArray::get_SetBits)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181455080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_SetBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.SetBitEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::SetBitEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181454e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelBitArray.CheckArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelBitArray::*)(int32_t, int32_t)>(&::MA::Flora::ParallelBitArray::CheckArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CheckArgs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::ParallelBitArray::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::ParallelBitArray::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::ParallelBitArray::get_ChunkLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_ChunkLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ParallelBitArray::_ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator, options);
}
inline void MA::Flora::ParallelBitArray::_ctor(int32_t  length, ::by_ref<::Unity::Collections::RewindableAllocator>  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator, options);
}
inline ::MA::Flora::ParallelBitArray MA::Flora::ParallelBitArray::FromExternal(uint64_t*  ptr, int32_t  length, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FromExternal", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ParallelBitArray>(nullptr, ___internal_method, ptr, length, allocator);
}
inline void MA::Flora::ParallelBitArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::ParallelBitArray::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputDeps);
}
inline void MA::Flora::ParallelBitArray::Resize(int32_t  newLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength);
}
inline bool MA::Flora::ParallelBitArray::IsValidIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"IsValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::ParallelBitArray::FillZeroes(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FillZeroes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void MA::Flora::ParallelBitArray::FillOnes(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FillOnes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void MA::Flora::ParallelBitArray::Set(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void MA::Flora::ParallelBitArray::SetAtomic(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetAtomic", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool MA::Flora::ParallelBitArray::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline uint64_t MA::Flora::ParallelBitArray::GetChunk(int32_t  chunkIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, chunkIndex);
}
inline void MA::Flora::ParallelBitArray::SetChunk(int32_t  chunkIndex, uint64_t  chunkBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunkIndex, chunkBits);
}
inline uint64_t MA::Flora::ParallelBitArray::InterlockedReadChunk(int32_t  chunkIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"InterlockedReadChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, chunkIndex);
}
inline void MA::Flora::ParallelBitArray::InterlockedOrChunk(int32_t  chunkIndex, uint64_t  chunkBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"InterlockedOrChunk", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunkIndex, chunkBits);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> MA::Flora::ParallelBitArray::AsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(*this, ___internal_method);
}
inline ::MA::Flora::ParallelBitArray MA::Flora::ParallelBitArray::GetSubArray(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetSubArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ParallelBitArray>(*this, ___internal_method, length);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray MA::Flora::ParallelBitArray::AsUnsafeBitArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsUnsafeBitArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(*this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray MA::Flora::ParallelBitArray::AsReadOnlyUnsafeBitArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"AsReadOnlyUnsafeBitArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(*this, ___internal_method);
}
inline void MA::Flora::ParallelBitArray::SetRange(int32_t  pos, bool  value, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, value, numBits);
}
inline void MA::Flora::ParallelBitArray::SetRange(int32_t  pos, uint64_t  bits, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, bits, numBits);
}
inline int32_t MA::Flora::ParallelBitArray::FindFirstSetBit(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindFirstSetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::ParallelBitArray::FindFirstZeroBit(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindFirstZeroBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::ParallelBitArray::FindLastSetBit(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"FindLastSetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::ParallelBitArray::CountBits(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CountBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int64_t* MA::Flora::ParallelBitArray::GetUnsafeReadOnlyPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafeReadOnlyPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t*>(*this, ___internal_method);
}
inline int64_t* MA::Flora::ParallelBitArray::GetUnsafePtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t*>(*this, ___internal_method);
}
inline int64_t* MA::Flora::ParallelBitArray::GetUnsafePtrUnchecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"GetUnsafePtrUnchecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t*>(*this, ___internal_method);
}
inline void MA::Flora::ParallelBitArray::CopyFrom(::MA::Flora::ParallelBitArray  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::ParallelBitArray::CopyFrom(::MA::Flora::ParallelBitArray  other, int32_t  srcPos, int32_t  dstPos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other, srcPos, dstPos, numBits);
}
inline void MA::Flora::ParallelBitArray::CopyTo(::MA::Flora::ParallelBitArray  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CopyTo", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::ParallelBitArray::Copy(int32_t  dstPos, int32_t  srcPos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Copy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcPos, numBits);
}
inline void MA::Flora::ParallelBitArray::Copy(int32_t  dstPos, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>  srcBitArray, int32_t  srcPos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Copy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dstPos, srcBitArray, srcPos, numBits);
}
inline void MA::Flora::ParallelBitArray::Or(::MA::Flora::ParallelBitArray  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"Or", {}, {::i2c::type_of<::MA::Flora::ParallelBitArray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::ParallelBitArray::get_SetBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"get_SetBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::ParallelBitArray::SetBitEnumerator(int32_t  srcPos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method, srcPos, numBits);
}
inline void MA::Flora::ParallelBitArray::CheckArgs(int32_t  pos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelBitArray>(),
                        {"CheckArgs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, numBits);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::ParallelBitArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::ParallelBitArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Bits", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ParallelBitArray::ParallelBitArray(::Unity::Collections::NativeArray_1<int64_t>  m_Bits, int32_t  m_Length) noexcept  {
this->m_Bits = m_Bits;
this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelBitArray::ParallelBitArray()   {
}
