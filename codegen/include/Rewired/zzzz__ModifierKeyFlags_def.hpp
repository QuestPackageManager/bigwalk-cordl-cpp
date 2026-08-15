#pragma once
// IWYU pragma private; include "Rewired/ModifierKeyFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifierKeyFlags)
// Forward declare root types
namespace Rewired {
struct ModifierKeyFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::ModifierKeyFlags);
DEFINE_IL2CPP_CLASS(::Rewired::ModifierKeyFlags, "Rewired", "ModifierKeyFlags");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ModifierKeyFlags
struct CORDL_TYPE ModifierKeyFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModifierKeyFlags_Unwrapped
enum struct __ModifierKeyFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftControl = static_cast<int32_t>(0x1),
__E_RightControl = static_cast<int32_t>(0x2),
__E_LeftAlt = static_cast<int32_t>(0x4),
__E_RightAlt = static_cast<int32_t>(0x8),
__E_LeftShift = static_cast<int32_t>(0x10),
__E_RightShift = static_cast<int32_t>(0x20),
__E_LeftCommand = static_cast<int32_t>(0x40),
__E_RightCommand = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModifierKeyFlags_Unwrapped () const noexcept {
return static_cast<__ModifierKeyFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModifierKeyFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ModifierKeyFlags(int32_t  value__) noexcept;

/// @brief Field LeftAlt value: I32(4)
static ::Rewired::ModifierKeyFlags const LeftAlt;

/// @brief Field LeftCommand value: I32(64)
static ::Rewired::ModifierKeyFlags const LeftCommand;

/// @brief Field LeftControl value: I32(1)
static ::Rewired::ModifierKeyFlags const LeftControl;

/// @brief Field LeftShift value: I32(16)
static ::Rewired::ModifierKeyFlags const LeftShift;

/// @brief Field None value: I32(0)
static ::Rewired::ModifierKeyFlags const None;

/// @brief Field RightAlt value: I32(8)
static ::Rewired::ModifierKeyFlags const RightAlt;

/// @brief Field RightCommand value: I32(128)
static ::Rewired::ModifierKeyFlags const RightCommand;

/// @brief Field RightControl value: I32(2)
static ::Rewired::ModifierKeyFlags const RightControl;

/// @brief Field RightShift value: I32(32)
static ::Rewired::ModifierKeyFlags const RightShift;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ModifierKeyFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ModifierKeyFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired
