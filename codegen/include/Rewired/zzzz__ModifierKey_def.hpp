#pragma once
// IWYU pragma private; include "Rewired/ModifierKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifierKey)
// Forward declare root types
namespace Rewired {
struct ModifierKey;
}
// Write type traits
MARK_VAL_T(::Rewired::ModifierKey);
DEFINE_IL2CPP_CLASS(::Rewired::ModifierKey, "Rewired", "ModifierKey");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ModifierKey
struct CORDL_TYPE ModifierKey {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModifierKey_Unwrapped
enum struct __ModifierKey_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Control = static_cast<int32_t>(0x1),
__E_Alt = static_cast<int32_t>(0x2),
__E_Shift = static_cast<int32_t>(0x3),
__E_Command = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModifierKey_Unwrapped () const noexcept {
return static_cast<__ModifierKey_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModifierKey() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ModifierKey(int32_t  value__) noexcept;

/// @brief Field Alt value: I32(2)
static ::Rewired::ModifierKey const Alt;

/// @brief Field Command value: I32(4)
static ::Rewired::ModifierKey const Command;

/// @brief Field Control value: I32(1)
static ::Rewired::ModifierKey const Control;

/// @brief Field None value: I32(0)
static ::Rewired::ModifierKey const None;

/// @brief Field Shift value: I32(3)
static ::Rewired::ModifierKey const Shift;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ModifierKey, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ModifierKey) == 0x4, "Size mismatch!");

} // namespace end def Rewired
