#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchGamepadExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchGamepadExtension)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchGamepadExtension_ExtSource_Base;
}
namespace Rewired::ControllerExtensions {
struct NintendoSwitchGamepadVibration;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchController;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class NintendoSwitchGamepadExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchGamepadExtension_ExtSource_Base;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*, "Rewired.ControllerExtensions", "NintendoSwitchGamepadExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*, "Rewired.ControllerExtensions", "NintendoSwitchGamepadExtension/ExtSource_Base");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchGamepadExtension/ExtSource_Base
class CORDL_TYPE NintendoSwitchGamepadExtension_ExtSource_Base : public ::System::Object {
public:
// Declarations
/// @brief Field _driver, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__driver, put=__cordl_internal_set__driver)) ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  _driver;

 __declspec(property(get=get_driver)) ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  driver;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base* New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* const& __cordl_internal_get__driver() const;

constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*& __cordl_internal_get__driver() ;

constexpr void __cordl_internal_set__driver(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_driver, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* get_driver() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchGamepadExtension_ExtSource_Base() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchGamepadExtension_ExtSource_Base", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchGamepadExtension_ExtSource_Base(NintendoSwitchGamepadExtension_ExtSource_Base && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchGamepadExtension_ExtSource_Base", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchGamepadExtension_ExtSource_Base(NintendoSwitchGamepadExtension_ExtSource_Base const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2705};

/// @brief Field _driver, offset: 0x10, size: 0x8, def value: None
 ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  ____driver;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base, ____driver) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.Controller::Extension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchGamepadExtension
class CORDL_TYPE NintendoSwitchGamepadExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using ExtSource_Base = ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

/// @brief Field YNhdApBddeBptfHMccwSWkhWyxmDA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_YNhdApBddeBptfHMccwSWkhWyxmDA, put=__cordl_internal_set_YNhdApBddeBptfHMccwSWkhWyxmDA)) ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  YNhdApBddeBptfHMccwSWkhWyxmDA;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_joystick)) ::Rewired::Joystick*  joystick;

/// @brief Field nHBlPHThrHEnhhAdqmZnzcmHJhHO, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_nHBlPHThrHEnhhAdqmZnzcmHJhHO, put=__cordl_internal_set_nHBlPHThrHEnhhAdqmZnzcmHJhHO)) bool  nHBlPHThrHEnhhAdqmZnzcmHJhHO;

 __declspec(property(get=get_source)) ::System::Object*  source;

 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method GetVibration, addr 0x1818d9b70, size 0x1e0, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration GetVibration(int32_t  motorIndex) ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension* New_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension* New_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  _cordl_fixed_empty_name_whitespace) ;

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

/// @brief Method Rewired.Interfaces.IControllerVibrator.GetVibration, addr 0x1818d9d50, size 0x30, virtual true, abstract: false, final true
inline float_t Rewired_Interfaces_IControllerVibrator_GetVibration(int32_t  motorIndex) ;

/// @brief Method Rewired.Interfaces.IControllerVibrator.SetVibration, addr 0x1818d9d80, size 0x40, virtual true, abstract: false, final true
inline void Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method Rewired.Interfaces.IControllerVibrator.SetVibration, addr 0x1818d9dc0, size 0x40, virtual true, abstract: false, final true
inline void Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method Rewired.Interfaces.IControllerVibrator.SetVibration, addr 0x1818d9dc0, size 0x40, virtual true, abstract: false, final true
inline void Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method Rewired.Interfaces.IControllerVibrator.SetVibration, addr 0x1818d9d80, size 0x40, virtual true, abstract: false, final true
inline void Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818da4a0, size 0xe0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh) ;

/// @brief Method SetVibration, addr 0x1818da2c0, size 0xf0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818d9fd0, size 0x110, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818d9e00, size 0xf0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818d9ef0, size 0xe0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration) ;

/// @brief Method SetVibration, addr 0x1818da3b0, size 0xf0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, float_t  duration) ;

/// @brief Method SetVibration, addr 0x1818da1d0, size 0xf0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x1818da0e0, size 0xf0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, bool  stopOtherMotors) ;

/// @brief Method SourceUpdated, addr 0x1818da580, size 0xd0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method StopVibration, addr 0x1818da650, size 0x90, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method StopVibration, addr 0x1818da6e0, size 0xa0, virtual false, abstract: false, final false
inline void StopVibration(int32_t  motorIndex) ;

/// @brief Method UpdateData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base* const& __cordl_internal_get_YNhdApBddeBptfHMccwSWkhWyxmDA() const;

constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*& __cordl_internal_get_YNhdApBddeBptfHMccwSWkhWyxmDA() ;

constexpr bool const& __cordl_internal_get_nHBlPHThrHEnhhAdqmZnzcmHJhHO() const;

constexpr bool& __cordl_internal_get_nHBlPHThrHEnhhAdqmZnzcmHJhHO() ;

constexpr void __cordl_internal_set_YNhdApBddeBptfHMccwSWkhWyxmDA(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  value) ;

constexpr void __cordl_internal_set_nHBlPHThrHEnhhAdqmZnzcmHJhHO(bool  value) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818ca6e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_isValid, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_joystick, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* get_joystick() ;

/// @brief Method get_source, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_source() ;

/// @brief Method get_vibrationMotorCount, addr 0x1818da780, size 0x80, virtual true, abstract: false, final true
inline int32_t get_vibrationMotorCount() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchGamepadExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchGamepadExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchGamepadExtension(NintendoSwitchGamepadExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchGamepadExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchGamepadExtension(NintendoSwitchGamepadExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2706};

/// @brief Field YNhdApBddeBptfHMccwSWkhWyxmDA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  ___YNhdApBddeBptfHMccwSWkhWyxmDA;

/// @brief Field nHBlPHThrHEnhhAdqmZnzcmHJhHO, offset: 0x30, size: 0x1, def value: None
 bool  ___nHBlPHThrHEnhhAdqmZnzcmHJhHO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension, ___YNhdApBddeBptfHMccwSWkhWyxmDA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension, ___nHBlPHThrHEnhhAdqmZnzcmHJhHO) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
