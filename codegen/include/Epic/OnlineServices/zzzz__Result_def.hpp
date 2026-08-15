#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Result)
// Forward declare root types
namespace Epic::OnlineServices {
struct Result;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Result);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Result, "Epic.OnlineServices", "Result");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.Result
struct CORDL_TYPE Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Result_Unwrapped
enum struct __Result_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_NoConnection = static_cast<int32_t>(0x1),
__E_InvalidCredentials = static_cast<int32_t>(0x2),
__E_InvalidUser = static_cast<int32_t>(0x3),
__E_InvalidAuth = static_cast<int32_t>(0x4),
__E_AccessDenied = static_cast<int32_t>(0x5),
__E_MissingPermissions = static_cast<int32_t>(0x6),
__E_TokenNotAccount = static_cast<int32_t>(0x7),
__E_TooManyRequests = static_cast<int32_t>(0x8),
__E_AlreadyPending = static_cast<int32_t>(0x9),
__E_InvalidParameters = static_cast<int32_t>(0xa),
__E_InvalidRequest = static_cast<int32_t>(0xb),
__E_UnrecognizedResponse = static_cast<int32_t>(0xc),
__E_IncompatibleVersion = static_cast<int32_t>(0xd),
__E_NotConfigured = static_cast<int32_t>(0xe),
__E_AlreadyConfigured = static_cast<int32_t>(0xf),
__E_NotImplemented = static_cast<int32_t>(0x10),
__E_Canceled = static_cast<int32_t>(0x11),
__E_NotFound = static_cast<int32_t>(0x12),
__E_OperationWillRetry = static_cast<int32_t>(0x13),
__E_NoChange = static_cast<int32_t>(0x14),
__E_VersionMismatch = static_cast<int32_t>(0x15),
__E_LimitExceeded = static_cast<int32_t>(0x16),
__E_Disabled = static_cast<int32_t>(0x17),
__E_DuplicateNotAllowed = static_cast<int32_t>(0x18),
__E_MissingParametersDeprecated = static_cast<int32_t>(0x19),
__E_InvalidSandboxId = static_cast<int32_t>(0x1a),
__E_TimedOut = static_cast<int32_t>(0x1b),
__E_PartialResult = static_cast<int32_t>(0x1c),
__E_MissingRole = static_cast<int32_t>(0x1d),
__E_MissingFeature = static_cast<int32_t>(0x1e),
__E_InvalidSandbox = static_cast<int32_t>(0x1f),
__E_InvalidDeployment = static_cast<int32_t>(0x20),
__E_InvalidProduct = static_cast<int32_t>(0x21),
__E_InvalidProductUserID = static_cast<int32_t>(0x22),
__E_ServiceFailure = static_cast<int32_t>(0x23),
__E_CacheDirectoryMissing = static_cast<int32_t>(0x24),
__E_CacheDirectoryInvalid = static_cast<int32_t>(0x25),
__E_InvalidState = static_cast<int32_t>(0x26),
__E_RequestInProgress = static_cast<int32_t>(0x27),
__E_ApplicationSuspended = static_cast<int32_t>(0x28),
__E_NetworkDisconnected = static_cast<int32_t>(0x29),
__E_InsufficientOutputBuffer = static_cast<int32_t>(0x2a),
__E_ClientPolicyMissingAction = static_cast<int32_t>(0x2b),
__E_AuthAccountLocked = static_cast<int32_t>(0x3e9),
__E_AuthAccountLockedForUpdate = static_cast<int32_t>(0x3ea),
__E_AuthInvalidRefreshToken = static_cast<int32_t>(0x3eb),
__E_AuthInvalidToken = static_cast<int32_t>(0x3ec),
__E_AuthAuthenticationFailure = static_cast<int32_t>(0x3ed),
__E_AuthInvalidPlatformToken = static_cast<int32_t>(0x3ee),
__E_AuthWrongAccount = static_cast<int32_t>(0x3ef),
__E_AuthWrongClient = static_cast<int32_t>(0x3f0),
__E_AuthFullAccountRequired = static_cast<int32_t>(0x3f1),
__E_AuthHeadlessAccountRequired = static_cast<int32_t>(0x3f2),
__E_AuthPasswordResetRequired = static_cast<int32_t>(0x3f3),
__E_AuthPasswordCannotBeReused = static_cast<int32_t>(0x3f4),
__E_AuthExpired = static_cast<int32_t>(0x3f5),
__E_AuthScopeConsentRequired = static_cast<int32_t>(0x3f6),
__E_AuthApplicationNotFound = static_cast<int32_t>(0x3f7),
__E_AuthScopeNotFound = static_cast<int32_t>(0x3f8),
__E_AuthAccountFeatureRestricted = static_cast<int32_t>(0x3f9),
__E_AuthAccountPortalLoadError = static_cast<int32_t>(0x3fa),
__E_AuthCorrectiveActionRequired = static_cast<int32_t>(0x3fb),
__E_AuthPinGrantCode = static_cast<int32_t>(0x3fc),
__E_AuthPinGrantExpired = static_cast<int32_t>(0x3fd),
__E_AuthPinGrantPending = static_cast<int32_t>(0x3fe),
__E_AuthExternalAuthNotLinked = static_cast<int32_t>(0x406),
__E_AuthExternalAuthRevoked = static_cast<int32_t>(0x408),
__E_AuthExternalAuthInvalid = static_cast<int32_t>(0x409),
__E_AuthExternalAuthRestricted = static_cast<int32_t>(0x40a),
__E_AuthExternalAuthCannotLogin = static_cast<int32_t>(0x40b),
__E_AuthExternalAuthExpired = static_cast<int32_t>(0x40c),
__E_AuthExternalAuthIsLastLoginType = static_cast<int32_t>(0x40d),
__E_AuthExchangeCodeNotFound = static_cast<int32_t>(0x410),
__E_AuthOriginatingExchangeCodeSessionExpired = static_cast<int32_t>(0x411),
__E_AuthAccountNotActive = static_cast<int32_t>(0x41a),
__E_AuthMFARequired = static_cast<int32_t>(0x424),
__E_AuthParentalControls = static_cast<int32_t>(0x42e),
__E_AuthNoRealId = static_cast<int32_t>(0x438),
__E_AuthUserInterfaceRequired = static_cast<int32_t>(0x442),
__E_FriendsInviteAwaitingAcceptance = static_cast<int32_t>(0x7d0),
__E_FriendsNoInvitation = static_cast<int32_t>(0x7d1),
__E_FriendsAlreadyFriends = static_cast<int32_t>(0x7d3),
__E_FriendsNotFriends = static_cast<int32_t>(0x7d4),
__E_FriendsTargetUserTooManyInvites = static_cast<int32_t>(0x7d5),
__E_FriendsLocalUserTooManyInvites = static_cast<int32_t>(0x7d6),
__E_FriendsTargetUserFriendLimitExceeded = static_cast<int32_t>(0x7d7),
__E_FriendsLocalUserFriendLimitExceeded = static_cast<int32_t>(0x7d8),
__E_PresenceDataInvalid = static_cast<int32_t>(0xbb8),
__E_PresenceDataLengthInvalid = static_cast<int32_t>(0xbb9),
__E_PresenceDataKeyInvalid = static_cast<int32_t>(0xbba),
__E_PresenceDataKeyLengthInvalid = static_cast<int32_t>(0xbbb),
__E_PresenceDataValueInvalid = static_cast<int32_t>(0xbbc),
__E_PresenceDataValueLengthInvalid = static_cast<int32_t>(0xbbd),
__E_PresenceRichTextInvalid = static_cast<int32_t>(0xbbe),
__E_PresenceRichTextLengthInvalid = static_cast<int32_t>(0xbbf),
__E_PresenceStatusInvalid = static_cast<int32_t>(0xbc0),
__E_PresenceRichTextNotSupported = static_cast<int32_t>(0xbc1),
__E_PresenceTemplateNotSupported = static_cast<int32_t>(0xbc2),
__E_PresenceTemplateIdInvalid = static_cast<int32_t>(0xbc3),
__E_PresenceTemplateTypeInvalid = static_cast<int32_t>(0xbc4),
__E_PresenceTemplateKeyInvalid = static_cast<int32_t>(0xbc5),
__E_PresenceTemplateValueInvalid = static_cast<int32_t>(0xbc6),
__E_PresenceTemplateNotFound = static_cast<int32_t>(0xbc7),
__E_PresenceTemplateInvalidVariableInput = static_cast<int32_t>(0xbc8),
__E_PresenceTemplateLocalizationServerError = static_cast<int32_t>(0xbc9),
__E_PresenceTemplateUnknownError = static_cast<int32_t>(0xbca),
__E_EcomEntitlementStale = static_cast<int32_t>(0xfa0),
__E_EcomCatalogOfferStale = static_cast<int32_t>(0xfa1),
__E_EcomCatalogItemStale = static_cast<int32_t>(0xfa2),
__E_EcomCatalogOfferPriceInvalid = static_cast<int32_t>(0xfa3),
__E_EcomCheckoutLoadError = static_cast<int32_t>(0xfa4),
__E_EcomPurchaseProcessing = static_cast<int32_t>(0xfa5),
__E_SessionsSessionInProgress = static_cast<int32_t>(0x1388),
__E_SessionsTooManyPlayers = static_cast<int32_t>(0x1389),
__E_SessionsNoPermission = static_cast<int32_t>(0x138a),
__E_SessionsSessionAlreadyExists = static_cast<int32_t>(0x138b),
__E_SessionsInvalidLock = static_cast<int32_t>(0x138c),
__E_SessionsInvalidSession = static_cast<int32_t>(0x138d),
__E_SessionsSandboxNotAllowed = static_cast<int32_t>(0x138e),
__E_SessionsInviteFailed = static_cast<int32_t>(0x138f),
__E_SessionsInviteNotFound = static_cast<int32_t>(0x1390),
__E_SessionsUpsertNotAllowed = static_cast<int32_t>(0x1391),
__E_SessionsAggregationFailed = static_cast<int32_t>(0x1392),
__E_SessionsHostAtCapacity = static_cast<int32_t>(0x1393),
__E_SessionsSandboxAtCapacity = static_cast<int32_t>(0x1394),
__E_SessionsSessionNotAnonymous = static_cast<int32_t>(0x1395),
__E_SessionsOutOfSync = static_cast<int32_t>(0x1396),
__E_SessionsTooManyInvites = static_cast<int32_t>(0x1397),
__E_SessionsPresenceSessionExists = static_cast<int32_t>(0x1398),
__E_SessionsDeploymentAtCapacity = static_cast<int32_t>(0x1399),
__E_SessionsNotAllowed = static_cast<int32_t>(0x139a),
__E_SessionsPlayerSanctioned = static_cast<int32_t>(0x139b),
__E_PlayerDataStorageFilenameInvalid = static_cast<int32_t>(0x1770),
__E_PlayerDataStorageFilenameLengthInvalid = static_cast<int32_t>(0x1771),
__E_PlayerDataStorageFilenameInvalidChars = static_cast<int32_t>(0x1772),
__E_PlayerDataStorageFileSizeTooLarge = static_cast<int32_t>(0x1773),
__E_PlayerDataStorageFileSizeInvalid = static_cast<int32_t>(0x1774),
__E_PlayerDataStorageFileHandleInvalid = static_cast<int32_t>(0x1775),
__E_PlayerDataStorageDataInvalid = static_cast<int32_t>(0x1776),
__E_PlayerDataStorageDataLengthInvalid = static_cast<int32_t>(0x1777),
__E_PlayerDataStorageStartIndexInvalid = static_cast<int32_t>(0x1778),
__E_PlayerDataStorageRequestInProgress = static_cast<int32_t>(0x1779),
__E_PlayerDataStorageUserThrottled = static_cast<int32_t>(0x177a),
__E_PlayerDataStorageEncryptionKeyNotSet = static_cast<int32_t>(0x177b),
__E_PlayerDataStorageUserErrorFromDataCallback = static_cast<int32_t>(0x177c),
__E_PlayerDataStorageFileHeaderHasNewerVersion = static_cast<int32_t>(0x177d),
__E_PlayerDataStorageFileCorrupted = static_cast<int32_t>(0x177e),
__E_ConnectExternalTokenValidationFailed = static_cast<int32_t>(0x1b58),
__E_ConnectUserAlreadyExists = static_cast<int32_t>(0x1b59),
__E_ConnectAuthExpired = static_cast<int32_t>(0x1b5a),
__E_ConnectInvalidToken = static_cast<int32_t>(0x1b5b),
__E_ConnectUnsupportedTokenType = static_cast<int32_t>(0x1b5c),
__E_ConnectLinkAccountFailed = static_cast<int32_t>(0x1b5d),
__E_ConnectExternalServiceUnavailable = static_cast<int32_t>(0x1b5e),
__E_ConnectExternalServiceConfigurationFailure = static_cast<int32_t>(0x1b5f),
__E_ConnectLinkAccountFailedMissingNintendoIdAccountDeprecated = static_cast<int32_t>(0x1b60),
__E_SocialOverlayLoadError = static_cast<int32_t>(0x1f40),
__E_InconsistentVirtualMemoryFunctions = static_cast<int32_t>(0x1f41),
__E_LobbyNotOwner = static_cast<int32_t>(0x2328),
__E_LobbyInvalidLock = static_cast<int32_t>(0x2329),
__E_LobbyLobbyAlreadyExists = static_cast<int32_t>(0x232a),
__E_LobbySessionInProgress = static_cast<int32_t>(0x232b),
__E_LobbyTooManyPlayers = static_cast<int32_t>(0x232c),
__E_LobbyNoPermission = static_cast<int32_t>(0x232d),
__E_LobbyInvalidSession = static_cast<int32_t>(0x232e),
__E_LobbySandboxNotAllowed = static_cast<int32_t>(0x232f),
__E_LobbyInviteFailed = static_cast<int32_t>(0x2330),
__E_LobbyInviteNotFound = static_cast<int32_t>(0x2331),
__E_LobbyUpsertNotAllowed = static_cast<int32_t>(0x2332),
__E_LobbyAggregationFailed = static_cast<int32_t>(0x2333),
__E_LobbyHostAtCapacity = static_cast<int32_t>(0x2334),
__E_LobbySandboxAtCapacity = static_cast<int32_t>(0x2335),
__E_LobbyTooManyInvites = static_cast<int32_t>(0x2336),
__E_LobbyDeploymentAtCapacity = static_cast<int32_t>(0x2337),
__E_LobbyNotAllowed = static_cast<int32_t>(0x2338),
__E_LobbyMemberUpdateOnly = static_cast<int32_t>(0x2339),
__E_LobbyPresenceLobbyExists = static_cast<int32_t>(0x233a),
__E_LobbyVoiceNotEnabled = static_cast<int32_t>(0x233b),
__E_LobbyPlatformNotAllowed = static_cast<int32_t>(0x233c),
__E_TitleStorageUserErrorFromDataCallback = static_cast<int32_t>(0x2710),
__E_TitleStorageEncryptionKeyNotSet = static_cast<int32_t>(0x2711),
__E_TitleStorageFileCorrupted = static_cast<int32_t>(0x2712),
__E_TitleStorageFileHeaderHasNewerVersion = static_cast<int32_t>(0x2713),
__E_ModsModSdkProcessIsAlreadyRunning = static_cast<int32_t>(0x2af8),
__E_ModsModSdkCommandIsEmpty = static_cast<int32_t>(0x2af9),
__E_ModsModSdkProcessCreationFailed = static_cast<int32_t>(0x2afa),
__E_ModsCriticalError = static_cast<int32_t>(0x2afb),
__E_ModsToolInternalError = static_cast<int32_t>(0x2afc),
__E_ModsIPCFailure = static_cast<int32_t>(0x2afd),
__E_ModsInvalidIPCResponse = static_cast<int32_t>(0x2afe),
__E_ModsURILaunchFailure = static_cast<int32_t>(0x2aff),
__E_ModsModIsNotInstalled = static_cast<int32_t>(0x2b00),
__E_ModsUserDoesNotOwnTheGame = static_cast<int32_t>(0x2b01),
__E_ModsOfferRequestByIdInvalidResult = static_cast<int32_t>(0x2b02),
__E_ModsCouldNotFindOffer = static_cast<int32_t>(0x2b03),
__E_ModsOfferRequestByIdFailure = static_cast<int32_t>(0x2b04),
__E_ModsPurchaseFailure = static_cast<int32_t>(0x2b05),
__E_ModsInvalidGameInstallInfo = static_cast<int32_t>(0x2b06),
__E_ModsCannotGetManifestLocation = static_cast<int32_t>(0x2b07),
__E_ModsUnsupportedOS = static_cast<int32_t>(0x2b08),
__E_AntiCheatClientProtectionNotAvailable = static_cast<int32_t>(0x2ee0),
__E_AntiCheatInvalidMode = static_cast<int32_t>(0x2ee1),
__E_AntiCheatClientProductIdMismatch = static_cast<int32_t>(0x2ee2),
__E_AntiCheatClientSandboxIdMismatch = static_cast<int32_t>(0x2ee3),
__E_AntiCheatProtectMessageSessionKeyRequired = static_cast<int32_t>(0x2ee4),
__E_AntiCheatProtectMessageValidationFailed = static_cast<int32_t>(0x2ee5),
__E_AntiCheatProtectMessageInitializationFailed = static_cast<int32_t>(0x2ee6),
__E_AntiCheatPeerAlreadyRegistered = static_cast<int32_t>(0x2ee7),
__E_AntiCheatPeerNotFound = static_cast<int32_t>(0x2ee8),
__E_AntiCheatPeerNotProtected = static_cast<int32_t>(0x2ee9),
__E_AntiCheatClientDeploymentIdMismatch = static_cast<int32_t>(0x2eea),
__E_AntiCheatDeviceIdAuthIsNotSupported = static_cast<int32_t>(0x2eeb),
__E_TooManyParticipants = static_cast<int32_t>(0x32c8),
__E_RoomAlreadyExists = static_cast<int32_t>(0x32c9),
__E_UserKicked = static_cast<int32_t>(0x32ca),
__E_UserBanned = static_cast<int32_t>(0x32cb),
__E_RoomWasLeft = static_cast<int32_t>(0x32cc),
__E_ReconnectionTimegateExpired = static_cast<int32_t>(0x32cd),
__E_ShutdownInvoked = static_cast<int32_t>(0x32ce),
__E_UserIsInBlocklist = static_cast<int32_t>(0x32cf),
__E_AllocationFailed = static_cast<int32_t>(0x32d1),
__E_VoiceModerationModeMismatch = static_cast<int32_t>(0x32d2),
__E_EmptyRecord = static_cast<int32_t>(0x32d3),
__E_RoomOptionsMismatch = static_cast<int32_t>(0x32d4),
__E_ProgressionSnapshotSnapshotIdUnavailable = static_cast<int32_t>(0x36b0),
__E_ParentEmailMissing = static_cast<int32_t>(0x3a98),
__E_UserGraduated = static_cast<int32_t>(0x3a99),
__E_AndroidJavaVMNotStored = static_cast<int32_t>(0x4268),
__E_AndroidReservedMustReferenceLocalVM = static_cast<int32_t>(0x4269),
__E_AndroidReservedMustBeNull = static_cast<int32_t>(0x426a),
__E_PermissionRequiredPatchAvailable = static_cast<int32_t>(0x4650),
__E_PermissionRequiredSystemUpdate = static_cast<int32_t>(0x4651),
__E_PermissionAgeRestrictionFailure = static_cast<int32_t>(0x4652),
__E_PermissionAccountTypeFailure = static_cast<int32_t>(0x4653),
__E_PermissionChatRestriction = static_cast<int32_t>(0x4654),
__E_PermissionUGCRestriction = static_cast<int32_t>(0x4655),
__E_PermissionOnlinePlayRestricted = static_cast<int32_t>(0x4656),
__E_DesktopCrossplayApplicationNotBootstrapped = static_cast<int32_t>(0x4a38),
__E_DesktopCrossplayServiceNotInstalled = static_cast<int32_t>(0x4a39),
__E_DesktopCrossplayServiceStartFailed = static_cast<int32_t>(0x4a3a),
__E_DesktopCrossplayServiceNotRunning = static_cast<int32_t>(0x4a3b),
__E_CustomInvitesInviteFailed = static_cast<int32_t>(0x4e20),
__E_UserInfoBestDisplayNameIndeterminate = static_cast<int32_t>(0x55f0),
__E_ConsoleInitOnNetworkRequestedDeprecatedCallbackNotSet = static_cast<int32_t>(0x59d8),
__E_ConsoleInitCacheStorageSizeKBNotMultipleOf16 = static_cast<int32_t>(0x59d9),
__E_ConsoleInitCacheStorageSizeKBBelowMinimumSize = static_cast<int32_t>(0x59da),
__E_ConsoleInitCacheStorageSizeKBExceedsMaximumSize = static_cast<int32_t>(0x59db),
__E_ConsoleInitCacheStorageIndexOutOfRangeRange = static_cast<int32_t>(0x59dc),
__E_UnexpectedError = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Result_Unwrapped () const noexcept {
return static_cast<__Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Result(int32_t  value__) noexcept;

/// @brief Field AccessDenied value: I32(5)
static ::Epic::OnlineServices::Result const AccessDenied;

/// @brief Field AllocationFailed value: I32(13009)
static ::Epic::OnlineServices::Result const AllocationFailed;

/// @brief Field AlreadyConfigured value: I32(15)
static ::Epic::OnlineServices::Result const AlreadyConfigured;

/// @brief Field AlreadyPending value: I32(9)
static ::Epic::OnlineServices::Result const AlreadyPending;

/// @brief Field AndroidJavaVMNotStored value: I32(17000)
static ::Epic::OnlineServices::Result const AndroidJavaVMNotStored;

/// @brief Field AndroidReservedMustBeNull value: I32(17002)
static ::Epic::OnlineServices::Result const AndroidReservedMustBeNull;

/// @brief Field AndroidReservedMustReferenceLocalVM value: I32(17001)
static ::Epic::OnlineServices::Result const AndroidReservedMustReferenceLocalVM;

/// @brief Field AntiCheatClientDeploymentIdMismatch value: I32(12010)
static ::Epic::OnlineServices::Result const AntiCheatClientDeploymentIdMismatch;

/// @brief Field AntiCheatClientProductIdMismatch value: I32(12002)
static ::Epic::OnlineServices::Result const AntiCheatClientProductIdMismatch;

/// @brief Field AntiCheatClientProtectionNotAvailable value: I32(12000)
static ::Epic::OnlineServices::Result const AntiCheatClientProtectionNotAvailable;

/// @brief Field AntiCheatClientSandboxIdMismatch value: I32(12003)
static ::Epic::OnlineServices::Result const AntiCheatClientSandboxIdMismatch;

/// @brief Field AntiCheatDeviceIdAuthIsNotSupported value: I32(12011)
static ::Epic::OnlineServices::Result const AntiCheatDeviceIdAuthIsNotSupported;

/// @brief Field AntiCheatInvalidMode value: I32(12001)
static ::Epic::OnlineServices::Result const AntiCheatInvalidMode;

/// @brief Field AntiCheatPeerAlreadyRegistered value: I32(12007)
static ::Epic::OnlineServices::Result const AntiCheatPeerAlreadyRegistered;

/// @brief Field AntiCheatPeerNotFound value: I32(12008)
static ::Epic::OnlineServices::Result const AntiCheatPeerNotFound;

/// @brief Field AntiCheatPeerNotProtected value: I32(12009)
static ::Epic::OnlineServices::Result const AntiCheatPeerNotProtected;

/// @brief Field AntiCheatProtectMessageInitializationFailed value: I32(12006)
static ::Epic::OnlineServices::Result const AntiCheatProtectMessageInitializationFailed;

/// @brief Field AntiCheatProtectMessageSessionKeyRequired value: I32(12004)
static ::Epic::OnlineServices::Result const AntiCheatProtectMessageSessionKeyRequired;

/// @brief Field AntiCheatProtectMessageValidationFailed value: I32(12005)
static ::Epic::OnlineServices::Result const AntiCheatProtectMessageValidationFailed;

/// @brief Field ApplicationSuspended value: I32(40)
static ::Epic::OnlineServices::Result const ApplicationSuspended;

/// @brief Field AuthAccountFeatureRestricted value: I32(1017)
static ::Epic::OnlineServices::Result const AuthAccountFeatureRestricted;

/// @brief Field AuthAccountLocked value: I32(1001)
static ::Epic::OnlineServices::Result const AuthAccountLocked;

/// @brief Field AuthAccountLockedForUpdate value: I32(1002)
static ::Epic::OnlineServices::Result const AuthAccountLockedForUpdate;

/// @brief Field AuthAccountNotActive value: I32(1050)
static ::Epic::OnlineServices::Result const AuthAccountNotActive;

/// @brief Field AuthAccountPortalLoadError value: I32(1018)
static ::Epic::OnlineServices::Result const AuthAccountPortalLoadError;

/// @brief Field AuthApplicationNotFound value: I32(1015)
static ::Epic::OnlineServices::Result const AuthApplicationNotFound;

/// @brief Field AuthAuthenticationFailure value: I32(1005)
static ::Epic::OnlineServices::Result const AuthAuthenticationFailure;

/// @brief Field AuthCorrectiveActionRequired value: I32(1019)
static ::Epic::OnlineServices::Result const AuthCorrectiveActionRequired;

/// @brief Field AuthExchangeCodeNotFound value: I32(1040)
static ::Epic::OnlineServices::Result const AuthExchangeCodeNotFound;

/// @brief Field AuthExpired value: I32(1013)
static ::Epic::OnlineServices::Result const AuthExpired;

/// @brief Field AuthExternalAuthCannotLogin value: I32(1035)
static ::Epic::OnlineServices::Result const AuthExternalAuthCannotLogin;

/// @brief Field AuthExternalAuthExpired value: I32(1036)
static ::Epic::OnlineServices::Result const AuthExternalAuthExpired;

/// @brief Field AuthExternalAuthInvalid value: I32(1033)
static ::Epic::OnlineServices::Result const AuthExternalAuthInvalid;

/// @brief Field AuthExternalAuthIsLastLoginType value: I32(1037)
static ::Epic::OnlineServices::Result const AuthExternalAuthIsLastLoginType;

/// @brief Field AuthExternalAuthNotLinked value: I32(1030)
static ::Epic::OnlineServices::Result const AuthExternalAuthNotLinked;

/// @brief Field AuthExternalAuthRestricted value: I32(1034)
static ::Epic::OnlineServices::Result const AuthExternalAuthRestricted;

/// @brief Field AuthExternalAuthRevoked value: I32(1032)
static ::Epic::OnlineServices::Result const AuthExternalAuthRevoked;

/// @brief Field AuthFullAccountRequired value: I32(1009)
static ::Epic::OnlineServices::Result const AuthFullAccountRequired;

/// @brief Field AuthHeadlessAccountRequired value: I32(1010)
static ::Epic::OnlineServices::Result const AuthHeadlessAccountRequired;

/// @brief Field AuthInvalidPlatformToken value: I32(1006)
static ::Epic::OnlineServices::Result const AuthInvalidPlatformToken;

/// @brief Field AuthInvalidRefreshToken value: I32(1003)
static ::Epic::OnlineServices::Result const AuthInvalidRefreshToken;

/// @brief Field AuthInvalidToken value: I32(1004)
static ::Epic::OnlineServices::Result const AuthInvalidToken;

/// @brief Field AuthMFARequired value: I32(1060)
static ::Epic::OnlineServices::Result const AuthMFARequired;

/// @brief Field AuthNoRealId value: I32(1080)
static ::Epic::OnlineServices::Result const AuthNoRealId;

/// @brief Field AuthOriginatingExchangeCodeSessionExpired value: I32(1041)
static ::Epic::OnlineServices::Result const AuthOriginatingExchangeCodeSessionExpired;

/// @brief Field AuthParentalControls value: I32(1070)
static ::Epic::OnlineServices::Result const AuthParentalControls;

/// @brief Field AuthPasswordCannotBeReused value: I32(1012)
static ::Epic::OnlineServices::Result const AuthPasswordCannotBeReused;

/// @brief Field AuthPasswordResetRequired value: I32(1011)
static ::Epic::OnlineServices::Result const AuthPasswordResetRequired;

/// @brief Field AuthPinGrantCode value: I32(1020)
static ::Epic::OnlineServices::Result const AuthPinGrantCode;

/// @brief Field AuthPinGrantExpired value: I32(1021)
static ::Epic::OnlineServices::Result const AuthPinGrantExpired;

/// @brief Field AuthPinGrantPending value: I32(1022)
static ::Epic::OnlineServices::Result const AuthPinGrantPending;

/// @brief Field AuthScopeConsentRequired value: I32(1014)
static ::Epic::OnlineServices::Result const AuthScopeConsentRequired;

/// @brief Field AuthScopeNotFound value: I32(1016)
static ::Epic::OnlineServices::Result const AuthScopeNotFound;

/// @brief Field AuthUserInterfaceRequired value: I32(1090)
static ::Epic::OnlineServices::Result const AuthUserInterfaceRequired;

/// @brief Field AuthWrongAccount value: I32(1007)
static ::Epic::OnlineServices::Result const AuthWrongAccount;

/// @brief Field AuthWrongClient value: I32(1008)
static ::Epic::OnlineServices::Result const AuthWrongClient;

/// @brief Field CacheDirectoryInvalid value: I32(37)
static ::Epic::OnlineServices::Result const CacheDirectoryInvalid;

/// @brief Field CacheDirectoryMissing value: I32(36)
static ::Epic::OnlineServices::Result const CacheDirectoryMissing;

/// @brief Field Canceled value: I32(17)
static ::Epic::OnlineServices::Result const Canceled;

/// @brief Field ClientPolicyMissingAction value: I32(43)
static ::Epic::OnlineServices::Result const ClientPolicyMissingAction;

/// @brief Field ConnectAuthExpired value: I32(7002)
static ::Epic::OnlineServices::Result const ConnectAuthExpired;

/// @brief Field ConnectExternalServiceConfigurationFailure value: I32(7007)
static ::Epic::OnlineServices::Result const ConnectExternalServiceConfigurationFailure;

/// @brief Field ConnectExternalServiceUnavailable value: I32(7006)
static ::Epic::OnlineServices::Result const ConnectExternalServiceUnavailable;

/// @brief Field ConnectExternalTokenValidationFailed value: I32(7000)
static ::Epic::OnlineServices::Result const ConnectExternalTokenValidationFailed;

/// @brief Field ConnectInvalidToken value: I32(7003)
static ::Epic::OnlineServices::Result const ConnectInvalidToken;

/// @brief Field ConnectLinkAccountFailed value: I32(7005)
static ::Epic::OnlineServices::Result const ConnectLinkAccountFailed;

/// @brief Field ConnectLinkAccountFailedMissingNintendoIdAccountDeprecated value: I32(7008)
static ::Epic::OnlineServices::Result const ConnectLinkAccountFailedMissingNintendoIdAccountDeprecated;

/// @brief Field ConnectUnsupportedTokenType value: I32(7004)
static ::Epic::OnlineServices::Result const ConnectUnsupportedTokenType;

/// @brief Field ConnectUserAlreadyExists value: I32(7001)
static ::Epic::OnlineServices::Result const ConnectUserAlreadyExists;

/// @brief Field ConsoleInitCacheStorageIndexOutOfRangeRange value: I32(23004)
static ::Epic::OnlineServices::Result const ConsoleInitCacheStorageIndexOutOfRangeRange;

/// @brief Field ConsoleInitCacheStorageSizeKBBelowMinimumSize value: I32(23002)
static ::Epic::OnlineServices::Result const ConsoleInitCacheStorageSizeKBBelowMinimumSize;

/// @brief Field ConsoleInitCacheStorageSizeKBExceedsMaximumSize value: I32(23003)
static ::Epic::OnlineServices::Result const ConsoleInitCacheStorageSizeKBExceedsMaximumSize;

/// @brief Field ConsoleInitCacheStorageSizeKBNotMultipleOf16 value: I32(23001)
static ::Epic::OnlineServices::Result const ConsoleInitCacheStorageSizeKBNotMultipleOf16;

/// @brief Field ConsoleInitOnNetworkRequestedDeprecatedCallbackNotSet value: I32(23000)
static ::Epic::OnlineServices::Result const ConsoleInitOnNetworkRequestedDeprecatedCallbackNotSet;

/// @brief Field CustomInvitesInviteFailed value: I32(20000)
static ::Epic::OnlineServices::Result const CustomInvitesInviteFailed;

/// @brief Field DesktopCrossplayApplicationNotBootstrapped value: I32(19000)
static ::Epic::OnlineServices::Result const DesktopCrossplayApplicationNotBootstrapped;

/// @brief Field DesktopCrossplayServiceNotInstalled value: I32(19001)
static ::Epic::OnlineServices::Result const DesktopCrossplayServiceNotInstalled;

/// @brief Field DesktopCrossplayServiceNotRunning value: I32(19003)
static ::Epic::OnlineServices::Result const DesktopCrossplayServiceNotRunning;

/// @brief Field DesktopCrossplayServiceStartFailed value: I32(19002)
static ::Epic::OnlineServices::Result const DesktopCrossplayServiceStartFailed;

/// @brief Field Disabled value: I32(23)
static ::Epic::OnlineServices::Result const Disabled;

/// @brief Field DuplicateNotAllowed value: I32(24)
static ::Epic::OnlineServices::Result const DuplicateNotAllowed;

/// @brief Field EcomCatalogItemStale value: I32(4002)
static ::Epic::OnlineServices::Result const EcomCatalogItemStale;

/// @brief Field EcomCatalogOfferPriceInvalid value: I32(4003)
static ::Epic::OnlineServices::Result const EcomCatalogOfferPriceInvalid;

/// @brief Field EcomCatalogOfferStale value: I32(4001)
static ::Epic::OnlineServices::Result const EcomCatalogOfferStale;

/// @brief Field EcomCheckoutLoadError value: I32(4004)
static ::Epic::OnlineServices::Result const EcomCheckoutLoadError;

/// @brief Field EcomEntitlementStale value: I32(4000)
static ::Epic::OnlineServices::Result const EcomEntitlementStale;

/// @brief Field EcomPurchaseProcessing value: I32(4005)
static ::Epic::OnlineServices::Result const EcomPurchaseProcessing;

/// @brief Field EmptyRecord value: I32(13011)
static ::Epic::OnlineServices::Result const EmptyRecord;

/// @brief Field FriendsAlreadyFriends value: I32(2003)
static ::Epic::OnlineServices::Result const FriendsAlreadyFriends;

/// @brief Field FriendsInviteAwaitingAcceptance value: I32(2000)
static ::Epic::OnlineServices::Result const FriendsInviteAwaitingAcceptance;

/// @brief Field FriendsLocalUserFriendLimitExceeded value: I32(2008)
static ::Epic::OnlineServices::Result const FriendsLocalUserFriendLimitExceeded;

/// @brief Field FriendsLocalUserTooManyInvites value: I32(2006)
static ::Epic::OnlineServices::Result const FriendsLocalUserTooManyInvites;

/// @brief Field FriendsNoInvitation value: I32(2001)
static ::Epic::OnlineServices::Result const FriendsNoInvitation;

/// @brief Field FriendsNotFriends value: I32(2004)
static ::Epic::OnlineServices::Result const FriendsNotFriends;

/// @brief Field FriendsTargetUserFriendLimitExceeded value: I32(2007)
static ::Epic::OnlineServices::Result const FriendsTargetUserFriendLimitExceeded;

/// @brief Field FriendsTargetUserTooManyInvites value: I32(2005)
static ::Epic::OnlineServices::Result const FriendsTargetUserTooManyInvites;

/// @brief Field IncompatibleVersion value: I32(13)
static ::Epic::OnlineServices::Result const IncompatibleVersion;

/// @brief Field InconsistentVirtualMemoryFunctions value: I32(8001)
static ::Epic::OnlineServices::Result const InconsistentVirtualMemoryFunctions;

/// @brief Field InsufficientOutputBuffer value: I32(42)
static ::Epic::OnlineServices::Result const InsufficientOutputBuffer;

/// @brief Field InvalidAuth value: I32(4)
static ::Epic::OnlineServices::Result const InvalidAuth;

/// @brief Field InvalidCredentials value: I32(2)
static ::Epic::OnlineServices::Result const InvalidCredentials;

/// @brief Field InvalidDeployment value: I32(32)
static ::Epic::OnlineServices::Result const InvalidDeployment;

/// @brief Field InvalidParameters value: I32(10)
static ::Epic::OnlineServices::Result const InvalidParameters;

/// @brief Field InvalidProduct value: I32(33)
static ::Epic::OnlineServices::Result const InvalidProduct;

/// @brief Field InvalidProductUserID value: I32(34)
static ::Epic::OnlineServices::Result const InvalidProductUserID;

/// @brief Field InvalidRequest value: I32(11)
static ::Epic::OnlineServices::Result const InvalidRequest;

/// @brief Field InvalidSandbox value: I32(31)
static ::Epic::OnlineServices::Result const InvalidSandbox;

/// @brief Field InvalidSandboxId value: I32(26)
static ::Epic::OnlineServices::Result const InvalidSandboxId;

/// @brief Field InvalidState value: I32(38)
static ::Epic::OnlineServices::Result const InvalidState;

/// @brief Field InvalidUser value: I32(3)
static ::Epic::OnlineServices::Result const InvalidUser;

/// @brief Field LimitExceeded value: I32(22)
static ::Epic::OnlineServices::Result const LimitExceeded;

/// @brief Field LobbyAggregationFailed value: I32(9011)
static ::Epic::OnlineServices::Result const LobbyAggregationFailed;

/// @brief Field LobbyDeploymentAtCapacity value: I32(9015)
static ::Epic::OnlineServices::Result const LobbyDeploymentAtCapacity;

/// @brief Field LobbyHostAtCapacity value: I32(9012)
static ::Epic::OnlineServices::Result const LobbyHostAtCapacity;

/// @brief Field LobbyInvalidLock value: I32(9001)
static ::Epic::OnlineServices::Result const LobbyInvalidLock;

/// @brief Field LobbyInvalidSession value: I32(9006)
static ::Epic::OnlineServices::Result const LobbyInvalidSession;

/// @brief Field LobbyInviteFailed value: I32(9008)
static ::Epic::OnlineServices::Result const LobbyInviteFailed;

/// @brief Field LobbyInviteNotFound value: I32(9009)
static ::Epic::OnlineServices::Result const LobbyInviteNotFound;

/// @brief Field LobbyLobbyAlreadyExists value: I32(9002)
static ::Epic::OnlineServices::Result const LobbyLobbyAlreadyExists;

/// @brief Field LobbyMemberUpdateOnly value: I32(9017)
static ::Epic::OnlineServices::Result const LobbyMemberUpdateOnly;

/// @brief Field LobbyNoPermission value: I32(9005)
static ::Epic::OnlineServices::Result const LobbyNoPermission;

/// @brief Field LobbyNotAllowed value: I32(9016)
static ::Epic::OnlineServices::Result const LobbyNotAllowed;

/// @brief Field LobbyNotOwner value: I32(9000)
static ::Epic::OnlineServices::Result const LobbyNotOwner;

/// @brief Field LobbyPlatformNotAllowed value: I32(9020)
static ::Epic::OnlineServices::Result const LobbyPlatformNotAllowed;

/// @brief Field LobbyPresenceLobbyExists value: I32(9018)
static ::Epic::OnlineServices::Result const LobbyPresenceLobbyExists;

/// @brief Field LobbySandboxAtCapacity value: I32(9013)
static ::Epic::OnlineServices::Result const LobbySandboxAtCapacity;

/// @brief Field LobbySandboxNotAllowed value: I32(9007)
static ::Epic::OnlineServices::Result const LobbySandboxNotAllowed;

/// @brief Field LobbySessionInProgress value: I32(9003)
static ::Epic::OnlineServices::Result const LobbySessionInProgress;

/// @brief Field LobbyTooManyInvites value: I32(9014)
static ::Epic::OnlineServices::Result const LobbyTooManyInvites;

/// @brief Field LobbyTooManyPlayers value: I32(9004)
static ::Epic::OnlineServices::Result const LobbyTooManyPlayers;

/// @brief Field LobbyUpsertNotAllowed value: I32(9010)
static ::Epic::OnlineServices::Result const LobbyUpsertNotAllowed;

/// @brief Field LobbyVoiceNotEnabled value: I32(9019)
static ::Epic::OnlineServices::Result const LobbyVoiceNotEnabled;

/// @brief Field MissingFeature value: I32(30)
static ::Epic::OnlineServices::Result const MissingFeature;

/// @brief Field MissingParametersDeprecated value: I32(25)
static ::Epic::OnlineServices::Result const MissingParametersDeprecated;

/// @brief Field MissingPermissions value: I32(6)
static ::Epic::OnlineServices::Result const MissingPermissions;

/// @brief Field MissingRole value: I32(29)
static ::Epic::OnlineServices::Result const MissingRole;

/// @brief Field ModsCannotGetManifestLocation value: I32(11015)
static ::Epic::OnlineServices::Result const ModsCannotGetManifestLocation;

/// @brief Field ModsCouldNotFindOffer value: I32(11011)
static ::Epic::OnlineServices::Result const ModsCouldNotFindOffer;

/// @brief Field ModsCriticalError value: I32(11003)
static ::Epic::OnlineServices::Result const ModsCriticalError;

/// @brief Field ModsIPCFailure value: I32(11005)
static ::Epic::OnlineServices::Result const ModsIPCFailure;

/// @brief Field ModsInvalidGameInstallInfo value: I32(11014)
static ::Epic::OnlineServices::Result const ModsInvalidGameInstallInfo;

/// @brief Field ModsInvalidIPCResponse value: I32(11006)
static ::Epic::OnlineServices::Result const ModsInvalidIPCResponse;

/// @brief Field ModsModIsNotInstalled value: I32(11008)
static ::Epic::OnlineServices::Result const ModsModIsNotInstalled;

/// @brief Field ModsModSdkCommandIsEmpty value: I32(11001)
static ::Epic::OnlineServices::Result const ModsModSdkCommandIsEmpty;

/// @brief Field ModsModSdkProcessCreationFailed value: I32(11002)
static ::Epic::OnlineServices::Result const ModsModSdkProcessCreationFailed;

/// @brief Field ModsModSdkProcessIsAlreadyRunning value: I32(11000)
static ::Epic::OnlineServices::Result const ModsModSdkProcessIsAlreadyRunning;

/// @brief Field ModsOfferRequestByIdFailure value: I32(11012)
static ::Epic::OnlineServices::Result const ModsOfferRequestByIdFailure;

/// @brief Field ModsOfferRequestByIdInvalidResult value: I32(11010)
static ::Epic::OnlineServices::Result const ModsOfferRequestByIdInvalidResult;

/// @brief Field ModsPurchaseFailure value: I32(11013)
static ::Epic::OnlineServices::Result const ModsPurchaseFailure;

/// @brief Field ModsToolInternalError value: I32(11004)
static ::Epic::OnlineServices::Result const ModsToolInternalError;

/// @brief Field ModsURILaunchFailure value: I32(11007)
static ::Epic::OnlineServices::Result const ModsURILaunchFailure;

/// @brief Field ModsUnsupportedOS value: I32(11016)
static ::Epic::OnlineServices::Result const ModsUnsupportedOS;

/// @brief Field ModsUserDoesNotOwnTheGame value: I32(11009)
static ::Epic::OnlineServices::Result const ModsUserDoesNotOwnTheGame;

/// @brief Field NetworkDisconnected value: I32(41)
static ::Epic::OnlineServices::Result const NetworkDisconnected;

/// @brief Field NoChange value: I32(20)
static ::Epic::OnlineServices::Result const NoChange;

/// @brief Field NoConnection value: I32(1)
static ::Epic::OnlineServices::Result const NoConnection;

/// @brief Field NotConfigured value: I32(14)
static ::Epic::OnlineServices::Result const NotConfigured;

/// @brief Field NotFound value: I32(18)
static ::Epic::OnlineServices::Result const NotFound;

/// @brief Field NotImplemented value: I32(16)
static ::Epic::OnlineServices::Result const NotImplemented;

/// @brief Field OperationWillRetry value: I32(19)
static ::Epic::OnlineServices::Result const OperationWillRetry;

/// @brief Field ParentEmailMissing value: I32(15000)
static ::Epic::OnlineServices::Result const ParentEmailMissing;

/// @brief Field PartialResult value: I32(28)
static ::Epic::OnlineServices::Result const PartialResult;

/// @brief Field PermissionAccountTypeFailure value: I32(18003)
static ::Epic::OnlineServices::Result const PermissionAccountTypeFailure;

/// @brief Field PermissionAgeRestrictionFailure value: I32(18002)
static ::Epic::OnlineServices::Result const PermissionAgeRestrictionFailure;

/// @brief Field PermissionChatRestriction value: I32(18004)
static ::Epic::OnlineServices::Result const PermissionChatRestriction;

/// @brief Field PermissionOnlinePlayRestricted value: I32(18006)
static ::Epic::OnlineServices::Result const PermissionOnlinePlayRestricted;

/// @brief Field PermissionRequiredPatchAvailable value: I32(18000)
static ::Epic::OnlineServices::Result const PermissionRequiredPatchAvailable;

/// @brief Field PermissionRequiredSystemUpdate value: I32(18001)
static ::Epic::OnlineServices::Result const PermissionRequiredSystemUpdate;

/// @brief Field PermissionUGCRestriction value: I32(18005)
static ::Epic::OnlineServices::Result const PermissionUGCRestriction;

/// @brief Field PlayerDataStorageDataInvalid value: I32(6006)
static ::Epic::OnlineServices::Result const PlayerDataStorageDataInvalid;

/// @brief Field PlayerDataStorageDataLengthInvalid value: I32(6007)
static ::Epic::OnlineServices::Result const PlayerDataStorageDataLengthInvalid;

/// @brief Field PlayerDataStorageEncryptionKeyNotSet value: I32(6011)
static ::Epic::OnlineServices::Result const PlayerDataStorageEncryptionKeyNotSet;

/// @brief Field PlayerDataStorageFileCorrupted value: I32(6014)
static ::Epic::OnlineServices::Result const PlayerDataStorageFileCorrupted;

/// @brief Field PlayerDataStorageFileHandleInvalid value: I32(6005)
static ::Epic::OnlineServices::Result const PlayerDataStorageFileHandleInvalid;

/// @brief Field PlayerDataStorageFileHeaderHasNewerVersion value: I32(6013)
static ::Epic::OnlineServices::Result const PlayerDataStorageFileHeaderHasNewerVersion;

/// @brief Field PlayerDataStorageFileSizeInvalid value: I32(6004)
static ::Epic::OnlineServices::Result const PlayerDataStorageFileSizeInvalid;

/// @brief Field PlayerDataStorageFileSizeTooLarge value: I32(6003)
static ::Epic::OnlineServices::Result const PlayerDataStorageFileSizeTooLarge;

/// @brief Field PlayerDataStorageFilenameInvalid value: I32(6000)
static ::Epic::OnlineServices::Result const PlayerDataStorageFilenameInvalid;

/// @brief Field PlayerDataStorageFilenameInvalidChars value: I32(6002)
static ::Epic::OnlineServices::Result const PlayerDataStorageFilenameInvalidChars;

/// @brief Field PlayerDataStorageFilenameLengthInvalid value: I32(6001)
static ::Epic::OnlineServices::Result const PlayerDataStorageFilenameLengthInvalid;

/// @brief Field PlayerDataStorageRequestInProgress value: I32(6009)
static ::Epic::OnlineServices::Result const PlayerDataStorageRequestInProgress;

/// @brief Field PlayerDataStorageStartIndexInvalid value: I32(6008)
static ::Epic::OnlineServices::Result const PlayerDataStorageStartIndexInvalid;

/// @brief Field PlayerDataStorageUserErrorFromDataCallback value: I32(6012)
static ::Epic::OnlineServices::Result const PlayerDataStorageUserErrorFromDataCallback;

/// @brief Field PlayerDataStorageUserThrottled value: I32(6010)
static ::Epic::OnlineServices::Result const PlayerDataStorageUserThrottled;

/// @brief Field PresenceDataInvalid value: I32(3000)
static ::Epic::OnlineServices::Result const PresenceDataInvalid;

/// @brief Field PresenceDataKeyInvalid value: I32(3002)
static ::Epic::OnlineServices::Result const PresenceDataKeyInvalid;

/// @brief Field PresenceDataKeyLengthInvalid value: I32(3003)
static ::Epic::OnlineServices::Result const PresenceDataKeyLengthInvalid;

/// @brief Field PresenceDataLengthInvalid value: I32(3001)
static ::Epic::OnlineServices::Result const PresenceDataLengthInvalid;

/// @brief Field PresenceDataValueInvalid value: I32(3004)
static ::Epic::OnlineServices::Result const PresenceDataValueInvalid;

/// @brief Field PresenceDataValueLengthInvalid value: I32(3005)
static ::Epic::OnlineServices::Result const PresenceDataValueLengthInvalid;

/// @brief Field PresenceRichTextInvalid value: I32(3006)
static ::Epic::OnlineServices::Result const PresenceRichTextInvalid;

/// @brief Field PresenceRichTextLengthInvalid value: I32(3007)
static ::Epic::OnlineServices::Result const PresenceRichTextLengthInvalid;

/// @brief Field PresenceRichTextNotSupported value: I32(3009)
static ::Epic::OnlineServices::Result const PresenceRichTextNotSupported;

/// @brief Field PresenceStatusInvalid value: I32(3008)
static ::Epic::OnlineServices::Result const PresenceStatusInvalid;

/// @brief Field PresenceTemplateIdInvalid value: I32(3011)
static ::Epic::OnlineServices::Result const PresenceTemplateIdInvalid;

/// @brief Field PresenceTemplateInvalidVariableInput value: I32(3016)
static ::Epic::OnlineServices::Result const PresenceTemplateInvalidVariableInput;

/// @brief Field PresenceTemplateKeyInvalid value: I32(3013)
static ::Epic::OnlineServices::Result const PresenceTemplateKeyInvalid;

/// @brief Field PresenceTemplateLocalizationServerError value: I32(3017)
static ::Epic::OnlineServices::Result const PresenceTemplateLocalizationServerError;

/// @brief Field PresenceTemplateNotFound value: I32(3015)
static ::Epic::OnlineServices::Result const PresenceTemplateNotFound;

/// @brief Field PresenceTemplateNotSupported value: I32(3010)
static ::Epic::OnlineServices::Result const PresenceTemplateNotSupported;

/// @brief Field PresenceTemplateTypeInvalid value: I32(3012)
static ::Epic::OnlineServices::Result const PresenceTemplateTypeInvalid;

/// @brief Field PresenceTemplateUnknownError value: I32(3018)
static ::Epic::OnlineServices::Result const PresenceTemplateUnknownError;

/// @brief Field PresenceTemplateValueInvalid value: I32(3014)
static ::Epic::OnlineServices::Result const PresenceTemplateValueInvalid;

/// @brief Field ProgressionSnapshotSnapshotIdUnavailable value: I32(14000)
static ::Epic::OnlineServices::Result const ProgressionSnapshotSnapshotIdUnavailable;

/// @brief Field ReconnectionTimegateExpired value: I32(13005)
static ::Epic::OnlineServices::Result const ReconnectionTimegateExpired;

/// @brief Field RequestInProgress value: I32(39)
static ::Epic::OnlineServices::Result const RequestInProgress;

/// @brief Field RoomAlreadyExists value: I32(13001)
static ::Epic::OnlineServices::Result const RoomAlreadyExists;

/// @brief Field RoomOptionsMismatch value: I32(13012)
static ::Epic::OnlineServices::Result const RoomOptionsMismatch;

/// @brief Field RoomWasLeft value: I32(13004)
static ::Epic::OnlineServices::Result const RoomWasLeft;

/// @brief Field ServiceFailure value: I32(35)
static ::Epic::OnlineServices::Result const ServiceFailure;

/// @brief Field SessionsAggregationFailed value: I32(5010)
static ::Epic::OnlineServices::Result const SessionsAggregationFailed;

/// @brief Field SessionsDeploymentAtCapacity value: I32(5017)
static ::Epic::OnlineServices::Result const SessionsDeploymentAtCapacity;

/// @brief Field SessionsHostAtCapacity value: I32(5011)
static ::Epic::OnlineServices::Result const SessionsHostAtCapacity;

/// @brief Field SessionsInvalidLock value: I32(5004)
static ::Epic::OnlineServices::Result const SessionsInvalidLock;

/// @brief Field SessionsInvalidSession value: I32(5005)
static ::Epic::OnlineServices::Result const SessionsInvalidSession;

/// @brief Field SessionsInviteFailed value: I32(5007)
static ::Epic::OnlineServices::Result const SessionsInviteFailed;

/// @brief Field SessionsInviteNotFound value: I32(5008)
static ::Epic::OnlineServices::Result const SessionsInviteNotFound;

/// @brief Field SessionsNoPermission value: I32(5002)
static ::Epic::OnlineServices::Result const SessionsNoPermission;

/// @brief Field SessionsNotAllowed value: I32(5018)
static ::Epic::OnlineServices::Result const SessionsNotAllowed;

/// @brief Field SessionsOutOfSync value: I32(5014)
static ::Epic::OnlineServices::Result const SessionsOutOfSync;

/// @brief Field SessionsPlayerSanctioned value: I32(5019)
static ::Epic::OnlineServices::Result const SessionsPlayerSanctioned;

/// @brief Field SessionsPresenceSessionExists value: I32(5016)
static ::Epic::OnlineServices::Result const SessionsPresenceSessionExists;

/// @brief Field SessionsSandboxAtCapacity value: I32(5012)
static ::Epic::OnlineServices::Result const SessionsSandboxAtCapacity;

/// @brief Field SessionsSandboxNotAllowed value: I32(5006)
static ::Epic::OnlineServices::Result const SessionsSandboxNotAllowed;

/// @brief Field SessionsSessionAlreadyExists value: I32(5003)
static ::Epic::OnlineServices::Result const SessionsSessionAlreadyExists;

/// @brief Field SessionsSessionInProgress value: I32(5000)
static ::Epic::OnlineServices::Result const SessionsSessionInProgress;

/// @brief Field SessionsSessionNotAnonymous value: I32(5013)
static ::Epic::OnlineServices::Result const SessionsSessionNotAnonymous;

/// @brief Field SessionsTooManyInvites value: I32(5015)
static ::Epic::OnlineServices::Result const SessionsTooManyInvites;

/// @brief Field SessionsTooManyPlayers value: I32(5001)
static ::Epic::OnlineServices::Result const SessionsTooManyPlayers;

/// @brief Field SessionsUpsertNotAllowed value: I32(5009)
static ::Epic::OnlineServices::Result const SessionsUpsertNotAllowed;

/// @brief Field ShutdownInvoked value: I32(13006)
static ::Epic::OnlineServices::Result const ShutdownInvoked;

/// @brief Field SocialOverlayLoadError value: I32(8000)
static ::Epic::OnlineServices::Result const SocialOverlayLoadError;

/// @brief Field Success value: I32(0)
static ::Epic::OnlineServices::Result const Success;

/// @brief Field TimedOut value: I32(27)
static ::Epic::OnlineServices::Result const TimedOut;

/// @brief Field TitleStorageEncryptionKeyNotSet value: I32(10001)
static ::Epic::OnlineServices::Result const TitleStorageEncryptionKeyNotSet;

/// @brief Field TitleStorageFileCorrupted value: I32(10002)
static ::Epic::OnlineServices::Result const TitleStorageFileCorrupted;

/// @brief Field TitleStorageFileHeaderHasNewerVersion value: I32(10003)
static ::Epic::OnlineServices::Result const TitleStorageFileHeaderHasNewerVersion;

/// @brief Field TitleStorageUserErrorFromDataCallback value: I32(10000)
static ::Epic::OnlineServices::Result const TitleStorageUserErrorFromDataCallback;

/// @brief Field TokenNotAccount value: I32(7)
static ::Epic::OnlineServices::Result const TokenNotAccount;

/// @brief Field TooManyParticipants value: I32(13000)
static ::Epic::OnlineServices::Result const TooManyParticipants;

/// @brief Field TooManyRequests value: I32(8)
static ::Epic::OnlineServices::Result const TooManyRequests;

/// @brief Field UnexpectedError value: I32(2147483647)
static ::Epic::OnlineServices::Result const UnexpectedError;

/// @brief Field UnrecognizedResponse value: I32(12)
static ::Epic::OnlineServices::Result const UnrecognizedResponse;

/// @brief Field UserBanned value: I32(13003)
static ::Epic::OnlineServices::Result const UserBanned;

/// @brief Field UserGraduated value: I32(15001)
static ::Epic::OnlineServices::Result const UserGraduated;

/// @brief Field UserInfoBestDisplayNameIndeterminate value: I32(22000)
static ::Epic::OnlineServices::Result const UserInfoBestDisplayNameIndeterminate;

/// @brief Field UserIsInBlocklist value: I32(13007)
static ::Epic::OnlineServices::Result const UserIsInBlocklist;

/// @brief Field UserKicked value: I32(13002)
static ::Epic::OnlineServices::Result const UserKicked;

/// @brief Field VersionMismatch value: I32(21)
static ::Epic::OnlineServices::Result const VersionMismatch;

/// @brief Field VoiceModerationModeMismatch value: I32(13010)
static ::Epic::OnlineServices::Result const VoiceModerationModeMismatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Result, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Result) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
