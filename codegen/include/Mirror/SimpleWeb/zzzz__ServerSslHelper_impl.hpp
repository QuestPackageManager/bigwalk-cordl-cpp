#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ServerSslHelper.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ServerSslHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerSslHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ServerSslHelper::*)(::Mirror::SimpleWeb::SslConfig)>(&::Mirror::SimpleWeb::ServerSslHelper::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181ad4990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::SslConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerSslHelper.TryCreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ServerSslHelper::*)(::Mirror::SimpleWeb::Connection*)>(&::Mirror::SimpleWeb::ServerSslHelper::TryCreateStream)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ad4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"TryCreateStream", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerSslHelper.CreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Mirror::SimpleWeb::ServerSslHelper::*)(::System::Net::Sockets::NetworkStream*)>(&::Mirror::SimpleWeb::ServerSslHelper::CreateStream)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ad4760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerSslHelper.acceptClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ServerSslHelper::*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&::Mirror::SimpleWeb::ServerSslHelper::acceptClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"acceptClient", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::SslConfig& Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::Mirror::SimpleWeb::SslConfig const& Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_set_config(::Mirror::SimpleWeb::SslConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_get_certificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_get_certificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificate;
}
constexpr void Mirror::SimpleWeb::ServerSslHelper::__cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificate = value;
}
inline void Mirror::SimpleWeb::ServerSslHelper::_ctor(::Mirror::SimpleWeb::SslConfig  sslConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::SslConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sslConfig);
}
inline bool Mirror::SimpleWeb::ServerSslHelper::TryCreateStream(::Mirror::SimpleWeb::Connection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"TryCreateStream", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn);
}
inline ::System::IO::Stream* Mirror::SimpleWeb::ServerSslHelper::CreateStream(::System::Net::Sockets::NetworkStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline bool Mirror::SimpleWeb::ServerSslHelper::acceptClient(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerSslHelper*>(),
                        {"acceptClient", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
inline ::Mirror::SimpleWeb::ServerSslHelper* Mirror::SimpleWeb::ServerSslHelper::New_ctor(::Mirror::SimpleWeb::SslConfig  sslConfig)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ServerSslHelper*>(sslConfig));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ServerSslHelper::ServerSslHelper()   {
}
