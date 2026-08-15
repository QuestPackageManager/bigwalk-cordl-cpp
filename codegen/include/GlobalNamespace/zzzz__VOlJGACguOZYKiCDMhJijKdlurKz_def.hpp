#pragma once
// IWYU pragma private; include "GlobalNamespace/VOlJGACguOZYKiCDMhJijKdlurKz.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VOlJGACguOZYKiCDMhJijKdlurKz)
// Forward declare root types
namespace GlobalNamespace {
struct VOlJGACguOZYKiCDMhJijKdlurKz;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz, "", "VOlJGACguOZYKiCDMhJijKdlurKz");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VOlJGACguOZYKiCDMhJijKdlurKz
struct CORDL_TYPE VOlJGACguOZYKiCDMhJijKdlurKz {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VOlJGACguOZYKiCDMhJijKdlurKz_Unwrapped
enum struct __VOlJGACguOZYKiCDMhJijKdlurKz_Unwrapped : int32_t {
__E_k_EControllerSource_None = static_cast<int32_t>(0x0),
__E_k_EControllerSource_LeftTrackpad = static_cast<int32_t>(0x1),
__E_k_EControllerSource_RightTrackpad = static_cast<int32_t>(0x2),
__E_k_EControllerSource_Joystick = static_cast<int32_t>(0x3),
__E_k_EControllerSource_ABXY = static_cast<int32_t>(0x4),
__E_k_EControllerSource_Switch = static_cast<int32_t>(0x5),
__E_k_EControllerSource_LeftTrigger = static_cast<int32_t>(0x6),
__E_k_EControllerSource_RightTrigger = static_cast<int32_t>(0x7),
__E_k_EControllerSource_Gyro = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VOlJGACguOZYKiCDMhJijKdlurKz_Unwrapped () const noexcept {
return static_cast<__VOlJGACguOZYKiCDMhJijKdlurKz_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VOlJGACguOZYKiCDMhJijKdlurKz() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VOlJGACguOZYKiCDMhJijKdlurKz(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EControllerSource_ABXY value: I32(4)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_ABXY;

/// @brief Field k_EControllerSource_Gyro value: I32(8)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_Gyro;

/// @brief Field k_EControllerSource_Joystick value: I32(3)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_Joystick;

/// @brief Field k_EControllerSource_LeftTrackpad value: I32(1)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_LeftTrackpad;

/// @brief Field k_EControllerSource_LeftTrigger value: I32(6)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_LeftTrigger;

/// @brief Field k_EControllerSource_None value: I32(0)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_None;

/// @brief Field k_EControllerSource_RightTrackpad value: I32(2)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_RightTrackpad;

/// @brief Field k_EControllerSource_RightTrigger value: I32(7)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_RightTrigger;

/// @brief Field k_EControllerSource_Switch value: I32(5)
static ::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz const k_EControllerSource_Switch;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VOlJGACguOZYKiCDMhJijKdlurKz) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
