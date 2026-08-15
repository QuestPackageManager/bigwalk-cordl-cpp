#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardDefinitionsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryLeaderboardDefinitionsOptions)
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
struct QueryLeaderboardDefinitionsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions, "Epic.OnlineServices.Leaderboards", "QueryLeaderboardDefinitionsOptions");
// Dependencies System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.QueryLeaderboardDefinitionsOptions
struct CORDL_TYPE QueryLeaderboardDefinitionsOptions {
public:
// Declarations
 __declspec(property(get=get_EndTime, put=set_EndTime)) ::System::Nullable_1<::System::DateTimeOffset>  EndTime;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_StartTime, put=set_StartTime)) ::System::Nullable_1<::System::DateTimeOffset>  StartTime;

/// @brief Method get_EndTime, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_EndTime() ;

/// @brief Method get_LocalUserId, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_StartTime, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_StartTime() ;

/// @brief Method set_EndTime, addr 0x1804f66a0, size 0x20, virtual false, abstract: false, final false
inline void set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_LocalUserId, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_StartTime, addr 0x1805115e0, size 0x20, virtual false, abstract: false, final false
inline void set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryLeaderboardDefinitionsOptions() ;

// Ctor Parameters [CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr QueryLeaderboardDefinitionsOptions(::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <StartTime>k__BackingField, offset: 0x0, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField;

/// @brief Field <EndTime>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions, _StartTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions, _EndTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions, _LocalUserId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
