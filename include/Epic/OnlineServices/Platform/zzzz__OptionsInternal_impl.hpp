#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/OptionsInternal.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentialsInternal_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__OptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__Options_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::OptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::OptionsInternal::*)(::by_ref<::Epic::OnlineServices::Platform::Options>)>(&::Epic::OnlineServices::Platform::OptionsInternal::Set)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1804fc060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::OptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::OptionsInternal::*)()>(&::Epic::OnlineServices::Platform::OptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804fbfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::OptionsInternal::Set(::by_ref<::Epic::OnlineServices::Platform::Options>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::OptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>"
constexpr  Epic::OnlineServices::Platform::OptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>* Epic::OnlineServices::Platform::OptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__Options_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::OptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::OptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientCredentials", ty: "::Epic::OnlineServices::Platform::ClientCredentialsInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsServer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EncryptionKey", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideCountryCode", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideLocaleCode", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeploymentId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::Platform::PlatformFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CacheDirectory", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TickBudgetInMilliseconds", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IntegratedPlatformOptionsContainerHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SystemSpecificOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TaskNetworkTimeoutSeconds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::OptionsInternal::OptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Reserved, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_SandboxId, ::Epic::OnlineServices::Platform::ClientCredentialsInternal  m_ClientCredentials, int32_t  m_IsServer, ::System::IntPtr  m_EncryptionKey, ::System::IntPtr  m_OverrideCountryCode, ::System::IntPtr  m_OverrideLocaleCode, ::System::IntPtr  m_DeploymentId, ::Epic::OnlineServices::Platform::PlatformFlags  m_Flags, ::System::IntPtr  m_CacheDirectory, uint32_t  m_TickBudgetInMilliseconds, ::System::IntPtr  m_RTCOptions, ::System::IntPtr  m_IntegratedPlatformOptionsContainerHandle, ::System::IntPtr  m_SystemSpecificOptions, ::System::IntPtr  m_TaskNetworkTimeoutSeconds) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Reserved = m_Reserved;
this->m_ProductId = m_ProductId;
this->m_SandboxId = m_SandboxId;
this->m_ClientCredentials = m_ClientCredentials;
this->m_IsServer = m_IsServer;
this->m_EncryptionKey = m_EncryptionKey;
this->m_OverrideCountryCode = m_OverrideCountryCode;
this->m_OverrideLocaleCode = m_OverrideLocaleCode;
this->m_DeploymentId = m_DeploymentId;
this->m_Flags = m_Flags;
this->m_CacheDirectory = m_CacheDirectory;
this->m_TickBudgetInMilliseconds = m_TickBudgetInMilliseconds;
this->m_RTCOptions = m_RTCOptions;
this->m_IntegratedPlatformOptionsContainerHandle = m_IntegratedPlatformOptionsContainerHandle;
this->m_SystemSpecificOptions = m_SystemSpecificOptions;
this->m_TaskNetworkTimeoutSeconds = m_TaskNetworkTimeoutSeconds;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::OptionsInternal::OptionsInternal()   {
}
