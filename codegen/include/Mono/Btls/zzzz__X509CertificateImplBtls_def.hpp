#pragma once
// IWYU pragma private; include "Mono/Btls/X509CertificateImplBtls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateImplBtls)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono::Btls {
class MonoBtlsKey;
}
namespace Mono::Btls {
struct MonoBtlsX509Format;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Btls {
class X509CertificateImplBtls;
}
// Write type traits
MARK_REF_T(::Mono::Btls::X509CertificateImplBtls*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::X509CertificateImplBtls*, "Mono.Btls", "X509CertificateImplBtls");
// Dependencies System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.X509CertificateImplBtls
class CORDL_TYPE X509CertificateImplBtls : public ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix {
public:
// Declarations
 __declspec(property(get=get_HasPrivateKey)) bool  HasPrivateKey;

 __declspec(property(get=get_IntermediateCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*  IntermediateCertificates;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_NativePrivateKey)) ::Mono::Btls::MonoBtlsKey*  NativePrivateKey;

 __declspec(property(get=get_PrivateKey, put=set_PrivateKey)) ::System::Security::Cryptography::AsymmetricAlgorithm*  PrivateKey;

 __declspec(property(get=get_X509)) ::Mono::Btls::MonoBtlsX509*  X509;

/// @brief Field intermediateCerts, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_intermediateCerts, put=__cordl_internal_set_intermediateCerts)) ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*  intermediateCerts;

/// @brief Field nativePrivateKey, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativePrivateKey, put=__cordl_internal_set_nativePrivateKey)) ::Mono::Btls::MonoBtlsKey*  nativePrivateKey;

/// @brief Field x509, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_x509, put=__cordl_internal_set_x509)) ::Mono::Btls::MonoBtlsX509*  x509;

/// @brief Method Clone, addr 0x181dc3ea0, size 0xe0, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone() ;

/// @brief Method Dispose, addr 0x181dc3f80, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetDSAPrivateKey, addr 0x1812ade20, size 0x850, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::DSA* GetDSAPrivateKey() ;

/// @brief Method GetRSAPrivateKey, addr 0x181dc3fd0, size 0x40, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::RSA* GetRSAPrivateKey() ;

/// @brief Method GetRawCertData, addr 0x181dc4010, size 0x40, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawCertData() ;

/// @brief Method Import, addr 0x181dc4510, size 0x50, virtual false, abstract: false, final false
inline void Import(::ArrayW<uint8_t>  data) ;

/// @brief Method ImportAuthenticode, addr 0x181dc4050, size 0xb0, virtual false, abstract: false, final false
inline void ImportAuthenticode(::ArrayW<uint8_t>  data) ;

/// @brief Method ImportPkcs12, addr 0x181dc4100, size 0x410, virtual false, abstract: false, final false
inline void ImportPkcs12(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password) ;

static inline ::Mono::Btls::X509CertificateImplBtls* New_ctor(::ArrayW<uint8_t>  data, ::Mono::Btls::MonoBtlsX509Format  format) ;

static inline ::Mono::Btls::X509CertificateImplBtls* New_ctor(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

static inline ::Mono::Btls::X509CertificateImplBtls* New_ctor(::Mono::Btls::X509CertificateImplBtls*  other) ;

static inline ::Mono::Btls::X509CertificateImplBtls* New_ctor(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method Verify, addr 0x181dc4560, size 0x290, virtual true, abstract: false, final false
inline bool Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2*  thisCertificate) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* const& __cordl_internal_get_intermediateCerts() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*& __cordl_internal_get_intermediateCerts() ;

constexpr ::Mono::Btls::MonoBtlsKey* const& __cordl_internal_get_nativePrivateKey() const;

constexpr ::Mono::Btls::MonoBtlsKey*& __cordl_internal_get_nativePrivateKey() ;

constexpr ::Mono::Btls::MonoBtlsX509* const& __cordl_internal_get_x509() const;

constexpr ::Mono::Btls::MonoBtlsX509*& __cordl_internal_get_x509() ;

constexpr void __cordl_internal_set_intermediateCerts(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*  value) ;

constexpr void __cordl_internal_set_nativePrivateKey(::Mono::Btls::MonoBtlsKey*  value) ;

constexpr void __cordl_internal_set_x509(::Mono::Btls::MonoBtlsX509*  value) ;

/// @brief Method .ctor, addr 0x181dc4900, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::Mono::Btls::MonoBtlsX509Format  format) ;

/// @brief Method .ctor, addr 0x181dc4940, size 0x240, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method .ctor, addr 0x181dc4830, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::X509CertificateImplBtls*  other) ;

/// @brief Method .ctor, addr 0x181dc47f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method get_HasPrivateKey, addr 0x180351a50, size 0x10, virtual true, abstract: false, final false
inline bool get_HasPrivateKey() ;

/// @brief Method get_IntermediateCertificates, addr 0x1802edc30, size 0x10, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates() ;

/// @brief Method get_IsValid, addr 0x181dc4b80, size 0x20, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_NativePrivateKey, addr 0x181dc4ba0, size 0x20, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsKey* get_NativePrivateKey() ;

/// @brief Method get_PrivateKey, addr 0x181dc3fd0, size 0x40, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey() ;

/// @brief Method get_X509, addr 0x181dc4bc0, size 0x20, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* get_X509() ;

/// @brief Method set_PrivateKey, addr 0x181dc4be0, size 0xc0, virtual true, abstract: false, final false
inline void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509CertificateImplBtls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplBtls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509CertificateImplBtls(X509CertificateImplBtls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplBtls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509CertificateImplBtls(X509CertificateImplBtls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11506};

/// @brief Field x509, offset: 0xb0, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509*  ___x509;

/// @brief Field nativePrivateKey, offset: 0xb8, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsKey*  ___nativePrivateKey;

/// @brief Field intermediateCerts, offset: 0xc0, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*  ___intermediateCerts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::X509CertificateImplBtls, ___x509) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509CertificateImplBtls, ___nativePrivateKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509CertificateImplBtls, ___intermediateCerts) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::X509CertificateImplBtls) == 0xc8, "Size mismatch!");

} // namespace end def Mono::Btls
