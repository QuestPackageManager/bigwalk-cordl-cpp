#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardUserScoreInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardUserScoreInternal)
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardUserScore;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardUserScoreInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal, "Epic.OnlineServices.Leaderboards", "LeaderboardUserScoreInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.LeaderboardUserScoreInternal
struct CORDL_TYPE LeaderboardUserScoreInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>*() ;

/// @brief Method Get, addr 0x1805059f0, size 0xa0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__LeaderboardUserScore_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardUserScoreInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Score", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardUserScoreInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, int32_t  m_Score) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_Score, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Score;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal, m_Score) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
