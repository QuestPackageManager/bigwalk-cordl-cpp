#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/PublicKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKey)
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::X509Certificates::PublicKey*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::X509Certificates::PublicKey*, "System.Security.Cryptography.X509Certificates", "PublicKey");
// Dependencies System.Object
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.PublicKey
class CORDL_TYPE PublicKey : public ::System::Object {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::ArrayW<uint8_t>  Empty;

 __declspec(property(get=get_EncodedKeyValue)) ::System::Security::Cryptography::AsnEncodedData*  EncodedKeyValue;

 __declspec(property(get=get_EncodedParameters)) ::System::Security::Cryptography::AsnEncodedData*  EncodedParameters;

 __declspec(property(get=get_Key)) ::System::Security::Cryptography::AsymmetricAlgorithm*  Key;

 __declspec(property(get=get_Oid)) ::System::Security::Cryptography::Oid*  Oid;

/// @brief Field _key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::System::Security::Cryptography::AsymmetricAlgorithm*  _key;

/// @brief Field _keyValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyValue, put=__cordl_internal_set__keyValue)) ::System::Security::Cryptography::AsnEncodedData*  _keyValue;

/// @brief Field _oid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__oid, put=__cordl_internal_set__oid)) ::System::Security::Cryptography::Oid*  _oid;

/// @brief Field _params, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__params, put=__cordl_internal_set__params)) ::System::Security::Cryptography::AsnEncodedData*  _params;

/// @brief Method DecodeDSA, addr 0x181debf90, size 0x370, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::DSA* DecodeDSA(::ArrayW<uint8_t>  rawPublicKey, ::ArrayW<uint8_t>  rawParameters) ;

/// @brief Method DecodeRSA, addr 0x181dec300, size 0x2b0, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* DecodeRSA(::ArrayW<uint8_t>  rawPublicKey) ;

/// @brief Method GetUnsignedBigInteger, addr 0x181dec5b0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t>  integer) ;

static inline ::System::Security::Cryptography::X509Certificates::PublicKey* New_ctor(::System::Security::Cryptography::Oid*  oid, ::System::Security::Cryptography::AsnEncodedData*  parameters, ::System::Security::Cryptography::AsnEncodedData*  keyValue) ;

constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& __cordl_internal_get__key() const;

constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& __cordl_internal_get__key() ;

constexpr ::System::Security::Cryptography::AsnEncodedData* const& __cordl_internal_get__keyValue() const;

constexpr ::System::Security::Cryptography::AsnEncodedData*& __cordl_internal_get__keyValue() ;

constexpr ::System::Security::Cryptography::Oid* const& __cordl_internal_get__oid() const;

constexpr ::System::Security::Cryptography::Oid*& __cordl_internal_get__oid() ;

constexpr ::System::Security::Cryptography::AsnEncodedData* const& __cordl_internal_get__params() const;

constexpr ::System::Security::Cryptography::AsnEncodedData*& __cordl_internal_get__params() ;

constexpr void __cordl_internal_set__key(::System::Security::Cryptography::AsymmetricAlgorithm*  value) ;

constexpr void __cordl_internal_set__keyValue(::System::Security::Cryptography::AsnEncodedData*  value) ;

constexpr void __cordl_internal_set__oid(::System::Security::Cryptography::Oid*  value) ;

constexpr void __cordl_internal_set__params(::System::Security::Cryptography::AsnEncodedData*  value) ;

/// @brief Method .ctor, addr 0x181dec670, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::Oid*  oid, ::System::Security::Cryptography::AsnEncodedData*  parameters, ::System::Security::Cryptography::AsnEncodedData*  keyValue) ;

static inline ::ArrayW<uint8_t> getStaticF_Empty() ;

/// @brief Method get_EncodedKeyValue, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue() ;

/// @brief Method get_EncodedParameters, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsnEncodedData* get_EncodedParameters() ;

/// @brief Method get_Key, addr 0x181dec790, size 0xe0, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_Key() ;

/// @brief Method get_Oid, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::Oid* get_Oid() ;

static inline void setStaticF_Empty(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PublicKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PublicKey(PublicKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PublicKey(PublicKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11637};

/// @brief Field dsaOid offset 0xffffffff size 0x8
static constexpr ::ConstString  dsaOid{u"1.2.840.10040.4.1"};

/// @brief Field rsaOid offset 0xffffffff size 0x8
static constexpr ::ConstString  rsaOid{u"1.2.840.113549.1.1.1"};

/// @brief Field _key, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::AsymmetricAlgorithm*  ____key;

/// @brief Field _keyValue, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::AsnEncodedData*  ____keyValue;

/// @brief Field _params, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::AsnEncodedData*  ____params;

/// @brief Field _oid, offset: 0x28, size: 0x8, def value: None
 ::System::Security::Cryptography::Oid*  ____oid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____keyValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____params) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____oid) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::X509Certificates::PublicKey) == 0x30, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
