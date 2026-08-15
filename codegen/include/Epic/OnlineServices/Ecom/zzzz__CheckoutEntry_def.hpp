#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CheckoutEntry)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CheckoutEntry;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CheckoutEntry);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CheckoutEntry, "Epic.OnlineServices.Ecom", "CheckoutEntry");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CheckoutEntry
struct CORDL_TYPE CheckoutEntry {
public:
// Declarations
 __declspec(property(get=get_OfferId, put=set_OfferId)) ::Epic::OnlineServices::Utf8String*  OfferId;

/// @brief Method get_OfferId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OfferId() ;

/// @brief Method set_OfferId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_OfferId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CheckoutEntry() ;

// Ctor Parameters [CppParam { name: "_OfferId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CheckoutEntry(::Epic::OnlineServices::Utf8String*  _OfferId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <OfferId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OfferId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutEntry, _OfferId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CheckoutEntry) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
