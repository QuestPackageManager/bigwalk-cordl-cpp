#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerAchievementInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAchievementInternal)
namespace Epic::OnlineServices::Achievements {
struct PlayerAchievement;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct PlayerAchievementInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::PlayerAchievementInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, "Epic.OnlineServices.Achievements", "PlayerAchievementInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.PlayerAchievementInternal
struct CORDL_TYPE PlayerAchievementInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>*() ;

/// @brief Method Get, addr 0x180532ff0, size 0x1d0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::PlayerAchievement>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__PlayerAchievement_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerAchievementInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Progress", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_StatInfoCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Description", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IconURL", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FlavorText", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PlayerAchievementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, double_t  m_Progress, int64_t  m_UnlockTime, int32_t  m_StatInfoCount, ::System::IntPtr  m_StatInfo, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_Description, ::System::IntPtr  m_IconURL, ::System::IntPtr  m_FlavorText) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_Progress, offset: 0x10, size: 0x8, def value: None
 double_t  m_Progress;

/// @brief Field m_UnlockTime, offset: 0x18, size: 0x8, def value: None
 int64_t  m_UnlockTime;

/// @brief Field m_StatInfoCount, offset: 0x20, size: 0x4, def value: None
 int32_t  m_StatInfoCount;

/// @brief Field m_StatInfo, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_StatInfo;

/// @brief Field m_DisplayName, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_Description, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_Description;

/// @brief Field m_IconURL, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_IconURL;

/// @brief Field m_FlavorText, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_FlavorText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_AchievementId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_Progress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_UnlockTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_StatInfoCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_StatInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_DisplayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_Description) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_IconURL) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal, m_FlavorText) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::PlayerAchievementInternal) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
