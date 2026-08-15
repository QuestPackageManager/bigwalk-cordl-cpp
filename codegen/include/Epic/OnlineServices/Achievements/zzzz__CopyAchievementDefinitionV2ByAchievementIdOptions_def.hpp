#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionV2ByAchievementIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopyAchievementDefinitionV2ByAchievementIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByAchievementIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions, "Epic.OnlineServices.Achievements", "CopyAchievementDefinitionV2ByAchievementIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyAchievementDefinitionV2ByAchievementIdOptions
struct CORDL_TYPE CopyAchievementDefinitionV2ByAchievementIdOptions {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

/// @brief Method get_AchievementId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method set_AchievementId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyAchievementDefinitionV2ByAchievementIdOptions() ;

// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopyAchievementDefinitionV2ByAchievementIdOptions(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <AchievementId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions, _AchievementId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
