#pragma once
// IWYU pragma private; include "Steamworks/EGamepadTextInputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGamepadTextInputMode)
// Forward declare root types
namespace Steamworks {
struct EGamepadTextInputMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EGamepadTextInputMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EGamepadTextInputMode, "Steamworks", "EGamepadTextInputMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EGamepadTextInputMode
struct CORDL_TYPE EGamepadTextInputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGamepadTextInputMode_Unwrapped
enum struct __EGamepadTextInputMode_Unwrapped : int32_t {
__E_k_EGamepadTextInputModeNormal = static_cast<int32_t>(0x0),
__E_k_EGamepadTextInputModePassword = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EGamepadTextInputMode_Unwrapped () const noexcept {
return static_cast<__EGamepadTextInputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EGamepadTextInputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EGamepadTextInputMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGamepadTextInputModeNormal value: I32(0)
static ::Steamworks::EGamepadTextInputMode const k_EGamepadTextInputModeNormal;

/// @brief Field k_EGamepadTextInputModePassword value: I32(1)
static ::Steamworks::EGamepadTextInputMode const k_EGamepadTextInputModePassword;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EGamepadTextInputMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EGamepadTextInputMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
