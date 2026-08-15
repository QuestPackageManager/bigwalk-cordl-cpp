#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/QueryStatsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryStatsOptions)
namespace Epic::OnlineServices {
class ProductUserId;
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
namespace Epic::OnlineServices::Stats {
struct QueryStatsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::QueryStatsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::QueryStatsOptions, "Epic.OnlineServices.Stats", "QueryStatsOptions");
// Dependencies Epic.OnlineServices.Utf8String, System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.QueryStatsOptions
struct CORDL_TYPE QueryStatsOptions {
public:
// Declarations
 __declspec(property(get=get_EndTime, put=set_EndTime)) ::System::Nullable_1<::System::DateTimeOffset>  EndTime;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_StartTime, put=set_StartTime)) ::System::Nullable_1<::System::DateTimeOffset>  StartTime;

 __declspec(property(get=get_StatNames, put=set_StatNames)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  StatNames;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_EndTime, addr 0x1804bda70, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_EndTime() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_StartTime, addr 0x1804bda90, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_StartTime() ;

/// @brief Method get_StatNames, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_StatNames() ;

/// @brief Method get_TargetUserId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_EndTime, addr 0x1804bdab0, size 0x20, virtual false, abstract: false, final false
inline void set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_StartTime, addr 0x1804bdad0, size 0x20, virtual false, abstract: false, final false
inline void set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_StatNames, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_StatNames(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_TargetUserId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryStatsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_StatNames_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr QueryStatsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _StatNames_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <StartTime>k__BackingField, offset: 0x8, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField;

/// @brief Field <EndTime>k__BackingField, offset: 0x20, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField;

/// @brief Field <StatNames>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _StatNames_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptions, _StartTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptions, _EndTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptions, _StatNames_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptions, _TargetUserId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::QueryStatsOptions) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
