#pragma once
// IWYU pragma private; include "Steamworks/SteamMatchmaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamMatchmaking)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EChatEntryType;
}
namespace Steamworks {
struct ELobbyComparison;
}
namespace Steamworks {
struct ELobbyDistanceFilter;
}
namespace Steamworks {
struct ELobbyType;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamMatchmaking;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamMatchmaking*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamMatchmaking*, "Steamworks", "SteamMatchmaking");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamMatchmaking
class CORDL_TYPE SteamMatchmaking : public ::System::Object {
public:
// Declarations
/// @brief Method AddFavoriteGame, addr 0x1805b1e10, size 0x80, virtual false, abstract: false, final false
static inline int32_t AddFavoriteGame(::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags, uint32_t  rTime32LastPlayedOnServer) ;

/// @brief Method AddRequestLobbyListCompatibleMembersFilter, addr 0x1805b1e90, size 0x40, virtual false, abstract: false, final false
static inline void AddRequestLobbyListCompatibleMembersFilter(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method AddRequestLobbyListDistanceFilter, addr 0x1805b1ed0, size 0x30, virtual false, abstract: false, final false
static inline void AddRequestLobbyListDistanceFilter(::Steamworks::ELobbyDistanceFilter  eLobbyDistanceFilter) ;

/// @brief Method AddRequestLobbyListFilterSlotsAvailable, addr 0x1805b1f00, size 0x30, virtual false, abstract: false, final false
static inline void AddRequestLobbyListFilterSlotsAvailable(int32_t  nSlotsAvailable) ;

/// @brief Method AddRequestLobbyListNearValueFilter, addr 0x1805b1f30, size 0xd0, virtual false, abstract: false, final false
static inline void AddRequestLobbyListNearValueFilter(::StringW  pchKeyToMatch, int32_t  nValueToBeCloseTo) ;

/// @brief Method AddRequestLobbyListNumericalFilter, addr 0x1805b2000, size 0xf0, virtual false, abstract: false, final false
static inline void AddRequestLobbyListNumericalFilter(::StringW  pchKeyToMatch, int32_t  nValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType) ;

/// @brief Method AddRequestLobbyListResultCountFilter, addr 0x1805b20f0, size 0x30, virtual false, abstract: false, final false
static inline void AddRequestLobbyListResultCountFilter(int32_t  cMaxResults) ;

/// @brief Method AddRequestLobbyListStringFilter, addr 0x1805b2120, size 0x170, virtual false, abstract: false, final false
static inline void AddRequestLobbyListStringFilter(::StringW  pchKeyToMatch, ::StringW  pchValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType) ;

/// @brief Method CreateLobby, addr 0x1805b2290, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CreateLobby(::Steamworks::ELobbyType  eLobbyType, int32_t  cMaxMembers) ;

/// @brief Method DeleteLobbyData, addr 0x1805b22d0, size 0xf0, virtual false, abstract: false, final false
static inline bool DeleteLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey) ;

/// @brief Method GetFavoriteGame, addr 0x1805b23f0, size 0x90, virtual false, abstract: false, final false
static inline bool GetFavoriteGame(int32_t  iGame, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<uint32_t>  pnIP, ::by_ref<uint16_t>  pnConnPort, ::by_ref<uint16_t>  pnQueryPort, ::by_ref<uint32_t>  punFlags, ::by_ref<uint32_t>  pRTime32LastPlayedOnServer) ;

/// @brief Method GetFavoriteGameCount, addr 0x1805b23c0, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetFavoriteGameCount() ;

/// @brief Method GetLobbyByIndex, addr 0x1805b2480, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetLobbyByIndex(int32_t  iLobby) ;

/// @brief Method GetLobbyChatEntry, addr 0x1805b24d0, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetLobbyChatEntry(::Steamworks::CSteamID  steamIDLobby, int32_t  iChatID, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser, ::ArrayW<uint8_t>  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType) ;

/// @brief Method GetLobbyData, addr 0x1805b26a0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW GetLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey) ;

/// @brief Method GetLobbyDataByIndex, addr 0x1805b2550, size 0x110, virtual false, abstract: false, final false
static inline bool GetLobbyDataByIndex(::Steamworks::CSteamID  steamIDLobby, int32_t  iLobbyData, ::by_ref<::StringW>  pchKey, int32_t  cchKeyBufferSize, ::by_ref<::StringW>  pchValue, int32_t  cchValueBufferSize) ;

/// @brief Method GetLobbyDataCount, addr 0x1805b2660, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetLobbyDataCount(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method GetLobbyGameServer, addr 0x1805b27a0, size 0x70, virtual false, abstract: false, final false
static inline bool GetLobbyGameServer(::Steamworks::CSteamID  steamIDLobby, ::by_ref<uint32_t>  punGameServerIP, ::by_ref<uint16_t>  punGameServerPort, ::by_ref<::Steamworks::CSteamID>  psteamIDGameServer) ;

/// @brief Method GetLobbyMemberByIndex, addr 0x1805b2810, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetLobbyMemberByIndex(::Steamworks::CSteamID  steamIDLobby, int32_t  iMember) ;

/// @brief Method GetLobbyMemberData, addr 0x1805b2870, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GetLobbyMemberData(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDUser, ::StringW  pchKey) ;

/// @brief Method GetLobbyMemberLimit, addr 0x1805b2980, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetLobbyMemberLimit(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method GetLobbyOwner, addr 0x1805b29c0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetLobbyOwner(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method GetNumLobbyMembers, addr 0x1805b2a10, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetNumLobbyMembers(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method InviteUserToLobby, addr 0x1805b2a50, size 0x50, virtual false, abstract: false, final false
static inline bool InviteUserToLobby(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDInvitee) ;

/// @brief Method JoinLobby, addr 0x1805b2aa0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t JoinLobby(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method LeaveLobby, addr 0x1805b2ae0, size 0x40, virtual false, abstract: false, final false
static inline void LeaveLobby(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method RemoveFavoriteGame, addr 0x1805b2b20, size 0x80, virtual false, abstract: false, final false
static inline bool RemoveFavoriteGame(::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags) ;

/// @brief Method RequestLobbyData, addr 0x1805b2ba0, size 0x40, virtual false, abstract: false, final false
static inline bool RequestLobbyData(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method RequestLobbyList, addr 0x1805b2be0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestLobbyList() ;

/// @brief Method SendLobbyChatMsg, addr 0x1805b2c10, size 0x60, virtual false, abstract: false, final false
static inline bool SendLobbyChatMsg(::Steamworks::CSteamID  steamIDLobby, ::ArrayW<uint8_t>  pvMsgBody, int32_t  cubMsgBody) ;

/// @brief Method SetLinkedLobby, addr 0x1805b2c70, size 0x50, virtual false, abstract: false, final false
static inline bool SetLinkedLobby(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDLobbyDependent) ;

/// @brief Method SetLobbyData, addr 0x1805b2cc0, size 0x180, virtual false, abstract: false, final false
static inline bool SetLobbyData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method SetLobbyGameServer, addr 0x1805b2e40, size 0x70, virtual false, abstract: false, final false
static inline void SetLobbyGameServer(::Steamworks::CSteamID  steamIDLobby, uint32_t  unGameServerIP, uint16_t  unGameServerPort, ::Steamworks::CSteamID  steamIDGameServer) ;

/// @brief Method SetLobbyJoinable, addr 0x1805b2eb0, size 0x50, virtual false, abstract: false, final false
static inline bool SetLobbyJoinable(::Steamworks::CSteamID  steamIDLobby, bool  bLobbyJoinable) ;

/// @brief Method SetLobbyMemberData, addr 0x1805b2f00, size 0x170, virtual false, abstract: false, final false
static inline void SetLobbyMemberData(::Steamworks::CSteamID  steamIDLobby, ::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method SetLobbyMemberLimit, addr 0x1805b3070, size 0x40, virtual false, abstract: false, final false
static inline bool SetLobbyMemberLimit(::Steamworks::CSteamID  steamIDLobby, int32_t  cMaxMembers) ;

/// @brief Method SetLobbyOwner, addr 0x1805b30b0, size 0x50, virtual false, abstract: false, final false
static inline bool SetLobbyOwner(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDNewOwner) ;

/// @brief Method SetLobbyType, addr 0x1805b3100, size 0x40, virtual false, abstract: false, final false
static inline bool SetLobbyType(::Steamworks::CSteamID  steamIDLobby, ::Steamworks::ELobbyType  eLobbyType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamMatchmaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamMatchmaking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamMatchmaking(SteamMatchmaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamMatchmaking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamMatchmaking(SteamMatchmaking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamMatchmaking) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
