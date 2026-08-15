#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__PublicKey_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__Oid_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181df0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181df17f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::ArrayW<uint8_t>, ::StringW)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df18e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::StringW, ::StringW)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df1900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181df1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_Extensions)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181df1940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Extensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_HasPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181df1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_HasPrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_PrivateKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181df1da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_PrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_IssuerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_IssuerName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181df1cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_IssuerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_NotAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotAfter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df1d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_NotAfter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_NotBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotBefore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df1d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_NotBefore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_PublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::PublicKey* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_PublicKey)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181df1f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_PublicKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_RawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_RawData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181df20d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_RawData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_SerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_SerialNumber)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815f45f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::Oid* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181df2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SignatureAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_SubjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_SubjectName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181df2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SubjectName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_Thumbprint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_Thumbprint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181df22f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Thumbprint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_Version)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181df2320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.GetCertContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ContentType (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::GetCertContentType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181df0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"GetCertContentType", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.GetNameInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(::System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::GetNameInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181df0bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"GetNameInfo", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509NameType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181df1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)(bool)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::ToString)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x181df0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.Verify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::Verify)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181df1750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"Verify", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.CreateCustomExtensionIfAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Extension* (*)(::System::Security::Cryptography::Oid*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::CreateCustomExtensionIfAny)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181df0a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"CreateCustomExtensionIfAny", {}, {::i2c::type_of<::System::Security::Cryptography::Oid*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2.get_Impl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::System::Security::Cryptography::X509Certificates::X509Certificate2::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2::get_Impl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181df1c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Impl", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyRawData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyRawData;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyRawData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyRawData;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyRawData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyRawData = value;
}
constexpr ::System::Security::Cryptography::Oid*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazySignatureAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySignatureAlgorithm;
}
constexpr ::System::Security::Cryptography::Oid* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazySignatureAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySignatureAlgorithm;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazySignatureAlgorithm(::System::Security::Cryptography::Oid*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazySignatureAlgorithm = value;
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyVersion;
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyVersion;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyVersion = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazySubjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySubjectName;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazySubjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySubjectName;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazySubjectName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazySubjectName = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyIssuerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyIssuerName;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyIssuerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyIssuerName;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyIssuerName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyIssuerName = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::PublicKey*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyPublicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPublicKey;
}
constexpr ::System::Security::Cryptography::X509Certificates::PublicKey* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyPublicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPublicKey;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyPublicKey(::System::Security::Cryptography::X509Certificates::PublicKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyPublicKey = value;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyPrivateKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPrivateKey;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyPrivateKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPrivateKey;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyPrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyPrivateKey = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyExtensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyExtensions;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* const& System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_get_lazyExtensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyExtensions;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2::__cordl_internal_set_lazyExtensions(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyExtensions = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::ArrayW<uint8_t>  rawData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData, password);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*  impl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impl);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::StringW  fileName, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, password);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* System::Security::Cryptography::X509Certificates::X509Certificate2::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Extensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2::get_HasPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_HasPrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::X509Certificate2::get_PrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_PrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_IssuerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotAfter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_NotAfter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotBefore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_NotBefore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::PublicKey* System::Security::Cryptography::X509Certificates::X509Certificate2::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_PublicKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::PublicKey*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2::get_RawData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_RawData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::X509Certificates::X509Certificate2::get_SignatureAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SignatureAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::Oid*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2::get_SubjectName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_SubjectName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2::get_Thumbprint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Thumbprint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509Certificate2::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ContentType System::Security::Cryptography::X509Certificates::X509Certificate2::GetCertContentType(::ArrayW<uint8_t>  rawData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"GetCertContentType", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ContentType>(nullptr, ___internal_method, rawData);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2::GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType  nameType, bool  forIssuer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"GetNameInfo", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509NameType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, nameType, forIssuer);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2::ToString(bool  verbose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, verbose);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2::Verify()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"Verify", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Extension* System::Security::Cryptography::X509Certificates::X509Certificate2::CreateCustomExtensionIfAny(::System::Security::Cryptography::Oid*  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"CreateCustomExtensionIfAny", {}, {::i2c::type_of<::System::Security::Cryptography::Oid*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Extension*>(nullptr, ___internal_method, oid);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* System::Security::Cryptography::X509Certificates::X509Certificate2::get_Impl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                        {"get_Impl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::ArrayW<uint8_t>  rawData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(rawData));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(rawData, password));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*  impl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(impl));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::StringW  fileName, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(fileName, password));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(certificate));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2::X509Certificate2()   {
}
