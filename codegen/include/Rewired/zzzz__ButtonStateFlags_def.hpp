#pragma once
// IWYU pragma private; include "Rewired/ButtonStateFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonStateFlags)
// Forward declare root types
namespace Rewired {
struct ButtonStateFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::ButtonStateFlags);
DEFINE_IL2CPP_CLASS(::Rewired::ButtonStateFlags, "Rewired", "ButtonStateFlags");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ButtonStateFlags
struct CORDL_TYPE ButtonStateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ButtonStateFlags_Unwrapped
enum struct __ButtonStateFlags_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
__E_Up = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ButtonStateFlags_Unwrapped () const noexcept {
return static_cast<__ButtonStateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ButtonStateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ButtonStateFlags(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::Rewired::ButtonStateFlags const Down;

/// @brief Field Off value: I32(0)
static ::Rewired::ButtonStateFlags const Off;

/// @brief Field On value: I32(1)
static ::Rewired::ButtonStateFlags const On;

/// @brief Field Up value: I32(4)
static ::Rewired::ButtonStateFlags const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1966};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ButtonStateFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ButtonStateFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired
