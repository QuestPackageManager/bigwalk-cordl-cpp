#pragma once
// IWYU pragma private; include "Mono/Security/X509/X520.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X520)
namespace Mono::Security::X509 {
class X520_AttributeTypeAndValue;
}
namespace Mono::Security::X509 {
class X520_CommonName;
}
namespace Mono::Security::X509 {
class X520_CountryName;
}
namespace Mono::Security::X509 {
class X520_DnQualifier;
}
namespace Mono::Security::X509 {
class X520_DomainComponent;
}
namespace Mono::Security::X509 {
class X520_EmailAddress;
}
namespace Mono::Security::X509 {
class X520_GivenName;
}
namespace Mono::Security::X509 {
class X520_Initial;
}
namespace Mono::Security::X509 {
class X520_LocalityName;
}
namespace Mono::Security::X509 {
class X520_Oid;
}
namespace Mono::Security::X509 {
class X520_OrganizationName;
}
namespace Mono::Security::X509 {
class X520_OrganizationalUnitName;
}
namespace Mono::Security::X509 {
class X520_SerialNumber;
}
namespace Mono::Security::X509 {
class X520_StateOrProvinceName;
}
namespace Mono::Security::X509 {
class X520_Surname;
}
namespace Mono::Security::X509 {
class X520_Title;
}
namespace Mono::Security::X509 {
class X520_UserId;
}
namespace Mono::Security {
class ASN1;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X520;
}
namespace Mono::Security::X509 {
class X520_AttributeTypeAndValue;
}
namespace Mono::Security::X509 {
class X520_CommonName;
}
namespace Mono::Security::X509 {
class X520_CountryName;
}
namespace Mono::Security::X509 {
class X520_DnQualifier;
}
namespace Mono::Security::X509 {
class X520_DomainComponent;
}
namespace Mono::Security::X509 {
class X520_EmailAddress;
}
namespace Mono::Security::X509 {
class X520_GivenName;
}
namespace Mono::Security::X509 {
class X520_Initial;
}
namespace Mono::Security::X509 {
class X520_LocalityName;
}
namespace Mono::Security::X509 {
class X520_Oid;
}
namespace Mono::Security::X509 {
class X520_OrganizationName;
}
namespace Mono::Security::X509 {
class X520_OrganizationalUnitName;
}
namespace Mono::Security::X509 {
class X520_SerialNumber;
}
namespace Mono::Security::X509 {
class X520_StateOrProvinceName;
}
namespace Mono::Security::X509 {
class X520_Surname;
}
namespace Mono::Security::X509 {
class X520_Title;
}
namespace Mono::Security::X509 {
class X520_UserId;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X520*);
MARK_REF_T(::Mono::Security::X509::X520_AttributeTypeAndValue*);
MARK_REF_T(::Mono::Security::X509::X520_CommonName*);
MARK_REF_T(::Mono::Security::X509::X520_CountryName*);
MARK_REF_T(::Mono::Security::X509::X520_DnQualifier*);
MARK_REF_T(::Mono::Security::X509::X520_DomainComponent*);
MARK_REF_T(::Mono::Security::X509::X520_EmailAddress*);
MARK_REF_T(::Mono::Security::X509::X520_GivenName*);
MARK_REF_T(::Mono::Security::X509::X520_Initial*);
MARK_REF_T(::Mono::Security::X509::X520_LocalityName*);
MARK_REF_T(::Mono::Security::X509::X520_Oid*);
MARK_REF_T(::Mono::Security::X509::X520_OrganizationName*);
MARK_REF_T(::Mono::Security::X509::X520_OrganizationalUnitName*);
MARK_REF_T(::Mono::Security::X509::X520_SerialNumber*);
MARK_REF_T(::Mono::Security::X509::X520_StateOrProvinceName*);
MARK_REF_T(::Mono::Security::X509::X520_Surname*);
MARK_REF_T(::Mono::Security::X509::X520_Title*);
MARK_REF_T(::Mono::Security::X509::X520_UserId*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520*, "Mono.Security.X509", "X520");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_AttributeTypeAndValue*, "Mono.Security.X509", "X520/AttributeTypeAndValue");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_CommonName*, "Mono.Security.X509", "X520/CommonName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_CountryName*, "Mono.Security.X509", "X520/CountryName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_DnQualifier*, "Mono.Security.X509", "X520/DnQualifier");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_DomainComponent*, "Mono.Security.X509", "X520/DomainComponent");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_EmailAddress*, "Mono.Security.X509", "X520/EmailAddress");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_GivenName*, "Mono.Security.X509", "X520/GivenName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_Initial*, "Mono.Security.X509", "X520/Initial");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_LocalityName*, "Mono.Security.X509", "X520/LocalityName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_Oid*, "Mono.Security.X509", "X520/Oid");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_OrganizationName*, "Mono.Security.X509", "X520/OrganizationName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_OrganizationalUnitName*, "Mono.Security.X509", "X520/OrganizationalUnitName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_SerialNumber*, "Mono.Security.X509", "X520/SerialNumber");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_StateOrProvinceName*, "Mono.Security.X509", "X520/StateOrProvinceName");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_Surname*, "Mono.Security.X509", "X520/Surname");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_Title*, "Mono.Security.X509", "X520/Title");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X520_UserId*, "Mono.Security.X509", "X520/UserId");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/AttributeTypeAndValue
class CORDL_TYPE X520_AttributeTypeAndValue : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Value)) ::StringW  Value;

