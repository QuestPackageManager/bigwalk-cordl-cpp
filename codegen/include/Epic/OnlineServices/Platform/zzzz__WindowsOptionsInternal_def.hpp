#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentialsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsOptionsInternal)
namespace Epic::OnlineServices::Platform {
struct WindowsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct WindowsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsOptionsInternal, "Epic.OnlineServices.Platform", "WindowsOptionsInternal");
// Dependencies Epic.OnlineServices.Platform.ClientCredentialsInternal, Epic.OnlineServices.Platform.PlatformFlags, System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsOptionsInternal
struct CORDL_TYPE WindowsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804fbfb0, size 0xb0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805034b0, size 0x2b0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::WindowsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__WindowsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientCredentials", ty: "::Epic::OnlineServices::Platform::ClientCredentialsInternal", modifiers: "", def_value: None }, CppParam { name: "m_IsServer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EncryptionKey", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OverrideCountryCode", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OverrideLocaleCode", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeploymentId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::Platform::PlatformFlags", modifiers: "", def_value: None }, CppParam { name: "m_CacheDirectory", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TickBudgetInMilliseconds", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_RTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IntegratedPlatformOptionsContainerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SystemSpecificOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TaskNetworkTimeoutSeconds", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr WindowsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Reserved, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_SandboxId, ::Epic::OnlineServices::Platform::ClientCredentialsInternal  m_ClientCredentials, int32_t  m_IsServer, ::System::IntPtr  m_EncryptionKey, ::System::IntPtr  m_OverrideCountryCode, ::System::IntPtr  m_OverrideLocaleCode, ::System::IntPtr  m_DeploymentId, ::Epic::OnlineServices::Platform::PlatformFlags  m_Flags, ::System::IntPtr  m_CacheDirectory, uint32_t  m_TickBudgetInMilliseconds, ::System::IntPtr  m_RTCOptions, ::System::IntPtr  m_IntegratedPlatformOptionsContainerHandle, ::System::IntPtr  m_SystemSpecificOptions, ::System::IntPtr  m_TaskNetworkTimeoutSeconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Reserved, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Reserved;

/// @brief Field m_ProductId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ProductId;

/// @brief Field m_SandboxId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SandboxId;

/// @brief Field m_ClientCredentials, offset: 0x20, size: 0x10, def value: None
 ::Epic::OnlineServices::Platform::ClientCredentialsInternal  m_ClientCredentials;

/// @brief Field m_IsServer, offset: 0x30, size: 0x4, def value: None
 int32_t  m_IsServer;

/// @brief Field m_EncryptionKey, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_EncryptionKey;

/// @brief Field m_OverrideCountryCode, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideCountryCode;

/// @brief Field m_OverrideLocaleCode, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideLocaleCode;

/// @brief Field m_DeploymentId, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  m_DeploymentId;

/// @brief Field m_Flags, offset: 0x58, size: 0x8, def value: None
 ::Epic::OnlineServices::Platform::PlatformFlags  m_Flags;

/// @brief Field m_CacheDirectory, offset: 0x60, size: 0x8, def value: None
 ::System::IntPtr  m_CacheDirectory;

/// @brief Field m_TickBudgetInMilliseconds, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_TickBudgetInMilliseconds;

/// @brief Field m_RTCOptions, offset: 0x70, size: 0x8, def value: None
 ::System::IntPtr  m_RTCOptions;

/// @brief Field m_IntegratedPlatformOptionsContainerHandle, offset: 0x78, size: 0x8, def value: None
 ::System::IntPtr  m_IntegratedPlatformOptionsContainerHandle;

/// @brief Field m_SystemSpecificOptions, offset: 0x80, size: 0x8, def value: None
 ::System::IntPtr  m_SystemSpecificOptions;

/// @brief Field m_TaskNetworkTimeoutSeconds, offset: 0x88, size: 0x8, def value: None
 ::System::IntPtr  m_TaskNetworkTimeoutSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_Reserved) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_ProductId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_SandboxId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_ClientCredentials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_IsServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_EncryptionKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_OverrideCountryCode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_OverrideLocaleCode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_DeploymentId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_Flags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_CacheDirectory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_TickBudgetInMilliseconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_RTCOptions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_IntegratedPlatformOptionsContainerHandle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_SystemSpecificOptions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptionsInternal, m_TaskNetworkTimeoutSeconds) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsOptionsInternal) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
