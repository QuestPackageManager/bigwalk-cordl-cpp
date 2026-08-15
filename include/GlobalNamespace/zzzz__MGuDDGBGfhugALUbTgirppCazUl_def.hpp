#pragma once
// IWYU pragma private; include "GlobalNamespace/MGuDDGBGfhugALUbTgirppCazUl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MGuDDGBGfhugALUbTgirppCazUl)
// Forward declare root types
namespace GlobalNamespace {
struct MGuDDGBGfhugALUbTgirppCazUl;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl, "", "MGuDDGBGfhugALUbTgirppCazUl");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MGuDDGBGfhugALUbTgirppCazUl
struct CORDL_TYPE MGuDDGBGfhugALUbTgirppCazUl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MGuDDGBGfhugALUbTgirppCazUl_Unwrapped
enum struct __MGuDDGBGfhugALUbTgirppCazUl_Unwrapped : int32_t {
__E_Joystick = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MGuDDGBGfhugALUbTgirppCazUl_Unwrapped () const noexcept {
return static_cast<__MGuDDGBGfhugALUbTgirppCazUl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MGuDDGBGfhugALUbTgirppCazUl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MGuDDGBGfhugALUbTgirppCazUl(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(1)
static ::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl const Gamepad;

/// @brief Field Joystick value: I32(0)
static ::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl const Joystick;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MGuDDGBGfhugALUbTgirppCazUl) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
