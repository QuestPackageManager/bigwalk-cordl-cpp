#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/CopyStatByNameOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopyStatByNameOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct CopyStatByNameOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::CopyStatByNameOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::CopyStatByNameOptions, "Epic.OnlineServices.Stats", "CopyStatByNameOptions");
// Dependencies 
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.CopyStatByNameOptions
struct CORDL_TYPE CopyStatByNameOptions {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::Epic::OnlineServices::Utf8String*  Name;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_Name, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Name() ;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_Name, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyStatByNameOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopyStatByNameOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <Name>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::CopyStatByNameOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::CopyStatByNameOptions, _Name_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::CopyStatByNameOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
