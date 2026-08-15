#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyAchievementDefinitionByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions, "Epic.OnlineServices.Achievements", "CopyAchievementDefinitionByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyAchievementDefinitionByIndexOptions
struct CORDL_TYPE CopyAchievementDefinitionByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_AchievementIndex, put=set_AchievementIndex)) uint32_t  AchievementIndex;

/// @brief Method get_AchievementIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AchievementIndex() ;

/// @brief Method set_AchievementIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyAchievementDefinitionByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_AchievementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyAchievementDefinitionByIndexOptions(uint32_t  _AchievementIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <AchievementIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _AchievementIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions, _AchievementIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
