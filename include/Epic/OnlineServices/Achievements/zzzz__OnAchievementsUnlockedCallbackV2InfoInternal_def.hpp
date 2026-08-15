#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2InfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnAchievementsUnlockedCallbackV2InfoInternal)
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackV2Info;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackV2InfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal, "Epic.OnlineServices.Achievements", "OnAchievementsUnlockedCallbackV2InfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.OnAchievementsUnlockedCallbackV2InfoInternal
struct CORDL_TYPE OnAchievementsUnlockedCallbackV2InfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>*() ;

/// @brief Method Get, addr 0x18052ede0, size 0x120, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__OnAchievementsUnlockedCallbackV2Info_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnAchievementsUnlockedCallbackV2InfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr OnAchievementsUnlockedCallbackV2InfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_UserId, ::System::IntPtr  m_AchievementId, int64_t  m_UnlockTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_AchievementId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_UnlockTime, offset: 0x18, size: 0x8, def value: None
 int64_t  m_UnlockTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal, m_AchievementId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal, m_UnlockTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
