#pragma once
// IWYU pragma private; include "Mono/Security/ASN1Convert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__ASN1Convert_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (*)(int32_t)>(&::Mono::Security::ASN1Convert::FromInt32)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181599490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (*)(::StringW)>(&::Mono::Security::ASN1Convert::FromOid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815996f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.FromUnsignedBigInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (*)(::ArrayW<uint8_t>)>(&::Mono::Security::ASN1Convert::FromUnsignedBigInteger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181599750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromUnsignedBigInteger", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToInt32)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181599b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToOid)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181599cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToOid", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1Convert.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1815997f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromInt32(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(nullptr, ___internal_method, value);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromOid(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(nullptr, ___internal_method, oid);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1Convert::FromUnsignedBigInteger(::ArrayW<uint8_t>  big)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"FromUnsignedBigInteger", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(nullptr, ___internal_method, big);
}
inline int32_t Mono::Security::ASN1Convert::ToInt32(::Mono::Security::ASN1*  asn1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, asn1);
}
inline ::StringW Mono::Security::ASN1Convert::ToOid(::Mono::Security::ASN1*  asn1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToOid", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, asn1);
}
inline ::System::DateTime Mono::Security::ASN1Convert::ToDateTime(::Mono::Security::ASN1*  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::ASN1Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, time);
}
// Ctor Parameters []
constexpr ::Mono::Security::ASN1Convert::ASN1Convert()   {
}
