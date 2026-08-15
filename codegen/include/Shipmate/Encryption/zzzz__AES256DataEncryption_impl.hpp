#pragma once
// IWYU pragma private; include "Shipmate/Encryption/AES256DataEncryption.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Encryption/zzzz__AES256DataEncryption_def.hpp"
#include "Shipmate/Encryption/zzzz__EncryptionKeyEncoding_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)()>(&::Shipmate::Encryption::AES256DataEncryption::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181aca3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Shipmate::Encryption::AES256DataEncryption::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181aca310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::StringW, ::StringW, ::Shipmate::Encryption::EncryptionKeyEncoding)>(&::Shipmate::Encryption::AES256DataEncryption::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181aca490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)()>(&::Shipmate::Encryption::AES256DataEncryption::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816c01a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.ChangeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>)>(&::Shipmate::Encryption::AES256DataEncryption::ChangeKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.ChangeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::StringW, ::Shipmate::Encryption::EncryptionKeyEncoding)>(&::Shipmate::Encryption::AES256DataEncryption::ChangeKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac9b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.ChangeIV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>)>(&::Shipmate::Encryption::AES256DataEncryption::ChangeIV)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac9ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeIV", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.ChangeIV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)(::StringW, ::Shipmate::Encryption::EncryptionKeyEncoding)>(&::Shipmate::Encryption::AES256DataEncryption::ChangeIV)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeIV", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.EncryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Encryption::AES256DataEncryption::EncryptData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181aca140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"EncryptData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.EncryptDataAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Encryption::AES256DataEncryption::EncryptDataAlloc)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181ac9f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"EncryptDataAlloc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.DecryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Encryption::AES256DataEncryption::DecryptData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181ac9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"DecryptData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.DecryptDataAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Shipmate::Encryption::AES256DataEncryption::*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Encryption::AES256DataEncryption::DecryptDataAlloc)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181ac9bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"DecryptDataAlloc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.ResetStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Encryption::AES256DataEncryption::*)()>(&::Shipmate::Encryption::AES256DataEncryption::ResetStream)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181aca2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ResetStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.get_Decryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::Shipmate::Encryption::AES256DataEncryption::*)()>(&::Shipmate::Encryption::AES256DataEncryption::get_Decryptor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"get_Decryptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Encryption::AES256DataEncryption.get_Encryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::Shipmate::Encryption::AES256DataEncryption::*)()>(&::Shipmate::Encryption::AES256DataEncryption::get_Encryptor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"get_Encryptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::AesCryptoServiceProvider*& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mCryptoProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCryptoProvider;
}
constexpr ::System::Security::Cryptography::AesCryptoServiceProvider* const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mCryptoProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCryptoProvider;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mCryptoProvider(::System::Security::Cryptography::AesCryptoServiceProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCryptoProvider = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mEncryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEncryptor;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mEncryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEncryptor;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mEncryptor(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mEncryptor = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mDecryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mDecryptor;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mDecryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mDecryptor;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mDecryptor(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mDecryptor = value;
}
constexpr ::System::IO::MemoryStream*& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mStreamBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mStreamBuffer;
}
constexpr ::System::IO::MemoryStream* const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mStreamBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mStreamBuffer;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mStreamBuffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mStreamBuffer = value;
}
constexpr ::ArrayW<uint8_t>& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mAesKeyBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAesKeyBytes;
}
constexpr ::ArrayW<uint8_t> const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mAesKeyBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAesKeyBytes;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mAesKeyBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAesKeyBytes = value;
}
constexpr ::ArrayW<uint8_t>& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mAesIvBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAesIvBytes;
}
constexpr ::ArrayW<uint8_t> const& Shipmate::Encryption::AES256DataEncryption::__cordl_internal_get_mAesIvBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAesIvBytes;
}
constexpr void Shipmate::Encryption::AES256DataEncryption::__cordl_internal_set_mAesIvBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAesIvBytes = value;
}
inline void Shipmate::Encryption::AES256DataEncryption::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Encryption::AES256DataEncryption::_ctor(::ArrayW<uint8_t>  aIV, ::ArrayW<uint8_t>  aKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIV, aKey);
}
inline void Shipmate::Encryption::AES256DataEncryption::_ctor(::StringW  aIV, ::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIV, aKey, encoding);
}
inline void Shipmate::Encryption::AES256DataEncryption::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Encryption::AES256DataEncryption::ChangeKey(::ArrayW<uint8_t>  aKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey);
}
inline void Shipmate::Encryption::AES256DataEncryption::ChangeKey(::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, encoding);
}
inline void Shipmate::Encryption::AES256DataEncryption::ChangeIV(::ArrayW<uint8_t>  aIV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeIV", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIV);
}
inline void Shipmate::Encryption::AES256DataEncryption::ChangeIV(::StringW  aIV, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ChangeIV", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Shipmate::Encryption::EncryptionKeyEncoding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIV, encoding);
}
inline int32_t Shipmate::Encryption::AES256DataEncryption::EncryptData(::ArrayW<uint8_t>  aData, int32_t  aBytesToSend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"EncryptData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, aData, aBytesToSend);
}
inline ::ArrayW<uint8_t> Shipmate::Encryption::AES256DataEncryption::EncryptDataAlloc(::ArrayW<uint8_t>  aData, int32_t  aBytesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"EncryptDataAlloc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, aData, aBytesCount);
}
inline int32_t Shipmate::Encryption::AES256DataEncryption::DecryptData(::ArrayW<uint8_t>  aData, int32_t  aBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"DecryptData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, aData, aBufferSize);
}
inline ::ArrayW<uint8_t> Shipmate::Encryption::AES256DataEncryption::DecryptDataAlloc(::ArrayW<uint8_t>  aData, int32_t  aBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"DecryptDataAlloc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, aData, aBufferSize);
}
inline void Shipmate::Encryption::AES256DataEncryption::ResetStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"ResetStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* Shipmate::Encryption::AES256DataEncryption::get_Decryptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"get_Decryptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* Shipmate::Encryption::AES256DataEncryption::get_Encryptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Encryption::AES256DataEncryption*>(),
                        {"get_Encryptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline ::Shipmate::Encryption::AES256DataEncryption* Shipmate::Encryption::AES256DataEncryption::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Encryption::AES256DataEncryption*>());
}
inline ::Shipmate::Encryption::AES256DataEncryption* Shipmate::Encryption::AES256DataEncryption::New_ctor(::ArrayW<uint8_t>  aIV, ::ArrayW<uint8_t>  aKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Encryption::AES256DataEncryption*>(aIV, aKey));
}
inline ::Shipmate::Encryption::AES256DataEncryption* Shipmate::Encryption::AES256DataEncryption::New_ctor(::StringW  aIV, ::StringW  aKey, ::Shipmate::Encryption::EncryptionKeyEncoding  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Encryption::AES256DataEncryption*>(aIV, aKey, encoding));
}
// Ctor Parameters []
constexpr ::Shipmate::Encryption::AES256DataEncryption::AES256DataEncryption()   {
}
