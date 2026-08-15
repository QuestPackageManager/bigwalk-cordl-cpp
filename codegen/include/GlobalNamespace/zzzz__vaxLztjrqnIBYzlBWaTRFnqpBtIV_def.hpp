#pragma once
// IWYU pragma private; include "GlobalNamespace/vaxLztjrqnIBYzlBWaTRFnqpBtIV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(vaxLztjrqnIBYzlBWaTRFnqpBtIV)
// Forward declare root types
namespace GlobalNamespace {
struct vaxLztjrqnIBYzlBWaTRFnqpBtIV;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV, "", "vaxLztjrqnIBYzlBWaTRFnqpBtIV");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: vaxLztjrqnIBYzlBWaTRFnqpBtIV
struct CORDL_TYPE vaxLztjrqnIBYzlBWaTRFnqpBtIV {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __vaxLztjrqnIBYzlBWaTRFnqpBtIV_Unwrapped
enum struct __vaxLztjrqnIBYzlBWaTRFnqpBtIV_Unwrapped : int32_t {
__E_Duration = static_cast<int32_t>(0x1),
__E_SamplePeriod = static_cast<int32_t>(0x2),
__E_Gain = static_cast<int32_t>(0x4),
__E_TriggerButton = static_cast<int32_t>(0x8),
__E_TriggerRepeatInterval = static_cast<int32_t>(0x10),
__E_Axes = static_cast<int32_t>(0x20),
__E_Direction = static_cast<int32_t>(0x40),
__E_Envelope = static_cast<int32_t>(0x80),
__E_TypeSpecificParameters = static_cast<int32_t>(0x100),
__E_StartDelay = static_cast<int32_t>(0x200),
__E_AllExceptDelay = static_cast<int32_t>(0x1ff),
__E_All = static_cast<int32_t>(0x3ff),
__E_Start = static_cast<int32_t>(0x20000000),
__E_NoRestart = static_cast<int32_t>(0x40000000),
__E_NoDownload = static_cast<int32_t>(0x80000000),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __vaxLztjrqnIBYzlBWaTRFnqpBtIV_Unwrapped () const noexcept {
return static_cast<__vaxLztjrqnIBYzlBWaTRFnqpBtIV_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr vaxLztjrqnIBYzlBWaTRFnqpBtIV() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr vaxLztjrqnIBYzlBWaTRFnqpBtIV(int32_t  value__) noexcept;

/// @brief Field All value: I32(1023)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const All;

/// @brief Field AllExceptDelay value: I32(511)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const AllExceptDelay;

/// @brief Field Axes value: I32(32)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Axes;

/// @brief Field Direction value: I32(64)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Direction;

/// @brief Field Duration value: I32(1)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Duration;

/// @brief Field Envelope value: I32(128)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Envelope;

/// @brief Field Gain value: I32(4)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Gain;

/// @brief Field NoDownload value: I32(-2147483648)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const NoDownload;

/// @brief Field NoRestart value: I32(1073741824)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const NoRestart;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const None;

/// @brief Field SamplePeriod value: I32(2)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const SamplePeriod;

/// @brief Field Start value: I32(536870912)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const Start;

/// @brief Field StartDelay value: I32(512)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const StartDelay;

/// @brief Field TriggerButton value: I32(8)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const TriggerButton;

/// @brief Field TriggerRepeatInterval value: I32(16)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const TriggerRepeatInterval;

/// @brief Field TypeSpecificParameters value: I32(256)
static ::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV const TypeSpecificParameters;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::vaxLztjrqnIBYzlBWaTRFnqpBtIV) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
