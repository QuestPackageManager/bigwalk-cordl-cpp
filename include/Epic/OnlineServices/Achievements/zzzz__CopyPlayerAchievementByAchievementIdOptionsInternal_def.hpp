#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyPlayerAchievementByAchievementIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyPlayerAchievementByAchievementIdOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct CopyPlayerAchievementByAchievementIdOptions;
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
struct CopyPlayerAchievementByAchievementIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal, "Epic.OnlineServices.Achievements", "CopyPlayerAchievementByAchievementIdOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyPlayerAchievementByAchievementIdOptionsInternal
struct CORDL_TYPE CopyPlayerAchievementByAchievementIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052e090, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyPlayerAchievementByAchievementIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyPlayerAchievementByAchievementIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyPlayerAchievementByAchievementIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_AchievementId, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_AchievementId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

/// @brief Field m_LocalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal, m_AchievementId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal, m_LocalUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
