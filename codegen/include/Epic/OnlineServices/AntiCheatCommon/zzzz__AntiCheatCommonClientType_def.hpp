#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonClientType)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonClientType");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientType
struct CORDL_TYPE AntiCheatCommonClientType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonClientType_Unwrapped
enum struct __AntiCheatCommonClientType_Unwrapped : int32_t {
__E_ProtectedClient = static_cast<int32_t>(0x0),
__E_UnprotectedClient = static_cast<int32_t>(0x1),
__E_AIBot = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonClientType_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonClientType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonClientType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonClientType(int32_t  value__) noexcept;

/// @brief Field AIBot value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType const AIBot;

/// @brief Field ProtectedClient value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType const ProtectedClient;

/// @brief Field UnprotectedClient value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType const UnprotectedClient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
