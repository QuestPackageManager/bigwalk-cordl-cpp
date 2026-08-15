#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerStats)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerStats;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerStats*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerStats*, "Steamworks", "SteamGameServerStats");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerStats
class CORDL_TYPE SteamGameServerStats : public ::System::Object {
public:
// Declarations
/// @brief Method ClearUserAchievement, addr 0x18059a0c0, size 0x1e0, virtual false, abstract: false, final false
static inline bool ClearUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName) ;

/// @brief Method GetUserAchievement, addr 0x18059a2a0, size 0x200, virtual false, abstract: false, final false
static inline bool GetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method GetUserStat, addr 0x18059a680, size 0x1e0, virtual false, abstract: false, final false
static inline bool GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method GetUserStat, addr 0x18059a4a0, size 0x1e0, virtual false, abstract: false, final false
static inline bool GetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method RequestUserStats, addr 0x18059a860, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestUserStats(::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method SetUserAchievement, addr 0x18059a940, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetUserAchievement(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName) ;

/// @brief Method SetUserStat, addr 0x18059ad00, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, float_t  fData) ;

/// @brief Method SetUserStat, addr 0x18059ab20, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetUserStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, int32_t  nData) ;

/// @brief Method StoreUserStats, addr 0x18059aee0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StoreUserStats(::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method UpdateUserAvgRateStat, addr 0x18059afc0, size 0x200, virtual false, abstract: false, final false
static inline bool UpdateUserAvgRateStat(::Steamworks::CSteamID  steamIDUser, ::StringW  pchName, float_t  flCountThisSession, double_t  dSessionLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerStats(SteamGameServerStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerStats(SteamGameServerStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerStats) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
