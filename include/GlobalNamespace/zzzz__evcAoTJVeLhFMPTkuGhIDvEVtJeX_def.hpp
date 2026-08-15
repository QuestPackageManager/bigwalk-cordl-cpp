#pragma once
// IWYU pragma private; include "GlobalNamespace/evcAoTJVeLhFMPTkuGhIDvEVtJeX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(evcAoTJVeLhFMPTkuGhIDvEVtJeX)
// Forward declare root types
namespace GlobalNamespace {
struct evcAoTJVeLhFMPTkuGhIDvEVtJeX;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX, "", "evcAoTJVeLhFMPTkuGhIDvEVtJeX");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: evcAoTJVeLhFMPTkuGhIDvEVtJeX
struct CORDL_TYPE evcAoTJVeLhFMPTkuGhIDvEVtJeX {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __evcAoTJVeLhFMPTkuGhIDvEVtJeX_Unwrapped
enum struct __evcAoTJVeLhFMPTkuGhIDvEVtJeX_Unwrapped : int32_t {
__E_LeftButtonDown = static_cast<int32_t>(0x1),
__E_LeftButtonUp = static_cast<int32_t>(0x2),
__E_RightButtonDown = static_cast<int32_t>(0x4),
__E_RightButtonUp = static_cast<int32_t>(0x8),
__E_MiddleButtonDown = static_cast<int32_t>(0x10),
__E_MiddleButtonUp = static_cast<int32_t>(0x20),
__E_Button1Down = static_cast<int32_t>(0x1),
__E_Button1Up = static_cast<int32_t>(0x2),
__E_Button2Down = static_cast<int32_t>(0x4),
__E_Button2Up = static_cast<int32_t>(0x8),
__E_Button3Down = static_cast<int32_t>(0x10),
__E_Button3Up = static_cast<int32_t>(0x20),
__E_Button4Down = static_cast<int32_t>(0x40),
__E_Button4Up = static_cast<int32_t>(0x80),
__E_Button5Down = static_cast<int32_t>(0x100),
__E_Button5Up = static_cast<int32_t>(0x200),
__E_MouseWheel = static_cast<int32_t>(0x400),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __evcAoTJVeLhFMPTkuGhIDvEVtJeX_Unwrapped () const noexcept {
return static_cast<__evcAoTJVeLhFMPTkuGhIDvEVtJeX_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr evcAoTJVeLhFMPTkuGhIDvEVtJeX() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr evcAoTJVeLhFMPTkuGhIDvEVtJeX(int32_t  value__) noexcept;

/// @brief Field Button1Down value: I32(1)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button1Down;

/// @brief Field Button1Up value: I32(2)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button1Up;

/// @brief Field Button2Down value: I32(4)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button2Down;

/// @brief Field Button2Up value: I32(8)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button2Up;

/// @brief Field Button3Down value: I32(16)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button3Down;

/// @brief Field Button3Up value: I32(32)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button3Up;

/// @brief Field Button4Down value: I32(64)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button4Down;

/// @brief Field Button4Up value: I32(128)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button4Up;

/// @brief Field Button5Down value: I32(256)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button5Down;

/// @brief Field Button5Up value: I32(512)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const Button5Up;

/// @brief Field LeftButtonDown value: I32(1)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const LeftButtonDown;

/// @brief Field LeftButtonUp value: I32(2)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const LeftButtonUp;

/// @brief Field MiddleButtonDown value: I32(16)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const MiddleButtonDown;

/// @brief Field MiddleButtonUp value: I32(32)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const MiddleButtonUp;

/// @brief Field MouseWheel value: I32(1024)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const MouseWheel;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const None;

/// @brief Field RightButtonDown value: I32(4)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const RightButtonDown;

/// @brief Field RightButtonUp value: I32(8)
static ::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX const RightButtonUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::evcAoTJVeLhFMPTkuGhIDvEVtJeX) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
