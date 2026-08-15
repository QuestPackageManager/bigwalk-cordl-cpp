#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardDefinitionsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryLeaderboardDefinitionsOptionsInternal)
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardDefinitionsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardDefinitionsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal, "Epic.OnlineServices.Leaderboards", "QueryLeaderboardDefinitionsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.QueryLeaderboardDefinitionsOptionsInternal
struct CORDL_TYPE QueryLeaderboardDefinitionsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18050bcc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051d470, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__QueryLeaderboardDefinitionsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryLeaderboardDefinitionsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryLeaderboardDefinitionsOptionsInternal(int32_t  m_ApiVersion, int64_t  m_StartTime, int64_t  m_EndTime, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_StartTime, offset: 0x8, size: 0x8, def value: None
 int64_t  m_StartTime;

/// @brief Field m_EndTime, offset: 0x10, size: 0x8, def value: None
 int64_t  m_EndTime;

/// @brief Field m_LocalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal, m_StartTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal, m_EndTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal, m_LocalUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
