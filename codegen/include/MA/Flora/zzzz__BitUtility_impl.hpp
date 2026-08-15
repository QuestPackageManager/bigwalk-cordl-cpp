#pragma once
// IWYU pragma private; include "MA/Flora/BitUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__BitUtility_def.hpp"
//  Writing Method size for method: ::MA::Flora::BitUtility.AlignDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::BitUtility::AlignDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181459010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignDown", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AlignUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::BitUtility::AlignUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181459030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AlignUp64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::MA::Flora::BitUtility::AlignUp64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181459020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignUp64", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.IsWordAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::MA::Flora::BitUtility::IsWordAligned)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"IsWordAligned", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.LoadAlignedBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::LoadAlignedBits)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18145a5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"LoadAlignedBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.FromBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::MA::Flora::BitUtility::FromBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18145a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FromBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t)>(&::MA::Flora::BitUtility::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145a570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"IsSet", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, bool)>(&::MA::Flora::BitUtility::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"Set", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.SetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, bool, int32_t)>(&::MA::Flora::BitUtility::SetBits)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18145adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"SetBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.CountBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::CountBits)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18145a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"CountBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.TestAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::TestAny)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18145af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"TestAny", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AndWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, uint64_t*, int32_t)>(&::MA::Flora::BitUtility::AndWords)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x181459a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AndBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::AndBits)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181459040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.OrWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, uint64_t*, int32_t)>(&::MA::Flora::BitUtility::OrWords)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x18145a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"OrWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.OrBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::OrBits)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18145a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"OrBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AndNotWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, uint64_t*, int32_t)>(&::MA::Flora::BitUtility::AndNotWords)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x1814594c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndNotWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.AndNotBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::AndNotBits)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181459270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndNotBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.XorWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, uint64_t*, int32_t)>(&::MA::Flora::BitUtility::XorWords)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x18145b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"XorWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.XorBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::XorBits)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18145afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"XorBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.FindFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::FindFirst)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18145a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FindFirst", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BitUtility.FindLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, uint64_t*, int32_t, int32_t)>(&::MA::Flora::BitUtility::FindLast)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18145a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FindLast", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::BitUtility::AlignDown(int32_t  value, int32_t  alignPow2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignDown", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, alignPow2);
}
inline int32_t MA::Flora::BitUtility::AlignUp(int32_t  value, int32_t  alignPow2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, alignPow2);
}
inline int32_t MA::Flora::BitUtility::AlignUp64(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AlignUp64", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline bool MA::Flora::BitUtility::IsWordAligned(int32_t  dstOffset, int32_t  srcOffset, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"IsWordAligned", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dstOffset, srcOffset, bitCount);
}
inline uint64_t MA::Flora::BitUtility::LoadAlignedBits(uint64_t*  src, int32_t  srcWord, int32_t  shiftDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"LoadAlignedBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, src, srcWord, shiftDelta);
}
inline int32_t MA::Flora::BitUtility::FromBool(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FromBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline bool MA::Flora::BitUtility::IsSet(uint64_t*  ptr, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"IsSet", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, pos);
}
inline void MA::Flora::BitUtility::Set(uint64_t*  ptr, int32_t  pos, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"Set", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, pos, value);
}
inline void MA::Flora::BitUtility::SetBits(uint64_t*  ptr, int32_t  pos, bool  value, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"SetBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, pos, value, numBits);
}
inline int32_t MA::Flora::BitUtility::CountBits(uint64_t*  ptr, int32_t  pos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"CountBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, pos, numBits);
}
inline bool MA::Flora::BitUtility::TestAny(uint64_t*  ptr, int32_t  pos, int32_t  numBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"TestAny", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, pos, numBits);
}
inline void MA::Flora::BitUtility::AndWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, wordCount);
}
inline void MA::Flora::BitUtility::AndBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, dstOffset, src, srcOffset, bitCount);
}
inline void MA::Flora::BitUtility::OrWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"OrWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, wordCount);
}
inline void MA::Flora::BitUtility::OrBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"OrBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, dstOffset, src, srcOffset, bitCount);
}
inline void MA::Flora::BitUtility::AndNotWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndNotWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, wordCount);
}
inline void MA::Flora::BitUtility::AndNotBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"AndNotBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, dstOffset, src, srcOffset, bitCount);
}
inline void MA::Flora::BitUtility::XorWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"XorWords", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, wordCount);
}
inline void MA::Flora::BitUtility::XorBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"XorBits", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, dstOffset, src, srcOffset, bitCount);
}
inline int32_t MA::Flora::BitUtility::FindFirst(bool  value, uint64_t*  bits, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FindFirst", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, bits, offset, count);
}
inline int32_t MA::Flora::BitUtility::FindLast(bool  value, uint64_t*  bits, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BitUtility*>(),
                        {"FindLast", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, bits, offset, count);
}
// Ctor Parameters []
constexpr ::MA::Flora::BitUtility::BitUtility()   {
}
