#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Error)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509Error;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509Error);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Error, "Mono.Btls", "MonoBtlsX509Error");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509Error
struct CORDL_TYPE MonoBtlsX509Error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509Error_Unwrapped
enum struct __MonoBtlsX509Error_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_UNABLE_TO_GET_ISSUER_CERT = static_cast<int32_t>(0x2),
__E_UNABLE_TO_GET_CRL = static_cast<int32_t>(0x3),
__E_UNABLE_TO_DECRYPT_CERT_SIGNATURE = static_cast<int32_t>(0x4),
__E_UNABLE_TO_DECRYPT_CRL_SIGNATURE = static_cast<int32_t>(0x5),
__E_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY = static_cast<int32_t>(0x6),
__E_CERT_SIGNATURE_FAILURE = static_cast<int32_t>(0x7),
__E_CRL_SIGNATURE_FAILURE = static_cast<int32_t>(0x8),
__E_CERT_NOT_YET_VALID = static_cast<int32_t>(0x9),
__E_CERT_HAS_EXPIRED = static_cast<int32_t>(0xa),
__E_CRL_NOT_YET_VALID = static_cast<int32_t>(0xb),
__E_CRL_HAS_EXPIRED = static_cast<int32_t>(0xc),
__E_ERROR_IN_CERT_NOT_BEFORE_FIELD = static_cast<int32_t>(0xd),
__E_ERROR_IN_CERT_NOT_AFTER_FIELD = static_cast<int32_t>(0xe),
__E_ERROR_IN_CRL_LAST_UPDATE_FIELD = static_cast<int32_t>(0xf),
__E_ERROR_IN_CRL_NEXT_UPDATE_FIELD = static_cast<int32_t>(0x10),
__E_OUT_OF_MEM = static_cast<int32_t>(0x11),
__E_DEPTH_ZERO_SELF_SIGNED_CERT = static_cast<int32_t>(0x12),
__E_SELF_SIGNED_CERT_IN_CHAIN = static_cast<int32_t>(0x13),
__E_UNABLE_TO_GET_ISSUER_CERT_LOCALLY = static_cast<int32_t>(0x14),
__E_UNABLE_TO_VERIFY_LEAF_SIGNATURE = static_cast<int32_t>(0x15),
__E_CERT_CHAIN_TOO_LONG = static_cast<int32_t>(0x16),
__E_CERT_REVOKED = static_cast<int32_t>(0x17),
__E_INVALID_CA = static_cast<int32_t>(0x18),
__E_PATH_LENGTH_EXCEEDED = static_cast<int32_t>(0x19),
__E_INVALID_PURPOSE = static_cast<int32_t>(0x1a),
__E_CERT_UNTRUSTED = static_cast<int32_t>(0x1b),
__E_CERT_REJECTED = static_cast<int32_t>(0x1c),
__E_SUBJECT_ISSUER_MISMATCH = static_cast<int32_t>(0x1d),
__E_AKID_SKID_MISMATCH = static_cast<int32_t>(0x1e),
__E_AKID_ISSUER_SERIAL_MISMATCH = static_cast<int32_t>(0x1f),
__E_KEYUSAGE_NO_CERTSIGN = static_cast<int32_t>(0x20),
__E_UNABLE_TO_GET_CRL_ISSUER = static_cast<int32_t>(0x21),
__E_UNHANDLED_CRITICAL_EXTENSION = static_cast<int32_t>(0x22),
__E_KEYUSAGE_NO_CRL_SIGN = static_cast<int32_t>(0x23),
__E_UNHANDLED_CRITICAL_CRL_EXTENSION = static_cast<int32_t>(0x24),
__E_INVALID_NON_CA = static_cast<int32_t>(0x25),
__E_PROXY_PATH_LENGTH_EXCEEDED = static_cast<int32_t>(0x26),
__E_KEYUSAGE_NO_DIGITAL_SIGNATURE = static_cast<int32_t>(0x27),
__E_PROXY_CERTIFICATES_NOT_ALLOWED = static_cast<int32_t>(0x28),
__E_INVALID_EXTENSION = static_cast<int32_t>(0x29),
__E_INVALID_POLICY_EXTENSION = static_cast<int32_t>(0x2a),
__E_NO_EXPLICIT_POLICY = static_cast<int32_t>(0x2b),
__E_DIFFERENT_CRL_SCOPE = static_cast<int32_t>(0x2c),
__E_UNSUPPORTED_EXTENSION_FEATURE = static_cast<int32_t>(0x2d),
__E_UNNESTED_RESOURCE = static_cast<int32_t>(0x2e),
__E_PERMITTED_VIOLATION = static_cast<int32_t>(0x2f),
__E_EXCLUDED_VIOLATION = static_cast<int32_t>(0x30),
__E_SUBTREE_MINMAX = static_cast<int32_t>(0x31),
__E_UNSUPPORTED_CONSTRAINT_TYPE = static_cast<int32_t>(0x33),
__E_UNSUPPORTED_CONSTRAINT_SYNTAX = static_cast<int32_t>(0x34),
__E_UNSUPPORTED_NAME_SYNTAX = static_cast<int32_t>(0x35),
__E_CRL_PATH_VALIDATION_ERROR = static_cast<int32_t>(0x36),
__E_SUITE_B_INVALID_VERSION = static_cast<int32_t>(0x38),
__E_SUITE_B_INVALID_ALGORITHM = static_cast<int32_t>(0x39),
__E_SUITE_B_INVALID_CURVE = static_cast<int32_t>(0x3a),
__E_SUITE_B_INVALID_SIGNATURE_ALGORITHM = static_cast<int32_t>(0x3b),
__E_SUITE_B_LOS_NOT_ALLOWED = static_cast<int32_t>(0x3c),
__E_SUITE_B_CANNOT_SIGN_P_384_WITH_P_256 = static_cast<int32_t>(0x3d),
__E_HOSTNAME_MISMATCH = static_cast<int32_t>(0x3e),
__E_EMAIL_MISMATCH = static_cast<int32_t>(0x3f),
__E_IP_ADDRESS_MISMATCH = static_cast<int32_t>(0x40),
__E_APPLICATION_VERIFICATION = static_cast<int32_t>(0x32),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509Error_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509Error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509Error(int32_t  value__) noexcept;

