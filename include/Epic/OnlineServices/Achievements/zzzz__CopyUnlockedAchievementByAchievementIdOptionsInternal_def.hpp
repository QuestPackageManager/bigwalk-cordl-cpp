#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyUnlockedAchievementByAchievementIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyUnlockedAchievementByAchievementIdOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByAchievementIdOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByAchievementIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal, "Epic.OnlineServices.Achievements", "CopyUnlockedAchievementByAchievementIdOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyUnlockedAchievementByAchievementIdOptionsInternal
struct CORDL_TYPE CopyUnlockedAchievementByAchievementIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e6900, size 0x190, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyUnlockedAchievementByAchievementIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyUnlockedAchievementByAchievementIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyUnlockedAchievementByAchievementIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_AchievementId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9470};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_AchievementId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal, m_AchievementId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
