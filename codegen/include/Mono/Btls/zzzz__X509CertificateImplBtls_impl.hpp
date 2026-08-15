#pragma once
// IWYU pragma private; include "Mono/Btls/X509CertificateImplBtls.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_impl.hpp"
#include "Mono/Btls/zzzz__X509CertificateImplBtls_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsKey_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Format_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImplCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::X509CertificateImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181dc47f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::Mono::Btls::X509CertificateImplBtls*)>(&::Mono::Btls::X509CertificateImplBtls::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181dc4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::X509CertificateImplBtls*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::ArrayW<uint8_t>, ::Mono::Btls::MonoBtlsX509Format)>(&::Mono::Btls::X509CertificateImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181dc4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::Mono::Btls::X509CertificateImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181dc4940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc4b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_X509
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_X509)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"get_X509", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_NativePrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsKey* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_NativePrivateKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc4ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"get_NativePrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::Clone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181dc3ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.GetRawCertData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::GetRawCertData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181dc4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_IntermediateCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_IntermediateCertificates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(bool)>(&::Mono::Btls::X509CertificateImplBtls::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dc3f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_HasPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180351a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.get_PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::get_PrivateKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181dc3fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.set_PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Btls::X509CertificateImplBtls::set_PrivateKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181dc4be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.GetRSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::GetRSAPrivateKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181dc3fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.GetDSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (::Mono::Btls::X509CertificateImplBtls::*)()>(&::Mono::Btls::X509CertificateImplBtls::GetDSAPrivateKey)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x1812ade20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::ArrayW<uint8_t>)>(&::Mono::Btls::X509CertificateImplBtls::Import)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dc4510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"Import", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.ImportPkcs12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*)>(&::Mono::Btls::X509CertificateImplBtls::ImportPkcs12)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x181dc4100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"ImportPkcs12", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.ImportAuthenticode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509CertificateImplBtls::*)(::ArrayW<uint8_t>)>(&::Mono::Btls::X509CertificateImplBtls::ImportAuthenticode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181dc4050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"ImportAuthenticode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509CertificateImplBtls.Verify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::X509CertificateImplBtls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::Mono::Btls::X509CertificateImplBtls::Verify)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181dc4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 31}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsX509*& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_x509()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x509;
}
constexpr ::Mono::Btls::MonoBtlsX509* const& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_x509() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x509;
}
constexpr void Mono::Btls::X509CertificateImplBtls::__cordl_internal_set_x509(::Mono::Btls::MonoBtlsX509*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x509 = value;
}
constexpr ::Mono::Btls::MonoBtlsKey*& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_nativePrivateKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativePrivateKey;
}
constexpr ::Mono::Btls::MonoBtlsKey* const& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_nativePrivateKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativePrivateKey;
}
constexpr void Mono::Btls::X509CertificateImplBtls::__cordl_internal_set_nativePrivateKey(::Mono::Btls::MonoBtlsKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativePrivateKey = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_intermediateCerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intermediateCerts;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* const& Mono::Btls::X509CertificateImplBtls::__cordl_internal_get_intermediateCerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intermediateCerts;
}
constexpr void Mono::Btls::X509CertificateImplBtls::__cordl_internal_set_intermediateCerts(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intermediateCerts = value;
}
inline void Mono::Btls::X509CertificateImplBtls::_ctor(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline void Mono::Btls::X509CertificateImplBtls::_ctor(::Mono::Btls::X509CertificateImplBtls*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::X509CertificateImplBtls*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mono::Btls::X509CertificateImplBtls::_ctor(::ArrayW<uint8_t>  data, ::Mono::Btls::MonoBtlsX509Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, format);
}
inline void Mono::Btls::X509CertificateImplBtls::_ctor(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, password, keyStorageFlags);
}
inline bool Mono::Btls::X509CertificateImplBtls::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::X509CertificateImplBtls::get_X509()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"get_X509", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsKey* Mono::Btls::X509CertificateImplBtls::get_NativePrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"get_NativePrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsKey*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::Btls::X509CertificateImplBtls::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Btls::X509CertificateImplBtls::GetRawCertData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Mono::Btls::X509CertificateImplBtls::get_IntermediateCertificates()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*>(this, ___internal_method);
}
inline void Mono::Btls::X509CertificateImplBtls::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Mono::Btls::X509CertificateImplBtls::get_HasPrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* Mono::Btls::X509CertificateImplBtls::get_PrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method);
}
inline void Mono::Btls::X509CertificateImplBtls::set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::RSA* Mono::Btls::X509CertificateImplBtls::GetRSAPrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* Mono::Btls::X509CertificateImplBtls::GetDSAPrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(this, ___internal_method);
}
inline void Mono::Btls::X509CertificateImplBtls::Import(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"Import", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mono::Btls::X509CertificateImplBtls::ImportPkcs12(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"ImportPkcs12", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, password);
}
inline void Mono::Btls::X509CertificateImplBtls::ImportAuthenticode(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(),
                        {"ImportAuthenticode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool Mono::Btls::X509CertificateImplBtls::Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2*  thisCertificate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509CertificateImplBtls*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, thisCertificate);
}
inline ::Mono::Btls::X509CertificateImplBtls* Mono::Btls::X509CertificateImplBtls::New_ctor(::Mono::Btls::MonoBtlsX509*  x509)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509CertificateImplBtls*>(x509));
}
inline ::Mono::Btls::X509CertificateImplBtls* Mono::Btls::X509CertificateImplBtls::New_ctor(::Mono::Btls::X509CertificateImplBtls*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509CertificateImplBtls*>(other));
}
inline ::Mono::Btls::X509CertificateImplBtls* Mono::Btls::X509CertificateImplBtls::New_ctor(::ArrayW<uint8_t>  data, ::Mono::Btls::MonoBtlsX509Format  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509CertificateImplBtls*>(data, format));
}
inline ::Mono::Btls::X509CertificateImplBtls* Mono::Btls::X509CertificateImplBtls::New_ctor(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509CertificateImplBtls*>(data, password, keyStorageFlags));
}
// Ctor Parameters []
constexpr ::Mono::Btls::X509CertificateImplBtls::X509CertificateImplBtls()   {
}
