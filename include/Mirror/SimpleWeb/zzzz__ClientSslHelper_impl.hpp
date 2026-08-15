#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientSslHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientSslHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientSslHelper.TryCreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ClientSslHelper::*)(::Mirror::SimpleWeb::Connection*, ::System::Uri*)>(&::Mirror::SimpleWeb::ClientSslHelper::TryCreateStream)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ad0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"TryCreateStream", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientSslHelper.CreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Mirror::SimpleWeb::ClientSslHelper::*)(::System::Net::Sockets::NetworkStream*, ::System::Uri*)>(&::Mirror::SimpleWeb::ClientSslHelper::CreateStream)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ad00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientSslHelper.ValidateServerCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&::Mirror::SimpleWeb::ClientSslHelper::ValidateServerCertificate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ad0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"ValidateServerCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ClientSslHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ClientSslHelper::*)()>(&::Mirror::SimpleWeb::ClientSslHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Mirror::SimpleWeb::ClientSslHelper::TryCreateStream(::Mirror::SimpleWeb::Connection*  conn, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"TryCreateStream", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn, uri);
}
inline ::System::IO::Stream* Mirror::SimpleWeb::ClientSslHelper::CreateStream(::System::Net::Sockets::NetworkStream*  stream, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream, uri);
}
inline bool Mirror::SimpleWeb::ClientSslHelper::ValidateServerCertificate(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {"ValidateServerCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
inline void Mirror::SimpleWeb::ClientSslHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ClientSslHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::ClientSslHelper* Mirror::SimpleWeb::ClientSslHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ClientSslHelper*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ClientSslHelper::ClientSslHelper()   {
}
