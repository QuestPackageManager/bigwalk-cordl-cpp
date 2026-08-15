#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Error.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Error_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509Error::MonoBtlsX509Error(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Error::MonoBtlsX509Error()   {
}
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::OK{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_GET_ISSUER_CERT{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_GET_CRL{static_cast<int32_t>(0x3)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_DECRYPT_CERT_SIGNATURE{static_cast<int32_t>(0x4)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_DECRYPT_CRL_SIGNATURE{static_cast<int32_t>(0x5)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY{static_cast<int32_t>(0x6)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_SIGNATURE_FAILURE{static_cast<int32_t>(0x7)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CRL_SIGNATURE_FAILURE{static_cast<int32_t>(0x8)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_NOT_YET_VALID{static_cast<int32_t>(0x9)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_HAS_EXPIRED{static_cast<int32_t>(0xa)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CRL_NOT_YET_VALID{static_cast<int32_t>(0xb)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CRL_HAS_EXPIRED{static_cast<int32_t>(0xc)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::ERROR_IN_CERT_NOT_BEFORE_FIELD{static_cast<int32_t>(0xd)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::ERROR_IN_CERT_NOT_AFTER_FIELD{static_cast<int32_t>(0xe)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::ERROR_IN_CRL_LAST_UPDATE_FIELD{static_cast<int32_t>(0xf)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::ERROR_IN_CRL_NEXT_UPDATE_FIELD{static_cast<int32_t>(0x10)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::OUT_OF_MEM{static_cast<int32_t>(0x11)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::DEPTH_ZERO_SELF_SIGNED_CERT{static_cast<int32_t>(0x12)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SELF_SIGNED_CERT_IN_CHAIN{static_cast<int32_t>(0x13)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_GET_ISSUER_CERT_LOCALLY{static_cast<int32_t>(0x14)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_VERIFY_LEAF_SIGNATURE{static_cast<int32_t>(0x15)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_CHAIN_TOO_LONG{static_cast<int32_t>(0x16)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_REVOKED{static_cast<int32_t>(0x17)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::INVALID_CA{static_cast<int32_t>(0x18)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::PATH_LENGTH_EXCEEDED{static_cast<int32_t>(0x19)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::INVALID_PURPOSE{static_cast<int32_t>(0x1a)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_UNTRUSTED{static_cast<int32_t>(0x1b)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CERT_REJECTED{static_cast<int32_t>(0x1c)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUBJECT_ISSUER_MISMATCH{static_cast<int32_t>(0x1d)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::AKID_SKID_MISMATCH{static_cast<int32_t>(0x1e)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::AKID_ISSUER_SERIAL_MISMATCH{static_cast<int32_t>(0x1f)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::KEYUSAGE_NO_CERTSIGN{static_cast<int32_t>(0x20)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNABLE_TO_GET_CRL_ISSUER{static_cast<int32_t>(0x21)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNHANDLED_CRITICAL_EXTENSION{static_cast<int32_t>(0x22)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::KEYUSAGE_NO_CRL_SIGN{static_cast<int32_t>(0x23)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNHANDLED_CRITICAL_CRL_EXTENSION{static_cast<int32_t>(0x24)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::INVALID_NON_CA{static_cast<int32_t>(0x25)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::PROXY_PATH_LENGTH_EXCEEDED{static_cast<int32_t>(0x26)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::KEYUSAGE_NO_DIGITAL_SIGNATURE{static_cast<int32_t>(0x27)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::PROXY_CERTIFICATES_NOT_ALLOWED{static_cast<int32_t>(0x28)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::INVALID_EXTENSION{static_cast<int32_t>(0x29)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::INVALID_POLICY_EXTENSION{static_cast<int32_t>(0x2a)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::NO_EXPLICIT_POLICY{static_cast<int32_t>(0x2b)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::DIFFERENT_CRL_SCOPE{static_cast<int32_t>(0x2c)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNSUPPORTED_EXTENSION_FEATURE{static_cast<int32_t>(0x2d)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNNESTED_RESOURCE{static_cast<int32_t>(0x2e)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::PERMITTED_VIOLATION{static_cast<int32_t>(0x2f)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::EXCLUDED_VIOLATION{static_cast<int32_t>(0x30)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUBTREE_MINMAX{static_cast<int32_t>(0x31)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNSUPPORTED_CONSTRAINT_TYPE{static_cast<int32_t>(0x33)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNSUPPORTED_CONSTRAINT_SYNTAX{static_cast<int32_t>(0x34)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::UNSUPPORTED_NAME_SYNTAX{static_cast<int32_t>(0x35)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::CRL_PATH_VALIDATION_ERROR{static_cast<int32_t>(0x36)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_INVALID_VERSION{static_cast<int32_t>(0x38)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_INVALID_ALGORITHM{static_cast<int32_t>(0x39)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_INVALID_CURVE{static_cast<int32_t>(0x3a)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_INVALID_SIGNATURE_ALGORITHM{static_cast<int32_t>(0x3b)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_LOS_NOT_ALLOWED{static_cast<int32_t>(0x3c)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::SUITE_B_CANNOT_SIGN_P_384_WITH_P_256{static_cast<int32_t>(0x3d)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::HOSTNAME_MISMATCH{static_cast<int32_t>(0x3e)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::EMAIL_MISMATCH{static_cast<int32_t>(0x3f)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::IP_ADDRESS_MISMATCH{static_cast<int32_t>(0x40)};
constexpr ::Mono::Btls::MonoBtlsX509Error  Mono::Btls::MonoBtlsX509Error::APPLICATION_VERIFICATION{static_cast<int32_t>(0x32)};
