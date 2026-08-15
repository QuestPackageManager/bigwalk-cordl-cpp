#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualShock4Extension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DualShock4Extension)
namespace Rewired::ControllerExtensions {
class DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj;
}
namespace Rewired::ControllerExtensions {
struct DualShock4MotorType;
}
namespace Rewired::ControllerExtensions {
class IDualShock4Extension;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IDriver_DualShock4;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct UpdateLoopType;
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
class DualShock4Extension;
}
namespace Rewired::ControllerExtensions {
class DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::DualShock4Extension*);
MARK_REF_T(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualShock4Extension*, "Rewired.ControllerExtensions", "DualShock4Extension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*, "Rewired.ControllerExtensions", "DualShock4Extension/YWgXExcQGxQjyoNXlNThZztJubtj");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.DualShock4Extension/YWgXExcQGxQjyoNXlNThZztJubtj
class CORDL_TYPE DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj : public ::System::Object {
public:
// Declarations
/// @brief Field DhNywUsWdSQXiRjOHpNxiHQLCnvy, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_DhNywUsWdSQXiRjOHpNxiHQLCnvy, put=__cordl_internal_set_DhNywUsWdSQXiRjOHpNxiHQLCnvy)) bool  DhNywUsWdSQXiRjOHpNxiHQLCnvy;

/// @brief Field UIRpbAIrxwXGQkfuyYzMaTtonjne, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UIRpbAIrxwXGQkfuyYzMaTtonjne, put=__cordl_internal_set_UIRpbAIrxwXGQkfuyYzMaTtonjne)) ::Rewired::HID::Drivers::IDriver_DualShock4*  UIRpbAIrxwXGQkfuyYzMaTtonjne;

/// @brief Field jkAALzAeYEEPJnafXDGegddqBSEoA, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jkAALzAeYEEPJnafXDGegddqBSEoA, put=__cordl_internal_set_jkAALzAeYEEPJnafXDGegddqBSEoA)) int32_t  jkAALzAeYEEPJnafXDGegddqBSEoA;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj* New_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr bool const& __cordl_internal_get_DhNywUsWdSQXiRjOHpNxiHQLCnvy() const;

constexpr bool& __cordl_internal_get_DhNywUsWdSQXiRjOHpNxiHQLCnvy() ;

constexpr ::Rewired::HID::Drivers::IDriver_DualShock4* const& __cordl_internal_get_UIRpbAIrxwXGQkfuyYzMaTtonjne() const;

constexpr ::Rewired::HID::Drivers::IDriver_DualShock4*& __cordl_internal_get_UIRpbAIrxwXGQkfuyYzMaTtonjne() ;

constexpr int32_t const& __cordl_internal_get_jkAALzAeYEEPJnafXDGegddqBSEoA() const;

constexpr int32_t& __cordl_internal_get_jkAALzAeYEEPJnafXDGegddqBSEoA() ;

constexpr void __cordl_internal_set_DhNywUsWdSQXiRjOHpNxiHQLCnvy(bool  value) ;

constexpr void __cordl_internal_set_UIRpbAIrxwXGQkfuyYzMaTtonjne(::Rewired::HID::Drivers::IDriver_DualShock4*  value) ;

constexpr void __cordl_internal_set_jkAALzAeYEEPJnafXDGegddqBSEoA(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818d0ae0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj(DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj(DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2698};

/// @brief Field UIRpbAIrxwXGQkfuyYzMaTtonjne, offset: 0x10, size: 0x8, def value: None
 ::Rewired::HID::Drivers::IDriver_DualShock4*  ___UIRpbAIrxwXGQkfuyYzMaTtonjne;

/// @brief Field DhNywUsWdSQXiRjOHpNxiHQLCnvy, offset: 0x18, size: 0x1, def value: None
 bool  ___DhNywUsWdSQXiRjOHpNxiHQLCnvy;

/// @brief Field jkAALzAeYEEPJnafXDGegddqBSEoA, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___jkAALzAeYEEPJnafXDGegddqBSEoA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj, ___UIRpbAIrxwXGQkfuyYzMaTtonjne) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj, ___DhNywUsWdSQXiRjOHpNxiHQLCnvy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj, ___jkAALzAeYEEPJnafXDGegddqBSEoA) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj) == 0x20, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.Controller::Extension, Rewired.Utils.Classes.Utility.TimerAbs
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.DualShock4Extension
class CORDL_TYPE DualShock4Extension : public ::Rewired::Controller_Extension {
public:
// Declarations
using YWgXExcQGxQjyoNXlNThZztJubtj = ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj;

/// @brief Field IlkoSqlRFHOuUAtWMTegFWTxdiFT, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_IlkoSqlRFHOuUAtWMTegFWTxdiFT, put=__cordl_internal_set_IlkoSqlRFHOuUAtWMTegFWTxdiFT)) bool  IlkoSqlRFHOuUAtWMTegFWTxdiFT;

/// @brief Field OhuyaZMjePSLVSTMFRmMMFXkVUnC, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OhuyaZMjePSLVSTMFRmMMFXkVUnC, put=__cordl_internal_set_OhuyaZMjePSLVSTMFRmMMFXkVUnC)) ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  OhuyaZMjePSLVSTMFRmMMFXkVUnC;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

 __declspec(property(get=get_batteryCharging)) bool  batteryCharging;

 __declspec(property(get=get_batteryLevel)) float_t  batteryLevel;

 __declspec(property(get=sfRlTJPfEOqSRmPZojRnbkoHbEzC)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_lightColorBlue, put=set_lightColorBlue)) float_t  lightColorBlue;

 __declspec(property(get=get_lightColorGreen, put=set_lightColorGreen)) float_t  lightColorGreen;

 __declspec(property(get=get_lightColorRed, put=set_lightColorRed)) float_t  lightColorRed;

 __declspec(property(get=get_maxTouches)) int32_t  maxTouches;

/// @brief Field sZHGsHNnujQSNCuSwbYZgHeXBmNg, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sZHGsHNnujQSNCuSwbYZgHeXBmNg, put=__cordl_internal_set_sZHGsHNnujQSNCuSwbYZgHeXBmNg)) ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*  sZHGsHNnujQSNCuSwbYZgHeXBmNg;

 __declspec(property(get=get_touchCount)) int32_t  touchCount;

 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr operator  ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method Clone, addr 0x1818ce070, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method GetAccelerometerValue, addr 0x1818ce170, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAccelerometerValue() ;

/// @brief Method GetAccelerometerValueRaw, addr 0x1818ce0b0, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAccelerometerValueRaw() ;

/// @brief Method GetGyroscopeValue, addr 0x1818ce2f0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValue() ;

/// @brief Method GetGyroscopeValueRaw, addr 0x1818ce230, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValueRaw() ;

/// @brief Method GetLastGyroscopeValue, addr 0x1818ce470, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastGyroscopeValue() ;

/// @brief Method GetLastGyroscopeValueRaw, addr 0x1818ce3b0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastGyroscopeValueRaw() ;

/// @brief Method GetLightColor, addr 0x1818ce530, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetLightColor() ;

/// @brief Method GetOrientation, addr 0x1818ce670, size 0xe0, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion GetOrientation() ;

/// @brief Method GetTouchId, addr 0x1818ce750, size 0xc0, virtual true, abstract: false, final true
inline int32_t GetTouchId(int32_t  index) ;

/// @brief Method GetTouchPosition, addr 0x1818cebd0, size 0xe0, virtual true, abstract: false, final true
inline bool GetTouchPosition(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionAbsolute, addr 0x1818ce980, size 0x170, virtual false, abstract: false, final false
inline bool GetTouchPositionAbsolute(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionAbsoluteByTouchId, addr 0x1818ce810, size 0x170, virtual false, abstract: false, final false
inline bool GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionByTouchId, addr 0x1818ceaf0, size 0xe0, virtual true, abstract: false, final true
inline bool GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetVibration, addr 0x1818ced90, size 0xf0, virtual false, abstract: false, final false
inline float_t GetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor) ;

/// @brief Method GetVibration, addr 0x1818cecb0, size 0xe0, virtual true, abstract: false, final true
inline float_t GetVibration(int32_t  motorIndex) ;

/// @brief Method IsTouching, addr 0x1818cef40, size 0xc0, virtual true, abstract: false, final true
inline bool IsTouching(int32_t  index) ;

/// @brief Method IsTouchingByTouchId, addr 0x1818cee80, size 0xc0, virtual true, abstract: false, final true
inline bool IsTouchingByTouchId(int32_t  touchId) ;

static inline ::Rewired::ControllerExtensions::DualShock4Extension* New_ctor(::Rewired::ControllerExtensions::DualShock4Extension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::DualShock4Extension* New_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ResetOrientation, addr 0x1818cf000, size 0x90, virtual true, abstract: false, final true
inline void ResetOrientation() ;

/// @brief Method Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue, addr 0x1818ce2f0, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue() ;

/// @brief Method Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw, addr 0x1818ce230, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x1818cb8a0, size 0x90, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productId, addr 0x1818cb930, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_productId() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productName, addr 0x1818cb9b0, size 0x90, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_productName() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usage, addr 0x1818cbac0, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage, addr 0x1818cba40, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId, addr 0x1818cbb40, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId() ;

/// @brief Method SetLightColor, addr 0x1818cf1d0, size 0x120, virtual true, abstract: false, final true
inline void SetLightColor(::UnityEngine::Color  color) ;

/// @brief Method SetLightColor, addr 0x1818cf090, size 0x140, virtual true, abstract: false, final true
inline void SetLightColor(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method SetLightColor, addr 0x1818cf2f0, size 0x140, virtual true, abstract: false, final true
inline void SetLightColor(float_t  red, float_t  green, float_t  blue, float_t  intensity) ;

/// @brief Method SetLightFlash, addr 0x1818cf430, size 0xe0, virtual false, abstract: false, final false
inline void SetLightFlash(float_t  onDuration, float_t  offDuration) ;

/// @brief Method SetVibration, addr 0x1818cf550, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel) ;

/// @brief Method SetVibration, addr 0x1818cf890, size 0x1e0, virtual true, abstract: false, final true
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration) ;

/// @brief Method SetVibration, addr 0x1818cf870, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x1818cf510, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818cf590, size 0x1c0, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cf750, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cf850, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x1818cf570, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818cf770, size 0xe0, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cf530, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SourceUpdated, addr 0x1818cfa70, size 0xd0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method StopLightFlash, addr 0x1818cfb40, size 0x90, virtual false, abstract: false, final false
inline void StopLightFlash() ;

/// @brief Method StopVibration, addr 0x1818cfbd0, size 0x100, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method UpdateData, addr 0x1818cfcd0, size 0xc0, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr bool const& __cordl_internal_get_IlkoSqlRFHOuUAtWMTegFWTxdiFT() const;

constexpr bool& __cordl_internal_get_IlkoSqlRFHOuUAtWMTegFWTxdiFT() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& __cordl_internal_get_OhuyaZMjePSLVSTMFRmMMFXkVUnC() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& __cordl_internal_get_OhuyaZMjePSLVSTMFRmMMFXkVUnC() ;

constexpr ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj* const& __cordl_internal_get_sZHGsHNnujQSNCuSwbYZgHeXBmNg() const;

constexpr ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*& __cordl_internal_get_sZHGsHNnujQSNCuSwbYZgHeXBmNg() ;

constexpr void __cordl_internal_set_IlkoSqlRFHOuUAtWMTegFWTxdiFT(bool  value) ;

constexpr void __cordl_internal_set_OhuyaZMjePSLVSTMFRmMMFXkVUnC(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value) ;

constexpr void __cordl_internal_set_sZHGsHNnujQSNCuSwbYZgHeXBmNg(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*  value) ;

/// @brief Method .ctor, addr 0x1818cc970, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::DualShock4Extension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818cfd90, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_batteryCharging, addr 0x1818cfe90, size 0x80, virtual false, abstract: false, final false
inline bool get_batteryCharging() ;

/// @brief Method get_batteryLevel, addr 0x1818cff10, size 0x80, virtual false, abstract: false, final false
inline float_t get_batteryLevel() ;

/// @brief Method get_lightColorBlue, addr 0x1818cff90, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorBlue() ;

/// @brief Method get_lightColorGreen, addr 0x1818d0020, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorGreen() ;

/// @brief Method get_lightColorRed, addr 0x1818d00b0, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorRed() ;

/// @brief Method get_maxTouches, addr 0x1818d0140, size 0x80, virtual true, abstract: false, final true
inline int32_t get_maxTouches() ;

/// @brief Method get_touchCount, addr 0x1818d01c0, size 0x80, virtual true, abstract: false, final true
inline int32_t get_touchCount() ;

/// @brief Method get_vibrationMotorCount, addr 0x1818cd0d0, size 0x70, virtual true, abstract: false, final true
inline int32_t get_vibrationMotorCount() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

/// @brief Method iyxLrURzUpdqycPDuaqAPkgHwSCL, addr 0x1818cd1f0, size 0x80, virtual false, abstract: false, final false
inline void iyxLrURzUpdqycPDuaqAPkgHwSCL(::Rewired::ControllerExtensions::DualShock4MotorType  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method ougRAHUFqYghlvlKuwaYmCrrnruO, addr 0x1818d0240, size 0xb0, virtual false, abstract: false, final false
inline void ougRAHUFqYghlvlKuwaYmCrrnruO() ;

/// @brief Method set_lightColorBlue, addr 0x1818d02f0, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorBlue(float_t  value) ;

/// @brief Method set_lightColorGreen, addr 0x1818d0330, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorGreen(float_t  value) ;

/// @brief Method set_lightColorRed, addr 0x1818d0370, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorRed(float_t  value) ;

/// @brief Method sfRlTJPfEOqSRmPZojRnbkoHbEzC, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* sfRlTJPfEOqSRmPZojRnbkoHbEzC() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Extension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Extension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShock4Extension(DualShock4Extension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Extension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShock4Extension(DualShock4Extension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2699};

/// @brief Field sZHGsHNnujQSNCuSwbYZgHeXBmNg, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*  ___sZHGsHNnujQSNCuSwbYZgHeXBmNg;

/// @brief Field IlkoSqlRFHOuUAtWMTegFWTxdiFT, offset: 0x30, size: 0x1, def value: None
 bool  ___IlkoSqlRFHOuUAtWMTegFWTxdiFT;

/// @brief Field OhuyaZMjePSLVSTMFRmMMFXkVUnC, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  ___OhuyaZMjePSLVSTMFRmMMFXkVUnC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension, ___sZHGsHNnujQSNCuSwbYZgHeXBmNg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension, ___IlkoSqlRFHOuUAtWMTegFWTxdiFT) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4Extension, ___OhuyaZMjePSLVSTMFRmMMFXkVUnC) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualShock4Extension) == 0x40, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
