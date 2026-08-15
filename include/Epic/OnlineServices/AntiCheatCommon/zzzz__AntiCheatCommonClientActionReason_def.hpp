#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientActionReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonClientActionReason)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientActionReason;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonClientActionReason");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientActionReason
struct CORDL_TYPE AntiCheatCommonClientActionReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonClientActionReason_Unwrapped
enum struct __AntiCheatCommonClientActionReason_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_InternalError = static_cast<int32_t>(0x1),
__E_InvalidMessage = static_cast<int32_t>(0x2),
__E_AuthenticationFailed = static_cast<int32_t>(0x3),
__E_NullClient = static_cast<int32_t>(0x4),
__E_HeartbeatTimeout = static_cast<int32_t>(0x5),
__E_ClientViolation = static_cast<int32_t>(0x6),
__E_BackendViolation = static_cast<int32_t>(0x7),
__E_TemporaryCooldown = static_cast<int32_t>(0x8),
__E_TemporaryBanned = static_cast<int32_t>(0x9),
__E_PermanentBanned = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonClientActionReason_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonClientActionReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonClientActionReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonClientActionReason(int32_t  value__) noexcept;

/// @brief Field AuthenticationFailed value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const AuthenticationFailed;

/// @brief Field BackendViolation value: I32(7)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const BackendViolation;

/// @brief Field ClientViolation value: I32(6)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const ClientViolation;

/// @brief Field HeartbeatTimeout value: I32(5)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const HeartbeatTimeout;

/// @brief Field InternalError value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const InternalError;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const Invalid;

/// @brief Field InvalidMessage value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const InvalidMessage;

/// @brief Field NullClient value: I32(4)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const NullClient;

/// @brief Field PermanentBanned value: I32(10)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const PermanentBanned;

/// @brief Field TemporaryBanned value: I32(9)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const TemporaryBanned;

/// @brief Field TemporaryCooldown value: I32(8)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason const TemporaryCooldown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
