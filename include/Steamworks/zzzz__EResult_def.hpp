#pragma once
// IWYU pragma private; include "Steamworks/EResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EResult)
// Forward declare root types
namespace Steamworks {
struct EResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::EResult);
DEFINE_IL2CPP_CLASS(::Steamworks::EResult, "Steamworks", "EResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EResult
struct CORDL_TYPE EResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EResult_Unwrapped
enum struct __EResult_Unwrapped : int32_t {
__E_k_EResultNone = static_cast<int32_t>(0x0),
__E_k_EResultOK = static_cast<int32_t>(0x1),
__E_k_EResultFail = static_cast<int32_t>(0x2),
__E_k_EResultNoConnection = static_cast<int32_t>(0x3),
__E_k_EResultInvalidPassword = static_cast<int32_t>(0x5),
__E_k_EResultLoggedInElsewhere = static_cast<int32_t>(0x6),
__E_k_EResultInvalidProtocolVer = static_cast<int32_t>(0x7),
__E_k_EResultInvalidParam = static_cast<int32_t>(0x8),
__E_k_EResultFileNotFound = static_cast<int32_t>(0x9),
__E_k_EResultBusy = static_cast<int32_t>(0xa),
__E_k_EResultInvalidState = static_cast<int32_t>(0xb),
__E_k_EResultInvalidName = static_cast<int32_t>(0xc),
__E_k_EResultInvalidEmail = static_cast<int32_t>(0xd),
__E_k_EResultDuplicateName = static_cast<int32_t>(0xe),
__E_k_EResultAccessDenied = static_cast<int32_t>(0xf),
__E_k_EResultTimeout = static_cast<int32_t>(0x10),
__E_k_EResultBanned = static_cast<int32_t>(0x11),
__E_k_EResultAccountNotFound = static_cast<int32_t>(0x12),
__E_k_EResultInvalidSteamID = static_cast<int32_t>(0x13),
__E_k_EResultServiceUnavailable = static_cast<int32_t>(0x14),
__E_k_EResultNotLoggedOn = static_cast<int32_t>(0x15),
__E_k_EResultPending = static_cast<int32_t>(0x16),
__E_k_EResultEncryptionFailure = static_cast<int32_t>(0x17),
__E_k_EResultInsufficientPrivilege = static_cast<int32_t>(0x18),
__E_k_EResultLimitExceeded = static_cast<int32_t>(0x19),
__E_k_EResultRevoked = static_cast<int32_t>(0x1a),
__E_k_EResultExpired = static_cast<int32_t>(0x1b),
__E_k_EResultAlreadyRedeemed = static_cast<int32_t>(0x1c),
__E_k_EResultDuplicateRequest = static_cast<int32_t>(0x1d),
__E_k_EResultAlreadyOwned = static_cast<int32_t>(0x1e),
__E_k_EResultIPNotFound = static_cast<int32_t>(0x1f),
__E_k_EResultPersistFailed = static_cast<int32_t>(0x20),
__E_k_EResultLockingFailed = static_cast<int32_t>(0x21),
__E_k_EResultLogonSessionReplaced = static_cast<int32_t>(0x22),
__E_k_EResultConnectFailed = static_cast<int32_t>(0x23),
__E_k_EResultHandshakeFailed = static_cast<int32_t>(0x24),
__E_k_EResultIOFailure = static_cast<int32_t>(0x25),
__E_k_EResultRemoteDisconnect = static_cast<int32_t>(0x26),
__E_k_EResultShoppingCartNotFound = static_cast<int32_t>(0x27),
__E_k_EResultBlocked = static_cast<int32_t>(0x28),
__E_k_EResultIgnored = static_cast<int32_t>(0x29),
__E_k_EResultNoMatch = static_cast<int32_t>(0x2a),
__E_k_EResultAccountDisabled = static_cast<int32_t>(0x2b),
__E_k_EResultServiceReadOnly = static_cast<int32_t>(0x2c),
__E_k_EResultAccountNotFeatured = static_cast<int32_t>(0x2d),
__E_k_EResultAdministratorOK = static_cast<int32_t>(0x2e),
__E_k_EResultContentVersion = static_cast<int32_t>(0x2f),
__E_k_EResultTryAnotherCM = static_cast<int32_t>(0x30),
__E_k_EResultPasswordRequiredToKickSession = static_cast<int32_t>(0x31),
__E_k_EResultAlreadyLoggedInElsewhere = static_cast<int32_t>(0x32),
__E_k_EResultSuspended = static_cast<int32_t>(0x33),
__E_k_EResultCancelled = static_cast<int32_t>(0x34),
__E_k_EResultDataCorruption = static_cast<int32_t>(0x35),
__E_k_EResultDiskFull = static_cast<int32_t>(0x36),
__E_k_EResultRemoteCallFailed = static_cast<int32_t>(0x37),
__E_k_EResultPasswordUnset = static_cast<int32_t>(0x38),
__E_k_EResultExternalAccountUnlinked = static_cast<int32_t>(0x39),
__E_k_EResultPSNTicketInvalid = static_cast<int32_t>(0x3a),
__E_k_EResultExternalAccountAlreadyLinked = static_cast<int32_t>(0x3b),
__E_k_EResultRemoteFileConflict = static_cast<int32_t>(0x3c),
__E_k_EResultIllegalPassword = static_cast<int32_t>(0x3d),
__E_k_EResultSameAsPreviousValue = static_cast<int32_t>(0x3e),
__E_k_EResultAccountLogonDenied = static_cast<int32_t>(0x3f),
__E_k_EResultCannotUseOldPassword = static_cast<int32_t>(0x40),
__E_k_EResultInvalidLoginAuthCode = static_cast<int32_t>(0x41),
__E_k_EResultAccountLogonDeniedNoMail = static_cast<int32_t>(0x42),
__E_k_EResultHardwareNotCapableOfIPT = static_cast<int32_t>(0x43),
__E_k_EResultIPTInitError = static_cast<int32_t>(0x44),
__E_k_EResultParentalControlRestricted = static_cast<int32_t>(0x45),
__E_k_EResultFacebookQueryError = static_cast<int32_t>(0x46),
__E_k_EResultExpiredLoginAuthCode = static_cast<int32_t>(0x47),
__E_k_EResultIPLoginRestrictionFailed = static_cast<int32_t>(0x48),
__E_k_EResultAccountLockedDown = static_cast<int32_t>(0x49),
__E_k_EResultAccountLogonDeniedVerifiedEmailRequired = static_cast<int32_t>(0x4a),
__E_k_EResultNoMatchingURL = static_cast<int32_t>(0x4b),
__E_k_EResultBadResponse = static_cast<int32_t>(0x4c),
__E_k_EResultRequirePasswordReEntry = static_cast<int32_t>(0x4d),
__E_k_EResultValueOutOfRange = static_cast<int32_t>(0x4e),
__E_k_EResultUnexpectedError = static_cast<int32_t>(0x4f),
__E_k_EResultDisabled = static_cast<int32_t>(0x50),
__E_k_EResultInvalidCEGSubmission = static_cast<int32_t>(0x51),
__E_k_EResultRestrictedDevice = static_cast<int32_t>(0x52),
__E_k_EResultRegionLocked = static_cast<int32_t>(0x53),
__E_k_EResultRateLimitExceeded = static_cast<int32_t>(0x54),
__E_k_EResultAccountLoginDeniedNeedTwoFactor = static_cast<int32_t>(0x55),
__E_k_EResultItemDeleted = static_cast<int32_t>(0x56),
__E_k_EResultAccountLoginDeniedThrottle = static_cast<int32_t>(0x57),
__E_k_EResultTwoFactorCodeMismatch = static_cast<int32_t>(0x58),
__E_k_EResultTwoFactorActivationCodeMismatch = static_cast<int32_t>(0x59),
__E_k_EResultAccountAssociatedToMultiplePartners = static_cast<int32_t>(0x5a),
__E_k_EResultNotModified = static_cast<int32_t>(0x5b),
__E_k_EResultNoMobileDevice = static_cast<int32_t>(0x5c),
__E_k_EResultTimeNotSynced = static_cast<int32_t>(0x5d),
__E_k_EResultSmsCodeFailed = static_cast<int32_t>(0x5e),
__E_k_EResultAccountLimitExceeded = static_cast<int32_t>(0x5f),
__E_k_EResultAccountActivityLimitExceeded = static_cast<int32_t>(0x60),
__E_k_EResultPhoneActivityLimitExceeded = static_cast<int32_t>(0x61),
__E_k_EResultRefundToWallet = static_cast<int32_t>(0x62),
__E_k_EResultEmailSendFailure = static_cast<int32_t>(0x63),
__E_k_EResultNotSettled = static_cast<int32_t>(0x64),
__E_k_EResultNeedCaptcha = static_cast<int32_t>(0x65),
__E_k_EResultGSLTDenied = static_cast<int32_t>(0x66),
__E_k_EResultGSOwnerDenied = static_cast<int32_t>(0x67),
__E_k_EResultInvalidItemType = static_cast<int32_t>(0x68),
__E_k_EResultIPBanned = static_cast<int32_t>(0x69),
__E_k_EResultGSLTExpired = static_cast<int32_t>(0x6a),
__E_k_EResultInsufficientFunds = static_cast<int32_t>(0x6b),
__E_k_EResultTooManyPending = static_cast<int32_t>(0x6c),
__E_k_EResultNoSiteLicensesFound = static_cast<int32_t>(0x6d),
__E_k_EResultWGNetworkSendExceeded = static_cast<int32_t>(0x6e),
__E_k_EResultAccountNotFriends = static_cast<int32_t>(0x6f),
__E_k_EResultLimitedUserAccount = static_cast<int32_t>(0x70),
__E_k_EResultCantRemoveItem = static_cast<int32_t>(0x71),
__E_k_EResultAccountDeleted = static_cast<int32_t>(0x72),
__E_k_EResultExistingUserCancelledLicense = static_cast<int32_t>(0x73),
__E_k_EResultCommunityCooldown = static_cast<int32_t>(0x74),
__E_k_EResultNoLauncherSpecified = static_cast<int32_t>(0x75),
__E_k_EResultMustAgreeToSSA = static_cast<int32_t>(0x76),
__E_k_EResultLauncherMigrated = static_cast<int32_t>(0x77),
__E_k_EResultSteamRealmMismatch = static_cast<int32_t>(0x78),
__E_k_EResultInvalidSignature = static_cast<int32_t>(0x79),
__E_k_EResultParseFailure = static_cast<int32_t>(0x7a),
__E_k_EResultNoVerifiedPhone = static_cast<int32_t>(0x7b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EResult_Unwrapped () const noexcept {
return static_cast<__EResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EResultAccessDenied value: I32(15)
static ::Steamworks::EResult const k_EResultAccessDenied;

/// @brief Field k_EResultAccountActivityLimitExceeded value: I32(96)
static ::Steamworks::EResult const k_EResultAccountActivityLimitExceeded;

/// @brief Field k_EResultAccountAssociatedToMultiplePartners value: I32(90)
static ::Steamworks::EResult const k_EResultAccountAssociatedToMultiplePartners;

/// @brief Field k_EResultAccountDeleted value: I32(114)
static ::Steamworks::EResult const k_EResultAccountDeleted;

/// @brief Field k_EResultAccountDisabled value: I32(43)
static ::Steamworks::EResult const k_EResultAccountDisabled;

/// @brief Field k_EResultAccountLimitExceeded value: I32(95)
static ::Steamworks::EResult const k_EResultAccountLimitExceeded;

/// @brief Field k_EResultAccountLockedDown value: I32(73)
static ::Steamworks::EResult const k_EResultAccountLockedDown;

/// @brief Field k_EResultAccountLoginDeniedNeedTwoFactor value: I32(85)
static ::Steamworks::EResult const k_EResultAccountLoginDeniedNeedTwoFactor;

/// @brief Field k_EResultAccountLoginDeniedThrottle value: I32(87)
static ::Steamworks::EResult const k_EResultAccountLoginDeniedThrottle;

/// @brief Field k_EResultAccountLogonDenied value: I32(63)
static ::Steamworks::EResult const k_EResultAccountLogonDenied;

/// @brief Field k_EResultAccountLogonDeniedNoMail value: I32(66)
static ::Steamworks::EResult const k_EResultAccountLogonDeniedNoMail;

/// @brief Field k_EResultAccountLogonDeniedVerifiedEmailRequired value: I32(74)
static ::Steamworks::EResult const k_EResultAccountLogonDeniedVerifiedEmailRequired;

/// @brief Field k_EResultAccountNotFeatured value: I32(45)
static ::Steamworks::EResult const k_EResultAccountNotFeatured;

/// @brief Field k_EResultAccountNotFound value: I32(18)
static ::Steamworks::EResult const k_EResultAccountNotFound;

/// @brief Field k_EResultAccountNotFriends value: I32(111)
static ::Steamworks::EResult const k_EResultAccountNotFriends;

/// @brief Field k_EResultAdministratorOK value: I32(46)
static ::Steamworks::EResult const k_EResultAdministratorOK;

/// @brief Field k_EResultAlreadyLoggedInElsewhere value: I32(50)
static ::Steamworks::EResult const k_EResultAlreadyLoggedInElsewhere;

/// @brief Field k_EResultAlreadyOwned value: I32(30)
static ::Steamworks::EResult const k_EResultAlreadyOwned;

/// @brief Field k_EResultAlreadyRedeemed value: I32(28)
static ::Steamworks::EResult const k_EResultAlreadyRedeemed;

/// @brief Field k_EResultBadResponse value: I32(76)
static ::Steamworks::EResult const k_EResultBadResponse;

/// @brief Field k_EResultBanned value: I32(17)
static ::Steamworks::EResult const k_EResultBanned;

/// @brief Field k_EResultBlocked value: I32(40)
static ::Steamworks::EResult const k_EResultBlocked;

/// @brief Field k_EResultBusy value: I32(10)
static ::Steamworks::EResult const k_EResultBusy;

/// @brief Field k_EResultCancelled value: I32(52)
static ::Steamworks::EResult const k_EResultCancelled;

/// @brief Field k_EResultCannotUseOldPassword value: I32(64)
static ::Steamworks::EResult const k_EResultCannotUseOldPassword;

/// @brief Field k_EResultCantRemoveItem value: I32(113)
static ::Steamworks::EResult const k_EResultCantRemoveItem;

/// @brief Field k_EResultCommunityCooldown value: I32(116)
static ::Steamworks::EResult const k_EResultCommunityCooldown;

/// @brief Field k_EResultConnectFailed value: I32(35)
static ::Steamworks::EResult const k_EResultConnectFailed;

/// @brief Field k_EResultContentVersion value: I32(47)
static ::Steamworks::EResult const k_EResultContentVersion;

/// @brief Field k_EResultDataCorruption value: I32(53)
static ::Steamworks::EResult const k_EResultDataCorruption;

/// @brief Field k_EResultDisabled value: I32(80)
static ::Steamworks::EResult const k_EResultDisabled;

/// @brief Field k_EResultDiskFull value: I32(54)
static ::Steamworks::EResult const k_EResultDiskFull;

/// @brief Field k_EResultDuplicateName value: I32(14)
static ::Steamworks::EResult const k_EResultDuplicateName;

/// @brief Field k_EResultDuplicateRequest value: I32(29)
static ::Steamworks::EResult const k_EResultDuplicateRequest;

/// @brief Field k_EResultEmailSendFailure value: I32(99)
static ::Steamworks::EResult const k_EResultEmailSendFailure;

/// @brief Field k_EResultEncryptionFailure value: I32(23)
static ::Steamworks::EResult const k_EResultEncryptionFailure;

/// @brief Field k_EResultExistingUserCancelledLicense value: I32(115)
static ::Steamworks::EResult const k_EResultExistingUserCancelledLicense;

/// @brief Field k_EResultExpired value: I32(27)
static ::Steamworks::EResult const k_EResultExpired;

/// @brief Field k_EResultExpiredLoginAuthCode value: I32(71)
static ::Steamworks::EResult const k_EResultExpiredLoginAuthCode;

/// @brief Field k_EResultExternalAccountAlreadyLinked value: I32(59)
static ::Steamworks::EResult const k_EResultExternalAccountAlreadyLinked;

/// @brief Field k_EResultExternalAccountUnlinked value: I32(57)
static ::Steamworks::EResult const k_EResultExternalAccountUnlinked;

/// @brief Field k_EResultFacebookQueryError value: I32(70)
static ::Steamworks::EResult const k_EResultFacebookQueryError;

/// @brief Field k_EResultFail value: I32(2)
static ::Steamworks::EResult const k_EResultFail;

/// @brief Field k_EResultFileNotFound value: I32(9)
static ::Steamworks::EResult const k_EResultFileNotFound;

/// @brief Field k_EResultGSLTDenied value: I32(102)
static ::Steamworks::EResult const k_EResultGSLTDenied;

/// @brief Field k_EResultGSLTExpired value: I32(106)
static ::Steamworks::EResult const k_EResultGSLTExpired;

/// @brief Field k_EResultGSOwnerDenied value: I32(103)
static ::Steamworks::EResult const k_EResultGSOwnerDenied;

/// @brief Field k_EResultHandshakeFailed value: I32(36)
static ::Steamworks::EResult const k_EResultHandshakeFailed;

/// @brief Field k_EResultHardwareNotCapableOfIPT value: I32(67)
static ::Steamworks::EResult const k_EResultHardwareNotCapableOfIPT;

/// @brief Field k_EResultIOFailure value: I32(37)
static ::Steamworks::EResult const k_EResultIOFailure;

/// @brief Field k_EResultIPBanned value: I32(105)
static ::Steamworks::EResult const k_EResultIPBanned;

/// @brief Field k_EResultIPLoginRestrictionFailed value: I32(72)
static ::Steamworks::EResult const k_EResultIPLoginRestrictionFailed;

/// @brief Field k_EResultIPNotFound value: I32(31)
static ::Steamworks::EResult const k_EResultIPNotFound;

/// @brief Field k_EResultIPTInitError value: I32(68)
static ::Steamworks::EResult const k_EResultIPTInitError;

/// @brief Field k_EResultIgnored value: I32(41)
static ::Steamworks::EResult const k_EResultIgnored;

/// @brief Field k_EResultIllegalPassword value: I32(61)
static ::Steamworks::EResult const k_EResultIllegalPassword;

/// @brief Field k_EResultInsufficientFunds value: I32(107)
static ::Steamworks::EResult const k_EResultInsufficientFunds;

/// @brief Field k_EResultInsufficientPrivilege value: I32(24)
static ::Steamworks::EResult const k_EResultInsufficientPrivilege;

/// @brief Field k_EResultInvalidCEGSubmission value: I32(81)
static ::Steamworks::EResult const k_EResultInvalidCEGSubmission;

/// @brief Field k_EResultInvalidEmail value: I32(13)
static ::Steamworks::EResult const k_EResultInvalidEmail;

/// @brief Field k_EResultInvalidItemType value: I32(104)
static ::Steamworks::EResult const k_EResultInvalidItemType;

/// @brief Field k_EResultInvalidLoginAuthCode value: I32(65)
static ::Steamworks::EResult const k_EResultInvalidLoginAuthCode;

/// @brief Field k_EResultInvalidName value: I32(12)
static ::Steamworks::EResult const k_EResultInvalidName;

/// @brief Field k_EResultInvalidParam value: I32(8)
static ::Steamworks::EResult const k_EResultInvalidParam;

/// @brief Field k_EResultInvalidPassword value: I32(5)
static ::Steamworks::EResult const k_EResultInvalidPassword;

/// @brief Field k_EResultInvalidProtocolVer value: I32(7)
static ::Steamworks::EResult const k_EResultInvalidProtocolVer;

/// @brief Field k_EResultInvalidSignature value: I32(121)
static ::Steamworks::EResult const k_EResultInvalidSignature;

/// @brief Field k_EResultInvalidState value: I32(11)
static ::Steamworks::EResult const k_EResultInvalidState;

/// @brief Field k_EResultInvalidSteamID value: I32(19)
static ::Steamworks::EResult const k_EResultInvalidSteamID;

/// @brief Field k_EResultItemDeleted value: I32(86)
static ::Steamworks::EResult const k_EResultItemDeleted;

/// @brief Field k_EResultLauncherMigrated value: I32(119)
static ::Steamworks::EResult const k_EResultLauncherMigrated;

/// @brief Field k_EResultLimitExceeded value: I32(25)
static ::Steamworks::EResult const k_EResultLimitExceeded;

/// @brief Field k_EResultLimitedUserAccount value: I32(112)
static ::Steamworks::EResult const k_EResultLimitedUserAccount;

/// @brief Field k_EResultLockingFailed value: I32(33)
static ::Steamworks::EResult const k_EResultLockingFailed;

/// @brief Field k_EResultLoggedInElsewhere value: I32(6)
static ::Steamworks::EResult const k_EResultLoggedInElsewhere;

/// @brief Field k_EResultLogonSessionReplaced value: I32(34)
static ::Steamworks::EResult const k_EResultLogonSessionReplaced;

/// @brief Field k_EResultMustAgreeToSSA value: I32(118)
static ::Steamworks::EResult const k_EResultMustAgreeToSSA;

/// @brief Field k_EResultNeedCaptcha value: I32(101)
static ::Steamworks::EResult const k_EResultNeedCaptcha;

/// @brief Field k_EResultNoConnection value: I32(3)
static ::Steamworks::EResult const k_EResultNoConnection;

/// @brief Field k_EResultNoLauncherSpecified value: I32(117)
static ::Steamworks::EResult const k_EResultNoLauncherSpecified;

/// @brief Field k_EResultNoMatch value: I32(42)
static ::Steamworks::EResult const k_EResultNoMatch;

/// @brief Field k_EResultNoMatchingURL value: I32(75)
static ::Steamworks::EResult const k_EResultNoMatchingURL;

/// @brief Field k_EResultNoMobileDevice value: I32(92)
static ::Steamworks::EResult const k_EResultNoMobileDevice;

/// @brief Field k_EResultNoSiteLicensesFound value: I32(109)
static ::Steamworks::EResult const k_EResultNoSiteLicensesFound;

/// @brief Field k_EResultNoVerifiedPhone value: I32(123)
static ::Steamworks::EResult const k_EResultNoVerifiedPhone;

/// @brief Field k_EResultNone value: I32(0)
static ::Steamworks::EResult const k_EResultNone;

/// @brief Field k_EResultNotLoggedOn value: I32(21)
static ::Steamworks::EResult const k_EResultNotLoggedOn;

/// @brief Field k_EResultNotModified value: I32(91)
static ::Steamworks::EResult const k_EResultNotModified;

/// @brief Field k_EResultNotSettled value: I32(100)
static ::Steamworks::EResult const k_EResultNotSettled;

/// @brief Field k_EResultOK value: I32(1)
static ::Steamworks::EResult const k_EResultOK;

/// @brief Field k_EResultPSNTicketInvalid value: I32(58)
static ::Steamworks::EResult const k_EResultPSNTicketInvalid;

/// @brief Field k_EResultParentalControlRestricted value: I32(69)
static ::Steamworks::EResult const k_EResultParentalControlRestricted;

/// @brief Field k_EResultParseFailure value: I32(122)
static ::Steamworks::EResult const k_EResultParseFailure;

/// @brief Field k_EResultPasswordRequiredToKickSession value: I32(49)
static ::Steamworks::EResult const k_EResultPasswordRequiredToKickSession;

/// @brief Field k_EResultPasswordUnset value: I32(56)
static ::Steamworks::EResult const k_EResultPasswordUnset;

/// @brief Field k_EResultPending value: I32(22)
static ::Steamworks::EResult const k_EResultPending;

/// @brief Field k_EResultPersistFailed value: I32(32)
static ::Steamworks::EResult const k_EResultPersistFailed;

/// @brief Field k_EResultPhoneActivityLimitExceeded value: I32(97)
static ::Steamworks::EResult const k_EResultPhoneActivityLimitExceeded;

/// @brief Field k_EResultRateLimitExceeded value: I32(84)
static ::Steamworks::EResult const k_EResultRateLimitExceeded;

/// @brief Field k_EResultRefundToWallet value: I32(98)
static ::Steamworks::EResult const k_EResultRefundToWallet;

/// @brief Field k_EResultRegionLocked value: I32(83)
static ::Steamworks::EResult const k_EResultRegionLocked;

/// @brief Field k_EResultRemoteCallFailed value: I32(55)
static ::Steamworks::EResult const k_EResultRemoteCallFailed;

/// @brief Field k_EResultRemoteDisconnect value: I32(38)
static ::Steamworks::EResult const k_EResultRemoteDisconnect;

/// @brief Field k_EResultRemoteFileConflict value: I32(60)
static ::Steamworks::EResult const k_EResultRemoteFileConflict;

/// @brief Field k_EResultRequirePasswordReEntry value: I32(77)
static ::Steamworks::EResult const k_EResultRequirePasswordReEntry;

/// @brief Field k_EResultRestrictedDevice value: I32(82)
static ::Steamworks::EResult const k_EResultRestrictedDevice;

/// @brief Field k_EResultRevoked value: I32(26)
static ::Steamworks::EResult const k_EResultRevoked;

/// @brief Field k_EResultSameAsPreviousValue value: I32(62)
static ::Steamworks::EResult const k_EResultSameAsPreviousValue;

/// @brief Field k_EResultServiceReadOnly value: I32(44)
static ::Steamworks::EResult const k_EResultServiceReadOnly;

/// @brief Field k_EResultServiceUnavailable value: I32(20)
static ::Steamworks::EResult const k_EResultServiceUnavailable;

/// @brief Field k_EResultShoppingCartNotFound value: I32(39)
static ::Steamworks::EResult const k_EResultShoppingCartNotFound;

/// @brief Field k_EResultSmsCodeFailed value: I32(94)
static ::Steamworks::EResult const k_EResultSmsCodeFailed;

/// @brief Field k_EResultSteamRealmMismatch value: I32(120)
static ::Steamworks::EResult const k_EResultSteamRealmMismatch;

/// @brief Field k_EResultSuspended value: I32(51)
static ::Steamworks::EResult const k_EResultSuspended;

/// @brief Field k_EResultTimeNotSynced value: I32(93)
static ::Steamworks::EResult const k_EResultTimeNotSynced;

/// @brief Field k_EResultTimeout value: I32(16)
static ::Steamworks::EResult const k_EResultTimeout;

/// @brief Field k_EResultTooManyPending value: I32(108)
static ::Steamworks::EResult const k_EResultTooManyPending;

/// @brief Field k_EResultTryAnotherCM value: I32(48)
static ::Steamworks::EResult const k_EResultTryAnotherCM;

/// @brief Field k_EResultTwoFactorActivationCodeMismatch value: I32(89)
static ::Steamworks::EResult const k_EResultTwoFactorActivationCodeMismatch;

/// @brief Field k_EResultTwoFactorCodeMismatch value: I32(88)
static ::Steamworks::EResult const k_EResultTwoFactorCodeMismatch;

/// @brief Field k_EResultUnexpectedError value: I32(79)
static ::Steamworks::EResult const k_EResultUnexpectedError;

/// @brief Field k_EResultValueOutOfRange value: I32(78)
static ::Steamworks::EResult const k_EResultValueOutOfRange;

/// @brief Field k_EResultWGNetworkSendExceeded value: I32(110)
static ::Steamworks::EResult const k_EResultWGNetworkSendExceeded;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
