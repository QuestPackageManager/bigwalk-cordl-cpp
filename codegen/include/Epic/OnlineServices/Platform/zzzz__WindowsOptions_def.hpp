#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__ClientCredentials_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformFlags_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsOptions)
namespace Epic::OnlineServices::IntegratedPlatform {
class IntegratedPlatformOptionsContainer;
}
namespace Epic::OnlineServices::Platform {
struct ClientCredentials;
}
namespace Epic::OnlineServices::Platform {
struct PlatformFlags;
}
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptions;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct WindowsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsOptions, "Epic.OnlineServices.Platform", "WindowsOptions");
// Dependencies Epic.OnlineServices.Platform.ClientCredentials, Epic.OnlineServices.Platform.PlatformFlags, Epic.OnlineServices.Platform.WindowsRTCOptions, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsOptions
struct CORDL_TYPE WindowsOptions {
public:
// Declarations
 __declspec(property(get=get_CacheDirectory, put=set_CacheDirectory)) ::Epic::OnlineServices::Utf8String*  CacheDirectory;

 __declspec(property(get=get_ClientCredentials, put=set_ClientCredentials)) ::Epic::OnlineServices::Platform::ClientCredentials  ClientCredentials;

 __declspec(property(get=get_DeploymentId, put=set_DeploymentId)) ::Epic::OnlineServices::Utf8String*  DeploymentId;

 __declspec(property(get=get_EncryptionKey, put=set_EncryptionKey)) ::Epic::OnlineServices::Utf8String*  EncryptionKey;

 __declspec(property(get=get_Flags, put=set_Flags)) ::Epic::OnlineServices::Platform::PlatformFlags  Flags;

 __declspec(property(get=get_IntegratedPlatformOptionsContainerHandle, put=set_IntegratedPlatformOptionsContainerHandle)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  IntegratedPlatformOptionsContainerHandle;

 __declspec(property(get=get_IsServer, put=set_IsServer)) bool  IsServer;

 __declspec(property(get=get_OverrideCountryCode, put=set_OverrideCountryCode)) ::Epic::OnlineServices::Utf8String*  OverrideCountryCode;

 __declspec(property(get=get_OverrideLocaleCode, put=set_OverrideLocaleCode)) ::Epic::OnlineServices::Utf8String*  OverrideLocaleCode;

 __declspec(property(get=get_ProductId, put=set_ProductId)) ::Epic::OnlineServices::Utf8String*  ProductId;

 __declspec(property(get=get_RTCOptions, put=set_RTCOptions)) ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>  RTCOptions;

 __declspec(property(get=get_Reserved, put=set_Reserved)) ::System::IntPtr  Reserved;

 __declspec(property(get=get_SandboxId, put=set_SandboxId)) ::Epic::OnlineServices::Utf8String*  SandboxId;

 __declspec(property(get=get_SystemSpecificOptions, put=set_SystemSpecificOptions)) ::System::IntPtr  SystemSpecificOptions;

 __declspec(property(get=get_TaskNetworkTimeoutSeconds, put=set_TaskNetworkTimeoutSeconds)) ::System::Nullable_1<double_t>  TaskNetworkTimeoutSeconds;

 __declspec(property(get=get_TickBudgetInMilliseconds, put=set_TickBudgetInMilliseconds)) uint32_t  TickBudgetInMilliseconds;

/// @brief Method get_CacheDirectory, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CacheDirectory() ;

/// @brief Method get_ClientCredentials, addr 0x1802e2d70, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::ClientCredentials get_ClientCredentials() ;

/// @brief Method get_DeploymentId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeploymentId() ;

/// @brief Method get_EncryptionKey, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EncryptionKey() ;

/// @brief Method get_Flags, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::PlatformFlags get_Flags() ;

/// @brief Method get_IntegratedPlatformOptionsContainerHandle, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer* get_IntegratedPlatformOptionsContainerHandle() ;

/// @brief Method get_IsServer, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsServer() ;

/// @brief Method get_OverrideCountryCode, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OverrideCountryCode() ;

/// @brief Method get_OverrideLocaleCode, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OverrideLocaleCode() ;

/// @brief Method get_ProductId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductId() ;

/// @brief Method get_RTCOptions, addr 0x1804f6800, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions> get_RTCOptions() ;

/// @brief Method get_Reserved, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved() ;

/// @brief Method get_SandboxId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SandboxId() ;

/// @brief Method get_SystemSpecificOptions, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_SystemSpecificOptions() ;

/// @brief Method get_TaskNetworkTimeoutSeconds, addr 0x1804f6820, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> get_TaskNetworkTimeoutSeconds() ;

/// @brief Method get_TickBudgetInMilliseconds, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TickBudgetInMilliseconds() ;

/// @brief Method set_CacheDirectory, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_CacheDirectory(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientCredentials, addr 0x1804e66e0, size 0x20, virtual false, abstract: false, final false
inline void set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials  value) ;

/// @brief Method set_DeploymentId, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_DeploymentId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_EncryptionKey, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_EncryptionKey(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Flags, addr 0x180316040, size 0x10, virtual false, abstract: false, final false
inline void set_Flags(::Epic::OnlineServices::Platform::PlatformFlags  value) ;

/// @brief Method set_IntegratedPlatformOptionsContainerHandle, addr 0x1803e1880, size 0x20, virtual false, abstract: false, final false
inline void set_IntegratedPlatformOptionsContainerHandle(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  value) ;

/// @brief Method set_IsServer, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_IsServer(bool  value) ;

/// @brief Method set_OverrideCountryCode, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideCountryCode(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_OverrideLocaleCode, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideLocaleCode(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ProductId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_RTCOptions, addr 0x1804f6830, size 0x30, virtual false, abstract: false, final false
inline void set_RTCOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>  value) ;

