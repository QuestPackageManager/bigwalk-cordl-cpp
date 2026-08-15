#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/HIDDeviceDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EwAnsVkUWPNMuXgXRBHYSItzSmvO_def.hpp"
#include "GlobalNamespace/zzzz__FWwFwKvxnHcZRvKSIQSWcnkGdYQt_def.hpp"
#include "GlobalNamespace/zzzz__LdaHIPkymkZGKHeprsIpIeEZUAne_def.hpp"
#include "GlobalNamespace/zzzz__OkcmSmRmCcUfzccQxwsvLaISCgRM_def.hpp"
#include "GlobalNamespace/zzzz__PbhVAcyPodjfjgtOYIEQAsvuaNXtA_def.hpp"
#include "GlobalNamespace/zzzz__hiHYIcoyXejyQbLzUJWImSHUtPzT_def.hpp"
#include "GlobalNamespace/zzzz__wSkslqxSrZMOTLFbNIgclblyAsJM_def.hpp"
#include "GlobalNamespace/zzzz__xqUQVBorUehSSWryumnGUBIjAhEX_def.hpp"
#include "GlobalNamespace/zzzz__ySHadabAZpnXZfjCkazzVDXNbzdBB_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDDeviceDriver)
namespace GlobalNamespace {
struct WLETGeuJfanxUuxlAoBgHTRHTfCG;
}
namespace GlobalNamespace {
struct wSkslqxSrZMOTLFbNIgclblyAsJM;
}
namespace Rewired::Config {
struct EnhancedDeviceSupportDeviceType;
}
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::HID::Drivers {
struct HIDDeviceDriver_DriverType;
}
namespace Rewired::HID::Drivers {
struct HIDDeviceDriver_HIDProperties;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_IHIDDevice;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
struct HIDDeviceDriver_DriverType;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_IHIDDevice;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::HID::Drivers {
struct HIDDeviceDriver_HIDProperties;
}
// Write type traits
MARK_VAL_T(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType);
MARK_REF_T(::Rewired::HID::Drivers::HIDDeviceDriver*);
MARK_REF_T(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*);
MARK_REF_T(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*);
MARK_VAL_T(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType, "Rewired.HID.Drivers", "HIDDeviceDriver/DriverType");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::HIDDeviceDriver*, "Rewired.HID.Drivers", "HIDDeviceDriver");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*, "Rewired.HID.Drivers", "HIDDeviceDriver/IHIDDevice");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*, "Rewired.HID.Drivers", "HIDDeviceDriver/InitArgs");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, "Rewired.HID.Drivers", "HIDDeviceDriver/HIDProperties");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.HIDDeviceDriver/DriverType
struct CORDL_TYPE HIDDeviceDriver_DriverType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HIDDeviceDriver_DriverType_Unwrapped
enum struct __HIDDeviceDriver_DriverType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DualShock4 = static_cast<int32_t>(0x1),
__E_DualSense = static_cast<int32_t>(0x2),
__E_RailDriver = static_cast<int32_t>(0x3),
__E_SwitchJoyConLeft = static_cast<int32_t>(0x4),
__E_SwitchJoyConRight = static_cast<int32_t>(0x5),
__E_SwitchProController = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HIDDeviceDriver_DriverType_Unwrapped () const noexcept {
return static_cast<__HIDDeviceDriver_DriverType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HIDDeviceDriver_DriverType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HIDDeviceDriver_DriverType(int32_t  value__) noexcept;

/// @brief Field DualSense value: I32(2)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const DualSense;

/// @brief Field DualShock4 value: I32(1)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const DualShock4;

/// @brief Field None value: I32(0)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const None;

/// @brief Field RailDriver value: I32(3)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const RailDriver;

/// @brief Field SwitchJoyConLeft value: I32(4)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const SwitchJoyConLeft;

/// @brief Field SwitchJoyConRight value: I32(5)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const SwitchJoyConRight;

/// @brief Field SwitchProController value: I32(6)
static ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType const SwitchProController;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6619};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.HIDDeviceDriver/HIDProperties
struct CORDL_TYPE HIDDeviceDriver_HIDProperties {
public:
// Declarations
/// @brief Method .ctor, addr 0x181ab4c20, size 0x190, virtual false, abstract: false, final false
inline void _ctor(uint16_t  _cordl_fixed_empty_name_whitespace, uint16_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, uint16_t  _cordl_fixed_empty_name_whitespace_param_4, uint16_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8) ;

// Ctor Parameters []
// @brief default ctor
constexpr HIDDeviceDriver_HIDProperties() ;

// Ctor Parameters [CppParam { name: "vendorId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "productName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "maxInputReportLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxOutputReportLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxFeatureReportLength", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HIDDeviceDriver_HIDProperties(uint16_t  vendorId, uint16_t  productId, ::StringW  productName, ::StringW  manufacturer, uint16_t  usagePage, uint16_t  usage, int32_t  maxInputReportLength, int32_t  maxOutputReportLength, int32_t  maxFeatureReportLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field vendorId, offset: 0x0, size: 0x2, def value: None
 uint16_t  vendorId;

/// @brief Field productId, offset: 0x2, size: 0x2, def value: None
 uint16_t  productId;

/// @brief Field productName, offset: 0x8, size: 0x8, def value: None
 ::StringW  productName;

/// @brief Field manufacturer, offset: 0x10, size: 0x8, def value: None
 ::StringW  manufacturer;

/// @brief Field usagePage, offset: 0x18, size: 0x2, def value: None
 uint16_t  usagePage;

/// @brief Field usage, offset: 0x1a, size: 0x2, def value: None
 uint16_t  usage;

/// @brief Field maxInputReportLength, offset: 0x1c, size: 0x4, def value: None
 int32_t  maxInputReportLength;

/// @brief Field maxOutputReportLength, offset: 0x20, size: 0x4, def value: None
 int32_t  maxOutputReportLength;

/// @brief Field maxFeatureReportLength, offset: 0x24, size: 0x4, def value: None
 int32_t  maxFeatureReportLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, vendorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, productId) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, productName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, manufacturer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, usagePage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, usage) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, maxInputReportLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, maxOutputReportLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties, maxFeatureReportLength) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties) == 0x28, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.HIDDeviceDriver/IHIDDevice
