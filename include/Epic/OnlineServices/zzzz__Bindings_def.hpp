#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Bindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings)
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedV2OptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByAchievementIdOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByAchievementIdOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyPlayerAchievementByAchievementIdOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyPlayerAchievementByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByAchievementIdOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct GetAchievementDefinitionCountOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct GetPlayerAchievementCountOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct GetUnlockedAchievementCountOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackV2Internal;
}
namespace Epic::OnlineServices::Achievements {
class OnQueryDefinitionsCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnQueryPlayerAchievementsCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnUnlockAchievementsCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Achievements {
struct QueryDefinitionsOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct QueryPlayerAchievementsOptionsInternal;
}
namespace Epic::OnlineServices::Achievements {
struct UnlockAchievementsOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddExternalIntegrityCatalogOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyClientIntegrityViolatedOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyMessageToPeerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyMessageToServerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyPeerActionRequiredOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyPeerAuthStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientViolationType;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct BeginSessionOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct EndSessionOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct GetModuleBuildIdOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct GetProtectMessageOutputLengthOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnClientIntegrityViolatedCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToPeerCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToServerCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerActionRequiredCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerAuthStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct PollStatusOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ProtectMessageOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ReceiveMessageFromPeerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ReceiveMessageFromServerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct RegisterPeerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved01OptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved02OptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct UnprotectMessageOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct UnregisterPeerOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogGameRoundEndOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogGameRoundStartOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerDespawnOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerReviveOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerSpawnOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTakeDamageOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTickOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseAbilityOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetClientDetailsOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetGameSessionIdOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyClientActionRequiredOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyClientAuthStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyMessageToClientOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct BeginSessionOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct EndSessionOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct GetProtectMessageOutputLengthOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientActionRequiredCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientAuthStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnMessageToClientCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct ProtectMessageOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct ReceiveMessageFromClientOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct RegisterClientOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct SetClientNetworkStateOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct UnprotectMessageOptionsInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct UnregisterClientOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct AddNotifyLoginStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct CopyIdTokenOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct CopyUserAuthTokenOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct DeletePersistentAuthOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct LinkAccountOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct LoginOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct LogoutOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
class OnDeletePersistentAuthCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLinkAccountCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLoginCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLoginStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLogoutCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnQueryIdTokenCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnVerifyIdTokenCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
class OnVerifyUserAuthCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
struct QueryIdTokenOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenOptionsInternal;
}
namespace Epic::OnlineServices::Auth {
struct VerifyUserAuthOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct AddNotifyAuthExpirationOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct AddNotifyLoginStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CopyIdTokenOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountIdOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountTypeOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserInfoOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct CreateUserOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct GetExternalAccountMappingsOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct GetProductUserExternalAccountCountOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct GetProductUserIdMappingOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct LinkAccountOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct LoginOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct LogoutOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
class OnAuthExpirationCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnCreateDeviceIdCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnCreateUserCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnDeleteDeviceIdCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLinkAccountCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLoginCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLoginStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLogoutCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnQueryExternalAccountMappingsCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnQueryProductUserIdMappingsCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnTransferDeviceIdAccountCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnUnlinkAccountCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
class OnVerifyIdTokenCallbackInternal;
}
namespace Epic::OnlineServices::Connect {
struct QueryExternalAccountMappingsOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct QueryProductUserIdMappingsOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct TransferDeviceIdAccountOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct UnlinkAccountOptionsInternal;
}
namespace Epic::OnlineServices::Connect {
struct VerifyIdTokenOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AcceptRequestToJoinOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteReceivedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteRejectedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinReceivedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinRejectedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinResponseReceivedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifySendCustomNativeInviteRequestedOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct FinalizeInviteOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnAcceptRequestToJoinCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteReceivedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteRejectedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRejectRequestToJoinCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinReceivedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinRejectedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinResponseReceivedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomInviteCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendRequestToJoinCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct RejectRequestToJoinOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomInviteOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct SendRequestToJoinOptionsInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct SetCustomInviteOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CheckoutOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByIdOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyEntitlementByNameAndIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemByIdOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemImageInfoByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyItemReleaseByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemEntitlementsResultByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemedEntitlementByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferByIdOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferImageInfoByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyOfferItemByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIdOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsByNameCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetItemImageInfoCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetItemReleaseCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetLastRedeemEntitlementsResultCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetLastRedeemedEntitlementsCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferImageInfoCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetOfferItemCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct GetTransactionCountOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnCheckoutCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementTokenCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementsCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOffersCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipBySandboxIdsCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipTokenCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnRedeemEntitlementsCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementTokenOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementsOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOffersOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipBySandboxIdsOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipTokenOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct TransactionCopyEntitlementByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Ecom {
struct TransactionGetEntitlementsCountOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct AcceptInviteOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct AddNotifyBlockedUsersUpdateOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct AddNotifyFriendsUpdateOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct FriendsStatus;
}
namespace Epic::OnlineServices::Friends {
struct GetBlockedUserAtIndexOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct GetBlockedUsersCountOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct GetFriendAtIndexOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct GetFriendsCountOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct GetStatusOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
class OnAcceptInviteCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
class OnBlockedUsersUpdateCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
class OnFriendsUpdateCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
class OnQueryFriendsCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
class OnRejectInviteCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
class OnSendInviteCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
struct QueryFriendsOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct RejectInviteOptionsInternal;
}
namespace Epic::OnlineServices::Friends {
struct SendInviteOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct AddNotifyUserLoginStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct ClearUserPreLogoutCallbackOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct CreateIntegratedPlatformOptionsContainerOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct FinalizeDeferredUserLogoutOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformOptionsContainerAddOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserLoginStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserPreLogoutCallbackInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct SetUserLoginStatusOptionsInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct SetUserPreLogoutCallbackOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct AddNotifyPermissionsUpdateReceivedOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct CopyPermissionByIndexOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct CreateUserOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct GetPermissionByKeyOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct GetPermissionsCountOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct KWSPermissionStatus;
}
namespace Epic::OnlineServices::KWS {
class OnCreateUserCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
class OnPermissionsUpdateReceivedCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
class OnQueryAgeGateCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
class OnQueryPermissionsCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
class OnRequestPermissionsCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
class OnUpdateParentEmailCallbackInternal;
}
namespace Epic::OnlineServices::KWS {
struct QueryAgeGateOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct QueryPermissionsOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct RequestPermissionsOptionsInternal;
}
namespace Epic::OnlineServices::KWS {
struct UpdateParentEmailOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardDefinitionByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardDefinitionByLeaderboardIdOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardRecordByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardRecordByUserIdOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardUserScoreByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardUserScoreByUserIdOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardDefinitionCountOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardRecordCountOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardUserScoreCountOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardDefinitionsCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardRanksCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardUserScoresCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardDefinitionsOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardRanksOptionsInternal;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardUserScoresOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyJoinLobbyAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLeaveLobbyRequestedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteReceivedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteRejectedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyMemberStatusReceivedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyMemberUpdateReceivedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyUpdateReceivedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyRTCRoomConnectionChangedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifySendLobbyNativeInviteRequestedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByInviteIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByUiEventIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbySearchOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct DestroyLobbyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct GetConnectStringOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct GetInviteCountOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct GetInviteIdByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct GetRTCRoomNameOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct HardMuteMemberOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct IsRTCRoomConnectedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct JoinRTCRoomOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct KickMemberOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveLobbyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveRTCRoomOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyAttributeByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyAttributeByKeyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyInfoOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberAttributeByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberAttributeByKeyOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberInfoOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetAttributeCountOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetLobbyOwnerOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberAttributeCountOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberCountOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationAddAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationAddMemberAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationRemoveAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationRemoveMemberAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetAllowedPlatformIdsOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetBucketIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetInvitesAllowedOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetMaxMembersOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetPermissionLevelOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchCopySearchResultByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchFindOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchGetSearchResultCountOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearchOnFindCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchRemoveParameterOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetLobbyIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetMaxResultsOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetParameterOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetTargetUserIdOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnCreateLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnDestroyLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnHardMuteMemberCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyByIdCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinRTCRoomCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnKickMemberCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveRTCRoomCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteReceivedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteRejectedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyMemberStatusReceivedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyMemberUpdateReceivedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyUpdateReceivedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnPromoteMemberCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnQueryInvitesCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnRTCRoomConnectionChangedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnRejectInviteCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnSendInviteCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnSendLobbyNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnUpdateLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct ParseConnectStringOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct PromoteMemberOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct QueryInvitesOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct RejectInviteOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct SendInviteOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyModificationOptionsInternal;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyOptionsInternal;
}
namespace Epic::OnlineServices::Logging {
struct LogCategory;
}
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
namespace Epic::OnlineServices::Logging {
class LogMessageFuncInternal;
}
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsInternal;
}
namespace Epic::OnlineServices::Metrics {
struct EndPlayerSessionOptionsInternal;
}
namespace Epic::OnlineServices::Mods {
struct CopyModInfoOptionsInternal;
}
namespace Epic::OnlineServices::Mods {
struct EnumerateModsOptionsInternal;
}
namespace Epic::OnlineServices::Mods {
struct InstallModOptionsInternal;
}
namespace Epic::OnlineServices::Mods {
class OnEnumerateModsCallbackInternal;
}
namespace Epic::OnlineServices::Mods {
class OnInstallModCallbackInternal;
}
namespace Epic::OnlineServices::Mods {
class OnUninstallModCallbackInternal;
}
namespace Epic::OnlineServices::Mods {
class OnUpdateModCallbackInternal;
}
namespace Epic::OnlineServices::Mods {
struct UninstallModOptionsInternal;
}
namespace Epic::OnlineServices::Mods {
struct UpdateModOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AcceptConnectionOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyIncomingPacketQueueFullOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionClosedOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionEstablishedOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionInterruptedOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionRequestOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct ClearPacketQueueOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct CloseConnectionOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct CloseConnectionsOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct GetNATTypeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct GetNextReceivedPacketSizeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct GetPacketQueueInfoOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct GetPortRangeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct GetRelayControlOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct NATType;
}
namespace Epic::OnlineServices::P2P {
class OnIncomingConnectionRequestCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
class OnIncomingPacketQueueFullCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionEstablishedCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionInterruptedCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
class OnQueryNATTypeCompleteCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
class OnRemoteConnectionClosedCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
struct PacketQueueInfoInternal;
}
namespace Epic::OnlineServices::P2P {
struct QueryNATTypeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct ReceivePacketOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct RelayControl;
}
namespace Epic::OnlineServices::P2P {
struct SendPacketOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct SetPacketQueueSizeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct SetPortRangeOptionsInternal;
}
namespace Epic::OnlineServices::P2P {
struct SetRelayControlOptionsInternal;
}
namespace Epic::OnlineServices::Platform {
struct ApplicationStatus;
}
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatusInfoInternal;
}
namespace Epic::OnlineServices::Platform {
struct GetDesktopCrossplayStatusOptionsInternal;
}
namespace Epic::OnlineServices::Platform {
struct InitializeOptionsInternal;
}
namespace Epic::OnlineServices::Platform {
struct NetworkStatus;
}
namespace Epic::OnlineServices::Platform {
struct OptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct CopyFileMetadataAtIndexOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct CopyFileMetadataByFilenameOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DeleteCacheOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DeleteFileOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DuplicateFileOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct GetFileMetadataCountOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteCacheCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDuplicateFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileListCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnReadFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileOptionsInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct AddNotifyJoinGameAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct AddNotifyOnPresenceChangedOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct CopyPresenceOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct CreatePresenceModificationOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct GetJoinInfoOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct HasPresenceOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
class OnJoinGameAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Presence {
class OnPresenceChangedCallbackInternal;
}
namespace Epic::OnlineServices::Presence {
class OnQueryPresenceCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationDeleteDataOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetDataOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetJoinInfoOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetRawRichTextOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetStatusOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateIdOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
struct QueryPresenceOptionsInternal;
}
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Presence {
struct SetPresenceOptionsInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct AddProgressionOptionsInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct BeginSnapshotOptionsInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct DeleteSnapshotOptionsInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct EndSnapshotOptionsInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnDeleteSnapshotCallbackInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnSubmitSnapshotCallbackInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct SubmitSnapshotOptionsInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByIndexOptionsInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByUserIdOptionsInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct KickOptionsInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnKickCompleteCallbackInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnQueryJoinRoomTokenCompleteCallbackInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnSetParticipantHardMuteCompleteCallbackInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenOptionsInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioBeforeRenderOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioBeforeSendOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioDevicesChangedOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioInputStateOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioOutputStateOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyParticipantUpdatedOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct CopyInputDeviceInformationByIndexOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct CopyOutputDeviceInformationByIndexOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDeviceByIndexOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDevicesCountOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioOutputDeviceByIndexOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioOutputDevicesCountOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetInputDevicesCountOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetOutputDevicesCountOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeRenderCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeSendCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioDevicesChangedCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioInputStateCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioOutputStateCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnParticipantUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnQueryInputDevicesInformationCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnQueryOutputDevicesInformationCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnRegisterPlatformUserCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnSetInputDeviceSettingsCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnSetOutputDeviceSettingsCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUnregisterPlatformUserCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateParticipantVolumeCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingVolumeCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateSendingCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateSendingVolumeCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct QueryInputDevicesInformationOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct QueryOutputDevicesInformationOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct RegisterPlatformAudioUserOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct RegisterPlatformUserOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct SendAudioOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetAudioInputSettingsOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetAudioOutputSettingsOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetInputDeviceSettingsOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetOutputDeviceSettingsOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformAudioUserOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformUserOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateParticipantVolumeOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingVolumeOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateSendingOptionsInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateSendingVolumeOptionsInternal;
}
namespace Epic::OnlineServices::RTCData {
struct AddNotifyDataReceivedOptionsInternal;
}
namespace Epic::OnlineServices::RTCData {
struct AddNotifyParticipantUpdatedOptionsInternal;
}
namespace Epic::OnlineServices::RTCData {
class OnDataReceivedCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
class OnParticipantUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
class OnUpdateReceivingCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
class OnUpdateSendingCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
struct SendDataOptionsInternal;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateReceivingOptionsInternal;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateSendingOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyDisconnectedOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyParticipantStatusChangedOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyRoomBeforeJoinOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyRoomStatisticsUpdatedOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct BlockParticipantOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct JoinRoomOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct LeaveRoomOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
class OnBlockParticipantCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnDisconnectedCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnJoinRoomCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnLeaveRoomCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnParticipantStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnRoomBeforeJoinCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
class OnRoomStatisticsUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
struct SetRoomSettingOptionsInternal;
}
namespace Epic::OnlineServices::RTC {
struct SetSettingOptionsInternal;
}
namespace Epic::OnlineServices::Reports {
class OnSendPlayerBehaviorReportCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportOptionsInternal;
}
namespace Epic::OnlineServices::Sanctions {
struct CopyPlayerSanctionByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Sanctions {
class CreatePlayerSanctionAppealCallbackInternal;
}
namespace Epic::OnlineServices::Sanctions {
struct CreatePlayerSanctionAppealOptionsInternal;
}
namespace Epic::OnlineServices::Sanctions {
struct GetPlayerSanctionCountOptionsInternal;
}
namespace Epic::OnlineServices::Sanctions {
class OnQueryActivePlayerSanctionsCallbackInternal;
}
namespace Epic::OnlineServices::Sanctions {
struct QueryActivePlayerSanctionsOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionCopyInfoOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionGetRegisteredPlayerByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionGetRegisteredPlayerCountOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifyJoinSessionAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifyLeaveSessionRequestedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySendSessionNativeInviteRequestedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteAcceptedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteReceivedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteRejectedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CopyActiveSessionHandleOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByInviteIdOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByUiEventIdOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleForPresenceOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CreateSessionModificationOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct CreateSessionSearchOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct DestroySessionOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct DumpSessionStateOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct EndSessionOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct GetInviteCountOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct GetInviteIdByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct IsUserInSessionOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct JoinSessionOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnDestroySessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnEndSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnLeaveSessionRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnQueryInvitesCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnRegisterPlayersCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnRejectInviteCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnSendInviteCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnSendSessionNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteReceivedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteRejectedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnStartSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnUnregisterPlayersCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnUpdateSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct QueryInvitesOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct RejectInviteOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SendInviteOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopyInfoOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByKeyOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsGetSessionAttributeCountOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationAddAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationRemoveAttributeOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetAllowedPlatformIdsOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetBucketIdOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetHostAddressOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetInvitesAllowedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetJoinInProgressAllowedOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetMaxPlayersOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetPermissionLevelOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchCopySearchResultByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchFindOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchGetSearchResultCountOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
class SessionSearchOnFindCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchRemoveParameterOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetMaxResultsOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetParameterOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetSessionIdOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetTargetUserIdOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct StartSessionOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct UnregisterPlayersOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionModificationOptionsInternal;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionOptionsInternal;
}
namespace Epic::OnlineServices::Stats {
struct CopyStatByIndexOptionsInternal;
}
namespace Epic::OnlineServices::Stats {
struct CopyStatByNameOptionsInternal;
}
namespace Epic::OnlineServices::Stats {
struct GetStatCountOptionsInternal;
}
namespace Epic::OnlineServices::Stats {
struct IngestStatOptionsInternal;
}
namespace Epic::OnlineServices::Stats {
class OnIngestStatCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Stats {
class OnQueryStatsCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Stats {
struct QueryStatsOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct CopyFileMetadataAtIndexOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct CopyFileMetadataByFilenameOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct DeleteCacheOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct GetFileMetadataCountOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
class OnDeleteCacheCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileListCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileListOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileOptionsInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct AcknowledgeEventIdOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyDisplaySettingsUpdatedOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyMemoryMonitorOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyOnScreenKeyboardRequestedOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ConfigureOnScreenKeyboardOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct GetFriendsExclusiveInputOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct GetFriendsVisibleOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct GetToggleFriendsButtonOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct GetToggleFriendsKeyOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct HideFriendsOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
namespace Epic::OnlineServices::UI {
struct IsSocialOverlayPausedOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct KeyCombination;
}
namespace Epic::OnlineServices::UI {
struct NotificationLocation;
}
namespace Epic::OnlineServices::UI {
class OnDisplaySettingsUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnHideFriendsCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnMemoryMonitorCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnScreenKeyboardRequestedCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnShowBlockPlayerCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnShowFriendsCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnShowNativeProfileCallbackInternal;
}
namespace Epic::OnlineServices::UI {
class OnShowReportPlayerCallbackInternal;
}
namespace Epic::OnlineServices::UI {
struct PauseSocialOverlayOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct PrePresentOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ReportInputStateOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct SetDisplayPreferenceOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsButtonOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsKeyOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ShowBlockPlayerOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ShowFriendsOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ShowNativeProfileOptionsInternal;
}
namespace Epic::OnlineServices::UI {
struct ShowReportPlayerOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyBestDisplayNameOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyBestDisplayNameWithPlatformOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountIdOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountTypeOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByIndexOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct CopyUserInfoOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct GetExternalUserInfoCountOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct GetLocalPlatformTypeOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByDisplayNameCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByExternalAccountCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByDisplayNameOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByExternalAccountOptionsInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoOptionsInternal;
}
namespace Epic::OnlineServices {
struct LoginStatus;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices {
class Bindings;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Bindings*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Bindings*, "Epic.OnlineServices", "Bindings");
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Bindings
class CORDL_TYPE Bindings : public ::System::Object {
public:
// Declarations
/// @brief Method EOS_Achievements_AddNotifyAchievementsUnlocked, addr 0x1804bec90, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Achievements_AddNotifyAchievementsUnlocked(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Achievements_AddNotifyAchievementsUnlockedV2, addr 0x1804bebe0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Achievements_AddNotifyAchievementsUnlockedV2(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2OptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*  notificationFn) ;

/// @brief Method EOS_Achievements_CopyAchievementDefinitionByAchievementId, addr 0x1804bed40, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyAchievementDefinitionByAchievementId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outDefinition) ;

/// @brief Method EOS_Achievements_CopyAchievementDefinitionByIndex, addr 0x1804bede0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyAchievementDefinitionByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outDefinition) ;

/// @brief Method EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId, addr 0x1804bee80, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outDefinition) ;

/// @brief Method EOS_Achievements_CopyAchievementDefinitionV2ByIndex, addr 0x1804bef20, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyAchievementDefinitionV2ByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outDefinition) ;

/// @brief Method EOS_Achievements_CopyPlayerAchievementByAchievementId, addr 0x1804befc0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyPlayerAchievementByAchievementId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAchievement) ;

/// @brief Method EOS_Achievements_CopyPlayerAchievementByIndex, addr 0x1804bf060, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyPlayerAchievementByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAchievement) ;

/// @brief Method EOS_Achievements_CopyUnlockedAchievementByAchievementId, addr 0x1804bf100, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyUnlockedAchievementByAchievementId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAchievement) ;

/// @brief Method EOS_Achievements_CopyUnlockedAchievementByIndex, addr 0x1804bf1a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Achievements_CopyUnlockedAchievementByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAchievement) ;

/// @brief Method EOS_Achievements_DefinitionV2_Release, addr 0x1804bf240, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Achievements_DefinitionV2_Release(::System::IntPtr  achievementDefinition) ;

/// @brief Method EOS_Achievements_Definition_Release, addr 0x1804bf2c0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Achievements_Definition_Release(::System::IntPtr  achievementDefinition) ;

/// @brief Method EOS_Achievements_GetAchievementDefinitionCount, addr 0x1804bf340, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Achievements_GetAchievementDefinitionCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptionsInternal>  options) ;

/// @brief Method EOS_Achievements_GetPlayerAchievementCount, addr 0x1804bf3d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Achievements_GetPlayerAchievementCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptionsInternal>  options) ;

/// @brief Method EOS_Achievements_GetUnlockedAchievementCount, addr 0x1804bf460, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Achievements_GetUnlockedAchievementCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptionsInternal>  options) ;

/// @brief Method EOS_Achievements_PlayerAchievement_Release, addr 0x1804bf4f0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Achievements_PlayerAchievement_Release(::System::IntPtr  achievement) ;

/// @brief Method EOS_Achievements_QueryDefinitions, addr 0x1804bf570, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Achievements_QueryDefinitions(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Achievements_QueryPlayerAchievements, addr 0x1804bf620, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Achievements_QueryPlayerAchievements(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Achievements_RemoveNotifyAchievementsUnlocked, addr 0x1804bf6d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Achievements_RemoveNotifyAchievementsUnlocked(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Achievements_UnlockAchievements, addr 0x1804bf760, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Achievements_UnlockAchievements(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Achievements_UnlockedAchievement_Release, addr 0x1804bf810, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Achievements_UnlockedAchievement_Release(::System::IntPtr  achievement) ;

/// @brief Method EOS_ActiveSession_CopyInfo, addr 0x1804bf890, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ActiveSession_CopyInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outActiveSessionInfo) ;

/// @brief Method EOS_ActiveSession_GetRegisteredPlayerByIndex, addr 0x1804bf930, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_ActiveSession_GetRegisteredPlayerByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptionsInternal>  options) ;

/// @brief Method EOS_ActiveSession_GetRegisteredPlayerCount, addr 0x1804bf9c0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_ActiveSession_GetRegisteredPlayerCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptionsInternal>  options) ;

/// @brief Method EOS_ActiveSession_Info_Release, addr 0x1804bfa50, size 0x80, virtual false, abstract: false, final false
static inline void EOS_ActiveSession_Info_Release(::System::IntPtr  activeSessionInfo) ;

/// @brief Method EOS_ActiveSession_Release, addr 0x1804bfad0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_ActiveSession_Release(::System::IntPtr  activeSessionHandle) ;

/// @brief Method EOS_AntiCheatClient_AddExternalIntegrityCatalog, addr 0x1804bfb50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_AddExternalIntegrityCatalog(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_AddNotifyClientIntegrityViolated, addr 0x1804bfbe0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatClient_AddNotifyClientIntegrityViolated(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatClient_AddNotifyMessageToPeer, addr 0x1804bfc90, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatClient_AddNotifyMessageToPeer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatClient_AddNotifyMessageToServer, addr 0x1804bfd40, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatClient_AddNotifyMessageToServer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatClient_AddNotifyPeerActionRequired, addr 0x1804bfdf0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatClient_AddNotifyPeerActionRequired(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged, addr 0x1804bfea0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatClient_BeginSession, addr 0x1804bff50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_BeginSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_EndSession, addr 0x1804bffe0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_EndSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_GetModuleBuildId, addr 0x1804c0070, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_GetModuleBuildId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptionsInternal>  options, ::by_ref<uint32_t>  outModuleBuildId) ;

/// @brief Method EOS_AntiCheatClient_GetProtectMessageOutputLength, addr 0x1804c0110, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_GetProtectMessageOutputLength(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptionsInternal>  options, ::by_ref<uint32_t>  outBufferSizeBytes) ;

/// @brief Method EOS_AntiCheatClient_PollStatus, addr 0x1804c01b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_PollStatus(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>  outViolationType, ::System::IntPtr  outMessage) ;

/// @brief Method EOS_AntiCheatClient_ProtectMessage, addr 0x1804c0260, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_ProtectMessage(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method EOS_AntiCheatClient_ReceiveMessageFromPeer, addr 0x1804c0310, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_ReceiveMessageFromPeer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_ReceiveMessageFromServer, addr 0x1804c03a0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_ReceiveMessageFromServer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_RegisterPeer, addr 0x1804c0430, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_RegisterPeer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_RemoveNotifyClientIntegrityViolated, addr 0x1804c04c0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatClient_RemoveNotifyClientIntegrityViolated(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatClient_RemoveNotifyMessageToPeer, addr 0x1804c0550, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatClient_RemoveNotifyMessageToPeer(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatClient_RemoveNotifyMessageToServer, addr 0x1804c05e0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatClient_RemoveNotifyMessageToServer(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatClient_RemoveNotifyPeerActionRequired, addr 0x1804c0670, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatClient_RemoveNotifyPeerActionRequired(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged, addr 0x1804c0700, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatClient_Reserved01, addr 0x1804c0790, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_Reserved01(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01OptionsInternal>  options, ::by_ref<int32_t>  outValue) ;

/// @brief Method EOS_AntiCheatClient_Reserved02, addr 0x1804c0830, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_Reserved02(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatClient_UnprotectMessage, addr 0x1804c08c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_UnprotectMessage(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method EOS_AntiCheatClient_UnregisterPeer, addr 0x1804c0970, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatClient_UnregisterPeer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_AddNotifyClientActionRequired, addr 0x1804c0a00, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatServer_AddNotifyClientActionRequired(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged, addr 0x1804c0ab0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatServer_AddNotifyMessageToClient, addr 0x1804c0b60, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_AntiCheatServer_AddNotifyMessageToClient(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallbackInternal*  notificationFn) ;

/// @brief Method EOS_AntiCheatServer_BeginSession, addr 0x1804c0c10, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_BeginSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_EndSession, addr 0x1804c0ca0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_EndSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_GetProtectMessageOutputLength, addr 0x1804c0d30, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_GetProtectMessageOutputLength(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal>  options, ::by_ref<uint32_t>  outBufferSizeBytes) ;

/// @brief Method EOS_AntiCheatServer_LogEvent, addr 0x1804c0dd0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogEvent(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogGameRoundEnd, addr 0x1804c0e60, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogGameRoundEnd(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogGameRoundStart, addr 0x1804c0ef0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogGameRoundStart(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerDespawn, addr 0x1804c0f80, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerDespawn(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerRevive, addr 0x1804c1010, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerRevive(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerSpawn, addr 0x1804c10a0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerSpawn(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerTakeDamage, addr 0x1804c1130, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerTakeDamage(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerTick, addr 0x1804c11c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerTick(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerUseAbility, addr 0x1804c1250, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerUseAbility(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_LogPlayerUseWeapon, addr 0x1804c12e0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_LogPlayerUseWeapon(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_ProtectMessage, addr 0x1804c1370, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_ProtectMessage(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method EOS_AntiCheatServer_ReceiveMessageFromClient, addr 0x1804c1420, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_ReceiveMessageFromClient(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_RegisterClient, addr 0x1804c14b0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_RegisterClient(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_RegisterEvent, addr 0x1804c1540, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_RegisterEvent(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_RemoveNotifyClientActionRequired, addr 0x1804c15d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatServer_RemoveNotifyClientActionRequired(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged, addr 0x1804c1660, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatServer_RemoveNotifyMessageToClient, addr 0x1804c16f0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_AntiCheatServer_RemoveNotifyMessageToClient(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_AntiCheatServer_SetClientDetails, addr 0x1804c1780, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_SetClientDetails(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_SetClientNetworkState, addr 0x1804c1810, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_SetClientNetworkState(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_SetGameSessionId, addr 0x1804c18a0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_SetGameSessionId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptionsInternal>  options) ;

/// @brief Method EOS_AntiCheatServer_UnprotectMessage, addr 0x1804c1930, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_UnprotectMessage(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method EOS_AntiCheatServer_UnregisterClient, addr 0x1804c19e0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_AntiCheatServer_UnregisterClient(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptionsInternal>  options) ;

/// @brief Method EOS_Auth_AddNotifyLoginStatusChanged, addr 0x1804c1a70, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Auth_AddNotifyLoginStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*  notification) ;

/// @brief Method EOS_Auth_CopyIdToken, addr 0x1804c1b20, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Auth_CopyIdToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptionsInternal>  options, ::by_ref<::System::IntPtr>  outIdToken) ;

/// @brief Method EOS_Auth_CopyUserAuthToken, addr 0x1804c1bc0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Auth_CopyUserAuthToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptionsInternal>  options, ::System::IntPtr  localUserId, ::by_ref<::System::IntPtr>  outUserAuthToken) ;

/// @brief Method EOS_Auth_DeletePersistentAuth, addr 0x1804c1c70, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_DeletePersistentAuth(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_GetLoggedInAccountByIndex, addr 0x1804c1d20, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Auth_GetLoggedInAccountByIndex(::System::IntPtr  handle, int32_t  index) ;

/// @brief Method EOS_Auth_GetLoggedInAccountsCount, addr 0x1804c1db0, size 0x80, virtual false, abstract: false, final false
static inline int32_t EOS_Auth_GetLoggedInAccountsCount(::System::IntPtr  handle) ;

/// @brief Method EOS_Auth_GetLoginStatus, addr 0x1804c1e30, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::LoginStatus EOS_Auth_GetLoginStatus(::System::IntPtr  handle, ::System::IntPtr  localUserId) ;

/// @brief Method EOS_Auth_GetMergedAccountByIndex, addr 0x1804c1ec0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Auth_GetMergedAccountByIndex(::System::IntPtr  handle, ::System::IntPtr  localUserId, uint32_t  index) ;

/// @brief Method EOS_Auth_GetMergedAccountsCount, addr 0x1804c1f60, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Auth_GetMergedAccountsCount(::System::IntPtr  handle, ::System::IntPtr  localUserId) ;

/// @brief Method EOS_Auth_GetSelectedAccountId, addr 0x1804c1ff0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Auth_GetSelectedAccountId(::System::IntPtr  handle, ::System::IntPtr  localUserId, ::by_ref<::System::IntPtr>  outSelectedAccountId) ;

/// @brief Method EOS_Auth_IdToken_Release, addr 0x1804c2090, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Auth_IdToken_Release(::System::IntPtr  idToken) ;

/// @brief Method EOS_Auth_LinkAccount, addr 0x1804c2110, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_LinkAccount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_Login, addr 0x1804c21c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_Login(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::LoginOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnLoginCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_Logout, addr 0x1804c2270, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_Logout(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::LogoutOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_QueryIdToken, addr 0x1804c2320, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_QueryIdToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_RemoveNotifyLoginStatusChanged, addr 0x1804c23d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Auth_RemoveNotifyLoginStatusChanged(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Auth_Token_Release, addr 0x1804c2460, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Auth_Token_Release(::System::IntPtr  authToken) ;

/// @brief Method EOS_Auth_VerifyIdToken, addr 0x1804c24e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_VerifyIdToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Auth_VerifyUserAuth, addr 0x1804c2590, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Auth_VerifyUserAuth(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_ByteArray_ToString, addr 0x1804c2640, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ByteArray_ToString(::System::IntPtr  byteArray, uint32_t  length, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  inOutBufferLength) ;

/// @brief Method EOS_Connect_AddNotifyAuthExpiration, addr 0x1804c26e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Connect_AddNotifyAuthExpiration(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*  notification) ;

/// @brief Method EOS_Connect_AddNotifyLoginStatusChanged, addr 0x1804c2790, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Connect_AddNotifyLoginStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*  notification) ;

/// @brief Method EOS_Connect_CopyIdToken, addr 0x1804c2840, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_CopyIdToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptionsInternal>  options, ::by_ref<::System::IntPtr>  outIdToken) ;

/// @brief Method EOS_Connect_CopyProductUserExternalAccountByAccountId, addr 0x1804c28e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_CopyProductUserExternalAccountByAccountId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalAccountInfo) ;

/// @brief Method EOS_Connect_CopyProductUserExternalAccountByAccountType, addr 0x1804c2980, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_CopyProductUserExternalAccountByAccountType(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalAccountInfo) ;

/// @brief Method EOS_Connect_CopyProductUserExternalAccountByIndex, addr 0x1804c2a20, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_CopyProductUserExternalAccountByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalAccountInfo) ;

/// @brief Method EOS_Connect_CopyProductUserInfo, addr 0x1804c2ac0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_CopyProductUserInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalAccountInfo) ;

/// @brief Method EOS_Connect_CreateDeviceId, addr 0x1804c2b60, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_CreateDeviceId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_CreateUser, addr 0x1804c2c10, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_CreateUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::CreateUserOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_DeleteDeviceId, addr 0x1804c2cc0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_DeleteDeviceId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_ExternalAccountInfo_Release, addr 0x1804c2d70, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Connect_ExternalAccountInfo_Release(::System::IntPtr  externalAccountInfo) ;

/// @brief Method EOS_Connect_GetExternalAccountMapping, addr 0x1804c2df0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Connect_GetExternalAccountMapping(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptionsInternal>  options) ;

/// @brief Method EOS_Connect_GetLoggedInUserByIndex, addr 0x1804c2e80, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Connect_GetLoggedInUserByIndex(::System::IntPtr  handle, int32_t  index) ;

/// @brief Method EOS_Connect_GetLoggedInUsersCount, addr 0x1804c2f10, size 0x80, virtual false, abstract: false, final false
static inline int32_t EOS_Connect_GetLoggedInUsersCount(::System::IntPtr  handle) ;

/// @brief Method EOS_Connect_GetLoginStatus, addr 0x1804c2f90, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::LoginStatus EOS_Connect_GetLoginStatus(::System::IntPtr  handle, ::System::IntPtr  localUserId) ;

/// @brief Method EOS_Connect_GetProductUserExternalAccountCount, addr 0x1804c3020, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Connect_GetProductUserExternalAccountCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptionsInternal>  options) ;

/// @brief Method EOS_Connect_GetProductUserIdMapping, addr 0x1804c30b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Connect_GetProductUserIdMapping(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Connect_IdToken_Release, addr 0x1804c3160, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Connect_IdToken_Release(::System::IntPtr  idToken) ;

/// @brief Method EOS_Connect_LinkAccount, addr 0x1804c31e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_LinkAccount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_Login, addr 0x1804c3290, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_Login(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::LoginOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnLoginCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_Logout, addr 0x1804c3340, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_Logout(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::LogoutOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_QueryExternalAccountMappings, addr 0x1804c33f0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_QueryExternalAccountMappings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_QueryProductUserIdMappings, addr 0x1804c34a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_QueryProductUserIdMappings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_RemoveNotifyAuthExpiration, addr 0x1804c3550, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Connect_RemoveNotifyAuthExpiration(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Connect_RemoveNotifyLoginStatusChanged, addr 0x1804c35e0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Connect_RemoveNotifyLoginStatusChanged(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Connect_TransferDeviceIdAccount, addr 0x1804c3670, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_TransferDeviceIdAccount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_UnlinkAccount, addr 0x1804c3720, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_UnlinkAccount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Connect_VerifyIdToken, addr 0x1804c37d0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Connect_VerifyIdToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_ContinuanceToken_ToString, addr 0x1804c3880, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ContinuanceToken_ToString(::System::IntPtr  continuanceToken, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_CustomInvites_AcceptRequestToJoin, addr 0x1804c3920, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_AcceptRequestToJoin(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_CustomInvites_AddNotifyCustomInviteAccepted, addr 0x1804c39d0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyCustomInviteAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyCustomInviteReceived, addr 0x1804c3a80, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyCustomInviteReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyCustomInviteRejected, addr 0x1804c3b30, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyCustomInviteRejected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyRequestToJoinAccepted, addr 0x1804c3be0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyRequestToJoinAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyRequestToJoinReceived, addr 0x1804c3c90, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyRequestToJoinReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyRequestToJoinRejected, addr 0x1804c3d40, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyRequestToJoinRejected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifyRequestToJoinResponseReceived, addr 0x1804c3df0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifyRequestToJoinResponseReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_AddNotifySendCustomNativeInviteRequested, addr 0x1804c3ea0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_CustomInvites_AddNotifySendCustomNativeInviteRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_CustomInvites_FinalizeInvite, addr 0x1804c3f50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_CustomInvites_FinalizeInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptionsInternal>  options) ;

/// @brief Method EOS_CustomInvites_RejectRequestToJoin, addr 0x1804c3fe0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RejectRequestToJoin(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyCustomInviteAccepted, addr 0x1804c4090, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyCustomInviteAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyCustomInviteReceived, addr 0x1804c4120, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyCustomInviteReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyCustomInviteRejected, addr 0x1804c41b0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyCustomInviteRejected(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyRequestToJoinAccepted, addr 0x1804c4240, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyRequestToJoinAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyRequestToJoinReceived, addr 0x1804c42d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyRequestToJoinReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyRequestToJoinRejected, addr 0x1804c4360, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyRequestToJoinRejected(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifyRequestToJoinResponseReceived, addr 0x1804c43f0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifyRequestToJoinResponseReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_RemoveNotifySendCustomNativeInviteRequested, addr 0x1804c4480, size 0x90, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_RemoveNotifySendCustomNativeInviteRequested(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_CustomInvites_SendCustomInvite, addr 0x1804c4510, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_SendCustomInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_CustomInvites_SendRequestToJoin, addr 0x1804c45c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_CustomInvites_SendRequestToJoin(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_CustomInvites_SetCustomInvite, addr 0x1804c4670, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_CustomInvites_SetCustomInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptionsInternal>  options) ;

/// @brief Method EOS_EApplicationStatus_ToString, addr 0x1804c4700, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_EApplicationStatus_ToString(::Epic::OnlineServices::Platform::ApplicationStatus  applicationStatus) ;

/// @brief Method EOS_ENetworkStatus_ToString, addr 0x1804c4780, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_ENetworkStatus_ToString(::Epic::OnlineServices::Platform::NetworkStatus  networkStatus) ;

/// @brief Method EOS_EResult_IsOperationComplete, addr 0x1804c4800, size 0x80, virtual false, abstract: false, final false
static inline int32_t EOS_EResult_IsOperationComplete(::Epic::OnlineServices::Result  result) ;

/// @brief Method EOS_EResult_ToString, addr 0x1804c4880, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_EResult_ToString(::Epic::OnlineServices::Result  result) ;

/// @brief Method EOS_Ecom_CatalogItem_Release, addr 0x1804c4900, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_CatalogItem_Release(::System::IntPtr  catalogItem) ;

/// @brief Method EOS_Ecom_CatalogOffer_Release, addr 0x1804c4980, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_CatalogOffer_Release(::System::IntPtr  catalogOffer) ;

/// @brief Method EOS_Ecom_CatalogRelease_Release, addr 0x1804c4a00, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_CatalogRelease_Release(::System::IntPtr  catalogRelease) ;

/// @brief Method EOS_Ecom_Checkout, addr 0x1804c4a80, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_Checkout(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_CopyEntitlementById, addr 0x1804c4b30, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyEntitlementById(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outEntitlement) ;

/// @brief Method EOS_Ecom_CopyEntitlementByIndex, addr 0x1804c4bd0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyEntitlementByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outEntitlement) ;

/// @brief Method EOS_Ecom_CopyEntitlementByNameAndIndex, addr 0x1804c4c70, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyEntitlementByNameAndIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outEntitlement) ;

/// @brief Method EOS_Ecom_CopyItemById, addr 0x1804c4d10, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyItemById(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outItem) ;

/// @brief Method EOS_Ecom_CopyItemImageInfoByIndex, addr 0x1804c4db0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyItemImageInfoByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outImageInfo) ;

/// @brief Method EOS_Ecom_CopyItemReleaseByIndex, addr 0x1804c4e50, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyItemReleaseByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outRelease) ;

/// @brief Method EOS_Ecom_CopyLastRedeemEntitlementsResultByIndex, addr 0x1804c4ef0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyLastRedeemEntitlementsResultByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal>  options, ::System::IntPtr  outEntitlementId, ::by_ref<int32_t>  inOutEntitlementIdLength) ;

/// @brief Method EOS_Ecom_CopyLastRedeemedEntitlementByIndex, addr 0x1804c4fa0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyLastRedeemedEntitlementByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal>  options, ::System::IntPtr  outRedeemedEntitlementId, ::by_ref<int32_t>  inOutRedeemedEntitlementIdLength) ;

/// @brief Method EOS_Ecom_CopyOfferById, addr 0x1804c5050, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyOfferById(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outOffer) ;

/// @brief Method EOS_Ecom_CopyOfferByIndex, addr 0x1804c50f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyOfferByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outOffer) ;

/// @brief Method EOS_Ecom_CopyOfferImageInfoByIndex, addr 0x1804c5190, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyOfferImageInfoByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outImageInfo) ;

/// @brief Method EOS_Ecom_CopyOfferItemByIndex, addr 0x1804c5230, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyOfferItemByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outItem) ;

/// @brief Method EOS_Ecom_CopyTransactionById, addr 0x1804c52d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyTransactionById(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outTransaction) ;

/// @brief Method EOS_Ecom_CopyTransactionByIndex, addr 0x1804c5370, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_CopyTransactionByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outTransaction) ;

/// @brief Method EOS_Ecom_Entitlement_Release, addr 0x1804c5410, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_Entitlement_Release(::System::IntPtr  entitlement) ;

/// @brief Method EOS_Ecom_GetEntitlementsByNameCount, addr 0x1804c5490, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetEntitlementsByNameCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetEntitlementsCount, addr 0x1804c5520, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetEntitlementsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetItemImageInfoCount, addr 0x1804c55b0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetItemImageInfoCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetItemReleaseCount, addr 0x1804c5640, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetItemReleaseCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetLastRedeemEntitlementsResultCount, addr 0x1804c56d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetLastRedeemEntitlementsResultCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetLastRedeemedEntitlementsCount, addr 0x1804c5760, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetLastRedeemedEntitlementsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetOfferCount, addr 0x1804c57f0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetOfferCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetOfferImageInfoCount, addr 0x1804c5880, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetOfferImageInfoCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetOfferItemCount, addr 0x1804c5910, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetOfferItemCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_GetTransactionCount, addr 0x1804c59a0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_GetTransactionCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_KeyImageInfo_Release, addr 0x1804c5a30, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_KeyImageInfo_Release(::System::IntPtr  keyImageInfo) ;

/// @brief Method EOS_Ecom_QueryEntitlementToken, addr 0x1804c5ab0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryEntitlementToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_QueryEntitlements, addr 0x1804c5b60, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryEntitlements(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_QueryOffers, addr 0x1804c5c10, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryOffers(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_QueryOwnership, addr 0x1804c5e20, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryOwnership(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_QueryOwnershipBySandboxIds, addr 0x1804c5cc0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryOwnershipBySandboxIds(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_QueryOwnershipToken, addr 0x1804c5d70, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_QueryOwnershipToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_RedeemEntitlements, addr 0x1804c5ed0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Ecom_RedeemEntitlements(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Ecom_Transaction_CopyEntitlementByIndex, addr 0x1804c5f80, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_Transaction_CopyEntitlementByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outEntitlement) ;

/// @brief Method EOS_Ecom_Transaction_GetEntitlementsCount, addr 0x1804c6020, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Ecom_Transaction_GetEntitlementsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptionsInternal>  options) ;

/// @brief Method EOS_Ecom_Transaction_GetTransactionId, addr 0x1804c60b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Ecom_Transaction_GetTransactionId(::System::IntPtr  handle, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Ecom_Transaction_Release, addr 0x1804c6150, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Ecom_Transaction_Release(::System::IntPtr  transaction) ;

/// @brief Method EOS_EpicAccountId_FromString, addr 0x1804c61d0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_EpicAccountId_FromString(::System::IntPtr  accountIdString) ;

/// @brief Method EOS_EpicAccountId_IsValid, addr 0x1804c6250, size 0x80, virtual false, abstract: false, final false
static inline int32_t EOS_EpicAccountId_IsValid(::System::IntPtr  accountId) ;

/// @brief Method EOS_EpicAccountId_ToString, addr 0x1804c62d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_EpicAccountId_ToString(::System::IntPtr  accountId, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Friends_AcceptInvite, addr 0x1804c6370, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Friends_AcceptInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Friends_AddNotifyBlockedUsersUpdate, addr 0x1804c6420, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Friends_AddNotifyBlockedUsersUpdate(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallbackInternal*  blockedUsersUpdateHandler) ;

/// @brief Method EOS_Friends_AddNotifyFriendsUpdate, addr 0x1804c64d0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Friends_AddNotifyFriendsUpdate(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*  friendsUpdateHandler) ;

/// @brief Method EOS_Friends_GetBlockedUserAtIndex, addr 0x1804c6580, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Friends_GetBlockedUserAtIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptionsInternal>  options) ;

/// @brief Method EOS_Friends_GetBlockedUsersCount, addr 0x1804c6610, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_Friends_GetBlockedUsersCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptionsInternal>  options) ;

/// @brief Method EOS_Friends_GetFriendAtIndex, addr 0x1804c66a0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Friends_GetFriendAtIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptionsInternal>  options) ;

/// @brief Method EOS_Friends_GetFriendsCount, addr 0x1804c6730, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_Friends_GetFriendsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptionsInternal>  options) ;

/// @brief Method EOS_Friends_GetStatus, addr 0x1804c67c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Friends::FriendsStatus EOS_Friends_GetStatus(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::GetStatusOptionsInternal>  options) ;

/// @brief Method EOS_Friends_QueryFriends, addr 0x1804c6850, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Friends_QueryFriends(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Friends_RejectInvite, addr 0x1804c6900, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Friends_RejectInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnRejectInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Friends_RemoveNotifyBlockedUsersUpdate, addr 0x1804c69b0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Friends_RemoveNotifyBlockedUsersUpdate(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_Friends_RemoveNotifyFriendsUpdate, addr 0x1804c6a40, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Friends_RemoveNotifyFriendsUpdate(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_Friends_SendInvite, addr 0x1804c6ad0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Friends_SendInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Friends::SendInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_GetVersion, addr 0x1804c6b80, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_GetVersion() ;

/// @brief Method EOS_Initialize, addr 0x1804c6bf0, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Initialize(::by_ref<::Epic::OnlineServices::Platform::InitializeOptionsInternal>  options) ;

/// @brief Method EOS_IntegratedPlatformOptionsContainer_Add, addr 0x1804c6c70, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatformOptionsContainer_Add(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptionsInternal>  inOptions) ;

/// @brief Method EOS_IntegratedPlatformOptionsContainer_Release, addr 0x1804c6d00, size 0x80, virtual false, abstract: false, final false
static inline void EOS_IntegratedPlatformOptionsContainer_Release(::System::IntPtr  integratedPlatformOptionsContainerHandle) ;

/// @brief Method EOS_IntegratedPlatform_AddNotifyUserLoginStatusChanged, addr 0x1804c6d80, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_IntegratedPlatform_AddNotifyUserLoginStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternal*  callbackFunction) ;

/// @brief Method EOS_IntegratedPlatform_ClearUserPreLogoutCallback, addr 0x1804c6e30, size 0x90, virtual false, abstract: false, final false
static inline void EOS_IntegratedPlatform_ClearUserPreLogoutCallback(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptionsInternal>  options) ;

/// @brief Method EOS_IntegratedPlatform_CreateIntegratedPlatformOptionsContainer, addr 0x1804c6ec0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatform_CreateIntegratedPlatformOptionsContainer(::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptionsInternal>  options, ::by_ref<::System::IntPtr>  outIntegratedPlatformOptionsContainerHandle) ;

/// @brief Method EOS_IntegratedPlatform_FinalizeDeferredUserLogout, addr 0x1804c6f50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatform_FinalizeDeferredUserLogout(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptionsInternal>  options) ;

/// @brief Method EOS_IntegratedPlatform_RemoveNotifyUserLoginStatusChanged, addr 0x1804c6fe0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_IntegratedPlatform_RemoveNotifyUserLoginStatusChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_IntegratedPlatform_SetUserLoginStatus, addr 0x1804c7070, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatform_SetUserLoginStatus(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal>  options) ;

/// @brief Method EOS_IntegratedPlatform_SetUserPreLogoutCallback, addr 0x1804c7100, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatform_SetUserPreLogoutCallback(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*  callbackFunction) ;

/// @brief Method EOS_KWS_AddNotifyPermissionsUpdateReceived, addr 0x1804c71b0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_KWS_AddNotifyPermissionsUpdateReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_KWS_CopyPermissionByIndex, addr 0x1804c7260, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_KWS_CopyPermissionByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::CopyPermissionByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outPermission) ;

/// @brief Method EOS_KWS_CreateUser, addr 0x1804c7300, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_KWS_CreateUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::CreateUserOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_KWS_GetPermissionByKey, addr 0x1804c73b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_KWS_GetPermissionByKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::GetPermissionByKeyOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::KWS::KWSPermissionStatus>  outPermission) ;

/// @brief Method EOS_KWS_GetPermissionsCount, addr 0x1804c7450, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_KWS_GetPermissionsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::GetPermissionsCountOptionsInternal>  options) ;

/// @brief Method EOS_KWS_PermissionStatus_Release, addr 0x1804c74e0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_KWS_PermissionStatus_Release(::System::IntPtr  permissionStatus) ;

/// @brief Method EOS_KWS_QueryAgeGate, addr 0x1804c7560, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_KWS_QueryAgeGate(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_KWS_QueryPermissions, addr 0x1804c7610, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_KWS_QueryPermissions(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_KWS_RemoveNotifyPermissionsUpdateReceived, addr 0x1804c76c0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_KWS_RemoveNotifyPermissionsUpdateReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_KWS_RequestPermissions, addr 0x1804c7750, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_KWS_RequestPermissions(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_KWS_UpdateParentEmail, addr 0x1804c7800, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_KWS_UpdateParentEmail(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::KWS::UpdateParentEmailOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::KWS::OnUpdateParentEmailCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardDefinitionByIndex, addr 0x1804c78b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardDefinition) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId, addr 0x1804c7950, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardDefinition) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardRecordByIndex, addr 0x1804c79f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardRecordByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardRecord) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardRecordByUserId, addr 0x1804c7a90, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardRecordByUserId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardRecord) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardUserScoreByIndex, addr 0x1804c7b30, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardUserScore) ;

/// @brief Method EOS_Leaderboards_CopyLeaderboardUserScoreByUserId, addr 0x1804c7bd0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLeaderboardUserScore) ;

/// @brief Method EOS_Leaderboards_Definition_Release, addr 0x1804c7c70, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_Definition_Release(::System::IntPtr  leaderboardDefinition) ;

/// @brief Method EOS_Leaderboards_GetLeaderboardDefinitionCount, addr 0x1804c7cf0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Leaderboards_GetLeaderboardDefinitionCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptionsInternal>  options) ;

/// @brief Method EOS_Leaderboards_GetLeaderboardRecordCount, addr 0x1804c7d80, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Leaderboards_GetLeaderboardRecordCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptionsInternal>  options) ;

/// @brief Method EOS_Leaderboards_GetLeaderboardUserScoreCount, addr 0x1804c7e10, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Leaderboards_GetLeaderboardUserScoreCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal>  options) ;

/// @brief Method EOS_Leaderboards_LeaderboardRecord_Release, addr 0x1804c7ea0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_LeaderboardRecord_Release(::System::IntPtr  leaderboardRecord) ;

/// @brief Method EOS_Leaderboards_LeaderboardUserScore_Release, addr 0x1804c7f20, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_LeaderboardUserScore_Release(::System::IntPtr  leaderboardUserScore) ;

/// @brief Method EOS_Leaderboards_QueryLeaderboardDefinitions, addr 0x1804c7fa0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_QueryLeaderboardDefinitions(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Leaderboards_QueryLeaderboardRanks, addr 0x1804c8050, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_QueryLeaderboardRanks(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Leaderboards_QueryLeaderboardUserScores, addr 0x1804c8100, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Leaderboards_QueryLeaderboardUserScores(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_LobbyDetails_CopyAttributeByIndex, addr 0x1804c81b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyAttributeByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAttribute) ;

/// @brief Method EOS_LobbyDetails_CopyAttributeByKey, addr 0x1804c8250, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyAttributeByKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAttribute) ;

/// @brief Method EOS_LobbyDetails_CopyInfo, addr 0x1804c82f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsInfo) ;

/// @brief Method EOS_LobbyDetails_CopyMemberAttributeByIndex, addr 0x1804c8390, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyMemberAttributeByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAttribute) ;

/// @brief Method EOS_LobbyDetails_CopyMemberAttributeByKey, addr 0x1804c8430, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyMemberAttributeByKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptionsInternal>  options, ::by_ref<::System::IntPtr>  outAttribute) ;

/// @brief Method EOS_LobbyDetails_CopyMemberInfo, addr 0x1804c84d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyDetails_CopyMemberInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsMemberInfo) ;

/// @brief Method EOS_LobbyDetails_GetAttributeCount, addr 0x1804c8570, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_LobbyDetails_GetAttributeCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptionsInternal>  options) ;

/// @brief Method EOS_LobbyDetails_GetLobbyOwner, addr 0x1804c8600, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_LobbyDetails_GetLobbyOwner(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptionsInternal>  options) ;

/// @brief Method EOS_LobbyDetails_GetMemberAttributeCount, addr 0x1804c8690, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_LobbyDetails_GetMemberAttributeCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptionsInternal>  options) ;

/// @brief Method EOS_LobbyDetails_GetMemberByIndex, addr 0x1804c8720, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_LobbyDetails_GetMemberByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptionsInternal>  options) ;

/// @brief Method EOS_LobbyDetails_GetMemberCount, addr 0x1804c87b0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_LobbyDetails_GetMemberCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptionsInternal>  options) ;

/// @brief Method EOS_LobbyDetails_Info_Release, addr 0x1804c8840, size 0x80, virtual false, abstract: false, final false
static inline void EOS_LobbyDetails_Info_Release(::System::IntPtr  lobbyDetailsInfo) ;

/// @brief Method EOS_LobbyDetails_MemberInfo_Release, addr 0x1804c88c0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_LobbyDetails_MemberInfo_Release(::System::IntPtr  lobbyDetailsMemberInfo) ;

/// @brief Method EOS_LobbyDetails_Release, addr 0x1804c8940, size 0x80, virtual false, abstract: false, final false
static inline void EOS_LobbyDetails_Release(::System::IntPtr  lobbyHandle) ;

/// @brief Method EOS_LobbyModification_AddAttribute, addr 0x1804c89c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_AddAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_AddMemberAttribute, addr 0x1804c8a50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_AddMemberAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_Release, addr 0x1804c8ae0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_LobbyModification_Release(::System::IntPtr  lobbyModificationHandle) ;

/// @brief Method EOS_LobbyModification_RemoveAttribute, addr 0x1804c8b60, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_RemoveAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_RemoveMemberAttribute, addr 0x1804c8bf0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_RemoveMemberAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_SetAllowedPlatformIds, addr 0x1804c8c80, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_SetAllowedPlatformIds(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_SetBucketId, addr 0x1804c8d10, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_SetBucketId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_SetInvitesAllowed, addr 0x1804c8da0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_SetInvitesAllowed(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_SetMaxMembers, addr 0x1804c8e30, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_SetMaxMembers(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptionsInternal>  options) ;

/// @brief Method EOS_LobbyModification_SetPermissionLevel, addr 0x1804c8ec0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbyModification_SetPermissionLevel(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_CopySearchResultByIndex, addr 0x1804c8f50, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_CopySearchResultByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsHandle) ;

/// @brief Method EOS_LobbySearch_Find, addr 0x1804c8ff0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_LobbySearch_Find(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_LobbySearch_GetSearchResultCount, addr 0x1804c90a0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_LobbySearch_GetSearchResultCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_Release, addr 0x1804c9130, size 0x80, virtual false, abstract: false, final false
static inline void EOS_LobbySearch_Release(::System::IntPtr  lobbySearchHandle) ;

/// @brief Method EOS_LobbySearch_RemoveParameter, addr 0x1804c91b0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_RemoveParameter(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_SetLobbyId, addr 0x1804c9240, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_SetLobbyId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_SetMaxResults, addr 0x1804c92d0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_SetMaxResults(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_SetParameter, addr 0x1804c9360, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_SetParameter(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptionsInternal>  options) ;

/// @brief Method EOS_LobbySearch_SetTargetUserId, addr 0x1804c93f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_LobbySearch_SetTargetUserId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptionsInternal>  options) ;

/// @brief Method EOS_Lobby_AddNotifyJoinLobbyAccepted, addr 0x1804c9480, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyJoinLobbyAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLeaveLobbyRequested, addr 0x1804c9530, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLeaveLobbyRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyInviteAccepted, addr 0x1804c95e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyInviteAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyInviteReceived, addr 0x1804c9690, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyInviteReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyInviteRejected, addr 0x1804c9740, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyInviteRejected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteRejectedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyMemberStatusReceived, addr 0x1804c97f0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyMemberStatusReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyMemberUpdateReceived, addr 0x1804c98a0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyLobbyUpdateReceived, addr 0x1804c9950, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyLobbyUpdateReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifyRTCRoomConnectionChanged, addr 0x1804c9a00, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifyRTCRoomConnectionChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_AddNotifySendLobbyNativeInviteRequested, addr 0x1804c9ab0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Lobby_AddNotifySendLobbyNativeInviteRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::AddNotifySendLobbyNativeInviteRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Lobby_Attribute_Release, addr 0x1804c9b60, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Lobby_Attribute_Release(::System::IntPtr  lobbyAttribute) ;

/// @brief Method EOS_Lobby_CopyLobbyDetailsHandle, addr 0x1804c9d20, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_CopyLobbyDetailsHandle(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsHandle) ;

/// @brief Method EOS_Lobby_CopyLobbyDetailsHandleByInviteId, addr 0x1804c9be0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_CopyLobbyDetailsHandleByInviteId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsHandle) ;

/// @brief Method EOS_Lobby_CopyLobbyDetailsHandleByUiEventId, addr 0x1804c9c80, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_CopyLobbyDetailsHandleByUiEventId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyDetailsHandle) ;

/// @brief Method EOS_Lobby_CreateLobby, addr 0x1804c9e60, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_CreateLobby(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_CreateLobbySearch, addr 0x1804c9dc0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_CreateLobbySearch(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::CreateLobbySearchOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbySearchHandle) ;

/// @brief Method EOS_Lobby_DestroyLobby, addr 0x1804c9f10, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_DestroyLobby(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_GetConnectString, addr 0x1804c9fc0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_GetConnectString(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::GetConnectStringOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  inOutBufferLength) ;

/// @brief Method EOS_Lobby_GetInviteCount, addr 0x1804ca070, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Lobby_GetInviteCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::GetInviteCountOptionsInternal>  options) ;

/// @brief Method EOS_Lobby_GetInviteIdByIndex, addr 0x1804ca100, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_GetInviteIdByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Lobby_GetRTCRoomName, addr 0x1804ca1b0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_GetRTCRoomName(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::GetRTCRoomNameOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  inOutBufferLength) ;

/// @brief Method EOS_Lobby_HardMuteMember, addr 0x1804ca260, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_HardMuteMember(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::HardMuteMemberOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_IsRTCRoomConnected, addr 0x1804ca310, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_IsRTCRoomConnected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptionsInternal>  options, ::by_ref<int32_t>  outIsConnected) ;

/// @brief Method EOS_Lobby_JoinLobby, addr 0x1804ca460, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_JoinLobby(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_JoinLobbyById, addr 0x1804ca3b0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_JoinLobbyById(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_JoinRTCRoom, addr 0x1804ca510, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_JoinRTCRoom(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_KickMember, addr 0x1804ca5c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_KickMember(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::KickMemberOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_LeaveLobby, addr 0x1804ca670, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_LeaveLobby(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_LeaveRTCRoom, addr 0x1804ca720, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_LeaveRTCRoom(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_ParseConnectString, addr 0x1804ca7d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_ParseConnectString(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::ParseConnectStringOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<uint32_t>  inOutBufferLength) ;

/// @brief Method EOS_Lobby_PromoteMember, addr 0x1804ca880, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_PromoteMember(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_QueryInvites, addr 0x1804ca930, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_QueryInvites(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_RejectInvite, addr 0x1804ca9e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_RejectInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::RejectInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_RemoveNotifyJoinLobbyAccepted, addr 0x1804caa90, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyJoinLobbyAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLeaveLobbyRequested, addr 0x1804cab20, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLeaveLobbyRequested(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyInviteAccepted, addr 0x1804cabb0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyInviteAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyInviteReceived, addr 0x1804cac40, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyInviteReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyInviteRejected, addr 0x1804cacd0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyInviteRejected(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived, addr 0x1804cad60, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived, addr 0x1804cadf0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyLobbyUpdateReceived, addr 0x1804cae80, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyLobbyUpdateReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged, addr 0x1804caf10, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_RemoveNotifySendLobbyNativeInviteRequested, addr 0x1804cafa0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Lobby_RemoveNotifySendLobbyNativeInviteRequested(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Lobby_SendInvite, addr 0x1804cb030, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_SendInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::SendInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_UpdateLobby, addr 0x1804cb180, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Lobby_UpdateLobby(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Lobby_UpdateLobbyModification, addr 0x1804cb0e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Lobby_UpdateLobbyModification(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptionsInternal>  options, ::by_ref<::System::IntPtr>  outLobbyModificationHandle) ;

/// @brief Method EOS_Logging_SetCallback, addr 0x1804cb230, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Logging_SetCallback(::Epic::OnlineServices::Logging::LogMessageFuncInternal*  callback) ;

/// @brief Method EOS_Logging_SetLogLevel, addr 0x1804cb2c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Logging_SetLogLevel(::Epic::OnlineServices::Logging::LogCategory  logCategory, ::Epic::OnlineServices::Logging::LogLevel  logLevel) ;

/// @brief Method EOS_Metrics_BeginPlayerSession, addr 0x1804cb350, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Metrics_BeginPlayerSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal>  options) ;

/// @brief Method EOS_Metrics_EndPlayerSession, addr 0x1804cb3e0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Metrics_EndPlayerSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal>  options) ;

/// @brief Method EOS_Mods_CopyModInfo, addr 0x1804cb470, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Mods_CopyModInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outEnumeratedMods) ;

/// @brief Method EOS_Mods_EnumerateMods, addr 0x1804cb510, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Mods_EnumerateMods(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Mods::OnEnumerateModsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Mods_InstallMod, addr 0x1804cb5c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Mods_InstallMod(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Mods::InstallModOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Mods_ModInfo_Release, addr 0x1804cb670, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Mods_ModInfo_Release(::System::IntPtr  modInfo) ;

/// @brief Method EOS_Mods_UninstallMod, addr 0x1804cb6f0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Mods_UninstallMod(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Mods::UninstallModOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Mods_UpdateMod, addr 0x1804cb7a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Mods_UpdateMod(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Mods::UpdateModOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Mods::OnUpdateModCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_P2P_AcceptConnection, addr 0x1804cb850, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_AcceptConnection(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AcceptConnectionOptionsInternal>  options) ;

/// @brief Method EOS_P2P_AddNotifyIncomingPacketQueueFull, addr 0x1804cb8e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_P2P_AddNotifyIncomingPacketQueueFull(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallbackInternal*  incomingPacketQueueFullHandler) ;

/// @brief Method EOS_P2P_AddNotifyPeerConnectionClosed, addr 0x1804cb990, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_P2P_AddNotifyPeerConnectionClosed(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallbackInternal*  connectionClosedHandler) ;

/// @brief Method EOS_P2P_AddNotifyPeerConnectionEstablished, addr 0x1804cba40, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_P2P_AddNotifyPeerConnectionEstablished(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallbackInternal*  connectionEstablishedHandler) ;

/// @brief Method EOS_P2P_AddNotifyPeerConnectionInterrupted, addr 0x1804cbaf0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_P2P_AddNotifyPeerConnectionInterrupted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionInterruptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*  connectionInterruptedHandler) ;

/// @brief Method EOS_P2P_AddNotifyPeerConnectionRequest, addr 0x1804cbba0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_P2P_AddNotifyPeerConnectionRequest(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*  connectionRequestHandler) ;

/// @brief Method EOS_P2P_ClearPacketQueue, addr 0x1804cbc50, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_ClearPacketQueue(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::ClearPacketQueueOptionsInternal>  options) ;

/// @brief Method EOS_P2P_CloseConnection, addr 0x1804cbce0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_CloseConnection(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::CloseConnectionOptionsInternal>  options) ;

/// @brief Method EOS_P2P_CloseConnections, addr 0x1804cbd70, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_CloseConnections(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::CloseConnectionsOptionsInternal>  options) ;

/// @brief Method EOS_P2P_GetNATType, addr 0x1804cbe00, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_GetNATType(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::GetNATTypeOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::P2P::NATType>  outNATType) ;

/// @brief Method EOS_P2P_GetNextReceivedPacketSize, addr 0x1804cbea0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_GetNextReceivedPacketSize(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptionsInternal>  options, ::by_ref<uint32_t>  outPacketSizeBytes) ;

/// @brief Method EOS_P2P_GetPacketQueueInfo, addr 0x1804cbf40, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_GetPacketQueueInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::GetPacketQueueInfoOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfoInternal>  outPacketQueueInfo) ;

/// @brief Method EOS_P2P_GetPortRange, addr 0x1804cbfe0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_GetPortRange(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::GetPortRangeOptionsInternal>  options, ::by_ref<uint16_t>  outPort, ::by_ref<uint16_t>  outNumAdditionalPortsToTry) ;

/// @brief Method EOS_P2P_GetRelayControl, addr 0x1804cc090, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_GetRelayControl(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::GetRelayControlOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::P2P::RelayControl>  outRelayControl) ;

/// @brief Method EOS_P2P_QueryNATType, addr 0x1804cc130, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_P2P_QueryNATType(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::QueryNATTypeOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_P2P_ReceivePacket, addr 0x1804cc1e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_ReceivePacket(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal>  options, ::by_ref<::System::IntPtr>  outPeerId, ::System::IntPtr  outSocketId, ::by_ref<uint8_t>  outChannel, ::System::IntPtr  outData, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method EOS_P2P_RemoveNotifyIncomingPacketQueueFull, addr 0x1804cc2b0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_P2P_RemoveNotifyIncomingPacketQueueFull(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_P2P_RemoveNotifyPeerConnectionClosed, addr 0x1804cc340, size 0x90, virtual false, abstract: false, final false
static inline void EOS_P2P_RemoveNotifyPeerConnectionClosed(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_P2P_RemoveNotifyPeerConnectionEstablished, addr 0x1804cc3d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_P2P_RemoveNotifyPeerConnectionEstablished(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_P2P_RemoveNotifyPeerConnectionInterrupted, addr 0x1804cc460, size 0x90, virtual false, abstract: false, final false
static inline void EOS_P2P_RemoveNotifyPeerConnectionInterrupted(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_P2P_RemoveNotifyPeerConnectionRequest, addr 0x1804cc4f0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_P2P_RemoveNotifyPeerConnectionRequest(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_P2P_SendPacket, addr 0x1804cc580, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_SendPacket(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>  options) ;

/// @brief Method EOS_P2P_SetPacketQueueSize, addr 0x1804cc610, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_SetPacketQueueSize(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal>  options) ;

/// @brief Method EOS_P2P_SetPortRange, addr 0x1804cc6a0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_SetPortRange(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal>  options) ;

/// @brief Method EOS_P2P_SetRelayControl, addr 0x1804cc730, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_P2P_SetRelayControl(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::P2P::SetRelayControlOptionsInternal>  options) ;

/// @brief Method EOS_Platform_CheckForLauncherAndRestart, addr 0x1804cc7c0, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_CheckForLauncherAndRestart(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_Create, addr 0x1804cc840, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_Create(::by_ref<::Epic::OnlineServices::Platform::OptionsInternal>  options) ;

/// @brief Method EOS_Platform_GetAchievementsInterface, addr 0x1804cc8c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetAchievementsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetActiveCountryCode, addr 0x1804cc940, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_GetActiveCountryCode(::System::IntPtr  handle, ::System::IntPtr  localUserId, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Platform_GetActiveLocaleCode, addr 0x1804cc9f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_GetActiveLocaleCode(::System::IntPtr  handle, ::System::IntPtr  localUserId, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Platform_GetAntiCheatClientInterface, addr 0x1804ccaa0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetAntiCheatClientInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetAntiCheatServerInterface, addr 0x1804ccb20, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetAntiCheatServerInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetApplicationStatus, addr 0x1804ccba0, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Platform::ApplicationStatus EOS_Platform_GetApplicationStatus(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetAuthInterface, addr 0x1804ccc20, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetAuthInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetConnectInterface, addr 0x1804ccca0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetConnectInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetCustomInvitesInterface, addr 0x1804ccd20, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetCustomInvitesInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetDesktopCrossplayStatus, addr 0x1804ccda0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_GetDesktopCrossplayStatus(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptionsInternal>  options, ::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal>  outDesktopCrossplayStatusInfo) ;

/// @brief Method EOS_Platform_GetEcomInterface, addr 0x1804cce40, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetEcomInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetFriendsInterface, addr 0x1804ccec0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetFriendsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetIntegratedPlatformInterface, addr 0x1804ccf40, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetIntegratedPlatformInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetKWSInterface, addr 0x1804ccfc0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetKWSInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetLeaderboardsInterface, addr 0x1804cd040, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetLeaderboardsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetLobbyInterface, addr 0x1804cd0c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetLobbyInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetMetricsInterface, addr 0x1804cd140, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetMetricsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetModsInterface, addr 0x1804cd1c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetModsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetNetworkStatus, addr 0x1804cd240, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Platform::NetworkStatus EOS_Platform_GetNetworkStatus(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetOverrideCountryCode, addr 0x1804cd2c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_GetOverrideCountryCode(::System::IntPtr  handle, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Platform_GetOverrideLocaleCode, addr 0x1804cd360, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_GetOverrideLocaleCode(::System::IntPtr  handle, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Platform_GetP2PInterface, addr 0x1804cd400, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetP2PInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetPlayerDataStorageInterface, addr 0x1804cd480, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetPlayerDataStorageInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetPresenceInterface, addr 0x1804cd500, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetPresenceInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetProgressionSnapshotInterface, addr 0x1804cd580, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetProgressionSnapshotInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetRTCAdminInterface, addr 0x1804cd600, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetRTCAdminInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetRTCInterface, addr 0x1804cd680, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetRTCInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetReportsInterface, addr 0x1804cd700, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetReportsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetSanctionsInterface, addr 0x1804cd780, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetSanctionsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetSessionsInterface, addr 0x1804cd800, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetSessionsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetStatsInterface, addr 0x1804cd880, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetStatsInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetTitleStorageInterface, addr 0x1804cd900, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetTitleStorageInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetUIInterface, addr 0x1804cd980, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetUIInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_GetUserInfoInterface, addr 0x1804cda00, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_GetUserInfoInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_Release, addr 0x1804cda80, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Platform_Release(::System::IntPtr  handle) ;

/// @brief Method EOS_Platform_SetApplicationStatus, addr 0x1804cdb00, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_SetApplicationStatus(::System::IntPtr  handle, ::Epic::OnlineServices::Platform::ApplicationStatus  newStatus) ;

/// @brief Method EOS_Platform_SetNetworkStatus, addr 0x1804cdb90, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_SetNetworkStatus(::System::IntPtr  handle, ::Epic::OnlineServices::Platform::NetworkStatus  newStatus) ;

/// @brief Method EOS_Platform_SetOverrideCountryCode, addr 0x1804cdc20, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_SetOverrideCountryCode(::System::IntPtr  handle, ::System::IntPtr  newCountryCode) ;

/// @brief Method EOS_Platform_SetOverrideLocaleCode, addr 0x1804cdcb0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Platform_SetOverrideLocaleCode(::System::IntPtr  handle, ::System::IntPtr  newLocaleCode) ;

/// @brief Method EOS_Platform_Tick, addr 0x1804cdd40, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Platform_Tick(::System::IntPtr  handle) ;

/// @brief Method EOS_PlayerDataStorageFileTransferRequest_CancelRequest, addr 0x1804cddc0, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorageFileTransferRequest_CancelRequest(::System::IntPtr  handle) ;

/// @brief Method EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState, addr 0x1804cde40, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(::System::IntPtr  handle) ;

/// @brief Method EOS_PlayerDataStorageFileTransferRequest_GetFilename, addr 0x1804cdec0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorageFileTransferRequest_GetFilename(::System::IntPtr  handle, uint32_t  filenameStringBufferSizeBytes, ::System::IntPtr  outStringBuffer, ::by_ref<int32_t>  outStringLength) ;

/// @brief Method EOS_PlayerDataStorageFileTransferRequest_Release, addr 0x1804cdf60, size 0x80, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorageFileTransferRequest_Release(::System::IntPtr  playerDataStorageFileTransferHandle) ;

/// @brief Method EOS_PlayerDataStorage_CopyFileMetadataAtIndex, addr 0x1804cdfe0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorage_CopyFileMetadataAtIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptionsInternal>  copyFileMetadataOptions, ::by_ref<::System::IntPtr>  outMetadata) ;

/// @brief Method EOS_PlayerDataStorage_CopyFileMetadataByFilename, addr 0x1804ce080, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorage_CopyFileMetadataByFilename(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptionsInternal>  copyFileMetadataOptions, ::by_ref<::System::IntPtr>  outMetadata) ;

/// @brief Method EOS_PlayerDataStorage_DeleteCache, addr 0x1804ce120, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorage_DeleteCache(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_DeleteFile, addr 0x1804ce1d0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorage_DeleteFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptionsInternal>  deleteOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_DuplicateFile, addr 0x1804ce280, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorage_DuplicateFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptionsInternal>  duplicateOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_FileMetadata_Release, addr 0x1804ce330, size 0x80, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorage_FileMetadata_Release(::System::IntPtr  fileMetadata) ;

/// @brief Method EOS_PlayerDataStorage_GetFileMetadataCount, addr 0x1804ce3b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PlayerDataStorage_GetFileMetadataCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptionsInternal>  getFileMetadataCountOptions, ::by_ref<int32_t>  outFileMetadataCount) ;

/// @brief Method EOS_PlayerDataStorage_QueryFile, addr 0x1804ce500, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorage_QueryFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptionsInternal>  queryFileOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_QueryFileList, addr 0x1804ce450, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_PlayerDataStorage_QueryFileList(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptionsInternal>  queryFileListOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_ReadFile, addr 0x1804ce5b0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_PlayerDataStorage_ReadFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptionsInternal>  readOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PlayerDataStorage_WriteFile, addr 0x1804ce660, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_PlayerDataStorage_WriteFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptionsInternal>  writeOptions, ::System::IntPtr  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_PresenceModification_DeleteData, addr 0x1804ce710, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_DeleteData(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_Release, addr 0x1804ce7a0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_PresenceModification_Release(::System::IntPtr  presenceModificationHandle) ;

/// @brief Method EOS_PresenceModification_SetData, addr 0x1804ce820, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetData(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_SetJoinInfo, addr 0x1804ce8b0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetJoinInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_SetRawRichText, addr 0x1804ce940, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetRawRichText(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_SetStatus, addr 0x1804ce9d0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetStatus(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_SetTemplateData, addr 0x1804cea60, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetTemplateData(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal>  options) ;

/// @brief Method EOS_PresenceModification_SetTemplateId, addr 0x1804ceaf0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_PresenceModification_SetTemplateId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptionsInternal>  options) ;

/// @brief Method EOS_Presence_AddNotifyJoinGameAccepted, addr 0x1804ceb80, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Presence_AddNotifyJoinGameAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Presence_AddNotifyOnPresenceChanged, addr 0x1804cec30, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Presence_AddNotifyOnPresenceChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternal*  notificationHandler) ;

/// @brief Method EOS_Presence_CopyPresence, addr 0x1804cece0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Presence_CopyPresence(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptionsInternal>  options, ::by_ref<::System::IntPtr>  outPresence) ;

/// @brief Method EOS_Presence_CreatePresenceModification, addr 0x1804ced80, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Presence_CreatePresenceModification(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptionsInternal>  options, ::by_ref<::System::IntPtr>  outPresenceModificationHandle) ;

/// @brief Method EOS_Presence_GetJoinInfo, addr 0x1804cee20, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Presence_GetJoinInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Presence_HasPresence, addr 0x1804ceed0, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_Presence_HasPresence(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptionsInternal>  options) ;

/// @brief Method EOS_Presence_Info_Release, addr 0x1804cef60, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Presence_Info_Release(::System::IntPtr  presenceInfo) ;

/// @brief Method EOS_Presence_QueryPresence, addr 0x1804cefe0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Presence_QueryPresence(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Presence_RemoveNotifyJoinGameAccepted, addr 0x1804cf090, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Presence_RemoveNotifyJoinGameAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Presence_RemoveNotifyOnPresenceChanged, addr 0x1804cf120, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Presence_RemoveNotifyOnPresenceChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_Presence_SetPresence, addr 0x1804cf1b0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Presence_SetPresence(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_ProductUserId_FromString, addr 0x1804cf260, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_ProductUserId_FromString(::System::IntPtr  productUserIdString) ;

/// @brief Method EOS_ProductUserId_IsValid, addr 0x1804cf2e0, size 0x80, virtual false, abstract: false, final false
static inline int32_t EOS_ProductUserId_IsValid(::System::IntPtr  accountId) ;

/// @brief Method EOS_ProductUserId_ToString, addr 0x1804cf360, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ProductUserId_ToString(::System::IntPtr  accountId, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_ProgressionSnapshot_AddProgression, addr 0x1804cf400, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ProgressionSnapshot_AddProgression(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal>  options) ;

/// @brief Method EOS_ProgressionSnapshot_BeginSnapshot, addr 0x1804cf490, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ProgressionSnapshot_BeginSnapshot(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptionsInternal>  options, ::by_ref<uint32_t>  outSnapshotId) ;

/// @brief Method EOS_ProgressionSnapshot_DeleteSnapshot, addr 0x1804cf530, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_ProgressionSnapshot_DeleteSnapshot(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_ProgressionSnapshot_EndSnapshot, addr 0x1804cf5e0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_ProgressionSnapshot_EndSnapshot(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptionsInternal>  options) ;

/// @brief Method EOS_ProgressionSnapshot_SubmitSnapshot, addr 0x1804cf670, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_ProgressionSnapshot_SubmitSnapshot(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAdmin_CopyUserTokenByIndex, addr 0x1804cf720, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAdmin_CopyUserTokenByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outUserToken) ;

/// @brief Method EOS_RTCAdmin_CopyUserTokenByUserId, addr 0x1804cf7c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAdmin_CopyUserTokenByUserId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outUserToken) ;

/// @brief Method EOS_RTCAdmin_Kick, addr 0x1804cf860, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAdmin_Kick(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAdmin_QueryJoinRoomToken, addr 0x1804cf910, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAdmin_QueryJoinRoomToken(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAdmin_SetParticipantHardMute, addr 0x1804cf9c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAdmin_SetParticipantHardMute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAdmin_UserToken_Release, addr 0x1804cfa70, size 0x80, virtual false, abstract: false, final false
static inline void EOS_RTCAdmin_UserToken_Release(::System::IntPtr  userToken) ;

/// @brief Method EOS_RTCAudio_AddNotifyAudioBeforeRender, addr 0x1804cfaf0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyAudioBeforeRender(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_AddNotifyAudioBeforeSend, addr 0x1804cfba0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyAudioBeforeSend(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_AddNotifyAudioDevicesChanged, addr 0x1804cfc50, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyAudioDevicesChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_AddNotifyAudioInputState, addr 0x1804cfd00, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyAudioInputState(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_AddNotifyAudioOutputState, addr 0x1804cfdb0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyAudioOutputState(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_AddNotifyParticipantUpdated, addr 0x1804cfe60, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCAudio_AddNotifyParticipantUpdated(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_CopyInputDeviceInformationByIndex, addr 0x1804cff10, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_CopyInputDeviceInformationByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outInputDeviceInformation) ;

/// @brief Method EOS_RTCAudio_CopyOutputDeviceInformationByIndex, addr 0x1804cffb0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_CopyOutputDeviceInformationByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outOutputDeviceInformation) ;

/// @brief Method EOS_RTCAudio_GetAudioInputDeviceByIndex, addr 0x1804d0050, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_RTCAudio_GetAudioInputDeviceByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_GetAudioInputDevicesCount, addr 0x1804d00e0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_RTCAudio_GetAudioInputDevicesCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_GetAudioOutputDeviceByIndex, addr 0x1804d0170, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_RTCAudio_GetAudioOutputDeviceByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_GetAudioOutputDevicesCount, addr 0x1804d0200, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_RTCAudio_GetAudioOutputDevicesCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_GetInputDevicesCount, addr 0x1804d0290, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_RTCAudio_GetInputDevicesCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_GetOutputDevicesCount, addr 0x1804d0320, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_RTCAudio_GetOutputDevicesCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_InputDeviceInformation_Release, addr 0x1804d03b0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_InputDeviceInformation_Release(::System::IntPtr  deviceInformation) ;

/// @brief Method EOS_RTCAudio_OutputDeviceInformation_Release, addr 0x1804d0430, size 0x80, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_OutputDeviceInformation_Release(::System::IntPtr  deviceInformation) ;

/// @brief Method EOS_RTCAudio_QueryInputDevicesInformation, addr 0x1804d04b0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_QueryInputDevicesInformation(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_QueryOutputDevicesInformation, addr 0x1804d0560, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_QueryOutputDevicesInformation(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_RegisterPlatformAudioUser, addr 0x1804d0610, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_RegisterPlatformAudioUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_RegisterPlatformUser, addr 0x1804d06a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RegisterPlatformUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyAudioBeforeRender, addr 0x1804d0750, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyAudioBeforeRender(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyAudioBeforeSend, addr 0x1804d07e0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyAudioBeforeSend(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyAudioDevicesChanged, addr 0x1804d0870, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyAudioDevicesChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyAudioInputState, addr 0x1804d0900, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyAudioInputState(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyAudioOutputState, addr 0x1804d0990, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyAudioOutputState(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_RemoveNotifyParticipantUpdated, addr 0x1804d0a20, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_RemoveNotifyParticipantUpdated(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCAudio_SendAudio, addr 0x1804d0ab0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_SendAudio(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_SetAudioInputSettings, addr 0x1804d0b40, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_SetAudioInputSettings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_SetAudioOutputSettings, addr 0x1804d0bd0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_SetAudioOutputSettings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_SetInputDeviceSettings, addr 0x1804d0c60, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_SetInputDeviceSettings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_SetOutputDeviceSettings, addr 0x1804d0d10, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_SetOutputDeviceSettings(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UnregisterPlatformAudioUser, addr 0x1804d0dc0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCAudio_UnregisterPlatformAudioUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptionsInternal>  options) ;

/// @brief Method EOS_RTCAudio_UnregisterPlatformUser, addr 0x1804d0e50, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UnregisterPlatformUser(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UpdateParticipantVolume, addr 0x1804d0f00, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UpdateParticipantVolume(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UpdateReceiving, addr 0x1804d1060, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UpdateReceiving(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UpdateReceivingVolume, addr 0x1804d0fb0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UpdateReceivingVolume(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UpdateSending, addr 0x1804d11c0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UpdateSending(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCAudio_UpdateSendingVolume, addr 0x1804d1110, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCAudio_UpdateSendingVolume(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCData_AddNotifyDataReceived, addr 0x1804d1270, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCData_AddNotifyDataReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCData::OnDataReceivedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCData_AddNotifyParticipantUpdated, addr 0x1804d1320, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTCData_AddNotifyParticipantUpdated(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCData_RemoveNotifyDataReceived, addr 0x1804d13d0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCData_RemoveNotifyDataReceived(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCData_RemoveNotifyParticipantUpdated, addr 0x1804d1460, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTCData_RemoveNotifyParticipantUpdated(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTCData_SendData, addr 0x1804d14f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTCData_SendData(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCData::SendDataOptionsInternal>  options) ;

/// @brief Method EOS_RTCData_UpdateReceiving, addr 0x1804d1580, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCData_UpdateReceiving(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTCData_UpdateSending, addr 0x1804d1630, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTCData_UpdateSending(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_AddNotifyDisconnected, addr 0x1804d16e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTC_AddNotifyDisconnected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_AddNotifyParticipantStatusChanged, addr 0x1804d1790, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTC_AddNotifyParticipantStatusChanged(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_AddNotifyRoomBeforeJoin, addr 0x1804d1840, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTC_AddNotifyRoomBeforeJoin(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_AddNotifyRoomStatisticsUpdated, addr 0x1804d18f0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_RTC_AddNotifyRoomStatisticsUpdated(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_BlockParticipant, addr 0x1804d19a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTC_BlockParticipant(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_GetAudioInterface, addr 0x1804d1a50, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_RTC_GetAudioInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_RTC_GetDataInterface, addr 0x1804d1ad0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_RTC_GetDataInterface(::System::IntPtr  handle) ;

/// @brief Method EOS_RTC_JoinRoom, addr 0x1804d1b50, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTC_JoinRoom(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_LeaveRoom, addr 0x1804d1c00, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_RTC_LeaveRoom(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_RTC_RemoveNotifyDisconnected, addr 0x1804d1cb0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTC_RemoveNotifyDisconnected(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTC_RemoveNotifyParticipantStatusChanged, addr 0x1804d1d40, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTC_RemoveNotifyParticipantStatusChanged(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTC_RemoveNotifyRoomBeforeJoin, addr 0x1804d1dd0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTC_RemoveNotifyRoomBeforeJoin(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTC_RemoveNotifyRoomStatisticsUpdated, addr 0x1804d1e60, size 0x90, virtual false, abstract: false, final false
static inline void EOS_RTC_RemoveNotifyRoomStatisticsUpdated(::System::IntPtr  handle, uint64_t  notificationId) ;

/// @brief Method EOS_RTC_SetRoomSetting, addr 0x1804d1ef0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTC_SetRoomSetting(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptionsInternal>  options) ;

/// @brief Method EOS_RTC_SetSetting, addr 0x1804d1f80, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_RTC_SetSetting(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::RTC::SetSettingOptionsInternal>  options) ;

/// @brief Method EOS_Reports_SendPlayerBehaviorReport, addr 0x1804d2010, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Reports_SendPlayerBehaviorReport(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sanctions_CopyPlayerSanctionByIndex, addr 0x1804d20c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sanctions_CopyPlayerSanctionByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSanction) ;

/// @brief Method EOS_Sanctions_CreatePlayerSanctionAppeal, addr 0x1804d2160, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sanctions_CreatePlayerSanctionAppeal(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sanctions_GetPlayerSanctionCount, addr 0x1804d2210, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Sanctions_GetPlayerSanctionCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptionsInternal>  options) ;

/// @brief Method EOS_Sanctions_PlayerSanction_Release, addr 0x1804d22a0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Sanctions_PlayerSanction_Release(::System::IntPtr  sanction) ;

/// @brief Method EOS_Sanctions_QueryActivePlayerSanctions, addr 0x1804d2320, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sanctions_QueryActivePlayerSanctions(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_SessionDetails_Attribute_Release, addr 0x1804d23d0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_SessionDetails_Attribute_Release(::System::IntPtr  sessionAttribute) ;

/// @brief Method EOS_SessionDetails_CopyInfo, addr 0x1804d2450, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionDetails_CopyInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionInfo) ;

/// @brief Method EOS_SessionDetails_CopySessionAttributeByIndex, addr 0x1804d24f0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionDetails_CopySessionAttributeByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionAttribute) ;

/// @brief Method EOS_SessionDetails_CopySessionAttributeByKey, addr 0x1804d2590, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionDetails_CopySessionAttributeByKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionAttribute) ;

/// @brief Method EOS_SessionDetails_GetSessionAttributeCount, addr 0x1804d2630, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_SessionDetails_GetSessionAttributeCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptionsInternal>  options) ;

/// @brief Method EOS_SessionDetails_Info_Release, addr 0x1804d26c0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_SessionDetails_Info_Release(::System::IntPtr  sessionInfo) ;

/// @brief Method EOS_SessionDetails_Release, addr 0x1804d2740, size 0x80, virtual false, abstract: false, final false
static inline void EOS_SessionDetails_Release(::System::IntPtr  sessionHandle) ;

/// @brief Method EOS_SessionModification_AddAttribute, addr 0x1804d27c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_AddAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_Release, addr 0x1804d2850, size 0x80, virtual false, abstract: false, final false
static inline void EOS_SessionModification_Release(::System::IntPtr  sessionModificationHandle) ;

/// @brief Method EOS_SessionModification_RemoveAttribute, addr 0x1804d28d0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_RemoveAttribute(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetAllowedPlatformIds, addr 0x1804d2960, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetAllowedPlatformIds(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetBucketId, addr 0x1804d29f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetBucketId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetHostAddress, addr 0x1804d2a80, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetHostAddress(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetInvitesAllowed, addr 0x1804d2b10, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetInvitesAllowed(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetJoinInProgressAllowed, addr 0x1804d2ba0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetJoinInProgressAllowed(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetMaxPlayers, addr 0x1804d2c30, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetMaxPlayers(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal>  options) ;

/// @brief Method EOS_SessionModification_SetPermissionLevel, addr 0x1804d2cc0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionModification_SetPermissionLevel(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_CopySearchResultByIndex, addr 0x1804d2d50, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_CopySearchResultByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionHandle) ;

/// @brief Method EOS_SessionSearch_Find, addr 0x1804d2df0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_SessionSearch_Find(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_SessionSearch_GetSearchResultCount, addr 0x1804d2ea0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_SessionSearch_GetSearchResultCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_Release, addr 0x1804d2f30, size 0x80, virtual false, abstract: false, final false
static inline void EOS_SessionSearch_Release(::System::IntPtr  sessionSearchHandle) ;

/// @brief Method EOS_SessionSearch_RemoveParameter, addr 0x1804d2fb0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_RemoveParameter(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_SetMaxResults, addr 0x1804d3040, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_SetMaxResults(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_SetParameter, addr 0x1804d30d0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_SetParameter(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_SetSessionId, addr 0x1804d3160, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_SetSessionId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptionsInternal>  options) ;

/// @brief Method EOS_SessionSearch_SetTargetUserId, addr 0x1804d31f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_SessionSearch_SetTargetUserId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptionsInternal>  options) ;

/// @brief Method EOS_Sessions_AddNotifyJoinSessionAccepted, addr 0x1804d3280, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifyJoinSessionAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_AddNotifyLeaveSessionRequested, addr 0x1804d3330, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifyLeaveSessionRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_AddNotifySendSessionNativeInviteRequested, addr 0x1804d33e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifySendSessionNativeInviteRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_AddNotifySessionInviteAccepted, addr 0x1804d3490, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifySessionInviteAccepted(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_AddNotifySessionInviteReceived, addr 0x1804d3540, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifySessionInviteReceived(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_AddNotifySessionInviteRejected, addr 0x1804d35f0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_Sessions_AddNotifySessionInviteRejected(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_Sessions_CopyActiveSessionHandle, addr 0x1804d36a0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CopyActiveSessionHandle(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionHandle) ;

/// @brief Method EOS_Sessions_CopySessionHandleByInviteId, addr 0x1804d3740, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CopySessionHandleByInviteId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionHandle) ;

/// @brief Method EOS_Sessions_CopySessionHandleByUiEventId, addr 0x1804d37e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CopySessionHandleByUiEventId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionHandle) ;

/// @brief Method EOS_Sessions_CopySessionHandleForPresence, addr 0x1804d3880, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CopySessionHandleForPresence(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionHandle) ;

/// @brief Method EOS_Sessions_CreateSessionModification, addr 0x1804d3920, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CreateSessionModification(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionModificationHandle) ;

/// @brief Method EOS_Sessions_CreateSessionSearch, addr 0x1804d39c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_CreateSessionSearch(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionSearchHandle) ;

/// @brief Method EOS_Sessions_DestroySession, addr 0x1804d3a60, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_DestroySession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_DumpSessionState, addr 0x1804d3b10, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_DumpSessionState(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptionsInternal>  options) ;

/// @brief Method EOS_Sessions_EndSession, addr 0x1804d3ba0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_EndSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnEndSessionCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_GetInviteCount, addr 0x1804d3c50, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Sessions_GetInviteCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptionsInternal>  options) ;

/// @brief Method EOS_Sessions_GetInviteIdByIndex, addr 0x1804d3ce0, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_GetInviteIdByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptionsInternal>  options, ::System::IntPtr  outBuffer, ::by_ref<int32_t>  inOutBufferLength) ;

/// @brief Method EOS_Sessions_IsUserInSession, addr 0x1804d3d90, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_IsUserInSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptionsInternal>  options) ;

/// @brief Method EOS_Sessions_JoinSession, addr 0x1804d3e20, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_JoinSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_QueryInvites, addr 0x1804d3ed0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_QueryInvites(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_RegisterPlayers, addr 0x1804d3f80, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_RegisterPlayers(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_RejectInvite, addr 0x1804d4030, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_RejectInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_RemoveNotifyJoinSessionAccepted, addr 0x1804d40e0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifyJoinSessionAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_RemoveNotifyLeaveSessionRequested, addr 0x1804d4170, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifyLeaveSessionRequested(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_RemoveNotifySendSessionNativeInviteRequested, addr 0x1804d4200, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifySendSessionNativeInviteRequested(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_RemoveNotifySessionInviteAccepted, addr 0x1804d4290, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifySessionInviteAccepted(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_RemoveNotifySessionInviteReceived, addr 0x1804d4320, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifySessionInviteReceived(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_RemoveNotifySessionInviteRejected, addr 0x1804d43b0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_Sessions_RemoveNotifySessionInviteRejected(::System::IntPtr  handle, uint64_t  inId) ;

/// @brief Method EOS_Sessions_SendInvite, addr 0x1804d4440, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_SendInvite(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnSendInviteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_StartSession, addr 0x1804d44f0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_StartSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_UnregisterPlayers, addr 0x1804d45a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_UnregisterPlayers(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_UpdateSession, addr 0x1804d46f0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Sessions_UpdateSession(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Sessions_UpdateSessionModification, addr 0x1804d4650, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Sessions_UpdateSessionModification(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptionsInternal>  options, ::by_ref<::System::IntPtr>  outSessionModificationHandle) ;

/// @brief Method EOS_Shutdown, addr 0x1804d47a0, size 0x70, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Shutdown() ;

/// @brief Method EOS_Stats_CopyStatByIndex, addr 0x1804d4810, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Stats_CopyStatByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outStat) ;

/// @brief Method EOS_Stats_CopyStatByName, addr 0x1804d48b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_Stats_CopyStatByName(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptionsInternal>  options, ::by_ref<::System::IntPtr>  outStat) ;

/// @brief Method EOS_Stats_GetStatsCount, addr 0x1804d4950, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_Stats_GetStatsCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptionsInternal>  options) ;

/// @brief Method EOS_Stats_IngestStat, addr 0x1804d49e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Stats_IngestStat(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Stats::IngestStatOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Stats_QueryStats, addr 0x1804d4a90, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_Stats_QueryStats(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_Stats_Stat_Release, addr 0x1804d4b40, size 0x80, virtual false, abstract: false, final false
static inline void EOS_Stats_Stat_Release(::System::IntPtr  stat) ;

/// @brief Method EOS_TitleStorageFileTransferRequest_CancelRequest, addr 0x1804d4bc0, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorageFileTransferRequest_CancelRequest(::System::IntPtr  handle) ;

/// @brief Method EOS_TitleStorageFileTransferRequest_GetFileRequestState, addr 0x1804d4c40, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorageFileTransferRequest_GetFileRequestState(::System::IntPtr  handle) ;

/// @brief Method EOS_TitleStorageFileTransferRequest_GetFilename, addr 0x1804d4cc0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorageFileTransferRequest_GetFilename(::System::IntPtr  handle, uint32_t  filenameStringBufferSizeBytes, ::System::IntPtr  outStringBuffer, ::by_ref<int32_t>  outStringLength) ;

/// @brief Method EOS_TitleStorageFileTransferRequest_Release, addr 0x1804d4d60, size 0x80, virtual false, abstract: false, final false
static inline void EOS_TitleStorageFileTransferRequest_Release(::System::IntPtr  titleStorageFileTransferHandle) ;

/// @brief Method EOS_TitleStorage_CopyFileMetadataAtIndex, addr 0x1804d4de0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorage_CopyFileMetadataAtIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outMetadata) ;

/// @brief Method EOS_TitleStorage_CopyFileMetadataByFilename, addr 0x1804d4e80, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorage_CopyFileMetadataByFilename(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptionsInternal>  options, ::by_ref<::System::IntPtr>  outMetadata) ;

/// @brief Method EOS_TitleStorage_DeleteCache, addr 0x1804d4f20, size 0xb0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_TitleStorage_DeleteCache(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_TitleStorage_FileMetadata_Release, addr 0x1804d4fd0, size 0x80, virtual false, abstract: false, final false
static inline void EOS_TitleStorage_FileMetadata_Release(::System::IntPtr  fileMetadata) ;

/// @brief Method EOS_TitleStorage_GetFileMetadataCount, addr 0x1804d5050, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_TitleStorage_GetFileMetadataCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptionsInternal>  options) ;

/// @brief Method EOS_TitleStorage_QueryFile, addr 0x1804d5190, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_TitleStorage_QueryFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_TitleStorage_QueryFileList, addr 0x1804d50e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_TitleStorage_QueryFileList(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_TitleStorage_ReadFile, addr 0x1804d5240, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_TitleStorage_ReadFile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*  completionCallback) ;

/// @brief Method EOS_UI_AcknowledgeEventId, addr 0x1804d52f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_AcknowledgeEventId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal>  options) ;

/// @brief Method EOS_UI_AddNotifyDisplaySettingsUpdated, addr 0x1804d5380, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_UI_AddNotifyDisplaySettingsUpdated(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_UI_AddNotifyMemoryMonitor, addr 0x1804d5430, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_UI_AddNotifyMemoryMonitor(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*  notificationFn) ;

/// @brief Method EOS_UI_AddNotifyOnScreenKeyboardRequested, addr 0x1804d54e0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t EOS_UI_AddNotifyOnScreenKeyboardRequested(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*  notificationFn) ;

/// @brief Method EOS_UI_ConfigureOnScreenKeyboard, addr 0x1804d5590, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_ConfigureOnScreenKeyboard(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal>  options) ;

/// @brief Method EOS_UI_GetFriendsExclusiveInput, addr 0x1804d5620, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_UI_GetFriendsExclusiveInput(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptionsInternal>  options) ;

/// @brief Method EOS_UI_GetFriendsVisible, addr 0x1804d56b0, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_UI_GetFriendsVisible(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptionsInternal>  options) ;

/// @brief Method EOS_UI_GetNotificationLocationPreference, addr 0x1804d5740, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::NotificationLocation EOS_UI_GetNotificationLocationPreference(::System::IntPtr  handle) ;

/// @brief Method EOS_UI_GetToggleFriendsButton, addr 0x1804d57c0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::InputStateButtonFlags EOS_UI_GetToggleFriendsButton(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptionsInternal>  options) ;

/// @brief Method EOS_UI_GetToggleFriendsKey, addr 0x1804d5850, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::KeyCombination EOS_UI_GetToggleFriendsKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptionsInternal>  options) ;

/// @brief Method EOS_UI_HideFriends, addr 0x1804d58e0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UI_HideFriends(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::HideFriendsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UI_IsSocialOverlayPaused, addr 0x1804d5990, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_UI_IsSocialOverlayPaused(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptionsInternal>  options) ;

/// @brief Method EOS_UI_IsValidButtonCombination, addr 0x1804d5a20, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_UI_IsValidButtonCombination(::System::IntPtr  handle, ::Epic::OnlineServices::UI::InputStateButtonFlags  buttonCombination) ;

/// @brief Method EOS_UI_IsValidKeyCombination, addr 0x1804d5ab0, size 0x90, virtual false, abstract: false, final false
static inline int32_t EOS_UI_IsValidKeyCombination(::System::IntPtr  handle, ::Epic::OnlineServices::UI::KeyCombination  keyCombination) ;

/// @brief Method EOS_UI_PauseSocialOverlay, addr 0x1804d5b40, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_PauseSocialOverlay(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptionsInternal>  options) ;

/// @brief Method EOS_UI_PrePresent, addr 0x1804d5bd0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_PrePresent(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::PrePresentOptionsInternal>  options) ;

/// @brief Method EOS_UI_RemoveNotifyDisplaySettingsUpdated, addr 0x1804d5c60, size 0x90, virtual false, abstract: false, final false
static inline void EOS_UI_RemoveNotifyDisplaySettingsUpdated(::System::IntPtr  handle, uint64_t  id) ;

/// @brief Method EOS_UI_RemoveNotifyMemoryMonitor, addr 0x1804d5cf0, size 0x90, virtual false, abstract: false, final false
static inline void EOS_UI_RemoveNotifyMemoryMonitor(::System::IntPtr  handle, uint64_t  id) ;

/// @brief Method EOS_UI_RemoveNotifyOnScreenKeyboardRequested, addr 0x1804d5d80, size 0x90, virtual false, abstract: false, final false
static inline void EOS_UI_RemoveNotifyOnScreenKeyboardRequested(::System::IntPtr  handle, uint64_t  id) ;

/// @brief Method EOS_UI_ReportInputState, addr 0x1804d5e10, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_ReportInputState(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptionsInternal>  options) ;

/// @brief Method EOS_UI_SetDisplayPreference, addr 0x1804d5ea0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_SetDisplayPreference(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal>  options) ;

/// @brief Method EOS_UI_SetToggleFriendsButton, addr 0x1804d5f30, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_SetToggleFriendsButton(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal>  options) ;

/// @brief Method EOS_UI_SetToggleFriendsKey, addr 0x1804d5fc0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UI_SetToggleFriendsKey(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptionsInternal>  options) ;

/// @brief Method EOS_UI_ShowBlockPlayer, addr 0x1804d6050, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UI_ShowBlockPlayer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UI_ShowFriends, addr 0x1804d6100, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UI_ShowFriends(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UI_ShowNativeProfile, addr 0x1804d61b0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UI_ShowNativeProfile(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UI_ShowReportPlayer, addr 0x1804d6260, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UI_ShowReportPlayer(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UserInfo_BestDisplayName_Release, addr 0x1804d6310, size 0x80, virtual false, abstract: false, final false
static inline void EOS_UserInfo_BestDisplayName_Release(::System::IntPtr  bestDisplayName) ;

/// @brief Method EOS_UserInfo_CopyBestDisplayName, addr 0x1804d6430, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyBestDisplayName(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptionsInternal>  options, ::by_ref<::System::IntPtr>  outBestDisplayName) ;

/// @brief Method EOS_UserInfo_CopyBestDisplayNameWithPlatform, addr 0x1804d6390, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyBestDisplayNameWithPlatform(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptionsInternal>  options, ::by_ref<::System::IntPtr>  outBestDisplayName) ;

/// @brief Method EOS_UserInfo_CopyExternalUserInfoByAccountId, addr 0x1804d64d0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyExternalUserInfoByAccountId(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalUserInfo) ;

/// @brief Method EOS_UserInfo_CopyExternalUserInfoByAccountType, addr 0x1804d6570, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyExternalUserInfoByAccountType(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalUserInfo) ;

/// @brief Method EOS_UserInfo_CopyExternalUserInfoByIndex, addr 0x1804d6610, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyExternalUserInfoByIndex(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptionsInternal>  options, ::by_ref<::System::IntPtr>  outExternalUserInfo) ;

/// @brief Method EOS_UserInfo_CopyUserInfo, addr 0x1804d66b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_UserInfo_CopyUserInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptionsInternal>  options, ::by_ref<::System::IntPtr>  outUserInfo) ;

/// @brief Method EOS_UserInfo_ExternalUserInfo_Release, addr 0x1804d6750, size 0x80, virtual false, abstract: false, final false
static inline void EOS_UserInfo_ExternalUserInfo_Release(::System::IntPtr  externalUserInfo) ;

/// @brief Method EOS_UserInfo_GetExternalUserInfoCount, addr 0x1804d67d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_UserInfo_GetExternalUserInfoCount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptionsInternal>  options) ;

/// @brief Method EOS_UserInfo_GetLocalPlatformType, addr 0x1804d6860, size 0x90, virtual false, abstract: false, final false
static inline uint32_t EOS_UserInfo_GetLocalPlatformType(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptionsInternal>  options) ;

/// @brief Method EOS_UserInfo_QueryUserInfo, addr 0x1804d6a50, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UserInfo_QueryUserInfo(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UserInfo_QueryUserInfoByDisplayName, addr 0x1804d68f0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UserInfo_QueryUserInfoByDisplayName(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UserInfo_QueryUserInfoByExternalAccount, addr 0x1804d69a0, size 0xb0, virtual false, abstract: false, final false
static inline void EOS_UserInfo_QueryUserInfoByExternalAccount(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptionsInternal>  options, ::System::IntPtr  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*  completionDelegate) ;

/// @brief Method EOS_UserInfo_Release, addr 0x1804d6b00, size 0x80, virtual false, abstract: false, final false
static inline void EOS_UserInfo_Release(::System::IntPtr  userInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings(Bindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings(Bindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Bindings) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
