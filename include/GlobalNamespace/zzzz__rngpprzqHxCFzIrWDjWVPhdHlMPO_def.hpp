#pragma once
// IWYU pragma private; include "GlobalNamespace/rngpprzqHxCFzIrWDjWVPhdHlMPO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(rngpprzqHxCFzIrWDjWVPhdHlMPO)
// Forward declare root types
namespace GlobalNamespace {
struct rngpprzqHxCFzIrWDjWVPhdHlMPO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO, "", "rngpprzqHxCFzIrWDjWVPhdHlMPO");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: rngpprzqHxCFzIrWDjWVPhdHlMPO
struct CORDL_TYPE rngpprzqHxCFzIrWDjWVPhdHlMPO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __rngpprzqHxCFzIrWDjWVPhdHlMPO_Unwrapped
enum struct __rngpprzqHxCFzIrWDjWVPhdHlMPO_Unwrapped : int32_t {
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
};

/// @brief Conversion into unwrapped enum value
constexpr operator __rngpprzqHxCFzIrWDjWVPhdHlMPO_Unwrapped () const noexcept {
return static_cast<__rngpprzqHxCFzIrWDjWVPhdHlMPO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr rngpprzqHxCFzIrWDjWVPhdHlMPO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr rngpprzqHxCFzIrWDjWVPhdHlMPO(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EResultAccessDenied value: I32(15)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccessDenied;

/// @brief Field k_EResultAccountActivityLimitExceeded value: I32(96)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountActivityLimitExceeded;

/// @brief Field k_EResultAccountAssociatedToMultiplePartners value: I32(90)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountAssociatedToMultiplePartners;

/// @brief Field k_EResultAccountDisabled value: I32(43)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountDisabled;

/// @brief Field k_EResultAccountLimitExceeded value: I32(95)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLimitExceeded;

/// @brief Field k_EResultAccountLockedDown value: I32(73)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLockedDown;

/// @brief Field k_EResultAccountLoginDeniedNeedTwoFactor value: I32(85)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLoginDeniedNeedTwoFactor;

/// @brief Field k_EResultAccountLoginDeniedThrottle value: I32(87)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLoginDeniedThrottle;

/// @brief Field k_EResultAccountLogonDenied value: I32(63)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLogonDenied;

/// @brief Field k_EResultAccountLogonDeniedNoMail value: I32(66)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLogonDeniedNoMail;

/// @brief Field k_EResultAccountLogonDeniedVerifiedEmailRequired value: I32(74)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountLogonDeniedVerifiedEmailRequired;

/// @brief Field k_EResultAccountNotFeatured value: I32(45)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountNotFeatured;

/// @brief Field k_EResultAccountNotFound value: I32(18)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAccountNotFound;

/// @brief Field k_EResultAdministratorOK value: I32(46)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAdministratorOK;

/// @brief Field k_EResultAlreadyLoggedInElsewhere value: I32(50)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAlreadyLoggedInElsewhere;

/// @brief Field k_EResultAlreadyOwned value: I32(30)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAlreadyOwned;

/// @brief Field k_EResultAlreadyRedeemed value: I32(28)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultAlreadyRedeemed;

/// @brief Field k_EResultBadResponse value: I32(76)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultBadResponse;

/// @brief Field k_EResultBanned value: I32(17)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultBanned;

/// @brief Field k_EResultBlocked value: I32(40)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultBlocked;

/// @brief Field k_EResultBusy value: I32(10)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultBusy;

/// @brief Field k_EResultCancelled value: I32(52)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultCancelled;

/// @brief Field k_EResultCannotUseOldPassword value: I32(64)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultCannotUseOldPassword;

/// @brief Field k_EResultConnectFailed value: I32(35)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultConnectFailed;

/// @brief Field k_EResultContentVersion value: I32(47)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultContentVersion;

/// @brief Field k_EResultDataCorruption value: I32(53)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultDataCorruption;

/// @brief Field k_EResultDisabled value: I32(80)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultDisabled;

/// @brief Field k_EResultDiskFull value: I32(54)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultDiskFull;

/// @brief Field k_EResultDuplicateName value: I32(14)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultDuplicateName;

/// @brief Field k_EResultDuplicateRequest value: I32(29)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultDuplicateRequest;

/// @brief Field k_EResultEmailSendFailure value: I32(99)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultEmailSendFailure;

/// @brief Field k_EResultEncryptionFailure value: I32(23)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultEncryptionFailure;

/// @brief Field k_EResultExpired value: I32(27)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultExpired;

/// @brief Field k_EResultExpiredLoginAuthCode value: I32(71)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultExpiredLoginAuthCode;

/// @brief Field k_EResultExternalAccountAlreadyLinked value: I32(59)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultExternalAccountAlreadyLinked;

/// @brief Field k_EResultExternalAccountUnlinked value: I32(57)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultExternalAccountUnlinked;

/// @brief Field k_EResultFacebookQueryError value: I32(70)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultFacebookQueryError;

/// @brief Field k_EResultFail value: I32(2)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultFail;

/// @brief Field k_EResultFileNotFound value: I32(9)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultFileNotFound;

/// @brief Field k_EResultHandshakeFailed value: I32(36)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultHandshakeFailed;

/// @brief Field k_EResultHardwareNotCapableOfIPT value: I32(67)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultHardwareNotCapableOfIPT;

/// @brief Field k_EResultIOFailure value: I32(37)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIOFailure;

/// @brief Field k_EResultIPLoginRestrictionFailed value: I32(72)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIPLoginRestrictionFailed;

/// @brief Field k_EResultIPNotFound value: I32(31)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIPNotFound;

/// @brief Field k_EResultIPTInitError value: I32(68)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIPTInitError;

/// @brief Field k_EResultIgnored value: I32(41)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIgnored;

/// @brief Field k_EResultIllegalPassword value: I32(61)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultIllegalPassword;

/// @brief Field k_EResultInsufficientPrivilege value: I32(24)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInsufficientPrivilege;

/// @brief Field k_EResultInvalidCEGSubmission value: I32(81)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidCEGSubmission;

/// @brief Field k_EResultInvalidEmail value: I32(13)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidEmail;

/// @brief Field k_EResultInvalidLoginAuthCode value: I32(65)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidLoginAuthCode;

/// @brief Field k_EResultInvalidName value: I32(12)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidName;

/// @brief Field k_EResultInvalidParam value: I32(8)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidParam;

/// @brief Field k_EResultInvalidPassword value: I32(5)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidPassword;

/// @brief Field k_EResultInvalidProtocolVer value: I32(7)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidProtocolVer;

/// @brief Field k_EResultInvalidState value: I32(11)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidState;

/// @brief Field k_EResultInvalidSteamID value: I32(19)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultInvalidSteamID;

/// @brief Field k_EResultItemDeleted value: I32(86)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultItemDeleted;

/// @brief Field k_EResultLimitExceeded value: I32(25)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultLimitExceeded;

/// @brief Field k_EResultLockingFailed value: I32(33)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultLockingFailed;

/// @brief Field k_EResultLoggedInElsewhere value: I32(6)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultLoggedInElsewhere;

/// @brief Field k_EResultLogonSessionReplaced value: I32(34)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultLogonSessionReplaced;

/// @brief Field k_EResultNeedCaptcha value: I32(101)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNeedCaptcha;

/// @brief Field k_EResultNoConnection value: I32(3)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNoConnection;

/// @brief Field k_EResultNoMatch value: I32(42)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNoMatch;

/// @brief Field k_EResultNoMatchingURL value: I32(75)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNoMatchingURL;

/// @brief Field k_EResultNoMobileDevice value: I32(92)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNoMobileDevice;

/// @brief Field k_EResultNotLoggedOn value: I32(21)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNotLoggedOn;

/// @brief Field k_EResultNotModified value: I32(91)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNotModified;

/// @brief Field k_EResultNotSettled value: I32(100)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultNotSettled;

/// @brief Field k_EResultOK value: I32(1)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultOK;

/// @brief Field k_EResultPSNTicketInvalid value: I32(58)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPSNTicketInvalid;

/// @brief Field k_EResultParentalControlRestricted value: I32(69)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultParentalControlRestricted;

/// @brief Field k_EResultPasswordRequiredToKickSession value: I32(49)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPasswordRequiredToKickSession;

/// @brief Field k_EResultPasswordUnset value: I32(56)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPasswordUnset;

/// @brief Field k_EResultPending value: I32(22)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPending;

/// @brief Field k_EResultPersistFailed value: I32(32)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPersistFailed;

/// @brief Field k_EResultPhoneActivityLimitExceeded value: I32(97)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultPhoneActivityLimitExceeded;

/// @brief Field k_EResultRateLimitExceeded value: I32(84)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRateLimitExceeded;

/// @brief Field k_EResultRefundToWallet value: I32(98)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRefundToWallet;

/// @brief Field k_EResultRegionLocked value: I32(83)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRegionLocked;

/// @brief Field k_EResultRemoteCallFailed value: I32(55)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRemoteCallFailed;

/// @brief Field k_EResultRemoteDisconnect value: I32(38)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRemoteDisconnect;

/// @brief Field k_EResultRemoteFileConflict value: I32(60)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRemoteFileConflict;

/// @brief Field k_EResultRequirePasswordReEntry value: I32(77)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRequirePasswordReEntry;

/// @brief Field k_EResultRestrictedDevice value: I32(82)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRestrictedDevice;

/// @brief Field k_EResultRevoked value: I32(26)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultRevoked;

/// @brief Field k_EResultSameAsPreviousValue value: I32(62)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultSameAsPreviousValue;

/// @brief Field k_EResultServiceReadOnly value: I32(44)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultServiceReadOnly;

/// @brief Field k_EResultServiceUnavailable value: I32(20)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultServiceUnavailable;

/// @brief Field k_EResultShoppingCartNotFound value: I32(39)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultShoppingCartNotFound;

/// @brief Field k_EResultSmsCodeFailed value: I32(94)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultSmsCodeFailed;

/// @brief Field k_EResultSuspended value: I32(51)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultSuspended;

/// @brief Field k_EResultTimeNotSynced value: I32(93)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultTimeNotSynced;

/// @brief Field k_EResultTimeout value: I32(16)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultTimeout;

/// @brief Field k_EResultTryAnotherCM value: I32(48)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultTryAnotherCM;

/// @brief Field k_EResultTwoFactorActivationCodeMismatch value: I32(89)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultTwoFactorActivationCodeMismatch;

/// @brief Field k_EResultTwoFactorCodeMismatch value: I32(88)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultTwoFactorCodeMismatch;

/// @brief Field k_EResultUnexpectedError value: I32(79)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultUnexpectedError;

/// @brief Field k_EResultValueOutOfRange value: I32(78)
static ::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO const k_EResultValueOutOfRange;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::rngpprzqHxCFzIrWDjWVPhdHlMPO) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
