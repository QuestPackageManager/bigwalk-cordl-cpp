#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsProvider)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono::Btls {
class MonoBtlsX509Chain;
}
namespace Mono::Btls {
struct MonoBtlsX509Error;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace Mono::Btls {
class MonoBtlsX509Store;
}
namespace Mono::Btls {
class MonoBtlsX509VerifyParam;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsProvider;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsProvider*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsProvider*, "Mono.Btls", "MonoBtlsProvider");
// Dependencies Mono.Net.Security.MobileTlsProvider
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsProvider
class CORDL_TYPE MonoBtlsProvider : public ::Mono::Net::Security::MobileTlsProvider {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_SupportedProtocols)) ::System::Security::Authentication::SslProtocols  SupportedProtocols;

 __declspec(property(get=get_SupportsCleanShutdown)) bool  SupportsCleanShutdown;

 __declspec(property(get=get_SupportsConnectionInfo)) bool  SupportsConnectionInfo;

 __declspec(property(get=get_SupportsMonoExtensions)) bool  SupportsMonoExtensions;

 __declspec(property(get=get_SupportsSslStream)) bool  SupportsSslStream;

 __declspec(property(get=get_ID)) ::System::Guid  _cordl_ID;

/// @brief Method AddMachineStore, addr 0x181b47150, size 0x60, virtual false, abstract: false, final false
static inline void AddMachineStore(::Mono::Btls::MonoBtlsX509Store*  store) ;

/// @brief Method AddTrustedRoots, addr 0x181b471b0, size 0x40, virtual false, abstract: false, final false
static inline void AddTrustedRoots(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Security::Interface::MonoTlsSettings*  settings, bool  server) ;

/// @brief Method AddUserStore, addr 0x181b471f0, size 0x60, virtual false, abstract: false, final false
static inline void AddUserStore(::Mono::Btls::MonoBtlsX509Store*  store) ;

/// @brief Method CheckValidationResult, addr 0x181b47250, size 0x300, virtual false, abstract: false, final false
inline void CheckValidationResult(::Mono::Net::Security::ChainValidationHelper*  validator, ::StringW  targetHost, bool  serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates, bool  wantsChain, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx, bool  success, ::by_ref<::System::Net::Security::SslPolicyErrors>  errors, ::by_ref<int32_t>  status11) ;

/// @brief Method CreateCertificate, addr 0x181b47550, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* CreateCertificate(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method CreateSslStream, addr 0x181b47620, size 0x80, virtual true, abstract: false, final false
inline ::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream*  sslStream, ::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings*  settings) ;

/// @brief Method GetBtlsCertificate, addr 0x181b476a0, size 0x90, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509* GetBtlsCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate) ;

/// @brief Method GetManagedChain, addr 0x181b47730, size 0x60, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509Chain* GetManagedChain(::Mono::Btls::MonoBtlsX509Chain*  chain) ;

/// @brief Method GetNativeCertificate, addr 0x181b478f0, size 0x120, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate) ;

/// @brief Method GetNativeCertificate, addr 0x181b47890, size 0x60, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  flags) ;

/// @brief Method GetNativeCertificate, addr 0x181b47790, size 0x100, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::ArrayW<uint8_t>  data, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  flags) ;

/// @brief Method GetNativeChain, addr 0x181b47a10, size 0x2a0, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Chain* GetNativeChain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates) ;

/// @brief Method GetVerifyParam, addr 0x181b47cb0, size 0x170, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509VerifyParam* GetVerifyParam(::Mono::Security::Interface::MonoTlsSettings*  settings, ::StringW  targetHost, bool  serverMode) ;

/// @brief Method MapVerifyErrorToChainStatus, addr 0x181b47e20, size 0x230, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags MapVerifyErrorToChainStatus(::Mono::Btls::MonoBtlsX509Error  code) ;

static inline ::Mono::Btls::MonoBtlsProvider* New_ctor() ;

/// @brief Method SetupCertificateStore, addr 0x181b48050, size 0x320, virtual false, abstract: false, final false
static inline void SetupCertificateStore(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Security::Interface::MonoTlsSettings*  settings, bool  server) ;

/// @brief Method SetupDefaultCertificateStore, addr 0x181b48370, size 0x90, virtual false, abstract: false, final false
static inline void SetupDefaultCertificateStore(::Mono::Btls::MonoBtlsX509Store*  store) ;

/// @brief Method ValidateCertificate, addr 0x181b48c80, size 0x550, virtual false, abstract: false, final false
static inline bool ValidateCertificate(::Mono::Btls::MonoBtlsX509Chain*  chain, ::Mono::Btls::MonoBtlsX509VerifyParam*  param) ;

/// @brief Method ValidateCertificate, addr 0x181b48400, size 0x880, virtual true, abstract: false, final false
inline bool ValidateCertificate(::Mono::Net::Security::ChainValidationHelper*  validator, ::StringW  targetHost, bool  serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates, bool  wantsChain, ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>  chain, ::by_ref<::System::Net::Security::SslPolicyErrors>  errors, ::by_ref<int32_t>  status11) ;

/// @brief Method .ctor, addr 0x181b491d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ID, addr 0x181b49200, size 0x40, virtual true, abstract: false, final false
inline ::System::Guid get_ID() ;

/// @brief Method get_Name, addr 0x181b49240, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_SupportedProtocols, addr 0x181b49250, size 0x10, virtual true, abstract: false, final false
inline ::System::Security::Authentication::SslProtocols get_SupportedProtocols() ;

/// @brief Method get_SupportsCleanShutdown, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SupportsCleanShutdown() ;

/// @brief Method get_SupportsConnectionInfo, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SupportsConnectionInfo() ;

/// @brief Method get_SupportsMonoExtensions, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SupportsMonoExtensions() ;

/// @brief Method get_SupportsSslStream, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SupportsSslStream() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsProvider(MonoBtlsProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsProvider(MonoBtlsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsProvider) == 0x10, "Size mismatch!");

} // namespace end def Mono::Btls
