#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate)
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
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
class X509Certificate;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::X509Certificates::X509Certificate*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
// Dependencies System.DateTime, System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate
class CORDL_TYPE X509Certificate : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Impl)) ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  Impl;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Issuer)) ::StringW  Issuer;

 __declspec(property(get=get_Subject)) ::StringW  Subject;

/// @brief Field impl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_impl, put=__cordl_internal_set_impl)) ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl;

/// @brief Field lazyCertHash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyCertHash, put=__cordl_internal_set_lazyCertHash)) ::ArrayW<uint8_t>  lazyCertHash;

/// @brief Field lazyIssuer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyIssuer, put=__cordl_internal_set_lazyIssuer)) ::StringW  lazyIssuer;

/// @brief Field lazyKeyAlgorithm, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyKeyAlgorithm, put=__cordl_internal_set_lazyKeyAlgorithm)) ::StringW  lazyKeyAlgorithm;

/// @brief Field lazyKeyAlgorithmParameters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyKeyAlgorithmParameters, put=__cordl_internal_set_lazyKeyAlgorithmParameters)) ::ArrayW<uint8_t>  lazyKeyAlgorithmParameters;

/// @brief Field lazyNotAfter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyNotAfter, put=__cordl_internal_set_lazyNotAfter)) ::System::DateTime  lazyNotAfter;

/// @brief Field lazyNotBefore, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyNotBefore, put=__cordl_internal_set_lazyNotBefore)) ::System::DateTime  lazyNotBefore;

/// @brief Field lazyPublicKey, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyPublicKey, put=__cordl_internal_set_lazyPublicKey)) ::ArrayW<uint8_t>  lazyPublicKey;

/// @brief Field lazySerialNumber, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazySerialNumber, put=__cordl_internal_set_lazySerialNumber)) ::ArrayW<uint8_t>  lazySerialNumber;

/// @brief Field lazySubject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazySubject, put=__cordl_internal_set_lazySubject)) ::StringW  lazySubject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Dispose, addr 0x181633ea0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181633ec0, size 0x20, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Equals, addr 0x181634020, size 0x50, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181633ee0, size 0x140, virtual true, abstract: false, final false
inline bool Equals(::System::Security::Cryptography::X509Certificates::X509Certificate*  other) ;

/// @brief Method Export, addr 0x181634070, size 0x170, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Export(::System::Security::Cryptography::X509Certificates::X509ContentType  contentType, ::StringW  password) ;

/// @brief Method FormatDate, addr 0x1816341e0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW FormatDate(::System::DateTime  date) ;

/// @brief Method GetCertHash, addr 0x181634340, size 0x90, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetCertHash() ;

/// @brief Method GetCertHashString, addr 0x1816342b0, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetCertHashString() ;

/// @brief Method GetExpirationDateString, addr 0x1816343d0, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetExpirationDateString() ;

/// @brief Method GetHashCode, addr 0x181634400, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetKeyAlgorithm, addr 0x181634520, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetKeyAlgorithm() ;

/// @brief Method GetKeyAlgorithmParameters, addr 0x181634490, size 0x90, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetKeyAlgorithmParameters() ;

/// @brief Method GetNotAfter, addr 0x1816345b0, size 0xb0, virtual false, abstract: false, final false
inline ::System::DateTime GetNotAfter() ;

/// @brief Method GetNotBefore, addr 0x181634660, size 0xb0, virtual false, abstract: false, final false
inline ::System::DateTime GetNotBefore() ;

/// @brief Method GetPublicKey, addr 0x181634710, size 0x90, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetPublicKey() ;

/// @brief Method GetRawCertData, addr 0x1816347a0, size 0x70, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawCertData() ;

/// @brief Method GetRawCertHash, addr 0x181634810, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawCertHash() ;

/// @brief Method GetRawSerialNumber, addr 0x181634870, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawSerialNumber() ;

/// @brief Method GetSerialNumber, addr 0x181634960, size 0xa0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetSerialNumber() ;

/// @brief Method GetSerialNumberString, addr 0x1816348d0, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetSerialNumberString() ;

/// @brief Method ImportHandle, addr 0x181634a00, size 0x40, virtual false, abstract: false, final false
inline void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor() ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::ArrayW<uint8_t>  data) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW  fileName, ::StringW  password) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::StringW  fileName, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password) ;

