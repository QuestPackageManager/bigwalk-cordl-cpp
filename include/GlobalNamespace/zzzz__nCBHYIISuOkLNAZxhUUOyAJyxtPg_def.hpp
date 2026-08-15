#pragma once
// IWYU pragma private; include "GlobalNamespace/nCBHYIISuOkLNAZxhUUOyAJyxtPg.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(nCBHYIISuOkLNAZxhUUOyAJyxtPg)
// Forward declare root types
namespace GlobalNamespace {
struct nCBHYIISuOkLNAZxhUUOyAJyxtPg;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg, "", "nCBHYIISuOkLNAZxhUUOyAJyxtPg");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: nCBHYIISuOkLNAZxhUUOyAJyxtPg
struct CORDL_TYPE nCBHYIISuOkLNAZxhUUOyAJyxtPg {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __nCBHYIISuOkLNAZxhUUOyAJyxtPg_Unwrapped
enum struct __nCBHYIISuOkLNAZxhUUOyAJyxtPg_Unwrapped : int32_t {
__E_k_EControllerSourceMode_None = static_cast<int32_t>(0x0),
__E_k_EControllerSourceMode_Dpad = static_cast<int32_t>(0x1),
__E_k_EControllerSourceMode_Buttons = static_cast<int32_t>(0x2),
__E_k_EControllerSourceMode_FourButtons = static_cast<int32_t>(0x3),
__E_k_EControllerSourceMode_AbsoluteMouse = static_cast<int32_t>(0x4),
__E_k_EControllerSourceMode_RelativeMouse = static_cast<int32_t>(0x5),
__E_k_EControllerSourceMode_JoystickMove = static_cast<int32_t>(0x6),
__E_k_EControllerSourceMode_JoystickCamera = static_cast<int32_t>(0x7),
__E_k_EControllerSourceMode_ScrollWheel = static_cast<int32_t>(0x8),
__E_k_EControllerSourceMode_Trigger = static_cast<int32_t>(0x9),
__E_k_EControllerSourceMode_TouchMenu = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __nCBHYIISuOkLNAZxhUUOyAJyxtPg_Unwrapped () const noexcept {
return static_cast<__nCBHYIISuOkLNAZxhUUOyAJyxtPg_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr nCBHYIISuOkLNAZxhUUOyAJyxtPg() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr nCBHYIISuOkLNAZxhUUOyAJyxtPg(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EControllerSourceMode_AbsoluteMouse value: I32(4)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_AbsoluteMouse;

/// @brief Field k_EControllerSourceMode_Buttons value: I32(2)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_Buttons;

/// @brief Field k_EControllerSourceMode_Dpad value: I32(1)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_Dpad;

/// @brief Field k_EControllerSourceMode_FourButtons value: I32(3)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_FourButtons;

/// @brief Field k_EControllerSourceMode_JoystickCamera value: I32(7)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_JoystickCamera;

/// @brief Field k_EControllerSourceMode_JoystickMove value: I32(6)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_JoystickMove;

/// @brief Field k_EControllerSourceMode_None value: I32(0)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_None;

/// @brief Field k_EControllerSourceMode_RelativeMouse value: I32(5)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_RelativeMouse;

/// @brief Field k_EControllerSourceMode_ScrollWheel value: I32(8)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_ScrollWheel;

/// @brief Field k_EControllerSourceMode_TouchMenu value: I32(10)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_TouchMenu;

/// @brief Field k_EControllerSourceMode_Trigger value: I32(9)
static ::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg const k_EControllerSourceMode_Trigger;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::nCBHYIISuOkLNAZxhUUOyAJyxtPg) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
