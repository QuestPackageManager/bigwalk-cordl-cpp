#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/DefinitionV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Achievements/zzzz__StatThresholds_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DefinitionV2)
namespace Epic::OnlineServices::Achievements {
struct StatThresholds;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct DefinitionV2;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::DefinitionV2);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::DefinitionV2, "Epic.OnlineServices.Achievements", "DefinitionV2");
// Dependencies Epic.OnlineServices.Achievements.StatThresholds
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.DefinitionV2
struct CORDL_TYPE DefinitionV2 {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

 __declspec(property(get=get_FlavorText, put=set_FlavorText)) ::Epic::OnlineServices::Utf8String*  FlavorText;

 __declspec(property(get=get_IsHidden, put=set_IsHidden)) bool  IsHidden;

 __declspec(property(get=get_LockedDescription, put=set_LockedDescription)) ::Epic::OnlineServices::Utf8String*  LockedDescription;

 __declspec(property(get=get_LockedDisplayName, put=set_LockedDisplayName)) ::Epic::OnlineServices::Utf8String*  LockedDisplayName;

 __declspec(property(get=get_LockedIconURL, put=set_LockedIconURL)) ::Epic::OnlineServices::Utf8String*  LockedIconURL;

 __declspec(property(get=get_StatThresholds, put=set_StatThresholds)) ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  StatThresholds;

 __declspec(property(get=get_UnlockedDescription, put=set_UnlockedDescription)) ::Epic::OnlineServices::Utf8String*  UnlockedDescription;

 __declspec(property(get=get_UnlockedDisplayName, put=set_UnlockedDisplayName)) ::Epic::OnlineServices::Utf8String*  UnlockedDisplayName;

 __declspec(property(get=get_UnlockedIconURL, put=set_UnlockedIconURL)) ::Epic::OnlineServices::Utf8String*  UnlockedIconURL;

/// @brief Method get_AchievementId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method get_FlavorText, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_FlavorText() ;

/// @brief Method get_IsHidden, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHidden() ;

/// @brief Method get_LockedDescription, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedDescription() ;

/// @brief Method get_LockedDisplayName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedDisplayName() ;

/// @brief Method get_LockedIconURL, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedIconURL() ;

/// @brief Method get_StatThresholds, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds> get_StatThresholds() ;

/// @brief Method get_UnlockedDescription, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UnlockedDescription() ;

/// @brief Method get_UnlockedDisplayName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UnlockedDisplayName() ;

/// @brief Method get_UnlockedIconURL, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UnlockedIconURL() ;

/// @brief Method set_AchievementId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_FlavorText, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_FlavorText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_IsHidden, addr 0x180391cb0, size 0x10, virtual false, abstract: false, final false
inline void set_IsHidden(bool  value) ;

/// @brief Method set_LockedDescription, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_LockedDescription(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LockedDisplayName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_LockedDisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LockedIconURL, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_LockedIconURL(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_StatThresholds, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_StatThresholds(::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  value) ;

/// @brief Method set_UnlockedDescription, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_UnlockedDescription(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UnlockedDisplayName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_UnlockedDisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UnlockedIconURL, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_UnlockedIconURL(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DefinitionV2() ;

// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockedDisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockedDescription_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedDisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedDescription_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_FlavorText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockedIconURL_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedIconURL_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IsHidden_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_StatThresholds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>", modifiers: "", def_value: None }]
constexpr DefinitionV2(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _UnlockedDisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _UnlockedDescription_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedDisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedDescription_k__BackingField, ::Epic::OnlineServices::Utf8String*  _FlavorText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _UnlockedIconURL_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedIconURL_k__BackingField, bool  _IsHidden_k__BackingField, ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  _StatThresholds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <AchievementId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

/// @brief Field <UnlockedDisplayName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UnlockedDisplayName_k__BackingField;

/// @brief Field <UnlockedDescription>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UnlockedDescription_k__BackingField;

/// @brief Field <LockedDisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedDisplayName_k__BackingField;

/// @brief Field <LockedDescription>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedDescription_k__BackingField;

/// @brief Field <FlavorText>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _FlavorText_k__BackingField;

/// @brief Field <UnlockedIconURL>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UnlockedIconURL_k__BackingField;

/// @brief Field <LockedIconURL>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedIconURL_k__BackingField;

/// @brief Field <IsHidden>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  _IsHidden_k__BackingField;

/// @brief Field <StatThresholds>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  _StatThresholds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _AchievementId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _UnlockedDisplayName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _UnlockedDescription_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _LockedDisplayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _LockedDescription_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _FlavorText_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _UnlockedIconURL_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _LockedIconURL_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _IsHidden_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2, _StatThresholds_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::DefinitionV2) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
