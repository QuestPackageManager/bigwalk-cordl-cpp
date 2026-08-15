#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_DualShock4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IDriver_DualShock4)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
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
namespace Rewired::HID::Drivers {
class IDriver_DualShock4;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IDriver_DualShock4*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IDriver_DualShock4*, "Rewired.HID.Drivers", "IDriver_DualShock4");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IDriver_DualShock4
class CORDL_TYPE IDriver_DualShock4 {
public:
// Declarations
 __declspec(property(get=get_AccelerometerValue)) ::UnityEngine::Vector3  AccelerometerValue;

 __declspec(property(get=get_AccelerometerValueRaw)) ::UnityEngine::Vector3  AccelerometerValueRaw;

 __declspec(property(get=get_BatteryCharging)) bool  BatteryCharging;

 __declspec(property(get=get_BatteryLevel)) float_t  BatteryLevel;

 __declspec(property(get=get_GyroscopeValue)) ::UnityEngine::Vector3  GyroscopeValue;

 __declspec(property(get=get_GyroscopeValueRaw)) ::UnityEngine::Vector3  GyroscopeValueRaw;

 __declspec(property(get=get_LastGyroscopeValue)) ::UnityEngine::Vector3  LastGyroscopeValue;

 __declspec(property(get=get_LastGyroscopeValueRaw)) ::UnityEngine::Vector3  LastGyroscopeValueRaw;

 __declspec(property(get=get_LeftMotor, put=set_LeftMotor)) float_t  LeftMotor;

 __declspec(property(get=get_LightColorB, put=set_LightColorB)) float_t  LightColorB;

 __declspec(property(get=get_LightColorG, put=set_LightColorG)) float_t  LightColorG;

 __declspec(property(get=get_LightColorR, put=set_LightColorR)) float_t  LightColorR;

 __declspec(property(get=get_LightFlashOffDuration, put=set_LightFlashOffDuration)) float_t  LightFlashOffDuration;

 __declspec(property(get=get_LightFlashOnDuration, put=set_LightFlashOnDuration)) float_t  LightFlashOnDuration;

 __declspec(property(get=get_MaxTouches)) int32_t  MaxTouches;

 __declspec(property(get=get_Orientation)) ::UnityEngine::Quaternion  Orientation;

 __declspec(property(get=get_RightMotor, put=set_RightMotor)) float_t  RightMotor;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Method GetTouchCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetTouchCount() ;

/// @brief Method GetTouchIdAtIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetTouchIdAtIndex(int32_t  index) ;

/// @brief Method GetTouchPositionAbsoluteByIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPositionAbsoluteByIndex(int32_t  index, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY) ;

/// @brief Method GetTouchPositionAbsoluteByTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY) ;

/// @brief Method GetTouchPositionByIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPositionByIndex(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionByTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method IsTouchingAtIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsTouchingAtIndex(int32_t  index) ;

/// @brief Method IsTouchingAtTouchId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsTouchingAtTouchId(int32_t  touchId) ;

/// @brief Method ResetOrientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetOrientation() ;

/// @brief Method StopLightFlash, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopLightFlash() ;

/// @brief Method StopVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopVibration() ;

/// @brief Method get_AccelerometerValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AccelerometerValue() ;

/// @brief Method get_AccelerometerValueRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AccelerometerValueRaw() ;

/// @brief Method get_BatteryCharging, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_BatteryCharging() ;

/// @brief Method get_BatteryLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_BatteryLevel() ;

/// @brief Method get_GyroscopeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_GyroscopeValue() ;

/// @brief Method get_GyroscopeValueRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_GyroscopeValueRaw() ;

/// @brief Method get_LastGyroscopeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastGyroscopeValue() ;

/// @brief Method get_LastGyroscopeValueRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastGyroscopeValueRaw() ;

/// @brief Method get_LeftMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LeftMotor() ;

/// @brief Method get_LightColorB, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LightColorB() ;

/// @brief Method get_LightColorG, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LightColorG() ;

/// @brief Method get_LightColorR, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LightColorR() ;

/// @brief Method get_LightFlashOffDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LightFlashOffDuration() ;

/// @brief Method get_LightFlashOnDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_LightFlashOnDuration() ;

/// @brief Method get_MaxTouches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxTouches() ;

/// @brief Method get_Orientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion get_Orientation() ;

/// @brief Method get_RightMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_RightMotor() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Method set_LeftMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LeftMotor(float_t  value) ;

/// @brief Method set_LightColorB, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LightColorB(float_t  value) ;

/// @brief Method set_LightColorG, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LightColorG(float_t  value) ;

/// @brief Method set_LightColorR, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LightColorR(float_t  value) ;

/// @brief Method set_LightFlashOffDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LightFlashOffDuration(float_t  value) ;

/// @brief Method set_LightFlashOnDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_LightFlashOnDuration(float_t  value) ;

/// @brief Method set_RightMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_RightMotor(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDriver_DualShock4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDriver_DualShock4(IDriver_DualShock4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2223};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
