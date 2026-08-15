#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAuthStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonClientAuthStatus)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientAuthStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonClientAuthStatus");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientAuthStatus
struct CORDL_TYPE AntiCheatCommonClientAuthStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonClientAuthStatus_Unwrapped
enum struct __AntiCheatCommonClientAuthStatus_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_LocalAuthComplete = static_cast<int32_t>(0x1),
__E_RemoteAuthComplete = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonClientAuthStatus_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonClientAuthStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonClientAuthStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonClientAuthStatus(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus const Invalid;

/// @brief Field LocalAuthComplete value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus const LocalAuthComplete;

/// @brief Field RemoteAuthComplete value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus const RemoteAuthComplete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
