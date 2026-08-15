#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/PKCS8.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815bc070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815bc0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.get_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_Algorithm)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"get_Algorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.set_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::StringW)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::set_Algorithm)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"set_Algorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.get_PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_PrivateKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815bc130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"get_PrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.set_PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::set_PrivateKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815bc1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"set_PrivateKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Decode)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1815bb4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::GetBytes)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1815bbb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.RemoveLeadingZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::RemoveLeadingZero)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815bbff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"RemoveLeadingZero", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Normalize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815bbf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Normalize", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.DecodeRSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeRSA)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x1815baf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"DecodeRSA", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1815bb7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.DecodeDSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::DSAParameters)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeDSA)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1815bae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"DecodeDSA", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::DSAParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815bb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::DSA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815bb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
constexpr ::StringW& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__algorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithm;
}
constexpr ::StringW const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__algorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithm;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__algorithm(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____algorithm = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__key(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_get__list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::__cordl_internal_set__list(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____list = value;
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::StringW Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"get_Algorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::set_Algorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"set_Algorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_PrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"get_PrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::set_PrivateKey(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"set_PrivateKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Decode(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::RemoveLeadingZero(::ArrayW<uint8_t>  bigInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"RemoveLeadingZero", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bigInt);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Normalize(::ArrayW<uint8_t>  bigInt, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Normalize", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bigInt, length);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeRSA(::ArrayW<uint8_t>  keypair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"DecodeRSA", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, keypair);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::RSA*  rsa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rsa);
}
inline ::System::Security::Cryptography::DSA* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeDSA(::ArrayW<uint8_t>  privateKey, ::System::Security::Cryptography::DSAParameters  dsaParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"DecodeDSA", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::DSAParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method, privateKey, dsaParameters);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::DSA*  dsa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::DSA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dsa);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Encode(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(),
                        {"Encode", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aa);
}
inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>());
}
inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>(data));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::PKCS8_PrivateKeyInfo()   {
}
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815b4b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Algorithm)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_Algorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.set_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::StringW)>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_Algorithm)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_Algorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_EncryptedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_EncryptedData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815b4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_EncryptedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.set_EncryptedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_EncryptedData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815b4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_EncryptedData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_Salt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Salt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815b4c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_Salt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.get_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_IterationCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_IterationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.set_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(int32_t)>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_IterationCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815b4d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::Decode)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1815b4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::*)()>(&::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::GetBytes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815b49d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__algorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithm;
}
constexpr ::StringW const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__algorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithm;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__algorithm(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____algorithm = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__salt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__salt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__salt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____salt = value;
}
constexpr int32_t& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr int32_t const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::__cordl_internal_set__data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::StringW Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_Algorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_Algorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_Algorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_EncryptedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_EncryptedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_EncryptedData(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_EncryptedData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_Salt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_Salt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"get_IterationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::set_IterationCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::Decode(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>());
}
inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*>(data));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo::PKCS8_EncryptedPrivateKeyInfo()   {
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS8::PKCS8()   {
}
