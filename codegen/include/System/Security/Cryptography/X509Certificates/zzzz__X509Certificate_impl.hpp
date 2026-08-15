#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181634a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181635310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181635420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::ArrayW<uint8_t>, ::StringW)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816352f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181635540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181635390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::StringW, ::StringW)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181635370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::StringW, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181635180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181635050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816352d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x1812ade20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Object*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x1812ade20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.get_Issuer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816356c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Issuer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.get_Subject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181635750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Subject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181633ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181633ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Object*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181634020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181633ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.Export
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509ContentType, ::StringW)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::Export)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181634070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetCertHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetCertHashString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816342b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetRawCertHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertHash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181634810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetRawCertHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetExpirationDateString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetExpirationDateString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816343d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetRawCertData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816347a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetKeyAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetKeyAlgorithm)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetKeyAlgorithmParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetKeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetPublicKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetSerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181634960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetSerialNumberString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816348d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetRawSerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetRawSerialNumber)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181634870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetRawSerialNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181634ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181634bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetNotAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetNotAfter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816345b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetNotAfter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.GetNotBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::GetNotBefore)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181634660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetNotBefore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.FormatDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::FormatDate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1816341e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"FormatDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.ValidateKeyStorageFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::ValidateKeyStorageFlags)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181634f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ValidateKeyStorageFlags", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.VerifyContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509ContentType)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::VerifyContentType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181634ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"VerifyContentType", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ContentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.ImportHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181634a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ImportHandle", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.get_Impl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Impl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816356a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate.ThrowIfInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate::ThrowIfInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181634b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ThrowIfInvalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_impl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impl;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_impl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impl;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_impl(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impl = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyCertHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyCertHash;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyCertHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyCertHash;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyCertHash(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyCertHash = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazySerialNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySerialNumber;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazySerialNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySerialNumber;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazySerialNumber(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazySerialNumber = value;
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyIssuer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyIssuer;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyIssuer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyIssuer;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyIssuer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyIssuer = value;
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazySubject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySubject;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazySubject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazySubject;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazySubject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazySubject = value;
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyKeyAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyKeyAlgorithm;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyKeyAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyKeyAlgorithm;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyKeyAlgorithm(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyKeyAlgorithm = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyKeyAlgorithmParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyKeyAlgorithmParameters;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyKeyAlgorithmParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyKeyAlgorithmParameters;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyKeyAlgorithmParameters(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyKeyAlgorithmParameters = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyPublicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPublicKey;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyPublicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyPublicKey;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyPublicKey(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyPublicKey = value;
}
constexpr ::System::DateTime& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyNotBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyNotBefore;
}
constexpr ::System::DateTime const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyNotBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyNotBefore;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyNotBefore(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyNotBefore = value;
}
constexpr ::System::DateTime& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyNotAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyNotAfter;
}
constexpr ::System::DateTime const& System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_get_lazyNotAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyNotAfter;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate::__cordl_internal_set_lazyNotAfter(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyNotAfter = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData, password);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData, password, keyStorageFlags);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impl);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::StringW  fileName, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, password);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::StringW  fileName, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, password, keyStorageFlags);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Issuer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Subject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate::Equals(::System::Security::Cryptography::X509Certificates::X509Certificate*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::Export(::System::Security::Cryptography::X509Certificates::X509ContentType  contentType, ::StringW  password)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, contentType, password);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetRawCertHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::GetExpirationDateString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::GetKeyAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetKeyAlgorithmParameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetPublicKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate::GetRawSerialNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetRawSerialNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::ToString(bool  fVerbose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, fVerbose);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate::GetNotAfter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetNotAfter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate::GetNotBefore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"GetNotBefore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate::FormatDate(::System::DateTime  date)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"FormatDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, date);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::ValidateKeyStorageFlags(::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ValidateKeyStorageFlags", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyStorageFlags);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::VerifyContentType(::System::Security::Cryptography::X509Certificates::X509ContentType  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"VerifyContentType", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ContentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ImportHandle", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impl);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_Impl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate::ThrowIfInvalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                        {"ThrowIfInvalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(data));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(rawData, password));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::ArrayW<uint8_t>  rawData, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(rawData, password, keyStorageFlags));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*  impl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(impl));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::StringW  fileName, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(fileName, password));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::StringW  fileName, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(fileName, password, keyStorageFlags));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(cert));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate*>(info, context));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::X509Certificates::X509Certificate::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::X509Certificates::X509Certificate::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Security::Cryptography::X509Certificates::X509Certificate::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Security::Cryptography::X509Certificates::X509Certificate::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Security::Cryptography::X509Certificates::X509Certificate::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Security::Cryptography::X509Certificates::X509Certificate::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate::X509Certificate()   {
}
