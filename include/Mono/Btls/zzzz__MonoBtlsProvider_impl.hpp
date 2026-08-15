#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsProvider.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsProvider_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Chain_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Error_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509VerifyParam_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_ID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b49200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b49240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b491d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_SupportsSslStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_SupportsSslStream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_SupportsMonoExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_SupportsMonoExtensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_SupportsConnectionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_SupportsConnectionInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_SupportsCleanShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_SupportsCleanShutdown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.get_SupportedProtocols
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Btls::MonoBtlsProvider::*)()>(&::Mono::Btls::MonoBtlsProvider::get_SupportedProtocols)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b49250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.CreateSslStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (::Mono::Btls::MonoBtlsProvider::*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsSettings*)>(&::Mono::Btls::MonoBtlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b47620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetNativeCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::Btls::MonoBtlsProvider::*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::Mono::Btls::MonoBtlsProvider::GetNativeCertificate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181b47790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetNativeCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::Btls::MonoBtlsProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Btls::MonoBtlsProvider::GetNativeCertificate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181b478f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetNativeCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::Btls::MonoBtlsProvider::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::Mono::Btls::MonoBtlsProvider::GetNativeCertificate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b47890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetVerifyParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509VerifyParam* (*)(::Mono::Security::Interface::MonoTlsSettings*, ::StringW, bool)>(&::Mono::Btls::MonoBtlsProvider::GetVerifyParam)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181b47cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetVerifyParam", {}, {::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.ValidateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsProvider::*)(::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool, ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>, ::by_ref<::System::Net::Security::SslPolicyErrors>, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x181b48400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.ValidateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Btls::MonoBtlsX509Chain*, ::Mono::Btls::MonoBtlsX509VerifyParam*)>(&::Mono::Btls::MonoBtlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x181b48c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"ValidateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.CheckValidationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsProvider::*)(::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Btls::MonoBtlsX509StoreCtx*, bool, ::by_ref<::System::Net::Security::SslPolicyErrors>, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsProvider::CheckValidationResult)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181b47250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"CheckValidationResult", {}, {::i2c::type_of<::Mono::Net::Security::ChainValidationHelper*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Net::Security::SslPolicyErrors>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.MapVerifyErrorToChainStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (*)(::Mono::Btls::MonoBtlsX509Error)>(&::Mono::Btls::MonoBtlsProvider::MapVerifyErrorToChainStatus)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181b47e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"MapVerifyErrorToChainStatus", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Error>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.SetupCertificateStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Security::Interface::MonoTlsSettings*, bool)>(&::Mono::Btls::MonoBtlsProvider::SetupCertificateStore)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181b48050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"SetupCertificateStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.SetupDefaultCertificateStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Btls::MonoBtlsX509Store*)>(&::Mono::Btls::MonoBtlsProvider::SetupDefaultCertificateStore)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b48370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"SetupDefaultCertificateStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.AddUserStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Btls::MonoBtlsX509Store*)>(&::Mono::Btls::MonoBtlsProvider::AddUserStore)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b471f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddUserStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.AddMachineStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Btls::MonoBtlsX509Store*)>(&::Mono::Btls::MonoBtlsProvider::AddMachineStore)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b47150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddMachineStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.AddTrustedRoots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Security::Interface::MonoTlsSettings*, bool)>(&::Mono::Btls::MonoBtlsProvider::AddTrustedRoots)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b471b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddTrustedRoots", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.CreateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsProvider::CreateCertificate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b47550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"CreateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetManagedChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Chain* (*)(::Mono::Btls::MonoBtlsX509Chain*)>(&::Mono::Btls::MonoBtlsProvider::GetManagedChain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b47730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetManagedChain", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetBtlsCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Btls::MonoBtlsProvider::GetBtlsCertificate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b476a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetBtlsCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsProvider.GetNativeChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Chain* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::Mono::Btls::MonoBtlsProvider::GetNativeChain)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181b47a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeChain", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid Mono::Btls::MonoBtlsProvider::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Mono::Btls::MonoBtlsProvider::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsProvider::get_SupportsSslStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsProvider::get_SupportsMonoExtensions()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsProvider::get_SupportsConnectionInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsProvider::get_SupportsCleanShutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Authentication::SslProtocols Mono::Btls::MonoBtlsProvider::get_SupportedProtocols()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Btls::MonoBtlsProvider::CreateSslStream(::System::Net::Security::SslStream*  sslStream, ::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*>(this, ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::Btls::MonoBtlsProvider::GetNativeCertificate(::ArrayW<uint8_t>  data, ::StringW  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, flags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::Btls::MonoBtlsProvider::GetNativeCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::Btls::MonoBtlsProvider::GetNativeCertificate(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeCertificate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, flags);
}
inline ::Mono::Btls::MonoBtlsX509VerifyParam* Mono::Btls::MonoBtlsProvider::GetVerifyParam(::Mono::Security::Interface::MonoTlsSettings*  settings, ::StringW  targetHost, bool  serverMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetVerifyParam", {}, {::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509VerifyParam*>(nullptr, ___internal_method, settings, targetHost, serverMode);
}
inline bool Mono::Btls::MonoBtlsProvider::ValidateCertificate(::Mono::Net::Security::ChainValidationHelper*  validator, ::StringW  targetHost, bool  serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates, bool  wantsChain, ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>  chain, ::by_ref<::System::Net::Security::SslPolicyErrors>  errors, ::by_ref<int32_t>  status11)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
inline bool Mono::Btls::MonoBtlsProvider::ValidateCertificate(::Mono::Btls::MonoBtlsX509Chain*  chain, ::Mono::Btls::MonoBtlsX509VerifyParam*  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"ValidateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chain, param);
}
inline void Mono::Btls::MonoBtlsProvider::CheckValidationResult(::Mono::Net::Security::ChainValidationHelper*  validator, ::StringW  targetHost, bool  serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates, bool  wantsChain, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx, bool  success, ::by_ref<::System::Net::Security::SslPolicyErrors>  errors, ::by_ref<int32_t>  status11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"CheckValidationResult", {}, {::i2c::type_of<::Mono::Net::Security::ChainValidationHelper*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Net::Security::SslPolicyErrors>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, storeCtx, success, errors, status11);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags Mono::Btls::MonoBtlsProvider::MapVerifyErrorToChainStatus(::Mono::Btls::MonoBtlsX509Error  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"MapVerifyErrorToChainStatus", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Error>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(nullptr, ___internal_method, code);
}
inline void Mono::Btls::MonoBtlsProvider::SetupCertificateStore(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Security::Interface::MonoTlsSettings*  settings, bool  server)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"SetupCertificateStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store, settings, server);
}
inline void Mono::Btls::MonoBtlsProvider::SetupDefaultCertificateStore(::Mono::Btls::MonoBtlsX509Store*  store)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"SetupDefaultCertificateStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store);
}
inline void Mono::Btls::MonoBtlsProvider::AddUserStore(::Mono::Btls::MonoBtlsX509Store*  store)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddUserStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store);
}
inline void Mono::Btls::MonoBtlsProvider::AddMachineStore(::Mono::Btls::MonoBtlsX509Store*  store)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddMachineStore", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store);
}
inline void Mono::Btls::MonoBtlsProvider::AddTrustedRoots(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Security::Interface::MonoTlsSettings*  settings, bool  server)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"AddTrustedRoots", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store, settings, server);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Btls::MonoBtlsProvider::CreateCertificate(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"CreateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(nullptr, ___internal_method, x509);
}
inline ::System::Security::Cryptography::X509Certificates::X509Chain* Mono::Btls::MonoBtlsProvider::GetManagedChain(::Mono::Btls::MonoBtlsX509Chain*  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetManagedChain", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Chain*>(nullptr, ___internal_method, chain);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsProvider::GetBtlsCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetBtlsCertificate", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(nullptr, ___internal_method, certificate);
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsProvider::GetNativeChain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsProvider*>(),
                        {"GetNativeChain", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Chain*>(nullptr, ___internal_method, certificates);
}
inline ::Mono::Btls::MonoBtlsProvider* Mono::Btls::MonoBtlsProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsProvider*>());
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsProvider::MonoBtlsProvider()   {
}
