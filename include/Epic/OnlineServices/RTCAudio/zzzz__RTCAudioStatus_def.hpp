#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTCAudioStatus)
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct RTCAudioStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::RTCAudioStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::RTCAudioStatus, "Epic.OnlineServices.RTCAudio", "RTCAudioStatus");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.RTCAudioStatus
struct CORDL_TYPE RTCAudioStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RTCAudioStatus_Unwrapped
enum struct __RTCAudioStatus_Unwrapped : int32_t {
__E_Unsupported = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
__E_AdminDisabled = static_cast<int32_t>(0x3),
__E_NotListeningDisabled = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RTCAudioStatus_Unwrapped () const noexcept {
return static_cast<__RTCAudioStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RTCAudioStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RTCAudioStatus(int32_t  value__) noexcept;

/// @brief Field AdminDisabled value: I32(3)
static ::Epic::OnlineServices::RTCAudio::RTCAudioStatus const AdminDisabled;

/// @brief Field Disabled value: I32(2)
static ::Epic::OnlineServices::RTCAudio::RTCAudioStatus const Disabled;

/// @brief Field Enabled value: I32(1)
static ::Epic::OnlineServices::RTCAudio::RTCAudioStatus const Enabled;

/// @brief Field NotListeningDisabled value: I32(4)
static ::Epic::OnlineServices::RTCAudio::RTCAudioStatus const NotListeningDisabled;

/// @brief Field Unsupported value: I32(0)
static ::Epic::OnlineServices::RTCAudio::RTCAudioStatus const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::RTCAudioStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::RTCAudioStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
