#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/Definition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Definition)
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardAggregation;
}
namespace Epic::OnlineServices {
class Utf8String;
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
struct Definition;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::Definition);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::Definition, "Epic.OnlineServices.Leaderboards", "Definition");
// Dependencies Epic.OnlineServices.Leaderboards.LeaderboardAggregation, System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.Definition
struct CORDL_TYPE Definition {
public:
// Declarations
 __declspec(property(get=get_Aggregation, put=set_Aggregation)) ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  Aggregation;

 __declspec(property(get=get_EndTime, put=set_EndTime)) ::System::Nullable_1<::System::DateTimeOffset>  EndTime;

 __declspec(property(get=get_LeaderboardId, put=set_LeaderboardId)) ::Epic::OnlineServices::Utf8String*  LeaderboardId;

 __declspec(property(get=get_StartTime, put=set_StartTime)) ::System::Nullable_1<::System::DateTimeOffset>  StartTime;

 __declspec(property(get=get_StatName, put=set_StatName)) ::Epic::OnlineServices::Utf8String*  StatName;

/// @brief Method get_Aggregation, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation get_Aggregation() ;

/// @brief Method get_EndTime, addr 0x180503bc0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_EndTime() ;

/// @brief Method get_LeaderboardId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LeaderboardId() ;

/// @brief Method get_StartTime, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_StartTime() ;

/// @brief Method get_StatName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_StatName() ;

/// @brief Method set_Aggregation, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  value) ;

/// @brief Method set_EndTime, addr 0x180503be0, size 0x20, virtual false, abstract: false, final false
inline void set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_LeaderboardId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LeaderboardId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_StartTime, addr 0x1804f66a0, size 0x20, virtual false, abstract: false, final false
inline void set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_StatName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_StatName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Definition() ;

// Ctor Parameters [CppParam { name: "_LeaderboardId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Aggregation_k__BackingField", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: None }, CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }]
constexpr Definition(::Epic::OnlineServices::Utf8String*  _LeaderboardId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  _Aggregation_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <LeaderboardId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LeaderboardId_k__BackingField;

/// @brief Field <StatName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField;

/// @brief Field <Aggregation>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  _Aggregation_k__BackingField;

/// @brief Field <StartTime>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField;

/// @brief Field <EndTime>k__BackingField, offset: 0x30, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::Definition, _LeaderboardId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::Definition, _StatName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::Definition, _Aggregation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::Definition, _StartTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::Definition, _EndTime_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::Definition) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
