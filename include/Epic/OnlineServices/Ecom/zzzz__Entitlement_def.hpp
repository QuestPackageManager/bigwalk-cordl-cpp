#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/Entitlement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Entitlement)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct Entitlement;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::Entitlement);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::Entitlement, "Epic.OnlineServices.Ecom", "Entitlement");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.Entitlement
struct CORDL_TYPE Entitlement {
public:
// Declarations
 __declspec(property(get=get_CatalogItemId, put=set_CatalogItemId)) ::Epic::OnlineServices::Utf8String*  CatalogItemId;

 __declspec(property(get=get_EndTimestamp, put=set_EndTimestamp)) int64_t  EndTimestamp;

 __declspec(property(get=get_EntitlementId, put=set_EntitlementId)) ::Epic::OnlineServices::Utf8String*  EntitlementId;

 __declspec(property(get=get_EntitlementName, put=set_EntitlementName)) ::Epic::OnlineServices::Utf8String*  EntitlementName;

 __declspec(property(get=get_Redeemed, put=set_Redeemed)) bool  Redeemed;

 __declspec(property(get=get_ServerIndex, put=set_ServerIndex)) int32_t  ServerIndex;

/// @brief Method get_CatalogItemId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CatalogItemId() ;

/// @brief Method get_EndTimestamp, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_EndTimestamp() ;

/// @brief Method get_EntitlementId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EntitlementId() ;

/// @brief Method get_EntitlementName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EntitlementName() ;

/// @brief Method get_Redeemed, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_Redeemed() ;

/// @brief Method get_ServerIndex, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ServerIndex() ;

/// @brief Method set_CatalogItemId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_CatalogItemId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_EndTimestamp, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_EndTimestamp(int64_t  value) ;

/// @brief Method set_EntitlementId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_EntitlementName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Redeemed, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_Redeemed(bool  value) ;

/// @brief Method set_ServerIndex, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_ServerIndex(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Entitlement() ;

// Ctor Parameters [CppParam { name: "_EntitlementName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_EntitlementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_CatalogItemId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ServerIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Redeemed_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_EndTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Entitlement(::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EntitlementId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CatalogItemId_k__BackingField, int32_t  _ServerIndex_k__BackingField, bool  _Redeemed_k__BackingField, int64_t  _EndTimestamp_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <EntitlementName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField;

/// @brief Field <EntitlementId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EntitlementId_k__BackingField;

/// @brief Field <CatalogItemId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CatalogItemId_k__BackingField;

/// @brief Field <ServerIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  _ServerIndex_k__BackingField;

/// @brief Field <Redeemed>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  _Redeemed_k__BackingField;

/// @brief Field <EndTimestamp>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  _EndTimestamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _EntitlementName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _EntitlementId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _CatalogItemId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _ServerIndex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _Redeemed_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::Entitlement, _EndTimestamp_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::Entitlement) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