/// @brief Field AKID_ISSUER_SERIAL_MISMATCH value: I32(31)
static ::Mono::Btls::MonoBtlsX509Error const AKID_ISSUER_SERIAL_MISMATCH;

/// @brief Field AKID_SKID_MISMATCH value: I32(30)
static ::Mono::Btls::MonoBtlsX509Error const AKID_SKID_MISMATCH;

/// @brief Field APPLICATION_VERIFICATION value: I32(50)
static ::Mono::Btls::MonoBtlsX509Error const APPLICATION_VERIFICATION;

/// @brief Field CERT_CHAIN_TOO_LONG value: I32(22)
static ::Mono::Btls::MonoBtlsX509Error const CERT_CHAIN_TOO_LONG;

/// @brief Field CERT_HAS_EXPIRED value: I32(10)
static ::Mono::Btls::MonoBtlsX509Error const CERT_HAS_EXPIRED;

/// @brief Field CERT_NOT_YET_VALID value: I32(9)
static ::Mono::Btls::MonoBtlsX509Error const CERT_NOT_YET_VALID;

/// @brief Field CERT_REJECTED value: I32(28)
static ::Mono::Btls::MonoBtlsX509Error const CERT_REJECTED;

/// @brief Field CERT_REVOKED value: I32(23)
static ::Mono::Btls::MonoBtlsX509Error const CERT_REVOKED;

/// @brief Field CERT_SIGNATURE_FAILURE value: I32(7)
static ::Mono::Btls::MonoBtlsX509Error const CERT_SIGNATURE_FAILURE;

/// @brief Field CERT_UNTRUSTED value: I32(27)
static ::Mono::Btls::MonoBtlsX509Error const CERT_UNTRUSTED;

/// @brief Field CRL_HAS_EXPIRED value: I32(12)
static ::Mono::Btls::MonoBtlsX509Error const CRL_HAS_EXPIRED;

/// @brief Field CRL_NOT_YET_VALID value: I32(11)
static ::Mono::Btls::MonoBtlsX509Error const CRL_NOT_YET_VALID;

/// @brief Field CRL_PATH_VALIDATION_ERROR value: I32(54)
static ::Mono::Btls::MonoBtlsX509Error const CRL_PATH_VALIDATION_ERROR;

/// @brief Field CRL_SIGNATURE_FAILURE value: I32(8)
static ::Mono::Btls::MonoBtlsX509Error const CRL_SIGNATURE_FAILURE;

