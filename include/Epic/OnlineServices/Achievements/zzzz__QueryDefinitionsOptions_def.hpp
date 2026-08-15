#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/QueryDefinitionsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryDefinitionsOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct QueryDefinitionsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions, "Epic.OnlineServices.Achievements", "QueryDefinitionsOptions");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.QueryDefinitionsOptions
struct CORDL_TYPE QueryDefinitionsOptions {
public:
// Declarations
 __declspec(property(get=get_EpicUserId_DEPRECATED, put=set_EpicUserId_DEPRECATED)) ::Epic::OnlineServices::EpicAccountId*  EpicUserId_DEPRECATED;

 __declspec(property(get=get_HiddenAchievementIds_DEPRECATED, put=set_HiddenAchievementIds_DEPRECATED)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  HiddenAchievementIds_DEPRECATED;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_EpicUserId_DEPRECATED, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_EpicUserId_DEPRECATED() ;

/// @brief Method get_HiddenAchievementIds_DEPRECATED, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_HiddenAchievementIds_DEPRECATED() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_EpicUserId_DEPRECATED, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_EpicUserId_DEPRECATED(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_HiddenAchievementIds_DEPRECATED, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_HiddenAchievementIds_DEPRECATED(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryDefinitionsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_EpicUserId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_HiddenAchievementIds_DEPRECATED_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }]
constexpr QueryDefinitionsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _EpicUserId_DEPRECATED_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _HiddenAchievementIds_DEPRECATED_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <EpicUserId_DEPRECATED>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _EpicUserId_DEPRECATED_k__BackingField;

/// @brief Field <HiddenAchievementIds_DEPRECATED>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _HiddenAchievementIds_DEPRECATED_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions, _EpicUserId_DEPRECATED_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions, _HiddenAchievementIds_DEPRECATED_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
