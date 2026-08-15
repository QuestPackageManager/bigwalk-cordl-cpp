#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__CryptoConvert_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.ToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::CryptoConvert::ToHex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815b45c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromHexChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::Mono::Security::Cryptography::CryptoConvert::FromHexChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815b4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHexChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Mono::Security::Cryptography::CryptoConvert::FromHex)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1815b4450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Mono::Security::Cryptography::CryptoConvert::ToHex(::ArrayW<uint8_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline uint8_t Mono::Security::Cryptography::CryptoConvert::FromHexChar(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHexChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::CryptoConvert::FromHex(::StringW  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, hex);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::CryptoConvert::CryptoConvert()   {
}
