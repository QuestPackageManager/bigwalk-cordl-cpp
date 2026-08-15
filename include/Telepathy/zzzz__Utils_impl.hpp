#pragma once
// IWYU pragma private; include "Telepathy/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__Utils_def.hpp"
//  Writing Method size for method: ::Telepathy::Utils.IntToBytesBigEndianNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Telepathy::Utils::IntToBytesBigEndianNonAlloc)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x181e5b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Utils*>(),
                        {"IntToBytesBigEndianNonAlloc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Utils.BytesToIntBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::Telepathy::Utils::BytesToIntBigEndian)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e5b4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Utils*>(),
                        {"BytesToIntBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Telepathy::Utils::IntToBytesBigEndianNonAlloc(int32_t  value, ::ArrayW<uint8_t>  bytes, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Utils*>(),
                        {"IntToBytesBigEndianNonAlloc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, bytes, offset);
}
inline int32_t Telepathy::Utils::BytesToIntBigEndian(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Utils*>(),
                        {"BytesToIntBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::Telepathy::Utils::Utils()   {
}
