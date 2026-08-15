#pragma once
// IWYU pragma private; include "Steamworks/EGamepadTextInputLineMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGamepadTextInputLineMode)
// Forward declare root types
namespace Steamworks {
struct EGamepadTextInputLineMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EGamepadTextInputLineMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EGamepadTextInputLineMode, "Steamworks", "EGamepadTextInputLineMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EGamepadTextInputLineMode
struct CORDL_TYPE EGamepadTextInputLineMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGamepadTextInputLineMode_Unwrapped
enum struct __EGamepadTextInputLineMode_Unwrapped : int32_t {
__E_k_EGamepadTextInputLineModeSingleLine = static_cast<int32_t>(0x0),
__E_k_EGamepadTextInputLineModeMultipleLines = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EGamepadTextInputLineMode_Unwrapped () const noexcept {
return static_cast<__EGamepadTextInputLineMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EGamepadTextInputLineMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EGamepadTextInputLineMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGamepadTextInputLineModeMultipleLines value: I32(1)
static ::Steamworks::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeMultipleLines;

/// @brief Field k_EGamepadTextInputLineModeSingleLine value: I32(0)
static ::Steamworks::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeSingleLine;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EGamepadTextInputLineMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EGamepadTextInputLineMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
