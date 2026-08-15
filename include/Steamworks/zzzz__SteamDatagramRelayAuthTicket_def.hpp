#pragma once
// IWYU pragma private; include "Steamworks/SteamDatagramRelayAuthTicket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__RTime32_def.hpp"
#include "Steamworks/zzzz__SteamDatagramHostedAddress_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamDatagramRelayAuthTicket)
namespace Steamworks {
struct ExtraField_SteamDatagramRelayAuthTicket_EType;
}
namespace Steamworks {
struct ExtraField_SteamDatagramRelayAuthTicket_OptionValue;
}
namespace Steamworks {
struct SteamDatagramRelayAuthTicket_ExtraField;
}
// Forward declare root types
namespace Steamworks {
struct ExtraField_SteamDatagramRelayAuthTicket_EType;
}
namespace Steamworks {
struct ExtraField_SteamDatagramRelayAuthTicket_OptionValue;
}
namespace Steamworks {
struct SteamDatagramRelayAuthTicket;
}
namespace Steamworks {
struct SteamDatagramRelayAuthTicket_ExtraField;
}
// Write type traits
MARK_VAL_T(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType);
MARK_VAL_T(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue);
MARK_VAL_T(::Steamworks::SteamDatagramRelayAuthTicket);
MARK_VAL_T(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField);
DEFINE_IL2CPP_CLASS(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType, "Steamworks", "SteamDatagramRelayAuthTicket/ExtraField/EType");
DEFINE_IL2CPP_CLASS(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue, "Steamworks", "SteamDatagramRelayAuthTicket/ExtraField/OptionValue");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamDatagramRelayAuthTicket, "Steamworks", "SteamDatagramRelayAuthTicket");
DEFINE_IL2CPP_CLASS(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField, "Steamworks", "SteamDatagramRelayAuthTicket/ExtraField");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/EType
struct CORDL_TYPE ExtraField_SteamDatagramRelayAuthTicket_EType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExtraField_SteamDatagramRelayAuthTicket_EType_Unwrapped
enum struct __ExtraField_SteamDatagramRelayAuthTicket_EType_Unwrapped : int32_t {
__E_k_EType_String = static_cast<int32_t>(0x0),
__E_k_EType_Int = static_cast<int32_t>(0x1),
__E_k_EType_Fixed64 = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExtraField_SteamDatagramRelayAuthTicket_EType_Unwrapped () const noexcept {
return static_cast<__ExtraField_SteamDatagramRelayAuthTicket_EType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExtraField_SteamDatagramRelayAuthTicket_EType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExtraField_SteamDatagramRelayAuthTicket_EType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EType_Fixed64 value: I32(2)
static ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType const k_EType_Fixed64;

/// @brief Field k_EType_Int value: I32(1)
static ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType const k_EType_Int;

/// @brief Field k_EType_String value: I32(0)
static ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType const k_EType_String;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamDatagramRelayAuthTicket/ExtraField/OptionValue
struct CORDL_TYPE ExtraField_SteamDatagramRelayAuthTicket_OptionValue {
public:
// Declarations
/// @brief Field m_nFixed64Value, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_nFixed64Value, put=__cordl_internal_set_m_nFixed64Value)) uint64_t  m_nFixed64Value;

/// @brief Field m_nIntValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_nIntValue, put=__cordl_internal_set_m_nIntValue)) int64_t  m_nIntValue;

/// @brief Field m_szStringValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_szStringValue, put=__cordl_internal_set_m_szStringValue)) ::ArrayW<uint8_t>  m_szStringValue;

constexpr uint64_t const& __cordl_internal_get_m_nFixed64Value() const;

constexpr uint64_t& __cordl_internal_get_m_nFixed64Value() ;

constexpr int64_t const& __cordl_internal_get_m_nIntValue() const;

constexpr int64_t& __cordl_internal_get_m_nIntValue() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_szStringValue() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_szStringValue() ;

constexpr void __cordl_internal_set_m_nFixed64Value(uint64_t  value) ;

constexpr void __cordl_internal_set_m_nIntValue(int64_t  value) ;

constexpr void __cordl_internal_set_m_szStringValue(::ArrayW<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExtraField_SteamDatagramRelayAuthTicket_OptionValue() ;

// Ctor Parameters [CppParam { name: "m_szStringValue", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_nIntValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_nFixed64Value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr ExtraField_SteamDatagramRelayAuthTicket_OptionValue(::ArrayW<uint8_t>  m_szStringValue, int64_t  m_nIntValue, uint64_t  m_nFixed64Value) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_szStringValue_padding[0x0];
/// @brief Field m_szStringValue, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szStringValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_szStringValue_padding_forAlignment[0x0];
/// @brief Field m_szStringValue, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_szStringValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_nIntValue_padding[0x0];
/// @brief Field m_nIntValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_nIntValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_nIntValue_padding_forAlignment[0x0];
/// @brief Field m_nIntValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___m_nIntValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_nFixed64Value_padding[0x0];
/// @brief Field m_nFixed64Value, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_nFixed64Value;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_nFixed64Value_padding_forAlignment[0x0];
/// @brief Field m_nFixed64Value, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_nFixed64Value_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.SteamDatagramRelayAuthTicket::ExtraField::EType, Steamworks.SteamDatagramRelayAuthTicket::ExtraField::OptionValue
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamDatagramRelayAuthTicket/ExtraField
#pragma pack(push, 8)
struct CORDL_TYPE SteamDatagramRelayAuthTicket_ExtraField {
public:
// Declarations
using EType = ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType;

using OptionValue = ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue;

// Ctor Parameters []
// @brief default ctor
constexpr SteamDatagramRelayAuthTicket_ExtraField() ;

// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType", modifiers: "", def_value: None }, CppParam { name: "m_szName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_val", ty: "::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue", modifiers: "", def_value: None }]
constexpr SteamDatagramRelayAuthTicket_ExtraField(::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  m_eType, ::ArrayW<uint8_t>  m_szName, ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue  m_val) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_eType, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_EType  m_eType;

/// @brief Field m_szName, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_szName;

/// @brief Field m_val, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ExtraField_SteamDatagramRelayAuthTicket_OptionValue  m_val;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField, m_eType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField, m_szName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField, m_val) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamDatagramRelayAuthTicket_ExtraField) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Steamworks.RTime32, Steamworks.SteamDatagramHostedAddress, Steamworks.SteamDatagramRelayAuthTicket::ExtraField, Steamworks.SteamNetworkingIdentity
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamDatagramRelayAuthTicket
#pragma pack(push, 8)
struct CORDL_TYPE SteamDatagramRelayAuthTicket {
public:
// Declarations
using ExtraField = ::Steamworks::SteamDatagramRelayAuthTicket_ExtraField;

/// @brief Method Clear, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamDatagramRelayAuthTicket() ;

// Ctor Parameters [CppParam { name: "m_identityGameserver", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }, CppParam { name: "m_identityAuthorizedClient", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }, CppParam { name: "m_unPublicIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_rtimeTicketExpiry", ty: "::Steamworks::RTime32", modifiers: "", def_value: None }, CppParam { name: "m_routing", ty: "::Steamworks::SteamDatagramHostedAddress", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nRestrictToVirtualPort", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nExtraFields", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_vecExtraFields", ty: "::ArrayW<::Steamworks::SteamDatagramRelayAuthTicket_ExtraField>", modifiers: "", def_value: None }]
constexpr SteamDatagramRelayAuthTicket(::Steamworks::SteamNetworkingIdentity  m_identityGameserver, ::Steamworks::SteamNetworkingIdentity  m_identityAuthorizedClient, uint32_t  m_unPublicIP, ::Steamworks::RTime32  m_rtimeTicketExpiry, ::Steamworks::SteamDatagramHostedAddress  m_routing, uint32_t  m_nAppID, int32_t  m_nRestrictToVirtualPort, int32_t  m_nExtraFields, ::ArrayW<::Steamworks::SteamDatagramRelayAuthTicket_ExtraField>  m_vecExtraFields) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field k_nMaxExtraFields offset 0xffffffff size 0x4
static constexpr int32_t  k_nMaxExtraFields{static_cast<int32_t>(0x10)};

/// @brief Field m_identityGameserver, offset: 0x0, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identityGameserver;

/// @brief Field m_identityAuthorizedClient, offset: 0x10, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identityAuthorizedClient;

/// @brief Field m_unPublicIP, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_unPublicIP;

/// @brief Field m_rtimeTicketExpiry, offset: 0x24, size: 0x4, def value: None
 ::Steamworks::RTime32  m_rtimeTicketExpiry;

/// @brief Field m_routing, offset: 0x28, size: 0x10, def value: None
 ::Steamworks::SteamDatagramHostedAddress  m_routing;

/// @brief Field m_nAppID, offset: 0x38, size: 0x4, def value: None
 uint32_t  m_nAppID;

/// @brief Field m_nRestrictToVirtualPort, offset: 0x3c, size: 0x4, def value: None
 int32_t  m_nRestrictToVirtualPort;

/// @brief Field m_nExtraFields, offset: 0x40, size: 0x4, def value: None
 int32_t  m_nExtraFields;

/// @brief Field m_vecExtraFields, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Steamworks::SteamDatagramRelayAuthTicket_ExtraField>  m_vecExtraFields;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_identityGameserver) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_identityAuthorizedClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_unPublicIP) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_rtimeTicketExpiry) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_routing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_nAppID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_nRestrictToVirtualPort) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_nExtraFields) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamDatagramRelayAuthTicket, m_vecExtraFields) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamDatagramRelayAuthTicket) == 0x50, "Size mismatch!");

} // namespace end def Steamworks
