#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonGameRoundCompetitionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonGameRoundCompetitionType)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonGameRoundCompetitionType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonGameRoundCompetitionType");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonGameRoundCompetitionType
struct CORDL_TYPE AntiCheatCommonGameRoundCompetitionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonGameRoundCompetitionType_Unwrapped
enum struct __AntiCheatCommonGameRoundCompetitionType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Casual = static_cast<int32_t>(0x1),
__E_Ranked = static_cast<int32_t>(0x2),
__E_Competitive = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonGameRoundCompetitionType_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonGameRoundCompetitionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonGameRoundCompetitionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonGameRoundCompetitionType(int32_t  value__) noexcept;

/// @brief Field Casual value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType const Casual;

/// @brief Field Competitive value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType const Competitive;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType const None;

/// @brief Field Ranked value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType const Ranked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
