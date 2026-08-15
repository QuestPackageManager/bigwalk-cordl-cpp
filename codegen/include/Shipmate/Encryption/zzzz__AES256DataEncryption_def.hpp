#pragma once
// IWYU pragma private; include "Shipmate/Encryption/AES256DataEncryption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AES256DataEncryption)
namespace Shipmate::Encryption {
struct EncryptionKeyEncoding;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace Shipmate::Encryption {
class AES256DataEncryption;
}
// Write type traits
MARK_REF_T(::Shipmate::Encryption::AES256DataEncryption*);
DEFINE_IL2CPP_CLASS(::Shipmate::Encryption::AES256DataEncryption*, "Shipmate.Encryption", "AES256DataEncryption");
// Dependencies System.Object
namespace Shipmate::Encryption {
// Is value type: false
// CS Name: Shipmate.Encryption.AES256DataEncryption
class CORDL_TYPE AES256DataEncryption : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Decryptor)) ::System::Security::Cryptography::ICryptoTransform*  Decryptor;

 __declspec(property(get=get_Encryptor)) ::System::Security::Cryptography::ICryptoTransform*  Encryptor;

/// @brief Field mAesIvBytes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mAesIvBytes, put=__cordl_internal_set_mAesIvBytes)) ::ArrayW<uint8_t>  mAesIvBytes;

/// @brief Field mAesKeyBytes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mAesKeyBytes, put=__cordl_internal_set_mAesKeyBytes)) ::ArrayW<uint8_t>  mAesKeyBytes;

/// @brief Field mCryptoProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCryptoProvider, put=__cordl_internal_set_mCryptoProvider)) ::System::Security::Cryptography::AesCryptoServiceProvider*  mCryptoProvider;

/// @brief Field mDecryptor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mDecryptor, put=__cordl_internal_set_mDecryptor)) ::System::Security::Cryptography::ICryptoTransform*  mDecryptor;

/// @brief Field mEncryptor, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mEncryptor, put=__cordl_internal_set_mEncryptor)) ::System::Security::Cryptography::ICryptoTransform*  mEncryptor;

/// @brief Field mStreamBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mStreamBuffer, put=__cordl_internal_set_mStreamBuffer)) ::System::IO::MemoryStream*  mStreamBuffer;

/// @brief Method ChangeIV, addr 0x181ac9ac0, size 0x50, virtual false, abstract: false, final false
inline void ChangeIV(::ArrayW<uint8_t>  aIV) ;

/// @brief Method ChangeIV, addr 0x181ac9a30, size 0x90, virtual false, abstract: false, final false
inline void ChangeIV(::StringW  aIV, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding) ;

/// @brief Method ChangeKey, addr 0x181ac9ba0, size 0x50, virtual false, abstract: false, final false
inline void ChangeKey(::ArrayW<uint8_t>  aKey) ;

/// @brief Method ChangeKey, addr 0x181ac9b10, size 0x90, virtual false, abstract: false, final false
inline void ChangeKey(::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding) ;

/// @brief Method DecryptData, addr 0x181ac9da0, size 0x1f0, virtual false, abstract: false, final false
inline int32_t DecryptData(::ArrayW<uint8_t>  aData, int32_t  aBufferSize) ;

/// @brief Method DecryptDataAlloc, addr 0x181ac9bf0, size 0x1b0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptDataAlloc(::ArrayW<uint8_t>  aData, int32_t  aBufferSize) ;

/// @brief Method EncryptData, addr 0x181aca140, size 0x1a0, virtual false, abstract: false, final false
inline int32_t EncryptData(::ArrayW<uint8_t>  aData, int32_t  aBytesToSend) ;

/// @brief Method EncryptDataAlloc, addr 0x181ac9f90, size 0x1b0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> EncryptDataAlloc(::ArrayW<uint8_t>  aData, int32_t  aBytesCount) ;

static inline ::Shipmate::Encryption::AES256DataEncryption* New_ctor() ;

static inline ::Shipmate::Encryption::AES256DataEncryption* New_ctor(::ArrayW<uint8_t>  aIV, ::ArrayW<uint8_t>  aKey) ;

static inline ::Shipmate::Encryption::AES256DataEncryption* New_ctor(::StringW  aIV, ::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding) ;

/// @brief Method Reset, addr 0x1816c01a0, size 0x40, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetStream, addr 0x181aca2e0, size 0x30, virtual false, abstract: false, final false
inline void ResetStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_mAesIvBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_mAesIvBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_mAesKeyBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_mAesKeyBytes() ;

constexpr ::System::Security::Cryptography::AesCryptoServiceProvider* const& __cordl_internal_get_mCryptoProvider() const;

constexpr ::System::Security::Cryptography::AesCryptoServiceProvider*& __cordl_internal_get_mCryptoProvider() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get_mDecryptor() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_mDecryptor() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get_mEncryptor() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_mEncryptor() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_mStreamBuffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_mStreamBuffer() ;

constexpr void __cordl_internal_set_mAesIvBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_mAesKeyBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_mCryptoProvider(::System::Security::Cryptography::AesCryptoServiceProvider*  value) ;

constexpr void __cordl_internal_set_mDecryptor(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set_mEncryptor(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set_mStreamBuffer(::System::IO::MemoryStream*  value) ;

/// @brief Method .ctor, addr 0x181aca3e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181aca310, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  aIV, ::ArrayW<uint8_t>  aKey) ;

/// @brief Method .ctor, addr 0x181aca490, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::StringW  aIV, ::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding) ;

/// @brief Method get_Decryptor, addr 0x181aca600, size 0x70, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::ICryptoTransform* get_Decryptor() ;

/// @brief Method get_Encryptor, addr 0x181aca670, size 0x70, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::ICryptoTransform* get_Encryptor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AES256DataEncryption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AES256DataEncryption", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AES256DataEncryption(AES256DataEncryption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AES256DataEncryption", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AES256DataEncryption(AES256DataEncryption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21366};

/// @brief Field mCryptoProvider, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::AesCryptoServiceProvider*  ___mCryptoProvider;

/// @brief Field mEncryptor, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ___mEncryptor;

/// @brief Field mDecryptor, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ___mDecryptor;

/// @brief Field mStreamBuffer, offset: 0x28, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___mStreamBuffer;

/// @brief Field mAesKeyBytes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___mAesKeyBytes;

/// @brief Field mAesIvBytes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___mAesIvBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mCryptoProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mEncryptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mDecryptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mStreamBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mAesKeyBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Encryption::AES256DataEncryption, ___mAesIvBytes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Encryption::AES256DataEncryption) == 0x40, "Size mismatch!");

} // namespace end def Shipmate::Encryption