class CORDL_TYPE HIDDeviceDriver_IHIDDevice {
public:
// Declarations
 __declspec(property(get=get_properties)) ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  properties;

/// @brief Method GetHidFeatureData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetHidFeatureData(uint8_t  reportId, int32_t  reportLength, int32_t  timeoutMs, int32_t  retryCount) ;

/// @brief Method ReadSync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReadSync(::System::IntPtr  buffer, int32_t  bytesToRead, int32_t  timeoutMs) ;

/// @brief Method WriteAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteAsync(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  outputReport, int32_t  timeoutMs) ;

/// @brief Method WriteSync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool WriteSync(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  outputReport, int32_t  timeoutMs) ;

/// @brief Method get_properties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties get_properties() ;

// Ctor Parameters [CppParam { name: "", ty: "HIDDeviceDriver_IHIDDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDDeviceDriver_IHIDDevice(HIDDeviceDriver_IHIDDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
// Dependencies Rewired.Config.UpdateLoopSetting, System.Object, wSkslqxSrZMOTLFbNIgclblyAsJM
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.HIDDeviceDriver/InitArgs
class CORDL_TYPE HIDDeviceDriver_InitArgs : public ::System::Object {
public:
// Declarations
/// @brief Field connectionType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionType, put=__cordl_internal_set_connectionType)) ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  connectionType;

/// @brief Field hatSpan, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_hatSpan, put=__cordl_internal_set_hatSpan)) int32_t  hatSpan;

/// @brief Field hatZeroValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hatZeroValue, put=__cordl_internal_set_hatZeroValue)) int32_t  hatZeroValue;

/// @brief Field hidDevice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hidDevice, put=__cordl_internal_set_hidDevice)) ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  hidDevice;

/// @brief Field maxAxisValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAxisValue, put=__cordl_internal_set_maxAxisValue)) int32_t  maxAxisValue;

/// @brief Field minAxisValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAxisValue, put=__cordl_internal_set_minAxisValue)) int32_t  minAxisValue;

/// @brief Field updateLoopSetting, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateLoopSetting, put=__cordl_internal_set_updateLoopSetting)) ::Rewired::Config::UpdateLoopSetting  updateLoopSetting;

static inline ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs* New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  _cordl_fixed_empty_name_whitespace_param_6) ;

constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const& __cordl_internal_get_connectionType() const;

constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM& __cordl_internal_get_connectionType() ;

constexpr int32_t const& __cordl_internal_get_hatSpan() const;

constexpr int32_t& __cordl_internal_get_hatSpan() ;

constexpr int32_t const& __cordl_internal_get_hatZeroValue() const;

constexpr int32_t& __cordl_internal_get_hatZeroValue() ;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& __cordl_internal_get_hidDevice() const;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& __cordl_internal_get_hidDevice() ;

constexpr int32_t const& __cordl_internal_get_maxAxisValue() const;

constexpr int32_t& __cordl_internal_get_maxAxisValue() ;

constexpr int32_t const& __cordl_internal_get_minAxisValue() const;

constexpr int32_t& __cordl_internal_get_minAxisValue() ;

constexpr ::Rewired::Config::UpdateLoopSetting const& __cordl_internal_get_updateLoopSetting() const;

constexpr ::Rewired::Config::UpdateLoopSetting& __cordl_internal_get_updateLoopSetting() ;

constexpr void __cordl_internal_set_connectionType(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  value) ;

constexpr void __cordl_internal_set_hatSpan(int32_t  value) ;

constexpr void __cordl_internal_set_hatZeroValue(int32_t  value) ;

constexpr void __cordl_internal_set_hidDevice(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value) ;

constexpr void __cordl_internal_set_maxAxisValue(int32_t  value) ;

constexpr void __cordl_internal_set_minAxisValue(int32_t  value) ;

constexpr void __cordl_internal_set_updateLoopSetting(::Rewired::Config::UpdateLoopSetting  value) ;

/// @brief Method .ctor, addr 0x181ab5270, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  _cordl_fixed_empty_name_whitespace_param_6) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HIDDeviceDriver_InitArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HIDDeviceDriver_InitArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HIDDeviceDriver_InitArgs(HIDDeviceDriver_InitArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HIDDeviceDriver_InitArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDDeviceDriver_InitArgs(HIDDeviceDriver_InitArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6622};

/// @brief Field updateLoopSetting, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Config::UpdateLoopSetting  ___updateLoopSetting;

/// @brief Field connectionType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  ___connectionType;

/// @brief Field minAxisValue, offset: 0x18, size: 0x4, def value: None
 int32_t  ___minAxisValue;

/// @brief Field maxAxisValue, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___maxAxisValue;

/// @brief Field hatZeroValue, offset: 0x20, size: 0x4, def value: None
 int32_t  ___hatZeroValue;

/// @brief Field hatSpan, offset: 0x24, size: 0x4, def value: None
 int32_t  ___hatSpan;

/// @brief Field hidDevice, offset: 0x28, size: 0x8, def value: None
 ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  ___hidDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___updateLoopSetting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___connectionType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___minAxisValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___maxAxisValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___hatZeroValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___hatSpan) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs, ___hidDevice) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs) == 0x30, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies EwAnsVkUWPNMuXgXRBHYSItzSmvO, FWwFwKvxnHcZRvKSIQSWcnkGdYQt, LdaHIPkymkZGKHeprsIpIeEZUAne, OkcmSmRmCcUfzccQxwsvLaISCgRM, PbhVAcyPodjfjgtOYIEQAsvuaNXtA, System.Object, hiHYIcoyXejyQbLzUJWImSHUtPzT, xqUQVBorUehSSWryumnGUBIjAhEX, ySHadabAZpnXZfjCkazzVDXNbzdBB
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.HIDDeviceDriver
class CORDL_TYPE HIDDeviceDriver : public ::System::Object {
public:
// Declarations
using DriverType = ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType;

using HIDProperties = ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties;

using IHIDDevice = ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice;

using InitArgs = ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs;

