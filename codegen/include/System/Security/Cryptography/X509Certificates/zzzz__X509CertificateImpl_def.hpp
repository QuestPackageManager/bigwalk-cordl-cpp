#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateImpl)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl");
// Dependencies System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateImpl
class CORDL_TYPE X509CertificateImpl : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasPrivateKey)) bool  HasPrivateKey;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Issuer)) ::StringW  Issuer;

 __declspec(property(get=get_KeyAlgorithm)) ::StringW  KeyAlgorithm;

 __declspec(property(get=get_KeyAlgorithmParameters)) ::ArrayW<uint8_t>  KeyAlgorithmParameters;

 __declspec(property(get=get_NotAfter)) ::System::DateTime  NotAfter;

 __declspec(property(get=get_NotBefore)) ::System::DateTime  NotBefore;

 __declspec(property(get=get_PublicKeyValue)) ::ArrayW<uint8_t>  PublicKeyValue;

 __declspec(property(get=get_RawData)) ::ArrayW<uint8_t>  RawData;

 __declspec(property(get=get_SerialNumber)) ::ArrayW<uint8_t>  SerialNumber;

 __declspec(property(get=get_Subject)) ::StringW  Subject;

 __declspec(property(get=get_Thumbprint)) ::ArrayW<uint8_t>  Thumbprint;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone() ;

/// @brief Method Dispose, addr 0x181633c40, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Equals, addr 0x181633c70, size 0x160, virtual true, abstract: false, final true
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Export, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Export(::System::Security::Cryptography::X509Certificates::X509ContentType  contentType, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password) ;

/// @brief Method Finalize, addr 0x181633dd0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetDSAPrivateKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::DSA* GetDSAPrivateKey() ;

/// @brief Method GetHashCode, addr 0x181633df0, size 0x70, virtual true, abstract: false, final true
inline int32_t GetHashCode() ;

/// @brief Method GetRSAPrivateKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::RSA* GetRSAPrivateKey() ;

static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* New_ctor() ;

/// @brief Method ThrowIfContextInvalid, addr 0x181633e60, size 0x40, virtual false, abstract: false, final false
inline void ThrowIfContextInvalid() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasPrivateKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasPrivateKey() ;

/// @brief Method get_IsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Issuer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Issuer() ;

/// @brief Method get_KeyAlgorithm, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_KeyAlgorithm() ;

/// @brief Method get_KeyAlgorithmParameters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_KeyAlgorithmParameters() ;

/// @brief Method get_NotAfter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::DateTime get_NotAfter() ;

/// @brief Method get_NotBefore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::DateTime get_NotBefore() ;

/// @brief Method get_PublicKeyValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_PublicKeyValue() ;

/// @brief Method get_RawData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_SerialNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_Subject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Subject() ;

/// @brief Method get_Thumbprint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_Thumbprint() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509CertificateImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509CertificateImpl(X509CertificateImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509CertificateImpl(X509CertificateImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateImpl) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
