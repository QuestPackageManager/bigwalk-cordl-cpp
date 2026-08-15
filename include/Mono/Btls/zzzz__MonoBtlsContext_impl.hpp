#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsContext.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsContext_def.hpp"
#include "Mono/Btls/zzzz__IMonoBtlsBioMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslError_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSsl_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "Mono/Btls/zzzz__X509CertificateImplBtls_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocolCode_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Btls::MonoBtlsContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b450f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.GetPrivateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::X509CertificateImplBtls* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Btls::MonoBtlsContext::GetPrivateCertificate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181b439c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetPrivateCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.VerifyCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsContext::*)(::Mono::Btls::MonoBtlsX509StoreCtx*)>(&::Mono::Btls::MonoBtlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181b44d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"VerifyCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.SelectCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsContext::*)(::ArrayW<::StringW>)>(&::Mono::Btls::MonoBtlsContext::SelectCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b44800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"SelectCallback", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.ServerNameCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::ServerNameCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b448b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"ServerNameCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.StartHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181b44c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.SetPrivateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)(::Mono::Btls::X509CertificateImplBtls*)>(&::Mono::Btls::MonoBtlsContext::SetPrivateCertificate)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181b44920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"SetPrivateCertificate", {}, {::i2c::type_of<::Mono::Btls::X509CertificateImplBtls*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.GetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::Mono::Btls::MonoBtlsSslError)>(&::Mono::Btls::MonoBtlsContext::GetException)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181b43670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetException", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslError>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.ProcessHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181b444d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.DoProcessHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::DoProcessHandshake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b43470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"DoProcessHandshake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.FinishHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181b434d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.InitializeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::InitializeConnection)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x181b43c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"InitializeConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.GetPeerCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::GetPeerCertificate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b43900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetPeerCertificate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.InitializeSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::InitializeSession)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181b442b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"InitializeSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.GetProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::TlsProtocols (*)(::Mono::Security::Interface::TlsProtocolCode)>(&::Mono::Btls::MonoBtlsContext::GetProtocol)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b43bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetProtocol", {}, {::i2c::type_of<::Mono::Security::Interface::TlsProtocolCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::Flush)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Btls::MonoBtlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Btls::MonoBtlsContext::Read)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181b44620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Btls::MonoBtlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Btls::MonoBtlsContext::Write)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181b44f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Renegotiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::Shutdown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b44be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.PendingRenegotiation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b444a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)(bool)>(&::Mono::Btls::MonoBtlsContext::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b433c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Mono_Btls_IMonoBtlsBioMono_Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<bool>)>(&::Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Read)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b44440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Mono_Btls_IMonoBtlsBioMono_Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Write)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b44470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Mono_Btls_IMonoBtlsBioMono_Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Flush)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.Mono_Btls_IMonoBtlsBioMono_Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.get_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815234c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.get_LocalClientCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsContext.get_RemoteCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::Mono::Btls::MonoBtlsContext::*)()>(&::Mono::Btls::MonoBtlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 10}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_remoteCertificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCertificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_remoteCertificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCertificate;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteCertificate = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_clientCertificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCertificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_clientCertificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCertificate;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_clientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCertificate = value;
}
constexpr ::Mono::Btls::X509CertificateImplBtls*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_nativeServerCertificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeServerCertificate;
}
constexpr ::Mono::Btls::X509CertificateImplBtls* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_nativeServerCertificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeServerCertificate;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_nativeServerCertificate(::Mono::Btls::X509CertificateImplBtls*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeServerCertificate = value;
}
constexpr ::Mono::Btls::X509CertificateImplBtls*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_nativeClientCertificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeClientCertificate;
}
constexpr ::Mono::Btls::X509CertificateImplBtls* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_nativeClientCertificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeClientCertificate;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_nativeClientCertificate(::Mono::Btls::X509CertificateImplBtls*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeClientCertificate = value;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_ctx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_ctx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_ctx(::Mono::Btls::MonoBtlsSslCtx*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctx = value;
}
constexpr ::Mono::Btls::MonoBtlsSsl*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_ssl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssl;
}
constexpr ::Mono::Btls::MonoBtlsSsl* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_ssl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssl;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_ssl(::Mono::Btls::MonoBtlsSsl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssl = value;
}
constexpr ::Mono::Btls::MonoBtlsBio*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_bio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bio;
}
constexpr ::Mono::Btls::MonoBtlsBio* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_bio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bio;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_bio(::Mono::Btls::MonoBtlsBio*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bio = value;
}
constexpr ::Mono::Btls::MonoBtlsBio*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_errbio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errbio;
}
constexpr ::Mono::Btls::MonoBtlsBio* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_errbio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errbio;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_errbio(::Mono::Btls::MonoBtlsBio*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errbio = value;
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& Mono::Btls::MonoBtlsContext::__cordl_internal_get_connectionInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionInfo;
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo* const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_connectionInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionInfo;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_connectionInfo(::Mono::Security::Interface::MonoTlsConnectionInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionInfo = value;
}
constexpr bool& Mono::Btls::MonoBtlsContext::__cordl_internal_get_certificateValidated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificateValidated;
}
constexpr bool const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_certificateValidated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificateValidated;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_certificateValidated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificateValidated = value;
}
constexpr bool& Mono::Btls::MonoBtlsContext::__cordl_internal_get_isAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthenticated;
}
constexpr bool const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_isAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthenticated;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_isAuthenticated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAuthenticated = value;
}
constexpr bool& Mono::Btls::MonoBtlsContext::__cordl_internal_get_connected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr bool const& Mono::Btls::MonoBtlsContext::__cordl_internal_get_connected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr void Mono::Btls::MonoBtlsContext::__cordl_internal_set_connected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connected = value;
}
inline void Mono::Btls::MonoBtlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, options);
}
inline ::Mono::Btls::X509CertificateImplBtls* Mono::Btls::MonoBtlsContext::GetPrivateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetPrivateCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::X509CertificateImplBtls*>(nullptr, ___internal_method, certificate);
}
inline int32_t Mono::Btls::MonoBtlsContext::VerifyCallback(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"VerifyCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, storeCtx);
}
inline int32_t Mono::Btls::MonoBtlsContext::SelectCallback(::ArrayW<::StringW>  acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"SelectCallback", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, acceptableIssuers);
}
inline int32_t Mono::Btls::MonoBtlsContext::ServerNameCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"ServerNameCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::StartHandshake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::SetPrivateCertificate(::Mono::Btls::X509CertificateImplBtls*  privateCert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"SetPrivateCertificate", {}, {::i2c::type_of<::Mono::Btls::X509CertificateImplBtls*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateCert);
}
inline ::System::Exception* Mono::Btls::MonoBtlsContext::GetException(::Mono::Btls::MonoBtlsSslError  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetException", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, status);
}
inline bool Mono::Btls::MonoBtlsContext::ProcessHandshake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsContext::DoProcessHandshake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"DoProcessHandshake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::FinishHandshake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::InitializeConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"InitializeConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::GetPeerCertificate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetPeerCertificate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::InitializeSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"InitializeSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::Interface::TlsProtocols Mono::Btls::MonoBtlsContext::GetProtocol(::Mono::Security::Interface::TlsProtocolCode  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"GetProtocol", {}, {::i2c::type_of<::Mono::Security::Interface::TlsProtocolCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::TlsProtocols>(nullptr, ___internal_method, protocol);
}
inline void Mono::Btls::MonoBtlsContext::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,bool> Mono::Btls::MonoBtlsContext::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>>(this, ___internal_method, buffer, offset, size);
}
inline ::System::ValueTuple_2<int32_t,bool> Mono::Btls::MonoBtlsContext::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>>(this, ___internal_method, buffer, offset, size);
}
inline void Mono::Btls::MonoBtlsContext::Renegotiate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsContext::PendingRenegotiation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Mono::Btls::MonoBtlsContext::Dispose(::by_ref<T>  disposable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                    {"Dispose", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposable);
}
inline void Mono::Btls::MonoBtlsContext::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<bool>  wantMore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, wantMore);
}
inline bool Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, size);
}
inline void Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsContext::Mono_Btls_IMonoBtlsBioMono_Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(),
                        {"Mono.Btls.IMonoBtlsBioMono.Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsContext::get_IsAuthenticated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Btls::MonoBtlsContext::get_LocalClientCertificate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Btls::MonoBtlsContext::get_RemoteCertificate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsContext*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsContext* Mono::Btls::MonoBtlsContext::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsContext*>(parent, options));
}
/// @brief Convert operator to "::Mono::Btls::IMonoBtlsBioMono"
constexpr  Mono::Btls::MonoBtlsContext::operator ::Mono::Btls::IMonoBtlsBioMono*() noexcept {
return static_cast<::Mono::Btls::IMonoBtlsBioMono*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::Btls::IMonoBtlsBioMono"
constexpr ::Mono::Btls::IMonoBtlsBioMono* Mono::Btls::MonoBtlsContext::i___Mono__Btls__IMonoBtlsBioMono() noexcept {
return static_cast<::Mono::Btls::IMonoBtlsBioMono*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsContext::MonoBtlsContext()   {
}
