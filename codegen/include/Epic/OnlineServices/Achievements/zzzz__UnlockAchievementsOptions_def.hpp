#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockAchievementsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnlockAchievementsOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct UnlockAchievementsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions, "Epic.OnlineServices.Achievements", "UnlockAchievementsOptions");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.UnlockAchievementsOptions
struct CORDL_TYPE UnlockAchievementsOptions {
public:
// Declarations
 __declspec(property(get=get_AchievementIds, put=set_AchievementIds)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  AchievementIds;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_AchievementIds, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_AchievementIds() ;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_AchievementIds, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnlockAchievementsOptions() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AchievementIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }]
constexpr UnlockAchievementsOptions(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _AchievementIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <AchievementIds>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _AchievementIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions, _AchievementIds_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
