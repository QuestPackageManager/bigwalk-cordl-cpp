#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyUnlockedAchievementByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyUnlockedAchievementByIndexOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByIndexOptions;
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
struct CopyUnlockedAchievementByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal, "Epic.OnlineServices.Achievements", "CopyUnlockedAchievementByIndexOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyUnlockedAchievementByIndexOptionsInternal
struct CORDL_TYPE CopyUnlockedAchievementByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e72b0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyUnlockedAchievementByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyUnlockedAchievementByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AchievementIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyUnlockedAchievementByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, uint32_t  m_AchievementIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_AchievementIndex, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_AchievementIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal, m_AchievementIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
