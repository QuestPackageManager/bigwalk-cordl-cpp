#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyUnlockedAchievementByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyUnlockedAchievementByIndexOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions, "Epic.OnlineServices.Achievements", "CopyUnlockedAchievementByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyUnlockedAchievementByIndexOptions
struct CORDL_TYPE CopyUnlockedAchievementByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_AchievementIndex, put=set_AchievementIndex)) uint32_t  AchievementIndex;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_AchievementIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AchievementIndex() ;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_AchievementIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementIndex(uint32_t  value) ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyUnlockedAchievementByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AchievementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyUnlockedAchievementByIndexOptions(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, uint32_t  _AchievementIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <AchievementIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _AchievementIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions, _AchievementIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
