#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/GetPlayerAchievementCountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GetPlayerAchievementCountOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct GetPlayerAchievementCountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions, "Epic.OnlineServices.Achievements", "GetPlayerAchievementCountOptions");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.GetPlayerAchievementCountOptions
struct CORDL_TYPE GetPlayerAchievementCountOptions {
public:
// Declarations
 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerAchievementCountOptions() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr GetPlayerAchievementCountOptions(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9479};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
