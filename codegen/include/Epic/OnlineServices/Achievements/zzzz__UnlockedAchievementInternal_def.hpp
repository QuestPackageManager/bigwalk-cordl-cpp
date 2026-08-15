#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockedAchievementInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnlockedAchievementInternal)
namespace Epic::OnlineServices::Achievements {
struct UnlockedAchievement;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct UnlockedAchievementInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal, "Epic.OnlineServices.Achievements", "UnlockedAchievementInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.UnlockedAchievementInternal
struct CORDL_TYPE UnlockedAchievementInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>*() ;

/// @brief Method Get, addr 0x180534550, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::UnlockedAchievement>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__UnlockedAchievement_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnlockedAchievementInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr UnlockedAchievementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, int64_t  m_UnlockTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_UnlockTime, offset: 0x10, size: 0x8, def value: None
 int64_t  m_UnlockTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal, m_AchievementId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal, m_UnlockTime) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::UnlockedAchievementInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
