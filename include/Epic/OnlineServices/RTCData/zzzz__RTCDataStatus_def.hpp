#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/RTCDataStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTCDataStatus)
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
struct RTCDataStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::RTCDataStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::RTCDataStatus, "Epic.OnlineServices.RTCData", "RTCDataStatus");
// Dependencies 
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.RTCDataStatus
struct CORDL_TYPE RTCDataStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RTCDataStatus_Unwrapped
enum struct __RTCDataStatus_Unwrapped : int32_t {
__E_Unsupported = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RTCDataStatus_Unwrapped () const noexcept {
return static_cast<__RTCDataStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RTCDataStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RTCDataStatus(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(2)
static ::Epic::OnlineServices::RTCData::RTCDataStatus const Disabled;

/// @brief Field Enabled value: I32(1)
static ::Epic::OnlineServices::RTCData::RTCDataStatus const Enabled;

/// @brief Field Unsupported value: I32(0)
static ::Epic::OnlineServices::RTCData::RTCDataStatus const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::RTCDataStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::RTCDataStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
