#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardRanksOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryLeaderboardRanksOptionsInternal)
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardRanksOptions;
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
struct QueryLeaderboardRanksOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal, "Epic.OnlineServices.Leaderboards", "QueryLeaderboardRanksOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.QueryLeaderboardRanksOptionsInternal
struct CORDL_TYPE QueryLeaderboardRanksOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180503d40, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__QueryLeaderboardRanksOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryLeaderboardRanksOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LeaderboardId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryLeaderboardRanksOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LeaderboardId, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LeaderboardId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LeaderboardId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal, m_LeaderboardId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
