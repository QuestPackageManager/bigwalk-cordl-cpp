#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerMovementState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonPlayerMovementState)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerMovementState;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonPlayerMovementState");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerMovementState
struct CORDL_TYPE AntiCheatCommonPlayerMovementState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonPlayerMovementState_Unwrapped
enum struct __AntiCheatCommonPlayerMovementState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Crouching = static_cast<int32_t>(0x1),
__E_Prone = static_cast<int32_t>(0x2),
__E_Mounted = static_cast<int32_t>(0x3),
__E_Swimming = static_cast<int32_t>(0x4),
__E_Falling = static_cast<int32_t>(0x5),
__E_Flying = static_cast<int32_t>(0x6),
__E_OnLadder = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonPlayerMovementState_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonPlayerMovementState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonPlayerMovementState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonPlayerMovementState(int32_t  value__) noexcept;

/// @brief Field Crouching value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Crouching;

/// @brief Field Falling value: I32(5)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Falling;

/// @brief Field Flying value: I32(6)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Flying;

/// @brief Field Mounted value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Mounted;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const None;

/// @brief Field OnLadder value: I32(7)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const OnLadder;

/// @brief Field Prone value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Prone;

/// @brief Field Swimming value: I32(4)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState const Swimming;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