static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* New_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method Reset, addr 0x181634a40, size 0x120, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x1812ade20, size 0x850, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x1812ade20, size 0x850, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ThrowIfInvalid, addr 0x181634b60, size 0x40, virtual false, abstract: false, final false
inline void ThrowIfInvalid() ;

/// @brief Method ToString, addr 0x181634ba0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181634bc0, size 0x3a0, virtual true, abstract: false, final false
inline ::StringW ToString(bool  fVerbose) ;

/// @brief Method ValidateKeyStorageFlags, addr 0x181634f60, size 0x90, virtual false, abstract: false, final false
static inline void ValidateKeyStorageFlags(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method VerifyContentType, addr 0x181634ff0, size 0x60, virtual false, abstract: false, final false
inline void VerifyContentType(::System::Security::Cryptography::X509Certificates::X509ContentType  contentType) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* const& __cordl_internal_get_impl() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*& __cordl_internal_get_impl() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_lazyCertHash() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_lazyCertHash() ;

constexpr ::StringW const& __cordl_internal_get_lazyIssuer() const;

constexpr ::StringW& __cordl_internal_get_lazyIssuer() ;

constexpr ::StringW const& __cordl_internal_get_lazyKeyAlgorithm() const;

constexpr ::StringW& __cordl_internal_get_lazyKeyAlgorithm() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_lazyKeyAlgorithmParameters() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_lazyKeyAlgorithmParameters() ;

constexpr ::System::DateTime const& __cordl_internal_get_lazyNotAfter() const;

constexpr ::System::DateTime& __cordl_internal_get_lazyNotAfter() ;

constexpr ::System::DateTime const& __cordl_internal_get_lazyNotBefore() const;

constexpr ::System::DateTime& __cordl_internal_get_lazyNotBefore() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_lazyPublicKey() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_lazyPublicKey() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_lazySerialNumber() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_lazySerialNumber() ;

constexpr ::StringW const& __cordl_internal_get_lazySubject() const;

constexpr ::StringW& __cordl_internal_get_lazySubject() ;

constexpr void __cordl_internal_set_impl(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  value) ;

constexpr void __cordl_internal_set_lazyCertHash(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_lazyIssuer(::StringW  value) ;

constexpr void __cordl_internal_set_lazyKeyAlgorithm(::StringW  value) ;

constexpr void __cordl_internal_set_lazyKeyAlgorithmParameters(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_lazyNotAfter(::System::DateTime  value) ;

constexpr void __cordl_internal_set_lazyNotBefore(::System::DateTime  value) ;

constexpr void __cordl_internal_set_lazyPublicKey(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_lazySerialNumber(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_lazySubject(::StringW  value) ;

/// @brief Method .ctor, addr 0x181635310, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181635050, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

/// @brief Method .ctor, addr 0x181635420, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0x181635370, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::StringW  password) ;

/// @brief Method .ctor, addr 0x181635180, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method .ctor, addr 0x181635390, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl) ;

/// @brief Method .ctor, addr 0x1816352d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1816352f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  rawData, ::StringW  password) ;

/// @brief Method .ctor, addr 0x181635540, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  rawData, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method get_Impl, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl() ;

/// @brief Method get_IsValid, addr 0x1816356a0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Issuer, addr 0x1816356c0, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_Issuer() ;

/// @brief Method get_Subject, addr 0x181635750, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_Subject() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Certificate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Certificate(X509Certificate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Certificate(X509Certificate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{823};

/// @brief Field impl, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  ___impl;

/// @brief Field lazyCertHash, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___lazyCertHash;

/// @brief Field lazySerialNumber, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___lazySerialNumber;

/// @brief Field lazyIssuer, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___lazyIssuer;

/// @brief Field lazySubject, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___lazySubject;

/// @brief Field lazyKeyAlgorithm, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___lazyKeyAlgorithm;

/// @brief Field lazyKeyAlgorithmParameters, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___lazyKeyAlgorithmParameters;

/// @brief Field lazyPublicKey, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___lazyPublicKey;

/// @brief Field lazyNotBefore, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ___lazyNotBefore;

/// @brief Field lazyNotAfter, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ___lazyNotAfter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___impl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyCertHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazySerialNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyIssuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazySubject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyKeyAlgorithm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyKeyAlgorithmParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyPublicKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyNotBefore) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate, ___lazyNotAfter) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate) == 0x60, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
