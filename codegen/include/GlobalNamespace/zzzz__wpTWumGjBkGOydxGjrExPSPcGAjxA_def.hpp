#pragma once
// IWYU pragma private; include "GlobalNamespace/wpTWumGjBkGOydxGjrExPSPcGAjxA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(wpTWumGjBkGOydxGjrExPSPcGAjxA)
// Forward declare root types
namespace GlobalNamespace {
struct wpTWumGjBkGOydxGjrExPSPcGAjxA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA, "", "wpTWumGjBkGOydxGjrExPSPcGAjxA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: wpTWumGjBkGOydxGjrExPSPcGAjxA
struct CORDL_TYPE wpTWumGjBkGOydxGjrExPSPcGAjxA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __wpTWumGjBkGOydxGjrExPSPcGAjxA_Unwrapped
enum struct __wpTWumGjBkGOydxGjrExPSPcGAjxA_Unwrapped : int32_t {
__E_Keyboard = static_cast<int32_t>(0x0),
__E_Mouse = static_cast<int32_t>(0x1),
__E_Joystick = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __wpTWumGjBkGOydxGjrExPSPcGAjxA_Unwrapped () const noexcept {
return static_cast<__wpTWumGjBkGOydxGjrExPSPcGAjxA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr wpTWumGjBkGOydxGjrExPSPcGAjxA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr wpTWumGjBkGOydxGjrExPSPcGAjxA(int32_t  value__) noexcept;

/// @brief Field Joystick value: I32(2)
static ::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA const Joystick;

/// @brief Field Keyboard value: I32(0)
static ::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA const Keyboard;

/// @brief Field Mouse value: I32(1)
static ::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::wpTWumGjBkGOydxGjrExPSPcGAjxA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