/// @brief Method set_Reserved, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved(::System::IntPtr  value) ;

/// @brief Method set_SandboxId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_SandboxId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SystemSpecificOptions, addr 0x1804f6860, size 0x10, virtual false, abstract: false, final false
inline void set_SystemSpecificOptions(::System::IntPtr  value) ;

/// @brief Method set_TaskNetworkTimeoutSeconds, addr 0x1804f6870, size 0x10, virtual false, abstract: false, final false
inline void set_TaskNetworkTimeoutSeconds(::System::Nullable_1<double_t>  value) ;

/// @brief Method set_TickBudgetInMilliseconds, addr 0x1804f67b0, size 0x10, virtual false, abstract: false, final false
inline void set_TickBudgetInMilliseconds(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsOptions() ;

// Ctor Parameters [CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ProductId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientCredentials_k__BackingField", ty: "::Epic::OnlineServices::Platform::ClientCredentials", modifiers: "", def_value: None }, CppParam { name: "_IsServer_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_EncryptionKey_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_OverrideCountryCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_OverrideLocaleCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeploymentId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::Platform::PlatformFlags", modifiers: "", def_value: None }, CppParam { name: "_CacheDirectory_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TickBudgetInMilliseconds_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_RTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>", modifiers: "", def_value: None }, CppParam { name: "_IntegratedPlatformOptionsContainerHandle_k__BackingField", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*", modifiers: "", def_value: None }, CppParam { name: "_SystemSpecificOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_TaskNetworkTimeoutSeconds_k__BackingField", ty: "::System::Nullable_1<double_t>", modifiers: "", def_value: None }]
constexpr WindowsOptions(::System::IntPtr  _Reserved_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::Epic::OnlineServices::Platform::ClientCredentials  _ClientCredentials_k__BackingField, bool  _IsServer_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EncryptionKey_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideCountryCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideLocaleCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField, ::Epic::OnlineServices::Platform::PlatformFlags  _Flags_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CacheDirectory_k__BackingField, uint32_t  _TickBudgetInMilliseconds_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>  _RTCOptions_k__BackingField, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  _IntegratedPlatformOptionsContainerHandle_k__BackingField, ::System::IntPtr  _SystemSpecificOptions_k__BackingField, ::System::Nullable_1<double_t>  _TaskNetworkTimeoutSeconds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field <Reserved>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _Reserved_k__BackingField;

/// @brief Field <ProductId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField;

/// @brief Field <SandboxId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField;

/// @brief Field <ClientCredentials>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::Epic::OnlineServices::Platform::ClientCredentials  _ClientCredentials_k__BackingField;

/// @brief Field <IsServer>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _IsServer_k__BackingField;

/// @brief Field <EncryptionKey>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EncryptionKey_k__BackingField;

/// @brief Field <OverrideCountryCode>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OverrideCountryCode_k__BackingField;

/// @brief Field <OverrideLocaleCode>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OverrideLocaleCode_k__BackingField;

/// @brief Field <DeploymentId>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField;

/// @brief Field <Flags>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Epic::OnlineServices::Platform::PlatformFlags  _Flags_k__BackingField;

/// @brief Field <CacheDirectory>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CacheDirectory_k__BackingField;

/// @brief Field <TickBudgetInMilliseconds>k__BackingField, offset: 0x60, size: 0x4, def value: None
 uint32_t  _TickBudgetInMilliseconds_k__BackingField;

/// @brief Field <RTCOptions>k__BackingField, offset: 0x68, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptions>  _RTCOptions_k__BackingField;

/// @brief Field <IntegratedPlatformOptionsContainerHandle>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*  _IntegratedPlatformOptionsContainerHandle_k__BackingField;

/// @brief Field <SystemSpecificOptions>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::IntPtr  _SystemSpecificOptions_k__BackingField;

/// @brief Field <TaskNetworkTimeoutSeconds>k__BackingField, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  _TaskNetworkTimeoutSeconds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _Reserved_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _ProductId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _SandboxId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _ClientCredentials_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _IsServer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _EncryptionKey_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _OverrideCountryCode_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _OverrideLocaleCode_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _DeploymentId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _Flags_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _CacheDirectory_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _TickBudgetInMilliseconds_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _RTCOptions_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _IntegratedPlatformOptionsContainerHandle_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _SystemSpecificOptions_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsOptions, _TaskNetworkTimeoutSeconds_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsOptions) == 0xb0, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