/// @brief Field DEPTH_ZERO_SELF_SIGNED_CERT value: I32(18)
static ::Mono::Btls::MonoBtlsX509Error const DEPTH_ZERO_SELF_SIGNED_CERT;

/// @brief Field DIFFERENT_CRL_SCOPE value: I32(44)
static ::Mono::Btls::MonoBtlsX509Error const DIFFERENT_CRL_SCOPE;

/// @brief Field EMAIL_MISMATCH value: I32(63)
static ::Mono::Btls::MonoBtlsX509Error const EMAIL_MISMATCH;

/// @brief Field ERROR_IN_CERT_NOT_AFTER_FIELD value: I32(14)
static ::Mono::Btls::MonoBtlsX509Error const ERROR_IN_CERT_NOT_AFTER_FIELD;

/// @brief Field ERROR_IN_CERT_NOT_BEFORE_FIELD value: I32(13)
static ::Mono::Btls::MonoBtlsX509Error const ERROR_IN_CERT_NOT_BEFORE_FIELD;

/// @brief Field ERROR_IN_CRL_LAST_UPDATE_FIELD value: I32(15)
static ::Mono::Btls::MonoBtlsX509Error const ERROR_IN_CRL_LAST_UPDATE_FIELD;

/// @brief Field ERROR_IN_CRL_NEXT_UPDATE_FIELD value: I32(16)
static ::Mono::Btls::MonoBtlsX509Error const ERROR_IN_CRL_NEXT_UPDATE_FIELD;

/// @brief Field EXCLUDED_VIOLATION value: I32(48)
static ::Mono::Btls::MonoBtlsX509Error const EXCLUDED_VIOLATION;

/// @brief Field HOSTNAME_MISMATCH value: I32(62)
static ::Mono::Btls::MonoBtlsX509Error const HOSTNAME_MISMATCH;

/// @brief Field INVALID_CA value: I32(24)
static ::Mono::Btls::MonoBtlsX509Error const INVALID_CA;

/// @brief Field INVALID_EXTENSION value: I32(41)
static ::Mono::Btls::MonoBtlsX509Error const INVALID_EXTENSION;

/// @brief Field INVALID_NON_CA value: I32(37)
static ::Mono::Btls::MonoBtlsX509Error const INVALID_NON_CA;

/// @brief Field INVALID_POLICY_EXTENSION value: I32(42)
static ::Mono::Btls::MonoBtlsX509Error const INVALID_POLICY_EXTENSION;

/// @brief Field INVALID_PURPOSE value: I32(26)
static ::Mono::Btls::MonoBtlsX509Error const INVALID_PURPOSE;

/// @brief Field IP_ADDRESS_MISMATCH value: I32(64)
static ::Mono::Btls::MonoBtlsX509Error const IP_ADDRESS_MISMATCH;

/// @brief Field KEYUSAGE_NO_CERTSIGN value: I32(32)
static ::Mono::Btls::MonoBtlsX509Error const KEYUSAGE_NO_CERTSIGN;

/// @brief Field KEYUSAGE_NO_CRL_SIGN value: I32(35)
static ::Mono::Btls::MonoBtlsX509Error const KEYUSAGE_NO_CRL_SIGN;

/// @brief Field KEYUSAGE_NO_DIGITAL_SIGNATURE value: I32(39)
static ::Mono::Btls::MonoBtlsX509Error const KEYUSAGE_NO_DIGITAL_SIGNATURE;

/// @brief Field NO_EXPLICIT_POLICY value: I32(43)
static ::Mono::Btls::MonoBtlsX509Error const NO_EXPLICIT_POLICY;

/// @brief Field OK value: I32(0)
static ::Mono::Btls::MonoBtlsX509Error const OK;

/// @brief Field OUT_OF_MEM value: I32(17)
static ::Mono::Btls::MonoBtlsX509Error const OUT_OF_MEM;

/// @brief Field PATH_LENGTH_EXCEEDED value: I32(25)
static ::Mono::Btls::MonoBtlsX509Error const PATH_LENGTH_EXCEEDED;

/// @brief Field PERMITTED_VIOLATION value: I32(47)
static ::Mono::Btls::MonoBtlsX509Error const PERMITTED_VIOLATION;

/// @brief Field PROXY_CERTIFICATES_NOT_ALLOWED value: I32(40)
static ::Mono::Btls::MonoBtlsX509Error const PROXY_CERTIFICATES_NOT_ALLOWED;

