#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/UserScoresQueryStatInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UserScoresQueryStatInfo)
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardAggregation;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct UserScoresQueryStatInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo, "Epic.OnlineServices.Leaderboards", "UserScoresQueryStatInfo");
// Dependencies Epic.OnlineServices.Leaderboards.LeaderboardAggregation
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.UserScoresQueryStatInfo
struct CORDL_TYPE UserScoresQueryStatInfo {
public:
// Declarations
 __declspec(property(get=get_Aggregation, put=set_Aggregation)) ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Aggregation;

 __declspec(property(get=get_StatName, put=set_StatName)) ::Epic::OnlineServices::Utf8String*  StatName;

/// @brief Method get_Aggregation, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation() ;

/// @brief Method get_StatName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_StatName() ;

/// @brief Method set_Aggregation, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  value) ;

/// @brief Method set_StatName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_StatName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserScoresQueryStatInfo() ;

// Ctor Parameters [CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Aggregation_k__BackingField", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: None }]
constexpr UserScoresQueryStatInfo(::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  _Aggregation_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <StatName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField;

/// @brief Field <Aggregation>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  _Aggregation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo, _StatName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo, _Aggregation_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
