#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyEntitlementByNameAndIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyEntitlementByNameAndIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByNameAndIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions, "Epic.OnlineServices.Ecom", "CopyEntitlementByNameAndIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyEntitlementByNameAndIndexOptions
struct CORDL_TYPE CopyEntitlementByNameAndIndexOptions {
public:
// Declarations
 __declspec(property(get=get_EntitlementName, put=set_EntitlementName)) ::Epic::OnlineServices::Utf8String*  EntitlementName;

 __declspec(property(get=get_Index, put=set_Index)) uint32_t  Index;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_EntitlementName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EntitlementName() ;

/// @brief Method get_Index, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Index() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_EntitlementName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Index, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Index(uint32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyEntitlementByNameAndIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_EntitlementName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Index_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyEntitlementByNameAndIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField, uint32_t  _Index_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <EntitlementName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField;

/// @brief Field <Index>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _Index_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions, _EntitlementName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions, _Index_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
