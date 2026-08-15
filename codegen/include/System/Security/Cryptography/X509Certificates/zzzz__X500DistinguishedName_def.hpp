#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X500DistinguishedName)
namespace System::Security::Cryptography::X509Certificates {
struct X500DistinguishedNameFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
// Dependencies System.Security.Cryptography.AsnEncodedData, System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X500DistinguishedName
class CORDL_TYPE X500DistinguishedName : public ::System::Security::Cryptography::AsnEncodedData {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field canonEncoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_canonEncoding, put=__cordl_internal_set_canonEncoding)) ::ArrayW<uint8_t>  canonEncoding;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method AreEqual, addr 0x181dec9d0, size 0x1a0, virtual false, abstract: false, final false
static inline bool AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name1, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name2) ;

/// @brief Method Canonize, addr 0x181decb70, size 0x130, virtual false, abstract: false, final false
static inline ::StringW Canonize(::StringW  s) ;

/// @brief Method Decode, addr 0x181decd40, size 0x100, virtual false, abstract: false, final false
inline ::StringW Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag) ;

/// @brief Method DecodeRawData, addr 0x181decca0, size 0xa0, virtual false, abstract: false, final false
inline void DecodeRawData() ;

/// @brief Method Format, addr 0x181dece40, size 0x130, virtual true, abstract: false, final false
inline ::StringW Format(bool  multiLine) ;

/// @brief Method GetSeparator, addr 0x181decf70, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag) ;

static inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* New_ctor(::StringW  distinguishedName) ;

static inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* New_ctor(::StringW  distinguishedName, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag) ;

static inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* New_ctor(::ArrayW<uint8_t>  encodedDistinguishedName) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_canonEncoding() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_canonEncoding() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_canonEncoding(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x181decfa0, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::StringW  distinguishedName) ;

/// @brief Method .ctor, addr 0x181ded140, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::StringW  distinguishedName, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag) ;

/// @brief Method .ctor, addr 0x181ded2c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  encodedDistinguishedName) ;

/// @brief Method get_Name, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X500DistinguishedName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X500DistinguishedName(X500DistinguishedName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X500DistinguishedName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X500DistinguishedName(X500DistinguishedName const& ) = delete;

/// @brief Field AllFlags value: I32(29169)
static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const AllFlags;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11638};

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field canonEncoding, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___canonEncoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName, ___canonEncoding) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X500DistinguishedName) == 0x30, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
