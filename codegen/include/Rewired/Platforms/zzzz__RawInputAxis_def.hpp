#pragma once
// IWYU pragma private; include "Rewired/Platforms/RawInputAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RawInputAxis)
// Forward declare root types
namespace Rewired::Platforms {
struct RawInputAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::RawInputAxis);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::RawInputAxis, "Rewired.Platforms", "RawInputAxis");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.RawInputAxis
struct CORDL_TYPE RawInputAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RawInputAxis_Unwrapped
enum struct __RawInputAxis_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_Z = static_cast<int32_t>(0x3),
__E_RotationX = static_cast<int32_t>(0x4),
__E_RotationY = static_cast<int32_t>(0x5),
__E_RotationZ = static_cast<int32_t>(0x6),
__E_Slider0 = static_cast<int32_t>(0x7),
__E_Slider1 = static_cast<int32_t>(0x8),
__E_VelocityX = static_cast<int32_t>(0x9),
__E_VelocityY = static_cast<int32_t>(0xa),
__E_VelocityZ = static_cast<int32_t>(0xb),
__E_Other = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RawInputAxis_Unwrapped () const noexcept {
return static_cast<__RawInputAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RawInputAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RawInputAxis(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::RawInputAxis const None;

/// @brief Field Other value: I32(1000)
static ::Rewired::Platforms::RawInputAxis const Other;

/// @brief Field RotationX value: I32(4)
static ::Rewired::Platforms::RawInputAxis const RotationX;

/// @brief Field RotationY value: I32(5)
static ::Rewired::Platforms::RawInputAxis const RotationY;

/// @brief Field RotationZ value: I32(6)
static ::Rewired::Platforms::RawInputAxis const RotationZ;

/// @brief Field Slider0 value: I32(7)
static ::Rewired::Platforms::RawInputAxis const Slider0;

/// @brief Field Slider1 value: I32(8)
static ::Rewired::Platforms::RawInputAxis const Slider1;

/// @brief Field VelocityX value: I32(9)
static ::Rewired::Platforms::RawInputAxis const VelocityX;

/// @brief Field VelocityY value: I32(10)
static ::Rewired::Platforms::RawInputAxis const VelocityY;

/// @brief Field VelocityZ value: I32(11)
static ::Rewired::Platforms::RawInputAxis const VelocityZ;

/// @brief Field X value: I32(1)
static ::Rewired::Platforms::RawInputAxis const X;

/// @brief Field Y value: I32(2)
static ::Rewired::Platforms::RawInputAxis const Y;

/// @brief Field Z value: I32(3)
static ::Rewired::Platforms::RawInputAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::RawInputAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::RawInputAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
