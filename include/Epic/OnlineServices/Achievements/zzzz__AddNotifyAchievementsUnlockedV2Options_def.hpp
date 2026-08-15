#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/AddNotifyAchievementsUnlockedV2Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyAchievementsUnlockedV2Options)
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedV2Options;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options, "Epic.OnlineServices.Achievements", "AddNotifyAchievementsUnlockedV2Options");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.AddNotifyAchievementsUnlockedV2Options
#pragma pack(push, 0)
struct CORDL_TYPE AddNotifyAchievementsUnlockedV2Options {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyAchievementsUnlockedV2Options() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
