#pragma once
// IWYU pragma private; include "Shipmate/Encryption/EncryptionKeyEncoding.hpp"
#include "Shipmate/Encryption/zzzz__EncryptionKeyEncoding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Encryption::EncryptionKeyEncoding::EncryptionKeyEncoding(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Encryption::EncryptionKeyEncoding::EncryptionKeyEncoding()   {
}
constexpr ::Shipmate::Encryption::EncryptionKeyEncoding  Shipmate::Encryption::EncryptionKeyEncoding::UTF8{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Encryption::EncryptionKeyEncoding  Shipmate::Encryption::EncryptionKeyEncoding::Base64{static_cast<int32_t>(0x1)};
