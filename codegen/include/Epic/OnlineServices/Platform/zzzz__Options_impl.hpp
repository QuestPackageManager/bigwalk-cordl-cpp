#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/Options.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentials_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCOptions_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__Options_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainer_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentials_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_Reserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::Options::set_Reserved)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_ProductId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_ProductId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_ProductId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_ProductId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_ProductId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_ProductId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_SandboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_SandboxId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_SandboxId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_SandboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_SandboxId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_SandboxId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_ClientCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::ClientCredentials (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_ClientCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_ClientCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_ClientCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Platform::ClientCredentials)>(&::Epic::OnlineServices::Platform::Options::set_ClientCredentials)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_ClientCredentials", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ClientCredentials>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_IsServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_IsServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(bool)>(&::Epic::OnlineServices::Platform::Options::set_IsServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_IsServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_EncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_EncryptionKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_EncryptionKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_EncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_EncryptionKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_EncryptionKey", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_OverrideCountryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_OverrideCountryCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_OverrideCountryCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_OverrideCountryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_OverrideCountryCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_OverrideCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_OverrideLocaleCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_OverrideLocaleCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_OverrideLocaleCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_OverrideLocaleCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_OverrideLocaleCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_OverrideLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_DeploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_DeploymentId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_DeploymentId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_DeploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_DeploymentId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_DeploymentId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformFlags (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_Flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Platform::PlatformFlags)>(&::Epic::OnlineServices::Platform::Options::set_Flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180316040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_Flags", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_CacheDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_CacheDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_CacheDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_CacheDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::Options::set_CacheDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_CacheDirectory", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_TickBudgetInMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_TickBudgetInMilliseconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_TickBudgetInMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_TickBudgetInMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(uint32_t)>(&::Epic::OnlineServices::Platform::Options::set_TickBudgetInMilliseconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_TickBudgetInMilliseconds", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_RTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions> (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_RTCOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_RTCOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_RTCOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>)>(&::Epic::OnlineServices::Platform::Options::set_RTCOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_RTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_IntegratedPlatformOptionsContainerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_IntegratedPlatformOptionsContainerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_IntegratedPlatformOptionsContainerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_IntegratedPlatformOptionsContainerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*)>(&::Epic::OnlineServices::Platform::Options::set_IntegratedPlatformOptionsContainerHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_IntegratedPlatformOptionsContainerHandle", {}, {::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_SystemSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_SystemSpecificOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_SystemSpecificOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_SystemSpecificOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::Options::set_SystemSpecificOptions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_SystemSpecificOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.get_TaskNetworkTimeoutSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Epic::OnlineServices::Platform::Options::*)()>(&::Epic::OnlineServices::Platform::Options::get_TaskNetworkTimeoutSeconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_TaskNetworkTimeoutSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::Options.set_TaskNetworkTimeoutSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::Options::*)(::System::Nullable_1<double_t>)>(&::Epic::OnlineServices::Platform::Options::set_TaskNetworkTimeoutSeconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f67a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_TaskNetworkTimeoutSeconds", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Platform::Options::get_Reserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_Reserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_Reserved(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_Reserved", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_ProductId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_ProductId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_ProductId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_ProductId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_SandboxId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_SandboxId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_SandboxId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_SandboxId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Platform::ClientCredentials Epic::OnlineServices::Platform::Options::get_ClientCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_ClientCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::ClientCredentials>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_ClientCredentials", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ClientCredentials>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Platform::Options::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_IsServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_IsServer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_IsServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_EncryptionKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_EncryptionKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_EncryptionKey(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_EncryptionKey", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_OverrideCountryCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_OverrideCountryCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_OverrideCountryCode(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_OverrideCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_OverrideLocaleCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_OverrideLocaleCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_OverrideLocaleCode(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_OverrideLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_DeploymentId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_DeploymentId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_DeploymentId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_DeploymentId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Platform::PlatformFlags Epic::OnlineServices::Platform::Options::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_Flags(::Epic::OnlineServices::Platform::PlatformFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_Flags", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::Options::get_CacheDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_CacheDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_CacheDirectory(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_CacheDirectory", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Platform::Options::get_TickBudgetInMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_TickBudgetInMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_TickBudgetInMilliseconds(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_TickBudgetInMilliseconds", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions> Epic::OnlineServices::Platform::Options::get_RTCOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_RTCOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_RTCOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_RTCOptions", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* Epic::OnlineServices::Platform::Options::get_IntegratedPlatformOptionsContainerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_IntegratedPlatformOptionsContainerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_IntegratedPlatformOptionsContainerHandle(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_IntegratedPlatformOptionsContainerHandle", {}, {::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::Options::get_SystemSpecificOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_SystemSpecificOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_SystemSpecificOptions(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_SystemSpecificOptions", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Epic::OnlineServices::Platform::Options::get_TaskNetworkTimeoutSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"get_TaskNetworkTimeoutSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::Options::set_TaskNetworkTimeoutSeconds(::System::Nullable_1<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::Options>(),
                        {"set_TaskNetworkTimeoutSeconds", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProductId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientCredentials_k__BackingField", ty: "::Epic::OnlineServices::Platform::ClientCredentials", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsServer_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EncryptionKey_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverrideCountryCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverrideLocaleCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DeploymentId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::Platform::PlatformFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CacheDirectory_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TickBudgetInMilliseconds_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IntegratedPlatformOptionsContainerHandle_k__BackingField", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SystemSpecificOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TaskNetworkTimeoutSeconds_k__BackingField", ty: "::System::Nullable_1<double_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::Options::Options(::System::IntPtr  _Reserved_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::Epic::OnlineServices::Platform::ClientCredentials  _ClientCredentials_k__BackingField, bool  _IsServer_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EncryptionKey_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideCountryCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideLocaleCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField, ::Epic::OnlineServices::Platform::PlatformFlags  _Flags_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CacheDirectory_k__BackingField, uint32_t  _TickBudgetInMilliseconds_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptions>  _RTCOptions_k__BackingField, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  _IntegratedPlatformOptionsContainerHandle_k__BackingField, ::System::IntPtr  _SystemSpecificOptions_k__BackingField, ::System::Nullable_1<double_t>  _TaskNetworkTimeoutSeconds_k__BackingField) noexcept  {
this->_Reserved_k__BackingField = _Reserved_k__BackingField;
this->_ProductId_k__BackingField = _ProductId_k__BackingField;
this->_SandboxId_k__BackingField = _SandboxId_k__BackingField;
this->_ClientCredentials_k__BackingField = _ClientCredentials_k__BackingField;
this->_IsServer_k__BackingField = _IsServer_k__BackingField;
this->_EncryptionKey_k__BackingField = _EncryptionKey_k__BackingField;
this->_OverrideCountryCode_k__BackingField = _OverrideCountryCode_k__BackingField;
this->_OverrideLocaleCode_k__BackingField = _OverrideLocaleCode_k__BackingField;
this->_DeploymentId_k__BackingField = _DeploymentId_k__BackingField;
this->_Flags_k__BackingField = _Flags_k__BackingField;
this->_CacheDirectory_k__BackingField = _CacheDirectory_k__BackingField;
this->_TickBudgetInMilliseconds_k__BackingField = _TickBudgetInMilliseconds_k__BackingField;
this->_RTCOptions_k__BackingField = _RTCOptions_k__BackingField;
this->_IntegratedPlatformOptionsContainerHandle_k__BackingField = _IntegratedPlatformOptionsContainerHandle_k__BackingField;
this->_SystemSpecificOptions_k__BackingField = _SystemSpecificOptions_k__BackingField;
this->_TaskNetworkTimeoutSeconds_k__BackingField = _TaskNetworkTimeoutSeconds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::Options::Options()   {
}
