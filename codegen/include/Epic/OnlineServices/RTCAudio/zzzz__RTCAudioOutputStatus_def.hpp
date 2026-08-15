#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioOutputStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTCAudioOutputStatus)
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct RTCAudioOutputStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus, "Epic.OnlineServices.RTCAudio", "RTCAudioOutputStatus");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.RTCAudioOutputStatus
struct CORDL_TYPE RTCAudioOutputStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RTCAudioOutputStatus_Unwrapped
enum struct __RTCAudioOutputStatus_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Playing = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RTCAudioOutputStatus_Unwrapped () const noexcept {
return static_cast<__RTCAudioOutputStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RTCAudioOutputStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RTCAudioOutputStatus(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(2)
static ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus const Failed;

/// @brief Field Idle value: I32(0)
static ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus const Idle;

/// @brief Field Playing value: I32(1)
static ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus const Playing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
