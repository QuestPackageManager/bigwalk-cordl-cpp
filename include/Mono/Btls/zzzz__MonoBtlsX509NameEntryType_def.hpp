#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509NameEntryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509NameEntryType)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509NameEntryType;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509NameEntryType);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509NameEntryType, "Mono.Btls", "MonoBtlsX509NameEntryType");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509NameEntryType
struct CORDL_TYPE MonoBtlsX509NameEntryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509NameEntryType_Unwrapped
enum struct __MonoBtlsX509NameEntryType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_CountryName = static_cast<int32_t>(0x1),
__E_OrganizationName = static_cast<int32_t>(0x2),
__E_OrganizationalUnitName = static_cast<int32_t>(0x3),
__E_CommonName = static_cast<int32_t>(0x4),
__E_LocalityName = static_cast<int32_t>(0x5),
__E_StateOrProvinceName = static_cast<int32_t>(0x6),
__E_StreetAddress = static_cast<int32_t>(0x7),
__E_SerialNumber = static_cast<int32_t>(0x8),
__E_DomainComponent = static_cast<int32_t>(0x9),
__E_UserId = static_cast<int32_t>(0xa),
__E_Email = static_cast<int32_t>(0xb),
__E_DnQualifier = static_cast<int32_t>(0xc),
__E_Title = static_cast<int32_t>(0xd),
__E_Surname = static_cast<int32_t>(0xe),
__E_GivenName = static_cast<int32_t>(0xf),
__E_Initial = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509NameEntryType_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509NameEntryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509NameEntryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509NameEntryType(int32_t  value__) noexcept;

/// @brief Field CommonName value: I32(4)
static ::Mono::Btls::MonoBtlsX509NameEntryType const CommonName;

/// @brief Field CountryName value: I32(1)
static ::Mono::Btls::MonoBtlsX509NameEntryType const CountryName;

/// @brief Field DnQualifier value: I32(12)
static ::Mono::Btls::MonoBtlsX509NameEntryType const DnQualifier;

/// @brief Field DomainComponent value: I32(9)
static ::Mono::Btls::MonoBtlsX509NameEntryType const DomainComponent;

/// @brief Field Email value: I32(11)
static ::Mono::Btls::MonoBtlsX509NameEntryType const Email;

/// @brief Field GivenName value: I32(15)
static ::Mono::Btls::MonoBtlsX509NameEntryType const GivenName;

/// @brief Field Initial value: I32(16)
static ::Mono::Btls::MonoBtlsX509NameEntryType const Initial;

/// @brief Field LocalityName value: I32(5)
static ::Mono::Btls::MonoBtlsX509NameEntryType const LocalityName;

/// @brief Field OrganizationName value: I32(2)
static ::Mono::Btls::MonoBtlsX509NameEntryType const OrganizationName;

/// @brief Field OrganizationalUnitName value: I32(3)
static ::Mono::Btls::MonoBtlsX509NameEntryType const OrganizationalUnitName;

/// @brief Field SerialNumber value: I32(8)
static ::Mono::Btls::MonoBtlsX509NameEntryType const SerialNumber;

/// @brief Field StateOrProvinceName value: I32(6)
static ::Mono::Btls::MonoBtlsX509NameEntryType const StateOrProvinceName;

/// @brief Field StreetAddress value: I32(7)
static ::Mono::Btls::MonoBtlsX509NameEntryType const StreetAddress;

/// @brief Field Surname value: I32(14)
static ::Mono::Btls::MonoBtlsX509NameEntryType const Surname;

/// @brief Field Title value: I32(13)
static ::Mono::Btls::MonoBtlsX509NameEntryType const Title;

/// @brief Field Unknown value: I32(0)
static ::Mono::Btls::MonoBtlsX509NameEntryType const Unknown;

/// @brief Field UserId value: I32(10)
static ::Mono::Btls::MonoBtlsX509NameEntryType const UserId;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509NameEntryType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509NameEntryType) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls
