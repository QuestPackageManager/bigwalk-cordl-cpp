#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/DefinitionInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefinitionInternal)
namespace Epic::OnlineServices::Achievements {
struct Definition;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct DefinitionInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::DefinitionInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::DefinitionInternal, "Epic.OnlineServices.Achievements", "DefinitionInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.DefinitionInternal
struct CORDL_TYPE DefinitionInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>*() ;

/// @brief Method Get, addr 0x18052e240, size 0x1e0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::Definition>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__Definition_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DefinitionInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Description", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_HiddenDescription", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CompletionDescription", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockedIconId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedIconId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsHidden", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatThresholdsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatThresholds", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DefinitionInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_Description, ::System::IntPtr  m_LockedDisplayName, ::System::IntPtr  m_LockedDescription, ::System::IntPtr  m_HiddenDescription, ::System::IntPtr  m_CompletionDescription, ::System::IntPtr  m_UnlockedIconId, ::System::IntPtr  m_LockedIconId, int32_t  m_IsHidden, int32_t  m_StatThresholdsCount, ::System::IntPtr  m_StatThresholds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9474};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_Description, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Description;

/// @brief Field m_LockedDisplayName, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_LockedDisplayName;

/// @brief Field m_LockedDescription, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_LockedDescription;

/// @brief Field m_HiddenDescription, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_HiddenDescription;

/// @brief Field m_CompletionDescription, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_CompletionDescription;

/// @brief Field m_UnlockedIconId, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_UnlockedIconId;

/// @brief Field m_LockedIconId, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_LockedIconId;

/// @brief Field m_IsHidden, offset: 0x50, size: 0x4, def value: None
 int32_t  m_IsHidden;

/// @brief Field m_StatThresholdsCount, offset: 0x54, size: 0x4, def value: None
 int32_t  m_StatThresholdsCount;

/// @brief Field m_StatThresholds, offset: 0x58, size: 0x8, def value: None
 ::System::IntPtr  m_StatThresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_AchievementId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_Description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_LockedDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_LockedDescription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_HiddenDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_CompletionDescription) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_UnlockedIconId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_LockedIconId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_IsHidden) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_StatThresholdsCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionInternal, m_StatThresholds) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::DefinitionInternal) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
