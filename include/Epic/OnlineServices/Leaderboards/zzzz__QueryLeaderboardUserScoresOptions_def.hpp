#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardUserScoresOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryLeaderboardUserScoresOptions)
namespace Epic::OnlineServices::Leaderboards {
struct UserScoresQueryStatInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardUserScoresOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, "Epic.OnlineServices.Leaderboards", "QueryLeaderboardUserScoresOptions");
// Dependencies Epic.OnlineServices.Leaderboards.UserScoresQueryStatInfo, Epic.OnlineServices.ProductUserId, System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.QueryLeaderboardUserScoresOptions
struct CORDL_TYPE QueryLeaderboardUserScoresOptions {
public:
// Declarations
 __declspec(property(get=get_EndTime, put=set_EndTime)) ::System::Nullable_1<::System::DateTimeOffset>  EndTime;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_StartTime, put=set_StartTime)) ::System::Nullable_1<::System::DateTimeOffset>  StartTime;

 __declspec(property(get=get_StatInfo, put=set_StatInfo)) ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  StatInfo;

 __declspec(property(get=get_UserIds, put=set_UserIds)) ::ArrayW<::Epic::OnlineServices::ProductUserId*>  UserIds;

/// @brief Method get_EndTime, addr 0x180503b20, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_EndTime() ;

/// @brief Method get_LocalUserId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_StartTime, addr 0x180347870, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_StartTime() ;

/// @brief Method get_StatInfo, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo> get_StatInfo() ;

/// @brief Method get_UserIds, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> get_UserIds() ;

/// @brief Method set_EndTime, addr 0x180503b80, size 0x20, virtual false, abstract: false, final false
inline void set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_LocalUserId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_StartTime, addr 0x180503ca0, size 0x20, virtual false, abstract: false, final false
inline void set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_StatInfo, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_StatInfo(::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  value) ;

/// @brief Method set_UserIds, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserIds(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryLeaderboardUserScoresOptions() ;

// Ctor Parameters [CppParam { name: "_UserIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: None }, CppParam { name: "_StatInfo_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>", modifiers: "", def_value: None }, CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr QueryLeaderboardUserScoresOptions(::ArrayW<::Epic::OnlineServices::ProductUserId*>  _UserIds_k__BackingField, ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  _StatInfo_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <UserIds>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _UserIds_k__BackingField;

/// @brief Field <StatInfo>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  _StatInfo_k__BackingField;

/// @brief Field <StartTime>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField;

/// @brief Field <EndTime>k__BackingField, offset: 0x28, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, _UserIds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, _StatInfo_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, _StartTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, _EndTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions, _LocalUserId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
