#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeBitArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__UnsafeBitArrayExtensions_def.hpp"
#include "MA/Flora/zzzz__SetBitEnumerator_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, bool, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindFirst)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814623d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirst", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, bool, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindLast)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181462580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLast", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindFirstSetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindFirstSetBit)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814551e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirstSetBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindLastSetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindLastSetBit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181455530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLastSetBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindFirstZeroBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindFirstZeroBit)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181455370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirstZeroBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.FindLastZeroBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::FindLastZeroBit)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181462400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLastZeroBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.SetBitEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray)>(&::MA::Flora::UnsafeBitArrayExtensions::SetBitEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181462650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.SetBitEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::SetBitEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814625b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitArrayExtensions.CheckArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, int32_t, int32_t)>(&::MA::Flora::UnsafeBitArrayExtensions::CheckArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"CheckArgs", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindFirst(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, bool  value, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirst", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, value, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindLast(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, bool  value, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLast", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, value, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindFirstSetBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirstSetBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindLastSetBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLastSetBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindFirstZeroBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindFirstZeroBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitArrayExtensions::FindLastZeroBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"FindLastZeroBit", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitArray, startIndex, count);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::UnsafeBitArrayExtensions::SetBitEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(nullptr, ___internal_method, bitArray);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::UnsafeBitArrayExtensions::SetBitEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  pos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"SetBitEnumerator", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(nullptr, ___internal_method, bitArray, pos, numBits);
}
inline void MA::Flora::UnsafeBitArrayExtensions::CheckArgs(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  pos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitArrayExtensions*>(),
                        {"CheckArgs", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bitArray, pos, numBits);
}
// Ctor Parameters []
constexpr ::MA::Flora::UnsafeBitArrayExtensions::UnsafeBitArrayExtensions()   {
}