/// @brief Field attrValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_attrValue, put=__cordl_internal_set_attrValue)) ::StringW  attrValue;

/// @brief Field encoding, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) uint8_t  encoding;

/// @brief Field oid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_oid, put=__cordl_internal_set_oid)) ::StringW  oid;

/// @brief Field upperBound, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_upperBound, put=__cordl_internal_set_upperBound)) int32_t  upperBound;

/// @brief Method GetASN1, addr 0x18159aec0, size 0x10, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* GetASN1() ;

/// @brief Method GetASN1, addr 0x18159aed0, size 0x2b0, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* GetASN1(uint8_t  encoding) ;

static inline ::Mono::Security::X509::X520_AttributeTypeAndValue* New_ctor(::StringW  oid, int32_t  upperBound) ;

static inline ::Mono::Security::X509::X520_AttributeTypeAndValue* New_ctor(::StringW  oid, int32_t  upperBound, uint8_t  encoding) ;

/// @brief Method SelectBestEncoding, addr 0x18159b180, size 0x60, virtual false, abstract: false, final false
inline uint8_t SelectBestEncoding() ;

constexpr ::StringW const& __cordl_internal_get_attrValue() const;

constexpr ::StringW& __cordl_internal_get_attrValue() ;

constexpr uint8_t const& __cordl_internal_get_encoding() const;

constexpr uint8_t& __cordl_internal_get_encoding() ;

constexpr ::StringW const& __cordl_internal_get_oid() const;

constexpr ::StringW& __cordl_internal_get_oid() ;

constexpr int32_t const& __cordl_internal_get_upperBound() const;

constexpr int32_t& __cordl_internal_get_upperBound() ;

constexpr void __cordl_internal_set_attrValue(::StringW  value) ;

constexpr void __cordl_internal_set_encoding(uint8_t  value) ;

constexpr void __cordl_internal_set_oid(::StringW  value) ;

constexpr void __cordl_internal_set_upperBound(int32_t  value) ;

/// @brief Method .ctor, addr 0x18159b1e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  oid, int32_t  upperBound) ;

/// @brief Method .ctor, addr 0x18159b210, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  oid, int32_t  upperBound, uint8_t  encoding) ;

/// @brief Method set_Value, addr 0x18159b250, size 0xb0, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_AttributeTypeAndValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_AttributeTypeAndValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_AttributeTypeAndValue(X520_AttributeTypeAndValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_AttributeTypeAndValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_AttributeTypeAndValue(X520_AttributeTypeAndValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19142};

/// @brief Field oid, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___oid;

/// @brief Field attrValue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___attrValue;

/// @brief Field upperBound, offset: 0x20, size: 0x4, def value: None
 int32_t  ___upperBound;

/// @brief Field encoding, offset: 0x24, size: 0x1, def value: None
 uint8_t  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X520_AttributeTypeAndValue, ___oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X520_AttributeTypeAndValue, ___attrValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X520_AttributeTypeAndValue, ___upperBound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X520_AttributeTypeAndValue, ___encoding) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X520_AttributeTypeAndValue) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/CommonName
