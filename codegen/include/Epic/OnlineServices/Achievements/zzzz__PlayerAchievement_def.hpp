#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerAchievement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Achievements/zzzz__PlayerStatInfo_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerAchievement)
namespace Epic::OnlineServices::Achievements {
struct PlayerStatInfo;
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
namespace Epic::OnlineServices::Achievements {
struct PlayerAchievement;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::PlayerAchievement);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::PlayerAchievement, "Epic.OnlineServices.Achievements", "PlayerAchievement");
// Dependencies Epic.OnlineServices.Achievements.PlayerStatInfo, System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.PlayerAchievement
struct CORDL_TYPE PlayerAchievement {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

 __declspec(property(get=get_Description, put=set_Description)) ::Epic::OnlineServices::Utf8String*  Description;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_FlavorText, put=set_FlavorText)) ::Epic::OnlineServices::Utf8String*  FlavorText;

 __declspec(property(get=get_IconURL, put=set_IconURL)) ::Epic::OnlineServices::Utf8String*  IconURL;

 __declspec(property(get=get_Progress, put=set_Progress)) double_t  Progress;

 __declspec(property(get=get_StatInfo, put=set_StatInfo)) ::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo>  StatInfo;

 __declspec(property(get=get_UnlockTime, put=set_UnlockTime)) ::System::Nullable_1<::System::DateTimeOffset>  UnlockTime;

/// @brief Method get_AchievementId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method get_Description, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Description() ;

/// @brief Method get_DisplayName, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_FlavorText, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_FlavorText() ;

/// @brief Method get_IconURL, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_IconURL() ;

/// @brief Method get_Progress, addr 0x18052ca20, size 0x10, virtual false, abstract: false, final false
inline double_t get_Progress() ;

/// @brief Method get_StatInfo, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo> get_StatInfo() ;

/// @brief Method get_UnlockTime, addr 0x180347870, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime() ;

/// @brief Method set_AchievementId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Description, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Description(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DisplayName, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_FlavorText, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_FlavorText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_IconURL, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_IconURL(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Progress, addr 0x18052ca30, size 0x10, virtual false, abstract: false, final false
inline void set_Progress(double_t  value) ;

/// @brief Method set_StatInfo, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_StatInfo(::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo>  value) ;

/// @brief Method set_UnlockTime, addr 0x180503ca0, size 0x20, virtual false, abstract: false, final false
inline void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerAchievement() ;

// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Progress_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_UnlockTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }, CppParam { name: "_StatInfo_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo>", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Description_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IconURL_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_FlavorText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PlayerAchievement(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, double_t  _Progress_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField, ::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo>  _StatInfo_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Description_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IconURL_k__BackingField, ::Epic::OnlineServices::Utf8String*  _FlavorText_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <AchievementId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

/// @brief Field <Progress>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _Progress_k__BackingField;

/// @brief Field <UnlockTime>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField;

/// @brief Field <StatInfo>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Achievements::PlayerStatInfo>  _StatInfo_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <Description>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Description_k__BackingField;

/// @brief Field <IconURL>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _IconURL_k__BackingField;

/// @brief Field <FlavorText>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _FlavorText_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _AchievementId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _Progress_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _UnlockTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _StatInfo_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _DisplayName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _Description_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _IconURL_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievement, _FlavorText_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::PlayerAchievement) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
