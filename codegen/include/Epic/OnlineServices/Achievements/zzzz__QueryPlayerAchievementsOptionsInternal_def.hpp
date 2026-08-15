#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/QueryPlayerAchievementsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPlayerAchievementsOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct QueryPlayerAchievementsOptions;
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
struct QueryPlayerAchievementsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal, "Epic.OnlineServices.Achievements", "QueryPlayerAchievementsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.QueryPlayerAchievementsOptionsInternal
struct CORDL_TYPE QueryPlayerAchievementsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804edad0, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__QueryPlayerAchievementsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryPlayerAchievementsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryPlayerAchievementsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9515};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