class CORDL_TYPE X520_CommonName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_CommonName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159d950, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_CommonName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_CommonName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_CommonName(X520_CommonName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_CommonName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_CommonName(X520_CommonName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_CommonName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/SerialNumber
class CORDL_TYPE X520_SerialNumber : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_SerialNumber* New_ctor() ;

/// @brief Method .ctor, addr 0x1815a5e20, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_SerialNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_SerialNumber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_SerialNumber(X520_SerialNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_SerialNumber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_SerialNumber(X520_SerialNumber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_SerialNumber) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/LocalityName
class CORDL_TYPE X520_LocalityName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_LocalityName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e930, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_LocalityName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_LocalityName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_LocalityName(X520_LocalityName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_LocalityName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_LocalityName(X520_LocalityName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_LocalityName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/StateOrProvinceName
class CORDL_TYPE X520_StateOrProvinceName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_StateOrProvinceName* New_ctor() ;

/// @brief Method .ctor, addr 0x1815a6c30, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_StateOrProvinceName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_StateOrProvinceName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_StateOrProvinceName(X520_StateOrProvinceName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_StateOrProvinceName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_StateOrProvinceName(X520_StateOrProvinceName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_StateOrProvinceName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/OrganizationName
class CORDL_TYPE X520_OrganizationName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_OrganizationName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e990, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_OrganizationName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_OrganizationName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_OrganizationName(X520_OrganizationName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_OrganizationName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_OrganizationName(X520_OrganizationName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_OrganizationName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/OrganizationalUnitName
class CORDL_TYPE X520_OrganizationalUnitName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_OrganizationalUnitName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e9c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_OrganizationalUnitName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_OrganizationalUnitName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_OrganizationalUnitName(X520_OrganizationalUnitName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_OrganizationalUnitName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_OrganizationalUnitName(X520_OrganizationalUnitName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_OrganizationalUnitName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/EmailAddress
class CORDL_TYPE X520_EmailAddress : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_EmailAddress* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e5f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_EmailAddress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_EmailAddress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_EmailAddress(X520_EmailAddress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_EmailAddress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_EmailAddress(X520_EmailAddress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_EmailAddress) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/DomainComponent
class CORDL_TYPE X520_DomainComponent : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_DomainComponent* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e5c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_DomainComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_DomainComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_DomainComponent(X520_DomainComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_DomainComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_DomainComponent(X520_DomainComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_DomainComponent) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/UserId
class CORDL_TYPE X520_UserId : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_UserId* New_ctor() ;

/// @brief Method .ctor, addr 0x1815a6cc0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_UserId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_UserId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_UserId(X520_UserId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_UserId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_UserId(X520_UserId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_UserId) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/Oid
class CORDL_TYPE X520_Oid : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_Oid* New_ctor(::StringW  oid) ;

/// @brief Method .ctor, addr 0x18159e960, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  oid) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_Oid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_Oid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_Oid(X520_Oid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_Oid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_Oid(X520_Oid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_Oid) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/Title
class CORDL_TYPE X520_Title : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_Title* New_ctor() ;

/// @brief Method .ctor, addr 0x1815a6c90, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_Title() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_Title", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_Title(X520_Title && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_Title", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_Title(X520_Title const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_Title) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/CountryName
class CORDL_TYPE X520_CountryName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_CountryName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159dd80, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_CountryName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_CountryName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_CountryName(X520_CountryName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_CountryName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_CountryName(X520_CountryName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_CountryName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/DnQualifier
class CORDL_TYPE X520_DnQualifier : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_DnQualifier* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e590, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_DnQualifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_DnQualifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_DnQualifier(X520_DnQualifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_DnQualifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_DnQualifier(X520_DnQualifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_DnQualifier) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/Surname
class CORDL_TYPE X520_Surname : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_Surname* New_ctor() ;

/// @brief Method .ctor, addr 0x1815a6c60, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_Surname() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_Surname", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_Surname(X520_Surname && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_Surname", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_Surname(X520_Surname const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_Surname) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/GivenName
class CORDL_TYPE X520_GivenName : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_GivenName* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e8c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_GivenName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_GivenName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_GivenName(X520_GivenName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_GivenName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_GivenName(X520_GivenName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_GivenName) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies Mono.Security.X509.X520::AttributeTypeAndValue
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520/Initial
class CORDL_TYPE X520_Initial : public ::Mono::Security::X509::X520_AttributeTypeAndValue {
public:
// Declarations
static inline ::Mono::Security::X509::X520_Initial* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e8f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520_Initial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520_Initial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520_Initial(X520_Initial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520_Initial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520_Initial(X520_Initial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520_Initial) == 0x28, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X520
class CORDL_TYPE X520 : public ::System::Object {
public:
// Declarations
using AttributeTypeAndValue = ::Mono::Security::X509::X520_AttributeTypeAndValue;

using CommonName = ::Mono::Security::X509::X520_CommonName;

using CountryName = ::Mono::Security::X509::X520_CountryName;

using DnQualifier = ::Mono::Security::X509::X520_DnQualifier;

using DomainComponent = ::Mono::Security::X509::X520_DomainComponent;

using EmailAddress = ::Mono::Security::X509::X520_EmailAddress;

using GivenName = ::Mono::Security::X509::X520_GivenName;

using Initial = ::Mono::Security::X509::X520_Initial;

using LocalityName = ::Mono::Security::X509::X520_LocalityName;

using Oid = ::Mono::Security::X509::X520_Oid;

using OrganizationName = ::Mono::Security::X509::X520_OrganizationName;

using OrganizationalUnitName = ::Mono::Security::X509::X520_OrganizationalUnitName;

using SerialNumber = ::Mono::Security::X509::X520_SerialNumber;

using StateOrProvinceName = ::Mono::Security::X509::X520_StateOrProvinceName;

using Surname = ::Mono::Security::X509::X520_Surname;

using Title = ::Mono::Security::X509::X520_Title;

using UserId = ::Mono::Security::X509::X520_UserId;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X520() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X520", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X520(X520 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X520", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X520(X520 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::X520) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
