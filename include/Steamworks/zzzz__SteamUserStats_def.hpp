#pragma once
// IWYU pragma private; include "Steamworks/SteamUserStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUserStats)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct ELeaderboardDataRequest;
}
namespace Steamworks {
struct ELeaderboardDisplayType;
}
namespace Steamworks {
struct ELeaderboardSortMethod;
}
namespace Steamworks {
struct ELeaderboardUploadScoreMethod;
}
namespace Steamworks {
struct LeaderboardEntry_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct SteamLeaderboardEntries_t;
}
namespace Steamworks {
struct SteamLeaderboard_t;
}
namespace Steamworks {
struct UGCHandle_t;
}
// Forward declare root types
namespace Steamworks {
class SteamUserStats;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamUserStats*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUserStats*, "Steamworks", "SteamUserStats");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamUserStats
class CORDL_TYPE SteamUserStats : public ::System::Object {
public:
// Declarations
/// @brief Method AttachLeaderboardUGC, addr 0x1805bd560, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AttachLeaderboardUGC(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::UGCHandle_t  hUGC) ;

/// @brief Method ClearAchievement, addr 0x1805bd5b0, size 0xe0, virtual false, abstract: false, final false
static inline bool ClearAchievement(::StringW  pchName) ;

/// @brief Method DownloadLeaderboardEntries, addr 0x1805bd6f0, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DownloadLeaderboardEntries(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardDataRequest  eLeaderboardDataRequest, int32_t  nRangeStart, int32_t  nRangeEnd) ;

/// @brief Method DownloadLeaderboardEntriesForUsers, addr 0x1805bd690, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DownloadLeaderboardEntriesForUsers(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::ArrayW<::Steamworks::CSteamID>  prgUsers, int32_t  cUsers) ;

/// @brief Method FindLeaderboard, addr 0x1805bd760, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t FindLeaderboard(::StringW  pchLeaderboardName) ;

/// @brief Method FindOrCreateLeaderboard, addr 0x1805bd840, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t FindOrCreateLeaderboard(::StringW  pchLeaderboardName, ::Steamworks::ELeaderboardSortMethod  eLeaderboardSortMethod, ::Steamworks::ELeaderboardDisplayType  eLeaderboardDisplayType) ;

/// @brief Method GetAchievement, addr 0x1805bdfd0, size 0xf0, virtual false, abstract: false, final false
static inline bool GetAchievement(::StringW  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method GetAchievementAchievedPercent, addr 0x1805bd940, size 0xf0, virtual false, abstract: false, final false
static inline bool GetAchievementAchievedPercent(::StringW  pchName, ::by_ref<float_t>  pflPercent) ;

/// @brief Method GetAchievementAndUnlockTime, addr 0x1805bda30, size 0x100, virtual false, abstract: false, final false
static inline bool GetAchievementAndUnlockTime(::StringW  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime) ;

/// @brief Method GetAchievementDisplayAttribute, addr 0x1805bdb30, size 0x180, virtual false, abstract: false, final false
static inline ::StringW GetAchievementDisplayAttribute(::StringW  pchName, ::StringW  pchKey) ;

/// @brief Method GetAchievementIcon, addr 0x1805bdcb0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetAchievementIcon(::StringW  pchName) ;

/// @brief Method GetAchievementName, addr 0x1805bdd90, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetAchievementName(uint32_t  iAchievement) ;

/// @brief Method GetAchievementProgressLimits, addr 0x1805bddd0, size 0x100, virtual false, abstract: false, final false
static inline bool GetAchievementProgressLimits(::StringW  pchName, ::by_ref<float_t>  pfMinProgress, ::by_ref<float_t>  pfMaxProgress) ;

/// @brief Method GetAchievementProgressLimits, addr 0x1805bded0, size 0x100, virtual false, abstract: false, final false
static inline bool GetAchievementProgressLimits(::StringW  pchName, ::by_ref<int32_t>  pnMinProgress, ::by_ref<int32_t>  pnMaxProgress) ;

/// @brief Method GetDownloadedLeaderboardEntry, addr 0x1805be0c0, size 0x80, virtual false, abstract: false, final false
static inline bool GetDownloadedLeaderboardEntry(::Steamworks::SteamLeaderboardEntries_t  hSteamLeaderboardEntries, int32_t  index, ::by_ref<::Steamworks::LeaderboardEntry_t>  pLeaderboardEntry, ::ArrayW<int32_t>  pDetails, int32_t  cDetailsMax) ;

/// @brief Method GetGlobalStat, addr 0x1805be340, size 0xf0, virtual false, abstract: false, final false
static inline bool GetGlobalStat(::StringW  pchStatName, ::by_ref<double_t>  pData) ;

/// @brief Method GetGlobalStat, addr 0x1805be430, size 0xf0, virtual false, abstract: false, final false
static inline bool GetGlobalStat(::StringW  pchStatName, ::by_ref<int64_t>  pData) ;

/// @brief Method GetGlobalStatHistory, addr 0x1805be240, size 0x100, virtual false, abstract: false, final false
static inline int32_t GetGlobalStatHistory(::StringW  pchStatName, ::ArrayW<double_t>  pData, uint32_t  cubData) ;

/// @brief Method GetGlobalStatHistory, addr 0x1805be140, size 0x100, virtual false, abstract: false, final false
static inline int32_t GetGlobalStatHistory(::StringW  pchStatName, ::ArrayW<int64_t>  pData, uint32_t  cubData) ;

/// @brief Method GetLeaderboardDisplayType, addr 0x1805be520, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ELeaderboardDisplayType GetLeaderboardDisplayType(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method GetLeaderboardEntryCount, addr 0x1805be560, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetLeaderboardEntryCount(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method GetLeaderboardName, addr 0x1805be5a0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetLeaderboardName(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method GetLeaderboardSortMethod, addr 0x1805be5e0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ELeaderboardSortMethod GetLeaderboardSortMethod(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method GetMostAchievedAchievementInfo, addr 0x1805be620, size 0xb0, virtual false, abstract: false, final false
static inline int32_t GetMostAchievedAchievementInfo(::by_ref<::StringW>  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved) ;

/// @brief Method GetNextMostAchievedAchievementInfo, addr 0x1805be6d0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetNextMostAchievedAchievementInfo(int32_t  iIteratorPrevious, ::by_ref<::StringW>  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved) ;

/// @brief Method GetNumAchievements, addr 0x1805be790, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetNumAchievements() ;

/// @brief Method GetNumberOfCurrentPlayers, addr 0x1805be7c0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetNumberOfCurrentPlayers() ;

/// @brief Method GetStat, addr 0x1805be7f0, size 0xf0, virtual false, abstract: false, final false
static inline bool GetStat(::StringW  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method GetStat, addr 0x1805be8e0, size 0xf0, virtual false, abstract: false, final false
static inline bool GetStat(::StringW  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method GetUserAchievement, addr 0x1805beae0, size 0x100, virtual false, abstract: false, final false
static inline bool GetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method GetUserAchievementAndUnlockTime, addr 0x1805be9d0, size 0x110, virtual false, abstract: false, final false
static inline bool GetUserAchievementAndUnlockTime(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime) ;

/// @brief Method GetUserStat, addr 0x1805bebe0, size 0x100, virtual false, abstract: false, final false
static inline bool GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method GetUserStat, addr 0x1805bece0, size 0x100, virtual false, abstract: false, final false
static inline bool GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method IndicateAchievementProgress, addr 0x1805bede0, size 0x100, virtual false, abstract: false, final false
static inline bool IndicateAchievementProgress(::StringW  pchName, uint32_t  nCurProgress, uint32_t  nMaxProgress) ;

/// @brief Method RequestCurrentStats, addr 0x1805beee0, size 0x30, virtual false, abstract: false, final false
static inline bool RequestCurrentStats() ;

/// @brief Method RequestGlobalAchievementPercentages, addr 0x1805bef10, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestGlobalAchievementPercentages() ;

/// @brief Method RequestGlobalStats, addr 0x1805bef40, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestGlobalStats(int32_t  nHistoryDays) ;

/// @brief Method RequestUserStats, addr 0x1805bef70, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestUserStats(::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ResetAllStats, addr 0x1805befb0, size 0x40, virtual false, abstract: false, final false
static inline bool ResetAllStats(bool  bAchievementsToo) ;

/// @brief Method SetAchievement, addr 0x1805beff0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetAchievement(::StringW  pchName) ;

/// @brief Method SetStat, addr 0x1805bf1c0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetStat(::StringW  pchName, float_t  fData) ;

/// @brief Method SetStat, addr 0x1805bf0d0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetStat(::StringW  pchName, int32_t  nData) ;

/// @brief Method StoreStats, addr 0x1805bf2b0, size 0x30, virtual false, abstract: false, final false
static inline bool StoreStats() ;

/// @brief Method UpdateAvgRateStat, addr 0x1805bf2e0, size 0x110, virtual false, abstract: false, final false
static inline bool UpdateAvgRateStat(::StringW  pchName, float_t  flCountThisSession, double_t  dSessionLength) ;

/// @brief Method UploadLeaderboardScore, addr 0x1805bf3f0, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UploadLeaderboardScore(::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardUploadScoreMethod  eLeaderboardUploadScoreMethod, int32_t  nScore, ::ArrayW<int32_t>  pScoreDetails, int32_t  cScoreDetailsCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamUserStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamUserStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamUserStats(SteamUserStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamUserStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamUserStats(SteamUserStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamUserStats) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
