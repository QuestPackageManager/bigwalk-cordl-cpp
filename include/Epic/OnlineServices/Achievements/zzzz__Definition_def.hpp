#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/Definition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Achievements/zzzz__StatThresholds_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Definition)
namespace Epic::OnlineServices::Achievements {
struct StatThresholds;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct Definition;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::Definition);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::Definition, "Epic.OnlineServices.Achievements", "Definition");
// Dependencies Epic.OnlineServices.Achievements.StatThresholds
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.Definition
struct CORDL_TYPE Definition {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

 __declspec(property(get=get_CompletionDescription, put=set_CompletionDescription)) ::Epic::OnlineServices::Utf8String*  CompletionDescription;

 __declspec(property(get=get_Description, put=set_Description)) ::Epic::OnlineServices::Utf8String*  Description;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_HiddenDescription, put=set_HiddenDescription)) ::Epic::OnlineServices::Utf8String*  HiddenDescription;

 __declspec(property(get=get_IsHidden, put=set_IsHidden)) bool  IsHidden;

 __declspec(property(get=get_LockedDescription, put=set_LockedDescription)) ::Epic::OnlineServices::Utf8String*  LockedDescription;

 __declspec(property(get=get_LockedDisplayName, put=set_LockedDisplayName)) ::Epic::OnlineServices::Utf8String*  LockedDisplayName;

 __declspec(property(get=get_LockedIconId, put=set_LockedIconId)) ::Epic::OnlineServices::Utf8String*  LockedIconId;

 __declspec(property(get=get_StatThresholds, put=set_StatThresholds)) ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  StatThresholds;

 __declspec(property(get=get_UnlockedIconId, put=set_UnlockedIconId)) ::Epic::OnlineServices::Utf8String*  UnlockedIconId;

/// @brief Method get_AchievementId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method get_CompletionDescription, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CompletionDescription() ;

/// @brief Method get_Description, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Description() ;

/// @brief Method get_DisplayName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_HiddenDescription, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_HiddenDescription() ;

/// @brief Method get_IsHidden, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHidden() ;

/// @brief Method get_LockedDescription, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedDescription() ;

/// @brief Method get_LockedDisplayName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedDisplayName() ;

/// @brief Method get_LockedIconId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LockedIconId() ;

/// @brief Method get_StatThresholds, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds> get_StatThresholds() ;

/// @brief Method get_UnlockedIconId, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UnlockedIconId() ;

/// @brief Method set_AchievementId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_CompletionDescription, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_CompletionDescription(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Description, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Description(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DisplayName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_HiddenDescription, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_HiddenDescription(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_IsHidden, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_IsHidden(bool  value) ;

/// @brief Method set_LockedDescription, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_LockedDescription(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LockedDisplayName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_LockedDisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LockedIconId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_LockedIconId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_StatThresholds, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_StatThresholds(::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  value) ;

/// @brief Method set_UnlockedIconId, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_UnlockedIconId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Definition() ;

// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Description_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedDisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedDescription_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_HiddenDescription_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_CompletionDescription_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockedIconId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LockedIconId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IsHidden_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_StatThresholds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>", modifiers: "", def_value: None }]
constexpr Definition(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Description_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedDisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedDescription_k__BackingField, ::Epic::OnlineServices::Utf8String*  _HiddenDescription_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CompletionDescription_k__BackingField, ::Epic::OnlineServices::Utf8String*  _UnlockedIconId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LockedIconId_k__BackingField, bool  _IsHidden_k__BackingField, ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  _StatThresholds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <AchievementId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <Description>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Description_k__BackingField;

/// @brief Field <LockedDisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedDisplayName_k__BackingField;

/// @brief Field <LockedDescription>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedDescription_k__BackingField;

/// @brief Field <HiddenDescription>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _HiddenDescription_k__BackingField;

/// @brief Field <CompletionDescription>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CompletionDescription_k__BackingField;

/// @brief Field <UnlockedIconId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UnlockedIconId_k__BackingField;

/// @brief Field <LockedIconId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LockedIconId_k__BackingField;

/// @brief Field <IsHidden>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  _IsHidden_k__BackingField;

/// @brief Field <StatThresholds>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Achievements::StatThresholds>  _StatThresholds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _AchievementId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _DisplayName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _Description_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _LockedDisplayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _LockedDescription_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _HiddenDescription_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _CompletionDescription_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _UnlockedIconId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _LockedIconId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _IsHidden_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::Definition, _StatThresholds_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::Definition) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
