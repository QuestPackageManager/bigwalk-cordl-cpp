#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformManagementFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedPlatformManagementFlags)
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags, "Epic.OnlineServices.IntegratedPlatform", "IntegratedPlatformManagementFlags");
// Dependencies 
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags
struct CORDL_TYPE IntegratedPlatformManagementFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IntegratedPlatformManagementFlags_Unwrapped
enum struct __IntegratedPlatformManagementFlags_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x1),
__E_LibraryManagedByApplication = static_cast<int32_t>(0x2),
__E_LibraryManagedBySDK = static_cast<int32_t>(0x4),
__E_DisablePresenceMirroring = static_cast<int32_t>(0x8),
__E_DisableSDKManagedSessions = static_cast<int32_t>(0x10),
__E_PreferEOSIdentity = static_cast<int32_t>(0x20),
__E_PreferIntegratedIdentity = static_cast<int32_t>(0x40),
__E_ApplicationManagedIdentityLogin = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IntegratedPlatformManagementFlags_Unwrapped () const noexcept {
return static_cast<__IntegratedPlatformManagementFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformManagementFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IntegratedPlatformManagementFlags(int32_t  value__) noexcept;

/// @brief Field ApplicationManagedIdentityLogin value: I32(128)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const ApplicationManagedIdentityLogin;

/// @brief Field DisablePresenceMirroring value: I32(8)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const DisablePresenceMirroring;

/// @brief Field DisableSDKManagedSessions value: I32(16)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const DisableSDKManagedSessions;

/// @brief Field Disabled value: I32(1)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const Disabled;

/// @brief Field LibraryManagedByApplication value: I32(2)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const LibraryManagedByApplication;

/// @brief Field LibraryManagedBySDK value: I32(4)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const LibraryManagedBySDK;

/// @brief Field PreferEOSIdentity value: I32(32)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const PreferEOSIdentity;

/// @brief Field PreferIntegratedIdentity value: I32(64)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const PreferIntegratedIdentity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
