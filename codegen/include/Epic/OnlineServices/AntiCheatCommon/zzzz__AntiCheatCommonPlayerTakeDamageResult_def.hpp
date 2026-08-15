#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonPlayerTakeDamageResult)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageResult;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonPlayerTakeDamageResult");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageResult
struct CORDL_TYPE AntiCheatCommonPlayerTakeDamageResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonPlayerTakeDamageResult_Unwrapped
enum struct __AntiCheatCommonPlayerTakeDamageResult_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DownedDeprecated = static_cast<int32_t>(0x1),
__E_EliminatedDeprecated = static_cast<int32_t>(0x2),
__E_NormalToDowned = static_cast<int32_t>(0x3),
__E_NormalToEliminated = static_cast<int32_t>(0x4),
__E_DownedToEliminated = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonPlayerTakeDamageResult_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonPlayerTakeDamageResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonPlayerTakeDamageResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonPlayerTakeDamageResult(int32_t  value__) noexcept;

/// @brief Field DownedDeprecated value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const DownedDeprecated;

/// @brief Field DownedToEliminated value: I32(5)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const DownedToEliminated;

/// @brief Field EliminatedDeprecated value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const EliminatedDeprecated;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const None;

/// @brief Field NormalToDowned value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const NormalToDowned;

/// @brief Field NormalToEliminated value: I32(4)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult const NormalToEliminated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
