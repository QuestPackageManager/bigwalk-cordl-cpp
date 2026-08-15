#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseExtension.hpp"
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
CORDL_MODULE_EXPORT(DualSenseExtension)
namespace Rewired::ControllerExtensions {
class DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME;
}
namespace Rewired::ControllerExtensions {
struct DualSenseMicrophoneLightMode;
}
namespace Rewired::ControllerExtensions {
struct DualSenseOtherLightBrightness;
}
namespace Rewired::ControllerExtensions {
struct DualSensePlayerLightFlags;
}
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectStates;
}
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerType;
}
namespace Rewired::ControllerExtensions {
struct DualSenseVibrationMode;
}
namespace Rewired::ControllerExtensions {
struct DualShock4MotorType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseExtension;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
namespace Rewired::ControllerExtensions {
class IDualShock4Extension;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
class IDriver_DualSense;
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
class DualSenseExtension;
}
namespace Rewired::ControllerExtensions {
class DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::DualSenseExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseExtension*, "Rewired.ControllerExtensions", "DualSenseExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*, "Rewired.ControllerExtensions", "DualSenseExtension/EzAQcQAXjumsSIFbGwMZpuMGcPME");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.DualSenseExtension/EzAQcQAXjumsSIFbGwMZpuMGcPME
class CORDL_TYPE DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME : public ::System::Object {
public:
// Declarations
/// @brief Field NuTmymqbiCSWczvtqsqSZyLVPaJC, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_NuTmymqbiCSWczvtqsqSZyLVPaJC, put=__cordl_internal_set_NuTmymqbiCSWczvtqsqSZyLVPaJC)) bool  NuTmymqbiCSWczvtqsqSZyLVPaJC;

/// @brief Field VBgmgOgtnPGHJnbJuQZpneRICWCI, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VBgmgOgtnPGHJnbJuQZpneRICWCI, put=__cordl_internal_set_VBgmgOgtnPGHJnbJuQZpneRICWCI)) int32_t  VBgmgOgtnPGHJnbJuQZpneRICWCI;

/// @brief Field uyopYkjxQqLhvREnKMWqVXEzpDCK, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uyopYkjxQqLhvREnKMWqVXEzpDCK, put=__cordl_internal_set_uyopYkjxQqLhvREnKMWqVXEzpDCK)) ::Rewired::HID::Drivers::IDriver_DualSense*  uyopYkjxQqLhvREnKMWqVXEzpDCK;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME* New_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr bool const& __cordl_internal_get_NuTmymqbiCSWczvtqsqSZyLVPaJC() const;

constexpr bool& __cordl_internal_get_NuTmymqbiCSWczvtqsqSZyLVPaJC() ;

constexpr int32_t const& __cordl_internal_get_VBgmgOgtnPGHJnbJuQZpneRICWCI() const;

constexpr int32_t& __cordl_internal_get_VBgmgOgtnPGHJnbJuQZpneRICWCI() ;

constexpr ::Rewired::HID::Drivers::IDriver_DualSense* const& __cordl_internal_get_uyopYkjxQqLhvREnKMWqVXEzpDCK() const;

constexpr ::Rewired::HID::Drivers::IDriver_DualSense*& __cordl_internal_get_uyopYkjxQqLhvREnKMWqVXEzpDCK() ;

constexpr void __cordl_internal_set_NuTmymqbiCSWczvtqsqSZyLVPaJC(bool  value) ;

constexpr void __cordl_internal_set_VBgmgOgtnPGHJnbJuQZpneRICWCI(int32_t  value) ;

constexpr void __cordl_internal_set_uyopYkjxQqLhvREnKMWqVXEzpDCK(::Rewired::HID::Drivers::IDriver_DualSense*  value) ;

/// @brief Method .ctor, addr 0x1818d0ae0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME(DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME(DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2682};

/// @brief Field uyopYkjxQqLhvREnKMWqVXEzpDCK, offset: 0x10, size: 0x8, def value: None
 ::Rewired::HID::Drivers::IDriver_DualSense*  ___uyopYkjxQqLhvREnKMWqVXEzpDCK;

/// @brief Field NuTmymqbiCSWczvtqsqSZyLVPaJC, offset: 0x18, size: 0x1, def value: None
 bool  ___NuTmymqbiCSWczvtqsqSZyLVPaJC;

/// @brief Field VBgmgOgtnPGHJnbJuQZpneRICWCI, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___VBgmgOgtnPGHJnbJuQZpneRICWCI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME, ___uyopYkjxQqLhvREnKMWqVXEzpDCK) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME, ___NuTmymqbiCSWczvtqsqSZyLVPaJC) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME, ___VBgmgOgtnPGHJnbJuQZpneRICWCI) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME) == 0x20, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.Controller::Extension, Rewired.Utils.Classes.Utility.TimerAbs
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.DualSenseExtension
class CORDL_TYPE DualSenseExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using EzAQcQAXjumsSIFbGwMZpuMGcPME = ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME;

/// @brief Field CAkovduPlPEUDbzGcLoeERvtOlkt, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_CAkovduPlPEUDbzGcLoeERvtOlkt, put=__cordl_internal_set_CAkovduPlPEUDbzGcLoeERvtOlkt)) bool  CAkovduPlPEUDbzGcLoeERvtOlkt;

/// @brief Field MnanwUNPQviUPtDUHlQrGEQAgPJD, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MnanwUNPQviUPtDUHlQrGEQAgPJD, put=__cordl_internal_set_MnanwUNPQviUPtDUHlQrGEQAgPJD)) ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*  MnanwUNPQviUPtDUHlQrGEQAgPJD;

/// @brief Field NxHenEVjAdyFDfsRQKuRixdwXbEL, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NxHenEVjAdyFDfsRQKuRixdwXbEL, put=__cordl_internal_set_NxHenEVjAdyFDfsRQKuRixdwXbEL)) ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  NxHenEVjAdyFDfsRQKuRixdwXbEL;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

