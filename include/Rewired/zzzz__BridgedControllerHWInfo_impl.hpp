#pragma once
// IWYU pragma private; include "Rewired/BridgedControllerHWInfo.hpp"
#include "Rewired/Platforms/zzzz__WebGLGamepadMappingType_impl.hpp"
#include "Rewired/Platforms/zzzz__WebGLOSType_impl.hpp"
#include "Rewired/Platforms/zzzz__WebGLWebBrowserType_impl.hpp"
#include "Rewired/Platforms/zzzz__XInputDeviceSubType_impl.hpp"
#include "Rewired/zzzz__ControlDeviceType_impl.hpp"
#include "Rewired/zzzz__InputSource_impl.hpp"
#include "Rewired/zzzz__PidVid_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__BridgedControllerHWInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::BridgedControllerHWInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::BridgedControllerHWInfo::*)()>(&::Rewired::BridgedControllerHWInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::BridgedControllerHWInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::BridgedControllerHWInfo::*)(::Rewired::BridgedControllerHWInfo*)>(&::Rewired::BridgedControllerHWInfo::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18195c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::BridgedControllerHWInfo.KrTbnQdgFgbErnrWeAitADzoaaGZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::BridgedControllerHWInfo::*)(::Rewired::BridgedControllerHWInfo*)>(&::Rewired::BridgedControllerHWInfo::KrTbnQdgFgbErnrWeAitADzoaaGZ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18195bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {"KrTbnQdgFgbErnrWeAitADzoaaGZ", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::BridgedControllerHWInfo::__cordl_internal_get_isMock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMock;
}
constexpr bool const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_isMock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMock;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_isMock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMock = value;
}
constexpr ::Rewired::InputSource& Rewired::BridgedControllerHWInfo::__cordl_internal_get_inputManagerSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputManagerSource;
}
constexpr ::Rewired::InputSource const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_inputManagerSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputManagerSource;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_inputManagerSource(::Rewired::InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputManagerSource = value;
}
constexpr ::Rewired::InputSource& Rewired::BridgedControllerHWInfo::__cordl_internal_get_inputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr ::Rewired::InputSource const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_inputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_inputSource(::Rewired::InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSource = value;
}
constexpr ::Rewired::ControlDeviceType& Rewired::BridgedControllerHWInfo::__cordl_internal_get_deviceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceType;
}
constexpr ::Rewired::ControlDeviceType const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_deviceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceType;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_deviceType(::Rewired::ControlDeviceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deviceType = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareIdentifier;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hardwareIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareIdentifier = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareAxisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareAxisCount;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareAxisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareAxisCount;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hardwareAxisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareAxisCount = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareButtonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareButtonCount;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareButtonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareButtonCount;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hardwareButtonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareButtonCount = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareHatCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareHatCount;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hardwareHatCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareHatCount;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hardwareHatCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareHatCount = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_productName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_productName;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_productName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_productName;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_productName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_productName = value;
}
constexpr ::Rewired::PidVid& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_pidVid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_pidVid;
}
constexpr ::Rewired::PidVid const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_pidVid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_pidVid;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_pidVid(::Rewired::PidVid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_pidVid = value;
}
constexpr ::System::Guid& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_deviceGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_deviceGuid;
}
constexpr ::System::Guid const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_deviceGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_deviceGuid;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_deviceGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_deviceGuid = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_productId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_productId;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_productId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_productId;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_productId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_productId = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_bluetoothDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_bluetoothDeviceName;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_bluetoothDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_bluetoothDeviceName;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_bluetoothDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_bluetoothDeviceName = value;
}
constexpr bool& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_isBluetoothDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_isBluetoothDevice;
}
constexpr bool const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_isBluetoothDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_isBluetoothDevice;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_isBluetoothDevice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_isBluetoothDevice = value;
}
constexpr bool& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_supportsVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_supportsVoice;
}
constexpr bool const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_supportsVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_supportsVoice;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_supportsVoice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_supportsVoice = value;
}
constexpr bool& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_supportsVibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_supportsVibration;
}
constexpr bool const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_supportsVibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_supportsVibration;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_supportsVibration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_supportsVibration = value;
}
constexpr ::Rewired::Platforms::XInputDeviceSubType& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_xInputSubType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_xInputSubType;
}
constexpr ::Rewired::Platforms::XInputDeviceSubType const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_xInputSubType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_xInputSubType;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_xInputSubType(::Rewired::Platforms::XInputDeviceSubType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_xInputSubType = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_manufacturer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_manufacturer;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_manufacturer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_manufacturer;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_manufacturer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_manufacturer = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_serialNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_serialNumber;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_serialNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_serialNumber;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_serialNumber(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_serialNumber = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_vendorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_vendorId;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_vendorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_vendorId;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_vendorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_vendorId = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_version;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_version;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_version = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_systemDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_systemDeviceName;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_systemDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_systemDeviceName;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_systemDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_systemDeviceName = value;
}
constexpr bool& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_isSDL2Gamepad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_isSDL2Gamepad;
}
constexpr bool const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_isSDL2Gamepad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_isSDL2Gamepad;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_isSDL2Gamepad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_isSDL2Gamepad = value;
}
constexpr ::Rewired::Platforms::WebGLWebBrowserType& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_webBrowserType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_webBrowserType;
}
constexpr ::Rewired::Platforms::WebGLWebBrowserType const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_webBrowserType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_webBrowserType;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_webGL_webBrowserType(::Rewired::Platforms::WebGLWebBrowserType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_webBrowserType = value;
}
constexpr ::Rewired::Platforms::WebGLOSType& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_osType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_osType;
}
constexpr ::Rewired::Platforms::WebGLOSType const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_osType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_osType;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_webGL_osType(::Rewired::Platforms::WebGLOSType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_osType = value;
}
constexpr ::Rewired::Platforms::WebGLGamepadMappingType& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_mappingType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_mappingType;
}
constexpr ::Rewired::Platforms::WebGLGamepadMappingType const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_mappingType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_mappingType;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_webGL_mappingType(::Rewired::Platforms::WebGLGamepadMappingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_mappingType = value;
}
constexpr ::ArrayW<::StringW>& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_webBrowserVersionSplit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_webBrowserVersionSplit;
}
constexpr ::ArrayW<::StringW> const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_webBrowserVersionSplit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_webBrowserVersionSplit;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_webGL_webBrowserVersionSplit(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_webBrowserVersionSplit = value;
}
constexpr ::ArrayW<::StringW>& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_osVersionSplit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_osVersionSplit;
}
constexpr ::ArrayW<::StringW> const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_webGL_osVersionSplit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_osVersionSplit;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_webGL_osVersionSplit(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_osVersionSplit = value;
}
constexpr int32_t& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_localVibrationMotorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_localVibrationMotorCount;
}
constexpr int32_t const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_hw_localVibrationMotorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hw_localVibrationMotorCount;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_hw_localVibrationMotorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hw_localVibrationMotorCount = value;
}
constexpr ::StringW& Rewired::BridgedControllerHWInfo::__cordl_internal_get_definitionMatchTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___definitionMatchTag;
}
constexpr ::StringW const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_definitionMatchTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___definitionMatchTag;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_definitionMatchTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___definitionMatchTag = value;
}
constexpr ::System::Object*& Rewired::BridgedControllerHWInfo::__cordl_internal_get_userCustomIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userCustomIdentifier;
}
constexpr ::System::Object* const& Rewired::BridgedControllerHWInfo::__cordl_internal_get_userCustomIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userCustomIdentifier;
}
constexpr void Rewired::BridgedControllerHWInfo::__cordl_internal_set_userCustomIdentifier(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userCustomIdentifier = value;
}
inline void Rewired::BridgedControllerHWInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::BridgedControllerHWInfo::_ctor(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::BridgedControllerHWInfo::KrTbnQdgFgbErnrWeAitADzoaaGZ(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedControllerHWInfo*>(),
                        {"KrTbnQdgFgbErnrWeAitADzoaaGZ", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::BridgedControllerHWInfo* Rewired::BridgedControllerHWInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::BridgedControllerHWInfo*>());
}
inline ::Rewired::BridgedControllerHWInfo* Rewired::BridgedControllerHWInfo::New_ctor(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::BridgedControllerHWInfo*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::BridgedControllerHWInfo::BridgedControllerHWInfo()   {
}
