#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IDualShock4Extension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IDualShock4Extension)
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class IDualShock4Extension;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::IDualShock4Extension*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::IDualShock4Extension*, "Rewired.ControllerExtensions", "IDualShock4Extension");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.IDualShock4Extension
class CORDL_TYPE IDualShock4Extension {
public:
// Declarations
 __declspec(property(get=get_maxTouches)) int32_t  maxTouches;

 __declspec(property(get=get_touchCount)) int32_t  touchCount;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method GetAccelerometerValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetAccelerometerValue() ;

/// @brief Method GetAccelerometerValueRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetAccelerometerValueRaw() ;

/// @brief Method GetGyroscopeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValue() ;

/// @brief Method GetGyroscopeValueRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValueRaw() ;

/// @brief Method GetOrientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion GetOrientation() ;

/// @brief Method GetTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetTouchId(int32_t  index) ;

/// @brief Method GetTouchPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPosition(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionByTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method IsTouching, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsTouching(int32_t  index) ;

/// @brief Method IsTouchingByTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsTouchingByTouchId(int32_t  touchId) ;

/// @brief Method ResetOrientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetOrientation() ;

/// @brief Method SetLightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLightColor(::UnityEngine::Color  color) ;

/// @brief Method SetLightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLightColor(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method SetLightColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLightColor(float_t  red, float_t  green, float_t  blue, float_t  intensity) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel) ;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration) ;

/// @brief Method get_maxTouches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_maxTouches() ;

/// @brief Method get_touchCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_touchCount() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDualShock4Extension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDualShock4Extension(IDualShock4Extension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ControllerExtensions
