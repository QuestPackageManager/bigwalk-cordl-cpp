#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/CopyLeaderboardUserScoreByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLeaderboardUserScoreByIndexOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardUserScoreByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions, "Epic.OnlineServices.Leaderboards", "CopyLeaderboardUserScoreByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.CopyLeaderboardUserScoreByIndexOptions
struct CORDL_TYPE CopyLeaderboardUserScoreByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_LeaderboardUserScoreIndex, put=set_LeaderboardUserScoreIndex)) uint32_t  LeaderboardUserScoreIndex;

 __declspec(property(get=get_StatName, put=set_StatName)) ::Epic::OnlineServices::Utf8String*  StatName;

/// @brief Method get_LeaderboardUserScoreIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_LeaderboardUserScoreIndex() ;

/// @brief Method get_StatName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_StatName() ;

/// @brief Method set_LeaderboardUserScoreIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_LeaderboardUserScoreIndex(uint32_t  value) ;

/// @brief Method set_StatName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_StatName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLeaderboardUserScoreByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LeaderboardUserScoreIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopyLeaderboardUserScoreByIndexOptions(uint32_t  _LeaderboardUserScoreIndex_k__BackingField, ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LeaderboardUserScoreIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _LeaderboardUserScoreIndex_k__BackingField;

/// @brief Field <StatName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions, _LeaderboardUserScoreIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions, _StatName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
