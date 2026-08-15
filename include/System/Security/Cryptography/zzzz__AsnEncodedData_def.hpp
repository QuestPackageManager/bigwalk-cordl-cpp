#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsnEncodedData)
namespace System::Security::Cryptography {
class Oid;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AsnEncodedData*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AsnEncodedData
class CORDL_TYPE AsnEncodedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Oid, put=set_Oid)) ::System::Security::Cryptography::Oid*  Oid;

 __declspec(property(get=get_RawData, put=set_RawData)) ::ArrayW<uint8_t>  RawData;

/// @brief Field _oid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__oid, put=__cordl_internal_set__oid)) ::System::Security::Cryptography::Oid*  _oid;

/// @brief Field _raw, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__raw, put=__cordl_internal_set__raw)) ::ArrayW<uint8_t>  _raw;

/// @brief Method BasicConstraintsExtension, addr 0x181dd5ff0, size 0x80, virtual false, abstract: false, final false
inline ::StringW BasicConstraintsExtension(bool  multiLine) ;

/// @brief Method CopyFrom, addr 0x181dd6070, size 0x100, virtual true, abstract: false, final false
inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method Default, addr 0x181dd6170, size 0xc0, virtual false, abstract: false, final false
inline ::StringW Default(bool  multiLine) ;

/// @brief Method EnhancedKeyUsageExtension, addr 0x181dd6230, size 0x80, virtual false, abstract: false, final false
inline ::StringW EnhancedKeyUsageExtension(bool  multiLine) ;

/// @brief Method Format, addr 0x181dd62b0, size 0x40, virtual true, abstract: false, final false
inline ::StringW Format(bool  multiLine) ;

/// @brief Method KeyUsageExtension, addr 0x181dd62f0, size 0x80, virtual false, abstract: false, final false
inline ::StringW KeyUsageExtension(bool  multiLine) ;

/// @brief Method NetscapeCertType, addr 0x181dd6370, size 0x270, virtual false, abstract: false, final false
inline ::StringW NetscapeCertType(bool  multiLine) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor() ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::StringW  oid, ::ArrayW<uint8_t>  rawData) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::Oid*  oid, ::ArrayW<uint8_t>  rawData) ;

/// @brief Method SubjectAltName, addr 0x181dd65e0, size 0x1d0, virtual false, abstract: false, final false
inline ::StringW SubjectAltName(bool  multiLine) ;

/// @brief Method SubjectKeyIdentifierExtension, addr 0x181dd67b0, size 0x80, virtual false, abstract: false, final false
inline ::StringW SubjectKeyIdentifierExtension(bool  multiLine) ;

/// @brief Method ToString, addr 0x181dd6830, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString(bool  multiLine) ;

constexpr ::System::Security::Cryptography::Oid* const& __cordl_internal_get__oid() const;

constexpr ::System::Security::Cryptography::Oid*& __cordl_internal_get__oid() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__raw() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__raw() ;

constexpr void __cordl_internal_set__oid(::System::Security::Cryptography::Oid*  value) ;

constexpr void __cordl_internal_set__raw(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181dd6bd0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method .ctor, addr 0x181dd6ac0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  oid, ::ArrayW<uint8_t>  rawData) ;

/// @brief Method .ctor, addr 0x181dd6990, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::Oid*  oid, ::ArrayW<uint8_t>  rawData) ;

/// @brief Method get_Oid, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::Oid* get_Oid() ;

/// @brief Method get_RawData, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method set_Oid, addr 0x181dd6cc0, size 0x80, virtual false, abstract: false, final false
inline void set_Oid(::System::Security::Cryptography::Oid*  value) ;

/// @brief Method set_RawData, addr 0x181dd6d40, size 0xb0, virtual false, abstract: false, final false
inline void set_RawData(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsnEncodedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsnEncodedData(AsnEncodedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsnEncodedData(AsnEncodedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11624};

/// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::Oid*  ____oid;

/// @brief Field _raw, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____raw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____raw) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::AsnEncodedData) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