 __declspec(property(get=get_AccelerometerCount)) int32_t  AccelerometerCount;

 __declspec(property(get=get_AxisCount)) int32_t  AxisCount;

 __declspec(property(get=get_ButtonCount)) int32_t  ButtonCount;

 __declspec(property(get=get_GyroscopeCount)) int32_t  GyroscopeCount;

 __declspec(property(get=get_HatCount)) int32_t  HatCount;

 __declspec(property(get=get_LightCount)) int32_t  LightCount;

 __declspec(property(get=get_TouchpadCount)) int32_t  TouchpadCount;

 __declspec(property(get=get_VibrationMotorCount)) int32_t  VibrationMotorCount;

/// @brief Field accelerometers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_accelerometers, put=__cordl_internal_set_accelerometers)) ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>  accelerometers;

/// @brief Field axes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes, put=__cordl_internal_set_axes)) ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>  axes;

/// @brief Field buttons, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>  buttons;

 __declspec(property(get=get_disposed)) bool  disposed;

/// @brief Field gyroscopes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gyroscopes, put=__cordl_internal_set_gyroscopes)) ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>  gyroscopes;

/// @brief Field hats, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hats, put=__cordl_internal_set_hats)) ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>  hats;

/// @brief Field lgorxKnhAhLnFgwEWVCAomrnVLHA, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_lgorxKnhAhLnFgwEWVCAomrnVLHA, put=__cordl_internal_set_lgorxKnhAhLnFgwEWVCAomrnVLHA)) bool  lgorxKnhAhLnFgwEWVCAomrnVLHA;

/// @brief Field lights, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>  lights;

/// @brief Field touchpads, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchpads, put=__cordl_internal_set_touchpads)) ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>  touchpads;

/// @brief Field vibrationMotors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_vibrationMotors, put=__cordl_internal_set_vibrationMotors)) ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>  vibrationMotors;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateControllerExtension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* CreateControllerExtension() ;

/// @brief Method Dispose, addr 0x181a36f00, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1819306b0, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181a37e40, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindDriverId, addr 0x181ab4730, size 0x350, virtual false, abstract: false, final false
static inline ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType FindDriverId(int32_t  vendorId, int32_t  productId, ::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  exclusions) ;

/// @brief Method GetDriver, addr 0x181ab4a80, size 0x180, virtual false, abstract: false, final false
static inline ::Rewired::HID::Drivers::HIDDeviceDriver* GetDriver(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  driverId, ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  hidDriverInitArgs) ;

static inline ::Rewired::HID::Drivers::HIDDeviceDriver* New_ctor() ;

/// @brief Method ParseInputReport, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp) ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*> const& __cordl_internal_get_accelerometers() const;

constexpr ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>& __cordl_internal_get_accelerometers() ;

constexpr ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*> const& __cordl_internal_get_axes() const;

constexpr ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>& __cordl_internal_get_axes() ;

constexpr ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>& __cordl_internal_get_buttons() ;

constexpr ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*> const& __cordl_internal_get_gyroscopes() const;

constexpr ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>& __cordl_internal_get_gyroscopes() ;

constexpr ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*> const& __cordl_internal_get_hats() const;

constexpr ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>& __cordl_internal_get_hats() ;

constexpr bool const& __cordl_internal_get_lgorxKnhAhLnFgwEWVCAomrnVLHA() const;

constexpr bool& __cordl_internal_get_lgorxKnhAhLnFgwEWVCAomrnVLHA() ;

constexpr ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>& __cordl_internal_get_lights() ;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*> const& __cordl_internal_get_touchpads() const;

constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>& __cordl_internal_get_touchpads() ;

constexpr ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*> const& __cordl_internal_get_vibrationMotors() const;

constexpr ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>& __cordl_internal_get_vibrationMotors() ;

constexpr void __cordl_internal_set_accelerometers(::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>  value) ;

constexpr void __cordl_internal_set_axes(::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>  value) ;

constexpr void __cordl_internal_set_gyroscopes(::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>  value) ;

constexpr void __cordl_internal_set_hats(::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>  value) ;

constexpr void __cordl_internal_set_lgorxKnhAhLnFgwEWVCAomrnVLHA(bool  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>  value) ;

constexpr void __cordl_internal_set_touchpads(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>  value) ;

constexpr void __cordl_internal_set_vibrationMotors(::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccelerometerCount, addr 0x1810e7050, size 0x2390, virtual true, abstract: false, final true
inline int32_t get_AccelerometerCount() ;

/// @brief Method get_AxisCount, addr 0x1803a9050, size 0x20, virtual true, abstract: false, final true
inline int32_t get_AxisCount() ;

/// @brief Method get_ButtonCount, addr 0x1803aba50, size 0x20, virtual true, abstract: false, final true
inline int32_t get_ButtonCount() ;

/// @brief Method get_GyroscopeCount, addr 0x1818b5910, size 0x20, virtual true, abstract: false, final true
inline int32_t get_GyroscopeCount() ;

/// @brief Method get_HatCount, addr 0x1818d0670, size 0x20, virtual true, abstract: false, final true
inline int32_t get_HatCount() ;

/// @brief Method get_LightCount, addr 0x18188d3b0, size 0x20, virtual true, abstract: false, final true
inline int32_t get_LightCount() ;

/// @brief Method get_TouchpadCount, addr 0x181ab4c00, size 0x20, virtual true, abstract: false, final true
inline int32_t get_TouchpadCount() ;

/// @brief Method get_VibrationMotorCount, addr 0x18188d390, size 0x20, virtual true, abstract: false, final true
inline int32_t get_VibrationMotorCount() ;

/// @brief Method get_disposed, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HIDDeviceDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HIDDeviceDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HIDDeviceDriver(HIDDeviceDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HIDDeviceDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDDeviceDriver(HIDDeviceDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6623};

/// @brief Field axes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>  ___axes;

/// @brief Field buttons, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>  ___buttons;

/// @brief Field hats, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>  ___hats;

/// @brief Field accelerometers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>  ___accelerometers;

/// @brief Field gyroscopes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>  ___gyroscopes;

/// @brief Field touchpads, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>  ___touchpads;

/// @brief Field vibrationMotors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>  ___vibrationMotors;

/// @brief Field lights, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>  ___lights;

/// @brief Field lgorxKnhAhLnFgwEWVCAomrnVLHA, offset: 0x50, size: 0x1, def value: None
 bool  ___lgorxKnhAhLnFgwEWVCAomrnVLHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___axes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___buttons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___hats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___accelerometers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___gyroscopes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___touchpads) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___vibrationMotors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___lights) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::HIDDeviceDriver, ___lgorxKnhAhLnFgwEWVCAomrnVLHA) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::HIDDeviceDriver) == 0x58, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
