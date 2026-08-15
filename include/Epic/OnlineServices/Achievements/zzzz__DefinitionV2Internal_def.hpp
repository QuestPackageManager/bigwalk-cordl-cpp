#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/DefinitionV2Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefinitionV2Internal)
namespace Epic::OnlineServices::Achievements {
struct DefinitionV2;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct DefinitionV2Internal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::DefinitionV2Internal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::DefinitionV2Internal, "Epic.OnlineServices.Achievements", "DefinitionV2Internal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.DefinitionV2Internal
struct CORDL_TYPE DefinitionV2Internal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>*() ;

/// @brief Method Get, addr 0x18052e420, size 0x400, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::DefinitionV2>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__DefinitionV2_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DefinitionV2Internal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FlavorText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockedIconURL", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LockedIconURL", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsHidden", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatThresholdsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatThresholds", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DefinitionV2Internal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, ::System::IntPtr  m_UnlockedDisplayName, ::System::IntPtr  m_UnlockedDescription, ::System::IntPtr  m_LockedDisplayName, ::System::IntPtr  m_LockedDescription, ::System::IntPtr  m_FlavorText, ::System::IntPtr  m_UnlockedIconURL, ::System::IntPtr  m_LockedIconURL, int32_t  m_IsHidden, uint32_t  m_StatThresholdsCount, ::System::IntPtr  m_StatThresholds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_UnlockedDisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_UnlockedDisplayName;

/// @brief Field m_UnlockedDescription, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_UnlockedDescription;

/// @brief Field m_LockedDisplayName, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_LockedDisplayName;

/// @brief Field m_LockedDescription, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_LockedDescription;

/// @brief Field m_FlavorText, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_FlavorText;

/// @brief Field m_UnlockedIconURL, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_UnlockedIconURL;

/// @brief Field m_LockedIconURL, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_LockedIconURL;

/// @brief Field m_IsHidden, offset: 0x48, size: 0x4, def value: None
 int32_t  m_IsHidden;

/// @brief Field m_StatThresholdsCount, offset: 0x4c, size: 0x4, def value: None
 uint32_t  m_StatThresholdsCount;

/// @brief Field m_StatThresholds, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  m_StatThresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_AchievementId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_UnlockedDisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_UnlockedDescription) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_LockedDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_LockedDescription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_FlavorText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_UnlockedIconURL) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_LockedIconURL) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_IsHidden) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_StatThresholdsCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::DefinitionV2Internal, m_StatThresholds) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::DefinitionV2Internal) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
