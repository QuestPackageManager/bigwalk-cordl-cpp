#pragma once
// IWYU pragma private; include "Steamworks/SteamFriends.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamFriends)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EActivateGameOverlayToWebPageMode;
}
namespace Steamworks {
struct EChatEntryType;
}
namespace Steamworks {
struct EFriendFlags;
}
namespace Steamworks {
struct EFriendRelationship;
}
namespace Steamworks {
struct EOverlayToStoreFlag;
}
namespace Steamworks {
struct EPersonaState;
}
namespace Steamworks {
struct FriendGameInfo_t;
}
namespace Steamworks {
struct FriendsGroupID_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamFriends;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamFriends*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamFriends*, "Steamworks", "SteamFriends");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamFriends
class CORDL_TYPE SteamFriends : public ::System::Object {
public:
// Declarations
/// @brief Method ActivateGameOverlay, addr 0x1805877b0, size 0x1c0, virtual false, abstract: false, final false
static inline void ActivateGameOverlay(::StringW  pchDialog) ;

/// @brief Method ActivateGameOverlayInviteDialog, addr 0x1805871b0, size 0xd0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayInviteDialog(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ActivateGameOverlayInviteDialogConnectString, addr 0x180586ff0, size 0x1c0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayInviteDialogConnectString(::StringW  pchConnectString) ;

/// @brief Method ActivateGameOverlayRemotePlayTogetherInviteDialog, addr 0x180587280, size 0xd0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayRemotePlayTogetherInviteDialog(::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ActivateGameOverlayToStore, addr 0x180587350, size 0xe0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayToStore(::Steamworks::AppId_t  nAppID, ::Steamworks::EOverlayToStoreFlag  eFlag) ;

/// @brief Method ActivateGameOverlayToUser, addr 0x180587430, size 0x1c0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayToUser(::StringW  pchDialog, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ActivateGameOverlayToWebPage, addr 0x1805875f0, size 0x1c0, virtual false, abstract: false, final false
static inline void ActivateGameOverlayToWebPage(::StringW  pchURL, ::Steamworks::EActivateGameOverlayToWebPageMode  eMode) ;

/// @brief Method ClearRichPresence, addr 0x180587970, size 0xd0, virtual false, abstract: false, final false
static inline void ClearRichPresence() ;

/// @brief Method CloseClanChatWindowInSteam, addr 0x180587a40, size 0xe0, virtual false, abstract: false, final false
static inline bool CloseClanChatWindowInSteam(::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method DownloadClanActivityCounts, addr 0x180587b20, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DownloadClanActivityCounts(::ArrayW<::Steamworks::CSteamID>  psteamIDClans, int32_t  cClansToRequest) ;

/// @brief Method EnumerateFollowingList, addr 0x180587c10, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumerateFollowingList(uint32_t  unStartIndex) ;

/// @brief Method GetChatMemberByIndex, addr 0x180587cf0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetChatMemberByIndex(::Steamworks::CSteamID  steamIDClan, int32_t  iUser) ;

/// @brief Method GetClanActivityCounts, addr 0x180587df0, size 0x110, virtual false, abstract: false, final false
static inline bool GetClanActivityCounts(::Steamworks::CSteamID  steamIDClan, ::by_ref<int32_t>  pnOnline, ::by_ref<int32_t>  pnInGame, ::by_ref<int32_t>  pnChatting) ;

/// @brief Method GetClanByIndex, addr 0x180587f00, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetClanByIndex(int32_t  iClan) ;

/// @brief Method GetClanChatMemberCount, addr 0x180587ff0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetClanChatMemberCount(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method GetClanChatMessage, addr 0x1805880c0, size 0x160, virtual false, abstract: false, final false
static inline int32_t GetClanChatMessage(::Steamworks::CSteamID  steamIDClanChat, int32_t  iMessage, ::by_ref<::StringW>  prgchText, int32_t  cchTextMax, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType, ::by_ref<::Steamworks::CSteamID>  psteamidChatter) ;

/// @brief Method GetClanCount, addr 0x180588220, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetClanCount() ;

/// @brief Method GetClanName, addr 0x1805882f0, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetClanName(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method GetClanOfficerByIndex, addr 0x1805883d0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetClanOfficerByIndex(::Steamworks::CSteamID  steamIDClan, int32_t  iOfficer) ;

/// @brief Method GetClanOfficerCount, addr 0x1805884d0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetClanOfficerCount(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method GetClanOwner, addr 0x1805885a0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetClanOwner(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method GetClanTag, addr 0x180588690, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetClanTag(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method GetCoplayFriend, addr 0x180588840, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetCoplayFriend(int32_t  iCoplayFriend) ;

/// @brief Method GetCoplayFriendCount, addr 0x180588770, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetCoplayFriendCount() ;

/// @brief Method GetFollowerCount, addr 0x180588930, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetFollowerCount(::Steamworks::CSteamID  steamID) ;

/// @brief Method GetFriendByIndex, addr 0x180588a10, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetFriendByIndex(int32_t  iFriend, ::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method GetFriendCoplayGame, addr 0x180588b10, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::AppId_t GetFriendCoplayGame(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendCoplayTime, addr 0x180588bf0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendCoplayTime(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendCount, addr 0x180588d90, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendCount(::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method GetFriendCountFromSource, addr 0x180588cc0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendCountFromSource(::Steamworks::CSteamID  steamIDSource) ;

/// @brief Method GetFriendFromSourceByIndex, addr 0x180588e60, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetFriendFromSourceByIndex(::Steamworks::CSteamID  steamIDSource, int32_t  iFriend) ;

/// @brief Method GetFriendGamePlayed, addr 0x180588f60, size 0xe0, virtual false, abstract: false, final false
static inline bool GetFriendGamePlayed(::Steamworks::CSteamID  steamIDFriend, ::by_ref<::Steamworks::FriendGameInfo_t>  pFriendGameInfo) ;

/// @brief Method GetFriendMessage, addr 0x180589040, size 0x150, virtual false, abstract: false, final false
static inline int32_t GetFriendMessage(::Steamworks::CSteamID  steamIDFriend, int32_t  iMessageID, ::by_ref<::StringW>  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType) ;

/// @brief Method GetFriendPersonaName, addr 0x180589280, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetFriendPersonaName(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendPersonaNameHistory, addr 0x180589190, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW GetFriendPersonaNameHistory(::Steamworks::CSteamID  steamIDFriend, int32_t  iPersonaName) ;

/// @brief Method GetFriendPersonaState, addr 0x180589360, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EPersonaState GetFriendPersonaState(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendRelationship, addr 0x180589430, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EFriendRelationship GetFriendRelationship(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendRichPresence, addr 0x1805896c0, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW GetFriendRichPresence(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchKey) ;

/// @brief Method GetFriendRichPresenceKeyByIndex, addr 0x180589500, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW GetFriendRichPresenceKeyByIndex(::Steamworks::CSteamID  steamIDFriend, int32_t  iKey) ;

/// @brief Method GetFriendRichPresenceKeyCount, addr 0x1805895f0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendRichPresenceKeyCount(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendSteamLevel, addr 0x1805898b0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendSteamLevel(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetFriendsGroupCount, addr 0x180589980, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendsGroupCount() ;

/// @brief Method GetFriendsGroupIDByIndex, addr 0x180589a50, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::FriendsGroupID_t GetFriendsGroupIDByIndex(int32_t  iFG) ;

/// @brief Method GetFriendsGroupMembersCount, addr 0x180589b30, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetFriendsGroupMembersCount(::Steamworks::FriendsGroupID_t  friendsGroupID) ;

/// @brief Method GetFriendsGroupMembersList, addr 0x180589c00, size 0x100, virtual false, abstract: false, final false
static inline void GetFriendsGroupMembersList(::Steamworks::FriendsGroupID_t  friendsGroupID, ::ArrayW<::Steamworks::CSteamID>  pOutSteamIDMembers, int32_t  nMembersCount) ;

/// @brief Method GetFriendsGroupName, addr 0x180589d00, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetFriendsGroupName(::Steamworks::FriendsGroupID_t  friendsGroupID) ;

/// @brief Method GetLargeFriendAvatar, addr 0x180589de0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetLargeFriendAvatar(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetMediumFriendAvatar, addr 0x180589eb0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetMediumFriendAvatar(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetNumChatsWithUnreadPriorityMessages, addr 0x180589f80, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetNumChatsWithUnreadPriorityMessages() ;

/// @brief Method GetPersonaName, addr 0x18058a050, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetPersonaName() ;

/// @brief Method GetPersonaState, addr 0x18058a120, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EPersonaState GetPersonaState() ;

/// @brief Method GetPlayerNickname, addr 0x18058a1f0, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetPlayerNickname(::Steamworks::CSteamID  steamIDPlayer) ;

/// @brief Method GetSmallFriendAvatar, addr 0x18058a2d0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetSmallFriendAvatar(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetUserRestrictions, addr 0x18058a3a0, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetUserRestrictions() ;

/// @brief Method HasFriend, addr 0x18058a470, size 0xe0, virtual false, abstract: false, final false
static inline bool HasFriend(::Steamworks::CSteamID  steamIDFriend, ::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method InviteUserToGame, addr 0x18058a550, size 0x1e0, virtual false, abstract: false, final false
static inline bool InviteUserToGame(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchConnectString) ;

/// @brief Method IsClanChatAdmin, addr 0x18058a730, size 0xe0, virtual false, abstract: false, final false
static inline bool IsClanChatAdmin(::Steamworks::CSteamID  steamIDClanChat, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method IsClanChatWindowOpenInSteam, addr 0x18058a810, size 0xe0, virtual false, abstract: false, final false
static inline bool IsClanChatWindowOpenInSteam(::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method IsClanOfficialGameGroup, addr 0x18058a8f0, size 0xe0, virtual false, abstract: false, final false
static inline bool IsClanOfficialGameGroup(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method IsClanPublic, addr 0x18058a9d0, size 0xe0, virtual false, abstract: false, final false
static inline bool IsClanPublic(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method IsFollowing, addr 0x18058aab0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t IsFollowing(::Steamworks::CSteamID  steamID) ;

/// @brief Method IsUserInSource, addr 0x18058ab90, size 0xe0, virtual false, abstract: false, final false
static inline bool IsUserInSource(::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDSource) ;

/// @brief Method JoinClanChatRoom, addr 0x18058ac70, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t JoinClanChatRoom(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method LeaveClanChatRoom, addr 0x18058ad50, size 0xe0, virtual false, abstract: false, final false
static inline bool LeaveClanChatRoom(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method OpenClanChatWindowInSteam, addr 0x18058ae30, size 0xe0, virtual false, abstract: false, final false
static inline bool OpenClanChatWindowInSteam(::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method RegisterProtocolInOverlayBrowser, addr 0x18058af10, size 0x1d0, virtual false, abstract: false, final false
static inline bool RegisterProtocolInOverlayBrowser(::StringW  pchProtocol) ;

/// @brief Method ReplyToFriendMessage, addr 0x18058b0e0, size 0x1e0, virtual false, abstract: false, final false
static inline bool ReplyToFriendMessage(::Steamworks::CSteamID  steamIDFriend, ::StringW  pchMsgToSend) ;

/// @brief Method RequestClanOfficerList, addr 0x18058b2c0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestClanOfficerList(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method RequestFriendRichPresence, addr 0x18058b3a0, size 0xd0, virtual false, abstract: false, final false
static inline void RequestFriendRichPresence(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method RequestUserInformation, addr 0x18058b470, size 0xf0, virtual false, abstract: false, final false
static inline bool RequestUserInformation(::Steamworks::CSteamID  steamIDUser, bool  bRequireNameOnly) ;

/// @brief Method SendClanChatMessage, addr 0x18058b560, size 0x1e0, virtual false, abstract: false, final false
static inline bool SendClanChatMessage(::Steamworks::CSteamID  steamIDClanChat, ::StringW  pchText) ;

/// @brief Method SetInGameVoiceSpeaking, addr 0x18058b740, size 0xe0, virtual false, abstract: false, final false
static inline void SetInGameVoiceSpeaking(::Steamworks::CSteamID  steamIDUser, bool  bSpeaking) ;

/// @brief Method SetListenForFriendsMessages, addr 0x18058b820, size 0xe0, virtual false, abstract: false, final false
static inline bool SetListenForFriendsMessages(bool  bInterceptEnabled) ;

/// @brief Method SetPersonaName, addr 0x18058b900, size 0x1e0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SetPersonaName(::StringW  pchPersonaName) ;

/// @brief Method SetPlayedWith, addr 0x18058bae0, size 0xd0, virtual false, abstract: false, final false
static inline void SetPlayedWith(::Steamworks::CSteamID  steamIDUserPlayedWith) ;

/// @brief Method SetRichPresence, addr 0x18058bbb0, size 0x2b0, virtual false, abstract: false, final false
static inline bool SetRichPresence(::StringW  pchKey, ::StringW  pchValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamFriends() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamFriends", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamFriends(SteamFriends && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamFriends", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamFriends(SteamFriends const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamFriends) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
