#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsContext)
namespace Mono::Btls {
class IMonoBtlsBioMono;
}
namespace Mono::Btls {
class MonoBtlsBio;
}
namespace Mono::Btls {
class MonoBtlsSslCtx;
}
namespace Mono::Btls {
struct MonoBtlsSslError;
}
namespace Mono::Btls {
class MonoBtlsSsl;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace Mono::Btls {
class X509CertificateImplBtls;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
namespace Mono::Security::Interface {
struct TlsProtocolCode;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsContext;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsContext*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsContext*, "Mono.Btls", "MonoBtlsContext");
// Dependencies Mono.Net.Security.MobileTlsContext
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsContext
class CORDL_TYPE MonoBtlsContext : public ::Mono::Net::Security::MobileTlsContext {
public:
// Declarations
 __declspec(property(get=get_IsAuthenticated)) bool  IsAuthenticated;

 __declspec(property(get=get_LocalClientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  LocalClientCertificate;

 __declspec(property(get=get_RemoteCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  RemoteCertificate;

/// @brief Field bio, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_bio, put=__cordl_internal_set_bio)) ::Mono::Btls::MonoBtlsBio*  bio;

/// @brief Field certificateValidated, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_certificateValidated, put=__cordl_internal_set_certificateValidated)) bool  certificateValidated;

/// @brief Field clientCertificate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientCertificate, put=__cordl_internal_set_clientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  clientCertificate;

/// @brief Field connected, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get_connected, put=__cordl_internal_set_connected)) bool  connected;

/// @brief Field connectionInfo, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionInfo, put=__cordl_internal_set_connectionInfo)) ::Mono::Security::Interface::MonoTlsConnectionInfo*  connectionInfo;

/// @brief Field ctx, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ctx, put=__cordl_internal_set_ctx)) ::Mono::Btls::MonoBtlsSslCtx*  ctx;

/// @brief Field errbio, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_errbio, put=__cordl_internal_set_errbio)) ::Mono::Btls::MonoBtlsBio*  errbio;

/// @brief Field isAuthenticated, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAuthenticated, put=__cordl_internal_set_isAuthenticated)) bool  isAuthenticated;

/// @brief Field nativeClientCertificate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeClientCertificate, put=__cordl_internal_set_nativeClientCertificate)) ::Mono::Btls::X509CertificateImplBtls*  nativeClientCertificate;

/// @brief Field nativeServerCertificate, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeServerCertificate, put=__cordl_internal_set_nativeServerCertificate)) ::Mono::Btls::X509CertificateImplBtls*  nativeServerCertificate;

/// @brief Field remoteCertificate, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteCertificate, put=__cordl_internal_set_remoteCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  remoteCertificate;

/// @brief Field ssl, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ssl, put=__cordl_internal_set_ssl)) ::Mono::Btls::MonoBtlsSsl*  ssl;

/// @brief Convert operator to "::Mono::Btls::IMonoBtlsBioMono"
constexpr operator  ::Mono::Btls::IMonoBtlsBioMono*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Dispose(::by_ref<T>  disposable) ;

/// @brief Method Dispose, addr 0x181b433c0, size 0xb0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoProcessHandshake, addr 0x181b43470, size 0x60, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError DoProcessHandshake() ;

/// @brief Method FinishHandshake, addr 0x181b434d0, size 0x1a0, virtual true, abstract: false, final false
inline void FinishHandshake() ;

/// @brief Method Flush, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetException, addr 0x181b43670, size 0x290, virtual false, abstract: false, final false
static inline ::System::Exception* GetException(::Mono::Btls::MonoBtlsSslError  status) ;

/// @brief Method GetPeerCertificate, addr 0x181b43900, size 0xc0, virtual false, abstract: false, final false
inline void GetPeerCertificate() ;

/// @brief Method GetPrivateCertificate, addr 0x181b439c0, size 0x210, virtual false, abstract: false, final false
static inline ::Mono::Btls::X509CertificateImplBtls* GetPrivateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate) ;

/// @brief Method GetProtocol, addr 0x181b43bd0, size 0x50, virtual false, abstract: false, final false
static inline ::Mono::Security::Interface::TlsProtocols GetProtocol(::Mono::Security::Interface::TlsProtocolCode  protocol) ;

/// @brief Method InitializeConnection, addr 0x181b43c20, size 0x690, virtual false, abstract: false, final false
inline void InitializeConnection() ;

/// @brief Method InitializeSession, addr 0x181b442b0, size 0x190, virtual false, abstract: false, final false
inline void InitializeSession() ;

/// @brief Method Mono.Btls.IMonoBtlsBioMono.Close, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Mono_Btls_IMonoBtlsBioMono_Close() ;

/// @brief Method Mono.Btls.IMonoBtlsBioMono.Flush, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Mono_Btls_IMonoBtlsBioMono_Flush() ;

/// @brief Method Mono.Btls.IMonoBtlsBioMono.Read, addr 0x181b44440, size 0x30, virtual true, abstract: false, final true
inline int32_t Mono_Btls_IMonoBtlsBioMono_Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<bool>  wantMore) ;

/// @brief Method Mono.Btls.IMonoBtlsBioMono.Write, addr 0x181b44470, size 0x30, virtual true, abstract: false, final true
inline bool Mono_Btls_IMonoBtlsBioMono_Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

static inline ::Mono::Btls::MonoBtlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options) ;

/// @brief Method PendingRenegotiation, addr 0x181b444a0, size 0x30, virtual true, abstract: false, final false
inline bool PendingRenegotiation() ;

/// @brief Method ProcessHandshake, addr 0x181b444d0, size 0x150, virtual true, abstract: false, final false
inline bool ProcessHandshake() ;

/// @brief Method Read, addr 0x181b44620, size 0x1e0, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,bool> Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Renegotiate, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final false
inline void Renegotiate() ;

/// @brief Method SelectCallback, addr 0x181b44800, size 0xb0, virtual false, abstract: false, final false
inline int32_t SelectCallback(::ArrayW<::StringW>  acceptableIssuers) ;

/// @brief Method ServerNameCallback, addr 0x181b448b0, size 0x70, virtual false, abstract: false, final false
inline int32_t ServerNameCallback() ;

/// @brief Method SetPrivateCertificate, addr 0x181b44920, size 0x2c0, virtual false, abstract: false, final false
inline void SetPrivateCertificate(::Mono::Btls::X509CertificateImplBtls*  privateCert) ;

/// @brief Method Shutdown, addr 0x181b44be0, size 0x60, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method StartHandshake, addr 0x181b44c40, size 0x130, virtual true, abstract: false, final false
inline void StartHandshake() ;

/// @brief Method VerifyCallback, addr 0x181b44d70, size 0x1e0, virtual false, abstract: false, final false
inline int32_t VerifyCallback(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx) ;

/// @brief Method Write, addr 0x181b44f50, size 0x1a0, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,bool> Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

constexpr ::Mono::Btls::MonoBtlsBio* const& __cordl_internal_get_bio() const;

constexpr ::Mono::Btls::MonoBtlsBio*& __cordl_internal_get_bio() ;

constexpr bool const& __cordl_internal_get_certificateValidated() const;

constexpr bool& __cordl_internal_get_certificateValidated() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_clientCertificate() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_clientCertificate() ;

constexpr bool const& __cordl_internal_get_connected() const;

constexpr bool& __cordl_internal_get_connected() ;

constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo* const& __cordl_internal_get_connectionInfo() const;

constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& __cordl_internal_get_connectionInfo() ;

constexpr ::Mono::Btls::MonoBtlsSslCtx* const& __cordl_internal_get_ctx() const;

constexpr ::Mono::Btls::MonoBtlsSslCtx*& __cordl_internal_get_ctx() ;

constexpr ::Mono::Btls::MonoBtlsBio* const& __cordl_internal_get_errbio() const;

constexpr ::Mono::Btls::MonoBtlsBio*& __cordl_internal_get_errbio() ;

constexpr bool const& __cordl_internal_get_isAuthenticated() const;

constexpr bool& __cordl_internal_get_isAuthenticated() ;

constexpr ::Mono::Btls::X509CertificateImplBtls* const& __cordl_internal_get_nativeClientCertificate() const;

constexpr ::Mono::Btls::X509CertificateImplBtls*& __cordl_internal_get_nativeClientCertificate() ;

constexpr ::Mono::Btls::X509CertificateImplBtls* const& __cordl_internal_get_nativeServerCertificate() const;

constexpr ::Mono::Btls::X509CertificateImplBtls*& __cordl_internal_get_nativeServerCertificate() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_remoteCertificate() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_remoteCertificate() ;

constexpr ::Mono::Btls::MonoBtlsSsl* const& __cordl_internal_get_ssl() const;

constexpr ::Mono::Btls::MonoBtlsSsl*& __cordl_internal_get_ssl() ;

constexpr void __cordl_internal_set_bio(::Mono::Btls::MonoBtlsBio*  value) ;

constexpr void __cordl_internal_set_certificateValidated(bool  value) ;

constexpr void __cordl_internal_set_clientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

constexpr void __cordl_internal_set_connected(bool  value) ;

constexpr void __cordl_internal_set_connectionInfo(::Mono::Security::Interface::MonoTlsConnectionInfo*  value) ;

constexpr void __cordl_internal_set_ctx(::Mono::Btls::MonoBtlsSslCtx*  value) ;

constexpr void __cordl_internal_set_errbio(::Mono::Btls::MonoBtlsBio*  value) ;

constexpr void __cordl_internal_set_isAuthenticated(bool  value) ;

constexpr void __cordl_internal_set_nativeClientCertificate(::Mono::Btls::X509CertificateImplBtls*  value) ;

constexpr void __cordl_internal_set_nativeServerCertificate(::Mono::Btls::X509CertificateImplBtls*  value) ;

constexpr void __cordl_internal_set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value) ;

constexpr void __cordl_internal_set_ssl(::Mono::Btls::MonoBtlsSsl*  value) ;

/// @brief Method .ctor, addr 0x181b450f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options) ;

/// @brief Method get_IsAuthenticated, addr 0x1815234c0, size 0x10, virtual true, abstract: false, final false
inline bool get_IsAuthenticated() ;

/// @brief Method get_LocalClientCertificate, addr 0x1803a74d0, size 0x10, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate() ;

/// @brief Method get_RemoteCertificate, addr 0x1802e75e0, size 0x10, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate() ;

/// @brief Convert to "::Mono::Btls::IMonoBtlsBioMono"
constexpr ::Mono::Btls::IMonoBtlsBioMono* i___Mono__Btls__IMonoBtlsBioMono() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsContext(MonoBtlsContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsContext(MonoBtlsContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11455};

/// @brief Field remoteCertificate, offset: 0x58, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate2*  ___remoteCertificate;

/// @brief Field clientCertificate, offset: 0x60, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate*  ___clientCertificate;

/// @brief Field nativeServerCertificate, offset: 0x68, size: 0x8, def value: None
 ::Mono::Btls::X509CertificateImplBtls*  ___nativeServerCertificate;

/// @brief Field nativeClientCertificate, offset: 0x70, size: 0x8, def value: None
 ::Mono::Btls::X509CertificateImplBtls*  ___nativeClientCertificate;

/// @brief Field ctx, offset: 0x78, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSslCtx*  ___ctx;

/// @brief Field ssl, offset: 0x80, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSsl*  ___ssl;

/// @brief Field bio, offset: 0x88, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBio*  ___bio;

/// @brief Field errbio, offset: 0x90, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBio*  ___errbio;

/// @brief Field connectionInfo, offset: 0x98, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsConnectionInfo*  ___connectionInfo;

/// @brief Field certificateValidated, offset: 0xa0, size: 0x1, def value: None
 bool  ___certificateValidated;

/// @brief Field isAuthenticated, offset: 0xa1, size: 0x1, def value: None
 bool  ___isAuthenticated;

/// @brief Field connected, offset: 0xa2, size: 0x1, def value: None
 bool  ___connected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___remoteCertificate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___clientCertificate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___nativeServerCertificate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___nativeClientCertificate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___ctx) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___ssl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___bio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___errbio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___connectionInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___certificateValidated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___isAuthenticated) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsContext, ___connected) == 0xa2, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsContext) == 0xa8, "Size mismatch!");

} // namespace end def Mono::Btls
