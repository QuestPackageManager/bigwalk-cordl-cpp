#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardRecordInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardRecordInternal)
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardRecord;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardRecordInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, "Epic.OnlineServices.Leaderboards", "LeaderboardRecordInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.LeaderboardRecordInternal
struct CORDL_TYPE LeaderboardRecordInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>*() ;

/// @brief Method Get, addr 0x180505920, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__LeaderboardRecord_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardRecordInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Rank", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LeaderboardRecordInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, uint32_t  m_Rank, int32_t  m_Score, ::System::IntPtr  m_UserDisplayName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_Rank, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_Rank;

/// @brief Field m_Score, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Score;

/// @brief Field m_UserDisplayName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_UserDisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, m_Rank) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, m_Score) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal, m_UserDisplayName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
