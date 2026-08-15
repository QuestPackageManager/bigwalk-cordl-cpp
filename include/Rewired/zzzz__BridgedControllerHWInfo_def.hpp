#pragma once
// IWYU pragma private; include "Rewired/BridgedControllerHWInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/zzzz__WebGLGamepadMappingType_def.hpp"
#include "Rewired/Platforms/zzzz__WebGLOSType_def.hpp"
#include "Rewired/Platforms/zzzz__WebGLWebBrowserType_def.hpp"
#include "Rewired/Platforms/zzzz__XInputDeviceSubType_def.hpp"
#include "Rewired/zzzz__ControlDeviceType_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__PidVid_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BridgedControllerHWInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class BridgedControllerHWInfo;
}
// Write type traits
MARK_REF_T(::Rewired::BridgedControllerHWInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::BridgedControllerHWInfo*, "Rewired", "BridgedControllerHWInfo");
// Dependencies Rewired.ControlDeviceType, Rewired.InputSource, Rewired.PidVid, Rewired.Platforms.WebGLGamepadMappingType, Rewired.Platforms.WebGLOSType, Rewired.Platforms.WebGLWebBrowserType, Rewired.Platforms.XInputDeviceSubType, System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.BridgedControllerHWInfo
class CORDL_TYPE BridgedControllerHWInfo : public ::System::Object {
public:
// Declarations
/// @brief Field definitionMatchTag, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_definitionMatchTag, put=__cordl_internal_set_definitionMatchTag)) ::StringW  definitionMatchTag;

/// @brief Field deviceType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deviceType, put=__cordl_internal_set_deviceType)) ::Rewired::ControlDeviceType  deviceType;

/// @brief Field hardwareAxisCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hardwareAxisCount, put=__cordl_internal_set_hardwareAxisCount)) int32_t  hardwareAxisCount;

/// @brief Field hardwareButtonCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hardwareButtonCount, put=__cordl_internal_set_hardwareButtonCount)) int32_t  hardwareButtonCount;

/// @brief Field hardwareHatCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hardwareHatCount, put=__cordl_internal_set_hardwareHatCount)) int32_t  hardwareHatCount;

/// @brief Field hardwareIdentifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hardwareIdentifier, put=__cordl_internal_set_hardwareIdentifier)) ::StringW  hardwareIdentifier;

/// @brief Field hw_bluetoothDeviceName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_hw_bluetoothDeviceName, put=__cordl_internal_set_hw_bluetoothDeviceName)) ::StringW  hw_bluetoothDeviceName;

/// @brief Field hw_deviceGuid, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_hw_deviceGuid, put=__cordl_internal_set_hw_deviceGuid)) ::System::Guid  hw_deviceGuid;

/// @brief Field hw_isBluetoothDevice, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_hw_isBluetoothDevice, put=__cordl_internal_set_hw_isBluetoothDevice)) bool  hw_isBluetoothDevice;

/// @brief Field hw_isSDL2Gamepad, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_hw_isSDL2Gamepad, put=__cordl_internal_set_hw_isSDL2Gamepad)) bool  hw_isSDL2Gamepad;

/// @brief Field hw_localVibrationMotorCount, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_localVibrationMotorCount, put=__cordl_internal_set_hw_localVibrationMotorCount)) int32_t  hw_localVibrationMotorCount;

/// @brief Field hw_manufacturer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hw_manufacturer, put=__cordl_internal_set_hw_manufacturer)) ::StringW  hw_manufacturer;

/// @brief Field hw_pidVid, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_pidVid, put=__cordl_internal_set_hw_pidVid)) ::Rewired::PidVid  hw_pidVid;

/// @brief Field hw_productId, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_productId, put=__cordl_internal_set_hw_productId)) int32_t  hw_productId;

/// @brief Field hw_productName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hw_productName, put=__cordl_internal_set_hw_productName)) ::StringW  hw_productName;

/// @brief Field hw_serialNumber, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_hw_serialNumber, put=__cordl_internal_set_hw_serialNumber)) ::StringW  hw_serialNumber;

/// @brief Field hw_supportsVibration, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_hw_supportsVibration, put=__cordl_internal_set_hw_supportsVibration)) bool  hw_supportsVibration;

/// @brief Field hw_supportsVoice, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_hw_supportsVoice, put=__cordl_internal_set_hw_supportsVoice)) bool  hw_supportsVoice;

/// @brief Field hw_systemDeviceName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hw_systemDeviceName, put=__cordl_internal_set_hw_systemDeviceName)) ::StringW  hw_systemDeviceName;

/// @brief Field hw_vendorId, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_vendorId, put=__cordl_internal_set_hw_vendorId)) int32_t  hw_vendorId;

/// @brief Field hw_version, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_version, put=__cordl_internal_set_hw_version)) int32_t  hw_version;

/// @brief Field hw_xInputSubType, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_hw_xInputSubType, put=__cordl_internal_set_hw_xInputSubType)) ::Rewired::Platforms::XInputDeviceSubType  hw_xInputSubType;

/// @brief Field inputManagerSource, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputManagerSource, put=__cordl_internal_set_inputManagerSource)) ::Rewired::InputSource  inputManagerSource;

/// @brief Field inputSource, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputSource, put=__cordl_internal_set_inputSource)) ::Rewired::InputSource  inputSource;

/// @brief Field isMock, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMock, put=__cordl_internal_set_isMock)) bool  isMock;

/// @brief Field userCustomIdentifier, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_userCustomIdentifier, put=__cordl_internal_set_userCustomIdentifier)) ::System::Object*  userCustomIdentifier;

/// @brief Field webGL_mappingType, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_webGL_mappingType, put=__cordl_internal_set_webGL_mappingType)) ::Rewired::Platforms::WebGLGamepadMappingType  webGL_mappingType;

/// @brief Field webGL_osType, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_webGL_osType, put=__cordl_internal_set_webGL_osType)) ::Rewired::Platforms::WebGLOSType  webGL_osType;

/// @brief Field webGL_osVersionSplit, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_webGL_osVersionSplit, put=__cordl_internal_set_webGL_osVersionSplit)) ::ArrayW<::StringW>  webGL_osVersionSplit;

/// @brief Field webGL_webBrowserType, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_webGL_webBrowserType, put=__cordl_internal_set_webGL_webBrowserType)) ::Rewired::Platforms::WebGLWebBrowserType  webGL_webBrowserType;

/// @brief Field webGL_webBrowserVersionSplit, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_webGL_webBrowserVersionSplit, put=__cordl_internal_set_webGL_webBrowserVersionSplit)) ::ArrayW<::StringW>  webGL_webBrowserVersionSplit;

/// @brief Method KrTbnQdgFgbErnrWeAitADzoaaGZ, addr 0x18195bfd0, size 0x160, virtual false, abstract: false, final false
inline void KrTbnQdgFgbErnrWeAitADzoaaGZ(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::BridgedControllerHWInfo* New_ctor() ;

static inline ::Rewired::BridgedControllerHWInfo* New_ctor(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::StringW const& __cordl_internal_get_definitionMatchTag() const;

constexpr ::StringW& __cordl_internal_get_definitionMatchTag() ;

constexpr ::Rewired::ControlDeviceType const& __cordl_internal_get_deviceType() const;

constexpr ::Rewired::ControlDeviceType& __cordl_internal_get_deviceType() ;

constexpr int32_t const& __cordl_internal_get_hardwareAxisCount() const;

constexpr int32_t& __cordl_internal_get_hardwareAxisCount() ;

constexpr int32_t const& __cordl_internal_get_hardwareButtonCount() const;

constexpr int32_t& __cordl_internal_get_hardwareButtonCount() ;

constexpr int32_t const& __cordl_internal_get_hardwareHatCount() const;

constexpr int32_t& __cordl_internal_get_hardwareHatCount() ;

constexpr ::StringW const& __cordl_internal_get_hardwareIdentifier() const;

constexpr ::StringW& __cordl_internal_get_hardwareIdentifier() ;

constexpr ::StringW const& __cordl_internal_get_hw_bluetoothDeviceName() const;

constexpr ::StringW& __cordl_internal_get_hw_bluetoothDeviceName() ;

constexpr ::System::Guid const& __cordl_internal_get_hw_deviceGuid() const;

constexpr ::System::Guid& __cordl_internal_get_hw_deviceGuid() ;

constexpr bool const& __cordl_internal_get_hw_isBluetoothDevice() const;

constexpr bool& __cordl_internal_get_hw_isBluetoothDevice() ;

constexpr bool const& __cordl_internal_get_hw_isSDL2Gamepad() const;

constexpr bool& __cordl_internal_get_hw_isSDL2Gamepad() ;

constexpr int32_t const& __cordl_internal_get_hw_localVibrationMotorCount() const;

constexpr int32_t& __cordl_internal_get_hw_localVibrationMotorCount() ;

constexpr ::StringW const& __cordl_internal_get_hw_manufacturer() const;

constexpr ::StringW& __cordl_internal_get_hw_manufacturer() ;

constexpr ::Rewired::PidVid const& __cordl_internal_get_hw_pidVid() const;

constexpr ::Rewired::PidVid& __cordl_internal_get_hw_pidVid() ;

constexpr int32_t const& __cordl_internal_get_hw_productId() const;

constexpr int32_t& __cordl_internal_get_hw_productId() ;

constexpr ::StringW const& __cordl_internal_get_hw_productName() const;

constexpr ::StringW& __cordl_internal_get_hw_productName() ;

constexpr ::StringW const& __cordl_internal_get_hw_serialNumber() const;

constexpr ::StringW& __cordl_internal_get_hw_serialNumber() ;

constexpr bool const& __cordl_internal_get_hw_supportsVibration() const;

constexpr bool& __cordl_internal_get_hw_supportsVibration() ;

constexpr bool const& __cordl_internal_get_hw_supportsVoice() const;

constexpr bool& __cordl_internal_get_hw_supportsVoice() ;

constexpr ::StringW const& __cordl_internal_get_hw_systemDeviceName() const;

constexpr ::StringW& __cordl_internal_get_hw_systemDeviceName() ;

constexpr int32_t const& __cordl_internal_get_hw_vendorId() const;

constexpr int32_t& __cordl_internal_get_hw_vendorId() ;

constexpr int32_t const& __cordl_internal_get_hw_version() const;

constexpr int32_t& __cordl_internal_get_hw_version() ;

constexpr ::Rewired::Platforms::XInputDeviceSubType const& __cordl_internal_get_hw_xInputSubType() const;

constexpr ::Rewired::Platforms::XInputDeviceSubType& __cordl_internal_get_hw_xInputSubType() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_inputManagerSource() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_inputManagerSource() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_inputSource() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_inputSource() ;

constexpr bool const& __cordl_internal_get_isMock() const;

constexpr bool& __cordl_internal_get_isMock() ;

constexpr ::System::Object* const& __cordl_internal_get_userCustomIdentifier() const;

constexpr ::System::Object*& __cordl_internal_get_userCustomIdentifier() ;

constexpr ::Rewired::Platforms::WebGLGamepadMappingType const& __cordl_internal_get_webGL_mappingType() const;

constexpr ::Rewired::Platforms::WebGLGamepadMappingType& __cordl_internal_get_webGL_mappingType() ;

constexpr ::Rewired::Platforms::WebGLOSType const& __cordl_internal_get_webGL_osType() const;

constexpr ::Rewired::Platforms::WebGLOSType& __cordl_internal_get_webGL_osType() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_webGL_osVersionSplit() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_webGL_osVersionSplit() ;

constexpr ::Rewired::Platforms::WebGLWebBrowserType const& __cordl_internal_get_webGL_webBrowserType() const;

constexpr ::Rewired::Platforms::WebGLWebBrowserType& __cordl_internal_get_webGL_webBrowserType() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_webGL_webBrowserVersionSplit() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_webGL_webBrowserVersionSplit() ;

constexpr void __cordl_internal_set_definitionMatchTag(::StringW  value) ;

constexpr void __cordl_internal_set_deviceType(::Rewired::ControlDeviceType  value) ;

constexpr void __cordl_internal_set_hardwareAxisCount(int32_t  value) ;

constexpr void __cordl_internal_set_hardwareButtonCount(int32_t  value) ;

constexpr void __cordl_internal_set_hardwareHatCount(int32_t  value) ;

constexpr void __cordl_internal_set_hardwareIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set_hw_bluetoothDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_hw_deviceGuid(::System::Guid  value) ;

constexpr void __cordl_internal_set_hw_isBluetoothDevice(bool  value) ;

constexpr void __cordl_internal_set_hw_isSDL2Gamepad(bool  value) ;

constexpr void __cordl_internal_set_hw_localVibrationMotorCount(int32_t  value) ;

constexpr void __cordl_internal_set_hw_manufacturer(::StringW  value) ;

constexpr void __cordl_internal_set_hw_pidVid(::Rewired::PidVid  value) ;

constexpr void __cordl_internal_set_hw_productId(int32_t  value) ;

constexpr void __cordl_internal_set_hw_productName(::StringW  value) ;

constexpr void __cordl_internal_set_hw_serialNumber(::StringW  value) ;

constexpr void __cordl_internal_set_hw_supportsVibration(bool  value) ;

constexpr void __cordl_internal_set_hw_supportsVoice(bool  value) ;

constexpr void __cordl_internal_set_hw_systemDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_hw_vendorId(int32_t  value) ;

constexpr void __cordl_internal_set_hw_version(int32_t  value) ;

constexpr void __cordl_internal_set_hw_xInputSubType(::Rewired::Platforms::XInputDeviceSubType  value) ;

constexpr void __cordl_internal_set_inputManagerSource(::Rewired::InputSource  value) ;

constexpr void __cordl_internal_set_inputSource(::Rewired::InputSource  value) ;

constexpr void __cordl_internal_set_isMock(bool  value) ;

constexpr void __cordl_internal_set_userCustomIdentifier(::System::Object*  value) ;

constexpr void __cordl_internal_set_webGL_mappingType(::Rewired::Platforms::WebGLGamepadMappingType  value) ;

constexpr void __cordl_internal_set_webGL_osType(::Rewired::Platforms::WebGLOSType  value) ;

constexpr void __cordl_internal_set_webGL_osVersionSplit(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_webGL_webBrowserType(::Rewired::Platforms::WebGLWebBrowserType  value) ;

constexpr void __cordl_internal_set_webGL_webBrowserVersionSplit(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18195c130, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BridgedControllerHWInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BridgedControllerHWInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BridgedControllerHWInfo(BridgedControllerHWInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BridgedControllerHWInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BridgedControllerHWInfo(BridgedControllerHWInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1970};

/// @brief Field isMock, offset: 0x10, size: 0x1, def value: None
 bool  ___isMock;

/// @brief Field inputManagerSource, offset: 0x14, size: 0x4, def value: None
 ::Rewired::InputSource  ___inputManagerSource;

/// @brief Field inputSource, offset: 0x18, size: 0x4, def value: None
 ::Rewired::InputSource  ___inputSource;

/// @brief Field deviceType, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::ControlDeviceType  ___deviceType;

/// @brief Field hardwareIdentifier, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___hardwareIdentifier;

/// @brief Field hardwareAxisCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___hardwareAxisCount;

/// @brief Field hardwareButtonCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___hardwareButtonCount;

/// @brief Field hardwareHatCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___hardwareHatCount;

/// @brief Field hw_productName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___hw_productName;

/// @brief Field hw_pidVid, offset: 0x40, size: 0x4, def value: None
 ::Rewired::PidVid  ___hw_pidVid;

/// @brief Field hw_deviceGuid, offset: 0x44, size: 0x10, def value: None
 ::System::Guid  ___hw_deviceGuid;

/// @brief Field hw_productId, offset: 0x54, size: 0x4, def value: None
 int32_t  ___hw_productId;

/// @brief Field hw_bluetoothDeviceName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___hw_bluetoothDeviceName;

/// @brief Field hw_isBluetoothDevice, offset: 0x60, size: 0x1, def value: None
 bool  ___hw_isBluetoothDevice;

/// @brief Field hw_supportsVoice, offset: 0x61, size: 0x1, def value: None
 bool  ___hw_supportsVoice;

/// @brief Field hw_supportsVibration, offset: 0x62, size: 0x1, def value: None
 bool  ___hw_supportsVibration;

/// @brief Field hw_xInputSubType, offset: 0x64, size: 0x4, def value: None
 ::Rewired::Platforms::XInputDeviceSubType  ___hw_xInputSubType;

/// @brief Field hw_manufacturer, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___hw_manufacturer;

/// @brief Field hw_serialNumber, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___hw_serialNumber;

/// @brief Field hw_vendorId, offset: 0x78, size: 0x4, def value: None
 int32_t  ___hw_vendorId;

/// @brief Field hw_version, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___hw_version;

/// @brief Field hw_systemDeviceName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___hw_systemDeviceName;

/// @brief Field hw_isSDL2Gamepad, offset: 0x88, size: 0x1, def value: None
 bool  ___hw_isSDL2Gamepad;

/// @brief Field webGL_webBrowserType, offset: 0x8c, size: 0x4, def value: None
 ::Rewired::Platforms::WebGLWebBrowserType  ___webGL_webBrowserType;

/// @brief Field webGL_osType, offset: 0x90, size: 0x4, def value: None
 ::Rewired::Platforms::WebGLOSType  ___webGL_osType;

/// @brief Field webGL_mappingType, offset: 0x94, size: 0x4, def value: None
 ::Rewired::Platforms::WebGLGamepadMappingType  ___webGL_mappingType;

/// @brief Field webGL_webBrowserVersionSplit, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___webGL_webBrowserVersionSplit;

/// @brief Field webGL_osVersionSplit, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___webGL_osVersionSplit;

/// @brief Field hw_localVibrationMotorCount, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___hw_localVibrationMotorCount;

/// @brief Field definitionMatchTag, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___definitionMatchTag;

/// @brief Field userCustomIdentifier, offset: 0xb8, size: 0x8, def value: None
 ::System::Object*  ___userCustomIdentifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___isMock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___inputManagerSource) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___inputSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___deviceType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hardwareIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hardwareAxisCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hardwareButtonCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hardwareHatCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_productName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_pidVid) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_deviceGuid) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_productId) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_bluetoothDeviceName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_isBluetoothDevice) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_supportsVoice) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_supportsVibration) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_xInputSubType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_manufacturer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_serialNumber) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_vendorId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_version) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_systemDeviceName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_isSDL2Gamepad) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___webGL_webBrowserType) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___webGL_osType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___webGL_mappingType) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___webGL_webBrowserVersionSplit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___webGL_osVersionSplit) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___hw_localVibrationMotorCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___definitionMatchTag) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedControllerHWInfo, ___userCustomIdentifier) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Rewired::BridgedControllerHWInfo) == 0xc0, "Size mismatch!");

} // namespace end def Rewired
