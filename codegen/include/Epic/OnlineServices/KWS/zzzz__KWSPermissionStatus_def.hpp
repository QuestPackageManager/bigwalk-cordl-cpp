#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/KWSPermissionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KWSPermissionStatus)
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct KWSPermissionStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::KWSPermissionStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::KWSPermissionStatus, "Epic.OnlineServices.KWS", "KWSPermissionStatus");
// Dependencies 
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.KWSPermissionStatus
struct CORDL_TYPE KWSPermissionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KWSPermissionStatus_Unwrapped
enum struct __KWSPermissionStatus_Unwrapped : int32_t {
__E_Granted = static_cast<int32_t>(0x0),
__E_Rejected = static_cast<int32_t>(0x1),
__E_Pending = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KWSPermissionStatus_Unwrapped () const noexcept {
return static_cast<__KWSPermissionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KWSPermissionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KWSPermissionStatus(int32_t  value__) noexcept;

/// @brief Field Granted value: I32(0)
static ::Epic::OnlineServices::KWS::KWSPermissionStatus const Granted;

/// @brief Field Pending value: I32(2)
static ::Epic::OnlineServices::KWS::KWSPermissionStatus const Pending;

/// @brief Field Rejected value: I32(1)
static ::Epic::OnlineServices::KWS::KWSPermissionStatus const Rejected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::KWSPermissionStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::KWSPermissionStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
