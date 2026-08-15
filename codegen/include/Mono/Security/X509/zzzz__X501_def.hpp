#pragma once
// IWYU pragma private; include "Mono/Security/X509/X501.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X501)
namespace Mono::Security::X509 {
class X520_AttributeTypeAndValue;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X501;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X501*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X501*, "Mono.Security.X509", "X501");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X501
class CORDL_TYPE X501 : public ::System::Object {
public:
// Declarations
/// @brief Field commonName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_commonName, put=setStaticF_commonName)) ::ArrayW<uint8_t>  commonName;

/// @brief Field countryName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_countryName, put=setStaticF_countryName)) ::ArrayW<uint8_t>  countryName;

/// @brief Field dnQualifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dnQualifier, put=setStaticF_dnQualifier)) ::ArrayW<uint8_t>  dnQualifier;

/// @brief Field domainComponent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_domainComponent, put=setStaticF_domainComponent)) ::ArrayW<uint8_t>  domainComponent;

/// @brief Field email, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_email, put=setStaticF_email)) ::ArrayW<uint8_t>  email;

/// @brief Field givenName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_givenName, put=setStaticF_givenName)) ::ArrayW<uint8_t>  givenName;

/// @brief Field initial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initial, put=setStaticF_initial)) ::ArrayW<uint8_t>  initial;

/// @brief Field localityName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localityName, put=setStaticF_localityName)) ::ArrayW<uint8_t>  localityName;

/// @brief Field organizationName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_organizationName, put=setStaticF_organizationName)) ::ArrayW<uint8_t>  organizationName;

/// @brief Field organizationalUnitName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_organizationalUnitName, put=setStaticF_organizationalUnitName)) ::ArrayW<uint8_t>  organizationalUnitName;

/// @brief Field serialNumber, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serialNumber, put=setStaticF_serialNumber)) ::ArrayW<uint8_t>  serialNumber;

/// @brief Field stateOrProvinceName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateOrProvinceName, put=setStaticF_stateOrProvinceName)) ::ArrayW<uint8_t>  stateOrProvinceName;

/// @brief Field streetAddress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_streetAddress, put=setStaticF_streetAddress)) ::ArrayW<uint8_t>  streetAddress;

/// @brief Field surname, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_surname, put=setStaticF_surname)) ::ArrayW<uint8_t>  surname;

/// @brief Field title, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title, put=setStaticF_title)) ::ArrayW<uint8_t>  title;

/// @brief Field userid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userid, put=setStaticF_userid)) ::ArrayW<uint8_t>  userid;

/// @brief Method AppendEntry, addr 0x1815a6cf0, size 0x900, virtual false, abstract: false, final false
static inline void AppendEntry(::System::Text::StringBuilder*  sb, ::Mono::Security::ASN1*  entry, bool  quotes) ;

/// @brief Method FromString, addr 0x1815a75f0, size 0x340, virtual false, abstract: false, final false
static inline ::Mono::Security::ASN1* FromString(::StringW  rdn) ;

/// @brief Method GetAttributeFromOid, addr 0x1815a7930, size 0x6f0, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X520_AttributeTypeAndValue* GetAttributeFromOid(::StringW  attributeType) ;

/// @brief Method IsHex, addr 0x1815a8020, size 0x50, virtual false, abstract: false, final false
static inline bool IsHex(char16_t  c) ;

/// @brief Method IsOid, addr 0x1815a8070, size 0x60, virtual false, abstract: false, final false
static inline bool IsOid(::StringW  oid) ;

/// @brief Method ReadAttribute, addr 0x1815a80d0, size 0x140, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::X520_AttributeTypeAndValue* ReadAttribute(::StringW  value, ::by_ref<int32_t>  pos) ;

/// @brief Method ReadEscaped, addr 0x1815a8210, size 0x160, virtual false, abstract: false, final false
static inline int32_t ReadEscaped(::System::Text::StringBuilder*  sb, ::StringW  value, int32_t  pos) ;

/// @brief Method ReadHex, addr 0x1815a8370, size 0x190, virtual false, abstract: false, final false
static inline ::StringW ReadHex(::StringW  value, ::by_ref<int32_t>  pos) ;

/// @brief Method ReadQuoted, addr 0x1815a8500, size 0x110, virtual false, abstract: false, final false
static inline int32_t ReadQuoted(::System::Text::StringBuilder*  sb, ::StringW  value, int32_t  pos) ;

/// @brief Method ReadValue, addr 0x1815a8610, size 0x2d0, virtual false, abstract: false, final false
static inline ::StringW ReadValue(::StringW  value, ::by_ref<int32_t>  pos) ;

/// @brief Method ToString, addr 0x1815a8a60, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ToString(::Mono::Security::ASN1*  seq) ;

/// @brief Method ToString, addr 0x1815a88e0, size 0x180, virtual false, abstract: false, final false
static inline ::StringW ToString(::Mono::Security::ASN1*  seq, bool  reversed, ::StringW  separator, bool  quotes) ;

static inline ::ArrayW<uint8_t> getStaticF_commonName() ;

static inline ::ArrayW<uint8_t> getStaticF_countryName() ;

static inline ::ArrayW<uint8_t> getStaticF_dnQualifier() ;

static inline ::ArrayW<uint8_t> getStaticF_domainComponent() ;

static inline ::ArrayW<uint8_t> getStaticF_email() ;

static inline ::ArrayW<uint8_t> getStaticF_givenName() ;

static inline ::ArrayW<uint8_t> getStaticF_initial() ;

static inline ::ArrayW<uint8_t> getStaticF_localityName() ;

static inline ::ArrayW<uint8_t> getStaticF_organizationName() ;

static inline ::ArrayW<uint8_t> getStaticF_organizationalUnitName() ;

static inline ::ArrayW<uint8_t> getStaticF_serialNumber() ;

static inline ::ArrayW<uint8_t> getStaticF_stateOrProvinceName() ;

static inline ::ArrayW<uint8_t> getStaticF_streetAddress() ;

static inline ::ArrayW<uint8_t> getStaticF_surname() ;

static inline ::ArrayW<uint8_t> getStaticF_title() ;

static inline ::ArrayW<uint8_t> getStaticF_userid() ;

static inline void setStaticF_commonName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_countryName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_dnQualifier(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_domainComponent(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_email(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_givenName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_initial(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_localityName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_organizationName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_organizationalUnitName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_serialNumber(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_stateOrProvinceName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_streetAddress(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_surname(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_title(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_userid(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X501() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X501(X501 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X501(X501 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X501) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
