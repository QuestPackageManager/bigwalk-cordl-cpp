#pragma once
// IWYU pragma private; include "Steamworks/SteamMatchmakingServers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamMatchmakingServers)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct HServerListRequest;
}
namespace Steamworks {
struct HServerQuery;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse;
}
namespace Steamworks {
struct MatchMakingKeyValuePair_t;
}
namespace Steamworks {
class gameserveritem_t;
}
// Forward declare root types
namespace Steamworks {
class SteamMatchmakingServers;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamMatchmakingServers*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamMatchmakingServers*, "Steamworks", "SteamMatchmakingServers");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamMatchmakingServers
class CORDL_TYPE SteamMatchmakingServers : public ::System::Object {
public:
// Declarations
/// @brief Method CancelQuery, addr 0x1805b16f0, size 0x40, virtual false, abstract: false, final false
static inline void CancelQuery(::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method CancelServerQuery, addr 0x1805b1730, size 0x30, virtual false, abstract: false, final false
static inline void CancelServerQuery(::Steamworks::HServerQuery  hServerQuery) ;

/// @brief Method GetServerCount, addr 0x1805b1760, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetServerCount(::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method GetServerDetails, addr 0x1805b17a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::gameserveritem_t* GetServerDetails(::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

/// @brief Method IsRefreshing, addr 0x1805b1840, size 0x40, virtual false, abstract: false, final false
static inline bool IsRefreshing(::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method PingServer, addr 0x1805b1880, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HServerQuery PingServer(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingPingResponse*  pRequestServersResponse) ;

/// @brief Method PlayerDetails, addr 0x1805b18f0, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HServerQuery PlayerDetails(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingPlayersResponse*  pRequestServersResponse) ;

/// @brief Method RefreshQuery, addr 0x1805b1960, size 0x40, virtual false, abstract: false, final false
static inline void RefreshQuery(::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method RefreshServer, addr 0x1805b19a0, size 0x40, virtual false, abstract: false, final false
static inline void RefreshServer(::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

/// @brief Method ReleaseRequest, addr 0x1805b19e0, size 0x40, virtual false, abstract: false, final false
static inline void ReleaseRequest(::Steamworks::HServerListRequest  hServerListRequest) ;

/// @brief Method RequestFavoritesServerList, addr 0x1805b1a20, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestFavoritesServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method RequestFriendsServerList, addr 0x1805b1ac0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestFriendsServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method RequestHistoryServerList, addr 0x1805b1b60, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestHistoryServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method RequestInternetServerList, addr 0x1805b1c00, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestInternetServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method RequestLANServerList, addr 0x1805b1ca0, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestLANServerList(::Steamworks::AppId_t  iApp, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method RequestSpectatorServerList, addr 0x1805b1d00, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest RequestSpectatorServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse) ;

/// @brief Method ServerRules, addr 0x1805b1da0, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HServerQuery ServerRules(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingRulesResponse*  pRequestServersResponse) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamMatchmakingServers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamMatchmakingServers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamMatchmakingServers(SteamMatchmakingServers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamMatchmakingServers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamMatchmakingServers(SteamMatchmakingServers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamMatchmakingServers) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