/// @brief Field PROXY_PATH_LENGTH_EXCEEDED value: I32(38)
static ::Mono::Btls::MonoBtlsX509Error const PROXY_PATH_LENGTH_EXCEEDED;

/// @brief Field SELF_SIGNED_CERT_IN_CHAIN value: I32(19)
static ::Mono::Btls::MonoBtlsX509Error const SELF_SIGNED_CERT_IN_CHAIN;

/// @brief Field SUBJECT_ISSUER_MISMATCH value: I32(29)
static ::Mono::Btls::MonoBtlsX509Error const SUBJECT_ISSUER_MISMATCH;

/// @brief Field SUBTREE_MINMAX value: I32(49)
static ::Mono::Btls::MonoBtlsX509Error const SUBTREE_MINMAX;

/// @brief Field SUITE_B_CANNOT_SIGN_P_384_WITH_P_256 value: I32(61)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_CANNOT_SIGN_P_384_WITH_P_256;

/// @brief Field SUITE_B_INVALID_ALGORITHM value: I32(57)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_INVALID_ALGORITHM;

/// @brief Field SUITE_B_INVALID_CURVE value: I32(58)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_INVALID_CURVE;

/// @brief Field SUITE_B_INVALID_SIGNATURE_ALGORITHM value: I32(59)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_INVALID_SIGNATURE_ALGORITHM;

/// @brief Field SUITE_B_INVALID_VERSION value: I32(56)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_INVALID_VERSION;

/// @brief Field SUITE_B_LOS_NOT_ALLOWED value: I32(60)
static ::Mono::Btls::MonoBtlsX509Error const SUITE_B_LOS_NOT_ALLOWED;

/// @brief Field UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY value: I32(6)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY;

/// @brief Field UNABLE_TO_DECRYPT_CERT_SIGNATURE value: I32(4)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_DECRYPT_CERT_SIGNATURE;

/// @brief Field UNABLE_TO_DECRYPT_CRL_SIGNATURE value: I32(5)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_DECRYPT_CRL_SIGNATURE;

/// @brief Field UNABLE_TO_GET_CRL value: I32(3)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_GET_CRL;

/// @brief Field UNABLE_TO_GET_CRL_ISSUER value: I32(33)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_GET_CRL_ISSUER;

/// @brief Field UNABLE_TO_GET_ISSUER_CERT value: I32(2)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_GET_ISSUER_CERT;

/// @brief Field UNABLE_TO_GET_ISSUER_CERT_LOCALLY value: I32(20)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_GET_ISSUER_CERT_LOCALLY;

/// @brief Field UNABLE_TO_VERIFY_LEAF_SIGNATURE value: I32(21)
static ::Mono::Btls::MonoBtlsX509Error const UNABLE_TO_VERIFY_LEAF_SIGNATURE;

/// @brief Field UNHANDLED_CRITICAL_CRL_EXTENSION value: I32(36)
static ::Mono::Btls::MonoBtlsX509Error const UNHANDLED_CRITICAL_CRL_EXTENSION;

/// @brief Field UNHANDLED_CRITICAL_EXTENSION value: I32(34)
static ::Mono::Btls::MonoBtlsX509Error const UNHANDLED_CRITICAL_EXTENSION;

/// @brief Field UNNESTED_RESOURCE value: I32(46)
static ::Mono::Btls::MonoBtlsX509Error const UNNESTED_RESOURCE;

/// @brief Field UNSUPPORTED_CONSTRAINT_SYNTAX value: I32(52)
static ::Mono::Btls::MonoBtlsX509Error const UNSUPPORTED_CONSTRAINT_SYNTAX;

/// @brief Field UNSUPPORTED_CONSTRAINT_TYPE value: I32(51)
static ::Mono::Btls::MonoBtlsX509Error const UNSUPPORTED_CONSTRAINT_TYPE;

/// @brief Field UNSUPPORTED_EXTENSION_FEATURE value: I32(45)
static ::Mono::Btls::MonoBtlsX509Error const UNSUPPORTED_EXTENSION_FEATURE;

/// @brief Field UNSUPPORTED_NAME_SYNTAX value: I32(53)
static ::Mono::Btls::MonoBtlsX509Error const UNSUPPORTED_NAME_SYNTAX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11484};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509Error, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509Error) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls
