#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/NetworkStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatus)
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct NetworkStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::NetworkStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::NetworkStatus, "Epic.OnlineServices.Platform", "NetworkStatus");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.NetworkStatus
struct CORDL_TYPE NetworkStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkStatus_Unwrapped
enum struct __NetworkStatus_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Offline = static_cast<int32_t>(0x1),
__E_Online = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkStatus_Unwrapped () const noexcept {
return static_cast<__NetworkStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkStatus(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::Epic::OnlineServices::Platform::NetworkStatus const Disabled;

/// @brief Field Offline value: I32(1)
static ::Epic::OnlineServices::Platform::NetworkStatus const Offline;

/// @brief Field Online value: I32(2)
static ::Epic::OnlineServices::Platform::NetworkStatus const Online;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::NetworkStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::NetworkStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