 __declspec(property(get=get_batteryCharging)) bool  batteryCharging;

 __declspec(property(get=get_batteryLevel)) float_t  batteryLevel;

 __declspec(property(get=NkQrRSKycEhEaDHvMiKGCrnInQEh)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_lightColorBlue, put=set_lightColorBlue)) float_t  lightColorBlue;

 __declspec(property(get=get_lightColorGreen, put=set_lightColorGreen)) float_t  lightColorGreen;

 __declspec(property(get=get_lightColorRed, put=set_lightColorRed)) float_t  lightColorRed;

 __declspec(property(get=get_maxTouches)) int32_t  maxTouches;

 __declspec(property(get=get_microphoneLightMode, put=set_microphoneLightMode)) ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  microphoneLightMode;

 __declspec(property(get=get_otherLightBrightness, put=set_otherLightBrightness)) ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  otherLightBrightness;

 __declspec(property(get=get_playerLights, put=set_playerLights)) ::Rewired::ControllerExtensions::DualSensePlayerLightFlags  playerLights;

 __declspec(property(get=get_touchCount)) int32_t  touchCount;

 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseExtension"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseExtension*() noexcept;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr operator  ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method Clone, addr 0x1818ca700, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method GetAccelerometerValue, addr 0x1818ca800, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAccelerometerValue() ;

/// @brief Method GetAccelerometerValueRaw, addr 0x1818ca740, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAccelerometerValueRaw() ;

/// @brief Method GetGyroscopeValue, addr 0x1818ca980, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValue() ;

/// @brief Method GetGyroscopeValueRaw, addr 0x1818ca8c0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGyroscopeValueRaw() ;

/// @brief Method GetLastGyroscopeValue, addr 0x1818cab00, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastGyroscopeValue() ;

/// @brief Method GetLastGyroscopeValueRaw, addr 0x1818caa40, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastGyroscopeValueRaw() ;

/// @brief Method GetLightColor, addr 0x1818cabc0, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetLightColor() ;

/// @brief Method GetOrientation, addr 0x1818cad00, size 0xe0, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion GetOrientation() ;

/// @brief Method GetTouchId, addr 0x1818cade0, size 0xc0, virtual true, abstract: false, final true
inline int32_t GetTouchId(int32_t  index) ;

/// @brief Method GetTouchPosition, addr 0x1818cb260, size 0xe0, virtual true, abstract: false, final true
inline bool GetTouchPosition(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionAbsolute, addr 0x1818cb010, size 0x170, virtual false, abstract: false, final false
inline bool GetTouchPositionAbsolute(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionAbsoluteByTouchId, addr 0x1818caea0, size 0x170, virtual false, abstract: false, final false
inline bool GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionByTouchId, addr 0x1818cb180, size 0xe0, virtual true, abstract: false, final true
inline bool GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTriggerEffectStates, addr 0x1818cb340, size 0x100, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates GetTriggerEffectStates() ;

/// @brief Method GetVibration, addr 0x1818cb4c0, size 0xf0, virtual false, abstract: false, final false
inline float_t GetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor) ;

/// @brief Method GetVibration, addr 0x1818cb5b0, size 0xe0, virtual true, abstract: false, final true
inline float_t GetVibration(int32_t  motorIndex) ;

/// @brief Method GetVibrationMode, addr 0x1818cb440, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseVibrationMode GetVibrationMode() ;

/// @brief Method IsTouching, addr 0x1818cb750, size 0xc0, virtual true, abstract: false, final true
inline bool IsTouching(int32_t  index) ;

/// @brief Method IsTouchingByTouchId, addr 0x1818cb690, size 0xc0, virtual true, abstract: false, final true
inline bool IsTouchingByTouchId(int32_t  touchId) ;

static inline ::Rewired::ControllerExtensions::DualSenseExtension* New_ctor(::Rewired::ControllerExtensions::DualSenseExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::DualSenseExtension* New_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NkQrRSKycEhEaDHvMiKGCrnInQEh, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* NkQrRSKycEhEaDHvMiKGCrnInQEh() ;

/// @brief Method ResetOrientation, addr 0x1818cb810, size 0x90, virtual true, abstract: false, final true
inline void ResetOrientation() ;

/// @brief Method Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue, addr 0x1818ca980, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue() ;

/// @brief Method Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw, addr 0x1818ca8c0, size 0xc0, virtual true, abstract: false, final true
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

/// @brief Method SetLightColor, addr 0x1818cbd00, size 0x120, virtual true, abstract: false, final true
inline void SetLightColor(::UnityEngine::Color  color) ;

/// @brief Method SetLightColor, addr 0x1818cbe20, size 0x140, virtual true, abstract: false, final true
inline void SetLightColor(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method SetLightColor, addr 0x1818cbbc0, size 0x140, virtual true, abstract: false, final true
inline void SetLightColor(float_t  red, float_t  green, float_t  blue, float_t  intensity) ;

/// @brief Method SetTriggerEffect, addr 0x1818cbf60, size 0x120, virtual true, abstract: false, final true
inline bool SetTriggerEffect(::Rewired::ControllerExtensions::DualSenseTriggerType  trigger, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*  effect) ;

/// @brief Method SetVibration, addr 0x1818cc3a0, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel) ;

/// @brief Method SetVibration, addr 0x1818cc3c0, size 0x1e0, virtual true, abstract: false, final true
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration) ;

/// @brief Method SetVibration, addr 0x1818cc380, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x1818cc680, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818cc1a0, size 0x1c0, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cc6a0, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cc6c0, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x1818cc360, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818cc5a0, size 0xe0, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818cc180, size 0x20, virtual true, abstract: false, final true
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibrationMode, addr 0x1818cc080, size 0x100, virtual false, abstract: false, final false
inline void SetVibrationMode(::Rewired::ControllerExtensions::DualSenseVibrationMode  mode) ;

/// @brief Method SourceUpdated, addr 0x1818cc6e0, size 0xd0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method StopVibration, addr 0x1818cc7b0, size 0x100, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method UpdateData, addr 0x1818cc8b0, size 0xc0, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr bool const& __cordl_internal_get_CAkovduPlPEUDbzGcLoeERvtOlkt() const;

constexpr bool& __cordl_internal_get_CAkovduPlPEUDbzGcLoeERvtOlkt() ;

constexpr ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME* const& __cordl_internal_get_MnanwUNPQviUPtDUHlQrGEQAgPJD() const;

constexpr ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*& __cordl_internal_get_MnanwUNPQviUPtDUHlQrGEQAgPJD() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& __cordl_internal_get_NxHenEVjAdyFDfsRQKuRixdwXbEL() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& __cordl_internal_get_NxHenEVjAdyFDfsRQKuRixdwXbEL() ;

constexpr void __cordl_internal_set_CAkovduPlPEUDbzGcLoeERvtOlkt(bool  value) ;

constexpr void __cordl_internal_set_MnanwUNPQviUPtDUHlQrGEQAgPJD(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*  value) ;

constexpr void __cordl_internal_set_NxHenEVjAdyFDfsRQKuRixdwXbEL(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value) ;

/// @brief Method .ctor, addr 0x1818cc970, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::DualSenseExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818cca70, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_batteryCharging, addr 0x1818ccb70, size 0x80, virtual false, abstract: false, final false
inline bool get_batteryCharging() ;

/// @brief Method get_batteryLevel, addr 0x1818ccbf0, size 0x80, virtual false, abstract: false, final false
inline float_t get_batteryLevel() ;

/// @brief Method get_lightColorBlue, addr 0x1818ccc70, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorBlue() ;

/// @brief Method get_lightColorGreen, addr 0x1818ccd00, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorGreen() ;

/// @brief Method get_lightColorRed, addr 0x1818ccd90, size 0x90, virtual false, abstract: false, final false
inline float_t get_lightColorRed() ;

/// @brief Method get_maxTouches, addr 0x1818cce20, size 0x80, virtual true, abstract: false, final true
inline int32_t get_maxTouches() ;

/// @brief Method get_microphoneLightMode, addr 0x1818ccea0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode get_microphoneLightMode() ;

/// @brief Method get_otherLightBrightness, addr 0x1818ccf30, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness get_otherLightBrightness() ;

/// @brief Method get_playerLights, addr 0x1818ccfc0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSensePlayerLightFlags get_playerLights() ;

/// @brief Method get_touchCount, addr 0x1818cd050, size 0x80, virtual true, abstract: false, final true
inline int32_t get_touchCount() ;

/// @brief Method get_vibrationMotorCount, addr 0x1818cd0d0, size 0x70, virtual true, abstract: false, final true
inline int32_t get_vibrationMotorCount() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseExtension"
constexpr ::Rewired::ControllerExtensions::IDualSenseExtension* i___Rewired__ControllerExtensions__IDualSenseExtension() noexcept;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

/// @brief Method lwvgqpiprGaTISOGPvbQyrUIbWrh, addr 0x1818cd140, size 0xb0, virtual false, abstract: false, final false
inline void lwvgqpiprGaTISOGPvbQyrUIbWrh() ;

/// @brief Method mZKeWlwsivuxfGHICEMvTHwEAEiF, addr 0x1818cd1f0, size 0x80, virtual false, abstract: false, final false
inline void mZKeWlwsivuxfGHICEMvTHwEAEiF(::Rewired::ControllerExtensions::DualShock4MotorType  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method set_lightColorBlue, addr 0x1818cd270, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorBlue(float_t  value) ;

/// @brief Method set_lightColorGreen, addr 0x1818cd2b0, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorGreen(float_t  value) ;

/// @brief Method set_lightColorRed, addr 0x1818cd2f0, size 0x40, virtual false, abstract: false, final false
inline void set_lightColorRed(float_t  value) ;

/// @brief Method set_microphoneLightMode, addr 0x1818cd330, size 0xb0, virtual false, abstract: false, final false
inline void set_microphoneLightMode(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  value) ;

/// @brief Method set_otherLightBrightness, addr 0x1818cd3e0, size 0xb0, virtual false, abstract: false, final false
inline void set_otherLightBrightness(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  value) ;

/// @brief Method set_playerLights, addr 0x1818cd490, size 0xb0, virtual false, abstract: false, final false
inline void set_playerLights(::Rewired::ControllerExtensions::DualSensePlayerLightFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualSenseExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualSenseExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualSenseExtension(DualSenseExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualSenseExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualSenseExtension(DualSenseExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2683};

/// @brief Field MnanwUNPQviUPtDUHlQrGEQAgPJD, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*  ___MnanwUNPQviUPtDUHlQrGEQAgPJD;

/// @brief Field CAkovduPlPEUDbzGcLoeERvtOlkt, offset: 0x30, size: 0x1, def value: None
 bool  ___CAkovduPlPEUDbzGcLoeERvtOlkt;

/// @brief Field NxHenEVjAdyFDfsRQKuRixdwXbEL, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  ___NxHenEVjAdyFDfsRQKuRixdwXbEL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension, ___MnanwUNPQviUPtDUHlQrGEQAgPJD) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension, ___CAkovduPlPEUDbzGcLoeERvtOlkt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseExtension, ___NxHenEVjAdyFDfsRQKuRixdwXbEL) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseExtension) == 0x40, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
