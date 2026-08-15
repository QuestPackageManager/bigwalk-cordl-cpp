#pragma once
// IWYU pragma private; include "Steamworks/EFloatingGamepadTextInputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EFloatingGamepadTextInputMode)
// Forward declare root types
namespace Steamworks {
struct EFloatingGamepadTextInputMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EFloatingGamepadTextInputMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EFloatingGamepadTextInputMode, "Steamworks", "EFloatingGamepadTextInputMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EFloatingGamepadTextInputMode
struct CORDL_TYPE EFloatingGamepadTextInputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EFloatingGamepadTextInputMode_Unwrapped
enum struct __EFloatingGamepadTextInputMode_Unwrapped : int32_t {
__E_k_EFloatingGamepadTextInputModeModeSingleLine = static_cast<int32_t>(0x0),
__E_k_EFloatingGamepadTextInputModeModeMultipleLines = static_cast<int32_t>(0x1),
__E_k_EFloatingGamepadTextInputModeModeEmail = static_cast<int32_t>(0x2),
__E_k_EFloatingGamepadTextInputModeModeNumeric = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EFloatingGamepadTextInputMode_Unwrapped () const noexcept {
return static_cast<__EFloatingGamepadTextInputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EFloatingGamepadTextInputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EFloatingGamepadTextInputMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16305};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EFloatingGamepadTextInputModeModeEmail value: I32(2)
static ::Steamworks::EFloatingGamepadTextInputMode const k_EFloatingGamepadTextInputModeModeEmail;

/// @brief Field k_EFloatingGamepadTextInputModeModeMultipleLines value: I32(1)
static ::Steamworks::EFloatingGamepadTextInputMode const k_EFloatingGamepadTextInputModeModeMultipleLines;

/// @brief Field k_EFloatingGamepadTextInputModeModeNumeric value: I32(3)
static ::Steamworks::EFloatingGamepadTextInputMode const k_EFloatingGamepadTextInputModeModeNumeric;

/// @brief Field k_EFloatingGamepadTextInputModeModeSingleLine value: I32(0)
static ::Steamworks::EFloatingGamepadTextInputMode const k_EFloatingGamepadTextInputModeModeSingleLine;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EFloatingGamepadTextInputMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EFloatingGamepadTextInputMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
