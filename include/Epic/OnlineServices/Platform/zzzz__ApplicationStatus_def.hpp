#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ApplicationStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationStatus)
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct ApplicationStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::ApplicationStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::ApplicationStatus, "Epic.OnlineServices.Platform", "ApplicationStatus");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.ApplicationStatus
struct CORDL_TYPE ApplicationStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApplicationStatus_Unwrapped
enum struct __ApplicationStatus_Unwrapped : int32_t {
__E_BackgroundConstrained = static_cast<int32_t>(0x0),
__E_BackgroundUnconstrained = static_cast<int32_t>(0x1),
__E_BackgroundSuspended = static_cast<int32_t>(0x2),
__E_Foreground = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApplicationStatus_Unwrapped () const noexcept {
return static_cast<__ApplicationStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApplicationStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ApplicationStatus(int32_t  value__) noexcept;

/// @brief Field BackgroundConstrained value: I32(0)
static ::Epic::OnlineServices::Platform::ApplicationStatus const BackgroundConstrained;

/// @brief Field BackgroundSuspended value: I32(2)
static ::Epic::OnlineServices::Platform::ApplicationStatus const BackgroundSuspended;

/// @brief Field BackgroundUnconstrained value: I32(1)
static ::Epic::OnlineServices::Platform::ApplicationStatus const BackgroundUnconstrained;

/// @brief Field Foreground value: I32(3)
static ::Epic::OnlineServices::Platform::ApplicationStatus const Foreground;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::ApplicationStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::ApplicationStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
