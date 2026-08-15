#pragma once
// IWYU pragma private; include "Rewired/Platforms/DirectInputAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectInputAxis)
// Forward declare root types
namespace Rewired::Platforms {
struct DirectInputAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::DirectInputAxis);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::DirectInputAxis, "Rewired.Platforms", "DirectInputAxis");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.DirectInputAxis
struct CORDL_TYPE DirectInputAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectInputAxis_Unwrapped
enum struct __DirectInputAxis_Unwrapped : int32_t {
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
__E_AngularVelocityX = static_cast<int32_t>(0xc),
__E_AngularVelocityY = static_cast<int32_t>(0xd),
__E_AngularVelocityZ = static_cast<int32_t>(0xe),
__E_VelocitySlider0 = static_cast<int32_t>(0xf),
__E_VelocitySlider1 = static_cast<int32_t>(0x10),
__E_AccelerationX = static_cast<int32_t>(0x11),
__E_AccelerationY = static_cast<int32_t>(0x12),
__E_AccelerationZ = static_cast<int32_t>(0x13),
__E_AngularAccelerationX = static_cast<int32_t>(0x14),
__E_AngularAccelerationY = static_cast<int32_t>(0x15),
__E_AngularAccelerationZ = static_cast<int32_t>(0x16),
__E_AccelerationSlider0 = static_cast<int32_t>(0x17),
__E_AccelerationSlider1 = static_cast<int32_t>(0x18),
__E_ForceX = static_cast<int32_t>(0x19),
__E_ForceY = static_cast<int32_t>(0x1a),
__E_ForceZ = static_cast<int32_t>(0x1b),
__E_TorqueX = static_cast<int32_t>(0x1c),
__E_TorqueY = static_cast<int32_t>(0x1d),
__E_TorqueZ = static_cast<int32_t>(0x1e),
__E_ForceSlider0 = static_cast<int32_t>(0x1f),
__E_ForceSlider1 = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectInputAxis_Unwrapped () const noexcept {
return static_cast<__DirectInputAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectInputAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectInputAxis(int32_t  value__) noexcept;

/// @brief Field AccelerationSlider0 value: I32(23)
static ::Rewired::Platforms::DirectInputAxis const AccelerationSlider0;

/// @brief Field AccelerationSlider1 value: I32(24)
static ::Rewired::Platforms::DirectInputAxis const AccelerationSlider1;

/// @brief Field AccelerationX value: I32(17)
static ::Rewired::Platforms::DirectInputAxis const AccelerationX;

/// @brief Field AccelerationY value: I32(18)
static ::Rewired::Platforms::DirectInputAxis const AccelerationY;

/// @brief Field AccelerationZ value: I32(19)
static ::Rewired::Platforms::DirectInputAxis const AccelerationZ;

/// @brief Field AngularAccelerationX value: I32(20)
static ::Rewired::Platforms::DirectInputAxis const AngularAccelerationX;

/// @brief Field AngularAccelerationY value: I32(21)
static ::Rewired::Platforms::DirectInputAxis const AngularAccelerationY;

/// @brief Field AngularAccelerationZ value: I32(22)
static ::Rewired::Platforms::DirectInputAxis const AngularAccelerationZ;

/// @brief Field AngularVelocityX value: I32(12)
static ::Rewired::Platforms::DirectInputAxis const AngularVelocityX;

/// @brief Field AngularVelocityY value: I32(13)
static ::Rewired::Platforms::DirectInputAxis const AngularVelocityY;

/// @brief Field AngularVelocityZ value: I32(14)
static ::Rewired::Platforms::DirectInputAxis const AngularVelocityZ;

/// @brief Field ForceSlider0 value: I32(31)
static ::Rewired::Platforms::DirectInputAxis const ForceSlider0;

/// @brief Field ForceSlider1 value: I32(32)
static ::Rewired::Platforms::DirectInputAxis const ForceSlider1;

/// @brief Field ForceX value: I32(25)
static ::Rewired::Platforms::DirectInputAxis const ForceX;

/// @brief Field ForceY value: I32(26)
static ::Rewired::Platforms::DirectInputAxis const ForceY;

/// @brief Field ForceZ value: I32(27)
static ::Rewired::Platforms::DirectInputAxis const ForceZ;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::DirectInputAxis const None;

/// @brief Field RotationX value: I32(4)
static ::Rewired::Platforms::DirectInputAxis const RotationX;

/// @brief Field RotationY value: I32(5)
static ::Rewired::Platforms::DirectInputAxis const RotationY;

/// @brief Field RotationZ value: I32(6)
static ::Rewired::Platforms::DirectInputAxis const RotationZ;

/// @brief Field Slider0 value: I32(7)
static ::Rewired::Platforms::DirectInputAxis const Slider0;

/// @brief Field Slider1 value: I32(8)
static ::Rewired::Platforms::DirectInputAxis const Slider1;

/// @brief Field TorqueX value: I32(28)
static ::Rewired::Platforms::DirectInputAxis const TorqueX;

/// @brief Field TorqueY value: I32(29)
static ::Rewired::Platforms::DirectInputAxis const TorqueY;

/// @brief Field TorqueZ value: I32(30)
static ::Rewired::Platforms::DirectInputAxis const TorqueZ;

/// @brief Field VelocitySlider0 value: I32(15)
static ::Rewired::Platforms::DirectInputAxis const VelocitySlider0;

/// @brief Field VelocitySlider1 value: I32(16)
static ::Rewired::Platforms::DirectInputAxis const VelocitySlider1;

/// @brief Field VelocityX value: I32(9)
static ::Rewired::Platforms::DirectInputAxis const VelocityX;

/// @brief Field VelocityY value: I32(10)
static ::Rewired::Platforms::DirectInputAxis const VelocityY;

/// @brief Field VelocityZ value: I32(11)
static ::Rewired::Platforms::DirectInputAxis const VelocityZ;

/// @brief Field X value: I32(1)
static ::Rewired::Platforms::DirectInputAxis const X;

/// @brief Field Y value: I32(2)
static ::Rewired::Platforms::DirectInputAxis const Y;

/// @brief Field Z value: I32(3)
static ::Rewired::Platforms::DirectInputAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::DirectInputAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::DirectInputAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
