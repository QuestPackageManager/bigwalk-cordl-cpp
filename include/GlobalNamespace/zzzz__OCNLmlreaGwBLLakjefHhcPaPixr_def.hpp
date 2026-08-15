#pragma once
// IWYU pragma private; include "GlobalNamespace/OCNLmlreaGwBLLakjefHhcPaPixr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OCNLmlreaGwBLLakjefHhcPaPixr)
// Forward declare root types
namespace GlobalNamespace {
struct OCNLmlreaGwBLLakjefHhcPaPixr;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr, "", "OCNLmlreaGwBLLakjefHhcPaPixr");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OCNLmlreaGwBLLakjefHhcPaPixr
struct CORDL_TYPE OCNLmlreaGwBLLakjefHhcPaPixr {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OCNLmlreaGwBLLakjefHhcPaPixr_Unwrapped
enum struct __OCNLmlreaGwBLLakjefHhcPaPixr_Unwrapped : int32_t {
__E_Joystick = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
__E_Mouse = static_cast<int32_t>(0x2),
__E_Keyboard = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OCNLmlreaGwBLLakjefHhcPaPixr_Unwrapped () const noexcept {
return static_cast<__OCNLmlreaGwBLLakjefHhcPaPixr_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OCNLmlreaGwBLLakjefHhcPaPixr() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OCNLmlreaGwBLLakjefHhcPaPixr(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(1)
static ::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr const Gamepad;

/// @brief Field Joystick value: I32(0)
static ::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr const Joystick;

/// @brief Field Keyboard value: I32(3)
static ::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr const Keyboard;

/// @brief Field Mouse value: I32(2)
static ::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OCNLmlreaGwBLLakjefHhcPaPixr) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
