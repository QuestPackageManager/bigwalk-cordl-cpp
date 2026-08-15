#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutEntry_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOrientation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CheckoutOptions)
namespace Epic::OnlineServices::Ecom {
struct CheckoutEntry;
}
namespace Epic::OnlineServices::Ecom {
struct CheckoutOrientation;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CheckoutOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CheckoutOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CheckoutOptions, "Epic.OnlineServices.Ecom", "CheckoutOptions");
// Dependencies Epic.OnlineServices.Ecom.CheckoutEntry, Epic.OnlineServices.Ecom.CheckoutOrientation
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CheckoutOptions
struct CORDL_TYPE CheckoutOptions {
public:
// Declarations
 __declspec(property(get=get_Entries, put=set_Entries)) ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  Entries;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_OverrideCatalogNamespace, put=set_OverrideCatalogNamespace)) ::Epic::OnlineServices::Utf8String*  OverrideCatalogNamespace;

 __declspec(property(get=get_PreferredOrientation, put=set_PreferredOrientation)) ::Epic::OnlineServices::Ecom::CheckoutOrientation  PreferredOrientation;

/// @brief Method get_Entries, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry> get_Entries() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_OverrideCatalogNamespace, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OverrideCatalogNamespace() ;

/// @brief Method get_PreferredOrientation, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::CheckoutOrientation get_PreferredOrientation() ;

/// @brief Method set_Entries, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Entries(::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_OverrideCatalogNamespace, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideCatalogNamespace(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PreferredOrientation, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_PreferredOrientation(::Epic::OnlineServices::Ecom::CheckoutOrientation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CheckoutOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_OverrideCatalogNamespace_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Entries_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>", modifiers: "", def_value: None }, CppParam { name: "_PreferredOrientation_k__BackingField", ty: "::Epic::OnlineServices::Ecom::CheckoutOrientation", modifiers: "", def_value: None }]
constexpr CheckoutOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideCatalogNamespace_k__BackingField, ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  _Entries_k__BackingField, ::Epic::OnlineServices::Ecom::CheckoutOrientation  _PreferredOrientation_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <OverrideCatalogNamespace>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OverrideCatalogNamespace_k__BackingField;

/// @brief Field <Entries>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  _Entries_k__BackingField;

/// @brief Field <PreferredOrientation>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::CheckoutOrientation  _PreferredOrientation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptions, _OverrideCatalogNamespace_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptions, _Entries_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptions, _PreferredOrientation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CheckoutOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
