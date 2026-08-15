#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesktopCrossplayStatus)
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::DesktopCrossplayStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::DesktopCrossplayStatus, "Epic.OnlineServices.Platform", "DesktopCrossplayStatus");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.DesktopCrossplayStatus
struct CORDL_TYPE DesktopCrossplayStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DesktopCrossplayStatus_Unwrapped
enum struct __DesktopCrossplayStatus_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_ApplicationNotBootstrapped = static_cast<int32_t>(0x1),
__E_ServiceNotInstalled = static_cast<int32_t>(0x2),
__E_ServiceStartFailed = static_cast<int32_t>(0x3),
__E_ServiceNotRunning = static_cast<int32_t>(0x4),
__E_OverlayDisabled = static_cast<int32_t>(0x5),
__E_OverlayNotInstalled = static_cast<int32_t>(0x6),
__E_OverlayTrustCheckFailed = static_cast<int32_t>(0x7),
__E_OverlayLoadFailed = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DesktopCrossplayStatus_Unwrapped () const noexcept {
return static_cast<__DesktopCrossplayStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DesktopCrossplayStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DesktopCrossplayStatus(int32_t  value__) noexcept;

/// @brief Field ApplicationNotBootstrapped value: I32(1)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const ApplicationNotBootstrapped;

/// @brief Field Ok value: I32(0)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const Ok;

/// @brief Field OverlayDisabled value: I32(5)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const OverlayDisabled;

/// @brief Field OverlayLoadFailed value: I32(8)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const OverlayLoadFailed;

/// @brief Field OverlayNotInstalled value: I32(6)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const OverlayNotInstalled;

/// @brief Field OverlayTrustCheckFailed value: I32(7)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const OverlayTrustCheckFailed;

/// @brief Field ServiceNotInstalled value: I32(2)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const ServiceNotInstalled;

/// @brief Field ServiceNotRunning value: I32(4)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const ServiceNotRunning;

/// @brief Field ServiceStartFailed value: I32(3)
static ::Epic::OnlineServices::Platform::DesktopCrossplayStatus const ServiceStartFailed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::DesktopCrossplayStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::DesktopCrossplayStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
