#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonClientInput)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientInput;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonClientInput");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientInput
struct CORDL_TYPE AntiCheatCommonClientInput {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonClientInput_Unwrapped
enum struct __AntiCheatCommonClientInput_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_MouseKeyboard = static_cast<int32_t>(0x1),
__E_Gamepad = static_cast<int32_t>(0x2),
__E_TouchInput = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonClientInput_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonClientInput_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonClientInput() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonClientInput(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput const Gamepad;

/// @brief Field MouseKeyboard value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput const MouseKeyboard;

/// @brief Field TouchInput value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput const TouchInput;

/// @brief Field Unknown value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
