#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/HIDDeviceDriver.hpp"
#include "GlobalNamespace/zzzz__EwAnsVkUWPNMuXgXRBHYSItzSmvO_impl.hpp"
#include "GlobalNamespace/zzzz__FWwFwKvxnHcZRvKSIQSWcnkGdYQt_impl.hpp"
#include "GlobalNamespace/zzzz__LdaHIPkymkZGKHeprsIpIeEZUAne_impl.hpp"
#include "GlobalNamespace/zzzz__OkcmSmRmCcUfzccQxwsvLaISCgRM_impl.hpp"
#include "GlobalNamespace/zzzz__PbhVAcyPodjfjgtOYIEQAsvuaNXtA_impl.hpp"
#include "GlobalNamespace/zzzz__hiHYIcoyXejyQbLzUJWImSHUtPzT_impl.hpp"
#include "GlobalNamespace/zzzz__wSkslqxSrZMOTLFbNIgclblyAsJM_impl.hpp"
#include "GlobalNamespace/zzzz__xqUQVBorUehSSWryumnGUBIjAhEX_impl.hpp"
#include "GlobalNamespace/zzzz__ySHadabAZpnXZfjCkazzVDXNbzdBB_impl.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "GlobalNamespace/zzzz__WLETGeuJfanxUuxlAoBgHTRHTfCG_def.hpp"
#include "GlobalNamespace/zzzz__wSkslqxSrZMOTLFbNIgclblyAsJM_def.hpp"
#include "Rewired/Config/zzzz__EnhancedDeviceSupportDeviceType_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType::HIDDeviceDriver_DriverType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType::HIDDeviceDriver_DriverType()   {
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::DualShock4{static_cast<int32_t>(0x1)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::DualSense{static_cast<int32_t>(0x2)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::RailDriver{static_cast<int32_t>(0x3)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::SwitchJoyConLeft{static_cast<int32_t>(0x4)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::SwitchJoyConRight{static_cast<int32_t>(0x5)};
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  Rewired::HID::Drivers::HIDDeviceDriver_DriverType::SwitchProController{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties::*)(uint16_t, uint16_t, ::StringW, ::StringW, uint16_t, uint16_t, int32_t, int32_t, int32_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181ab4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties::_ctor(uint16_t  _cordl_fixed_empty_name_whitespace, uint16_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, uint16_t  _cordl_fixed_empty_name_whitespace_param_4, uint16_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
// Ctor Parameters [CppParam { name: "vendorId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "productId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "productName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "usagePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxInputReportLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxOutputReportLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxFeatureReportLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties::HIDDeviceDriver_HIDProperties(uint16_t  vendorId, uint16_t  productId, ::StringW  productName, ::StringW  manufacturer, uint16_t  usagePage, uint16_t  usage, int32_t  maxInputReportLength, int32_t  maxOutputReportLength, int32_t  maxFeatureReportLength) noexcept  {
this->vendorId = vendorId;
this->productId = productId;
this->productName = productName;
this->manufacturer = manufacturer;
this->usagePage = usagePage;
this->usage = usage;
this->maxInputReportLength = maxInputReportLength;
this->maxOutputReportLength = maxOutputReportLength;
this->maxFeatureReportLength = maxFeatureReportLength;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties::HIDDeviceDriver_HIDProperties()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice.get_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties (::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::get_properties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice.WriteSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::*)(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG, int32_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::WriteSync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::*)(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG, int32_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::WriteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice.ReadSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::*)(::System::IntPtr, int32_t, int32_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::ReadSync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice.GetHidFeatureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::*)(uint8_t, int32_t, int32_t, int32_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::GetHidFeatureData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::get_properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::WriteSync(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  outputReport, int32_t  timeoutMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outputReport, timeoutMs);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::WriteAsync(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  outputReport, int32_t  timeoutMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputReport, timeoutMs);
}
inline bool Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::ReadSync(::System::IntPtr  buffer, int32_t  bytesToRead, int32_t  timeoutMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bytesToRead, timeoutMs);
}
inline ::ArrayW<uint8_t> Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice::GetHidFeatureData(uint8_t  reportId, int32_t  reportLength, int32_t  timeoutMs, int32_t  retryCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, reportId, reportLength, timeoutMs, retryCount);
}
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::*)(::Rewired::Config::UpdateLoopSetting, ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM, int32_t, int32_t, int32_t, int32_t, ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*)>(&::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ab5270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Config::UpdateLoopSetting& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_updateLoopSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoopSetting;
}
constexpr ::Rewired::Config::UpdateLoopSetting const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_updateLoopSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoopSetting;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_updateLoopSetting(::Rewired::Config::UpdateLoopSetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateLoopSetting = value;
}
constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_connectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_connectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_connectionType(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionType = value;
}
constexpr int32_t& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_minAxisValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAxisValue;
}
constexpr int32_t const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_minAxisValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAxisValue;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_minAxisValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAxisValue = value;
}
constexpr int32_t& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_maxAxisValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAxisValue;
}
constexpr int32_t const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_maxAxisValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAxisValue;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_maxAxisValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAxisValue = value;
}
constexpr int32_t& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hatZeroValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatZeroValue;
}
constexpr int32_t const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hatZeroValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatZeroValue;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_hatZeroValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatZeroValue = value;
}
constexpr int32_t& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hatSpan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatSpan;
}
constexpr int32_t const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hatSpan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatSpan;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_hatSpan(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatSpan = value;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hidDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidDevice;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_get_hidDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidDevice;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::__cordl_internal_set_hidDevice(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidDevice = value;
}
inline void Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs* Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  _cordl_fixed_empty_name_whitespace_param_6)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs::HIDDeviceDriver_InitArgs()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_AxisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_AxisCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_AxisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_ButtonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_ButtonCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803aba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_ButtonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_HatCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_HatCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_HatCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_AccelerometerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_AccelerometerCount)> {
  constexpr static std::size_t size = 0x2390;
  constexpr static std::size_t addrs = 0x1810e7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_AccelerometerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_GyroscopeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_GyroscopeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818b5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_GyroscopeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_TouchpadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_TouchpadCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ab4c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_TouchpadCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_LightCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_LightCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_LightCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_VibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_VibrationMotorCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_VibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver::*)(::Rewired::UpdateLoopType)>(&::Rewired::HID::Drivers::HIDDeviceDriver::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.ParseInputReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::HIDDeviceDriver::*)(::System::IntPtr, int32_t, double_t)>(&::Rewired::HID::Drivers::HIDDeviceDriver::ParseInputReport)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.CreateControllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::CreateControllerExtension)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.GetDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::HIDDeviceDriver* (*)(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType, ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*)>(&::Rewired::HID::Drivers::HIDDeviceDriver::GetDriver)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ab4a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"GetDriver", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_DriverType>(), ::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.FindDriverId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::HIDDeviceDriver_DriverType (*)(int32_t, int32_t, ::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*)>(&::Rewired::HID::Drivers::HIDDeviceDriver::FindDriverId)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181ab4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"FindDriverId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.get_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::get_disposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_disposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181a36f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver::*)()>(&::Rewired::HID::Drivers::HIDDeviceDriver::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181a37e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::HIDDeviceDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::HIDDeviceDriver::*)(bool)>(&::Rewired::HID::Drivers::HIDDeviceDriver::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819306b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_axes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr ::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_axes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_axes(::ArrayW<::GlobalNamespace::EwAnsVkUWPNMuXgXRBHYSItzSmvO*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes = value;
}
constexpr ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_buttons(::ArrayW<::GlobalNamespace::xqUQVBorUehSSWryumnGUBIjAhEX*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_hats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hats;
}
constexpr ::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_hats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hats;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_hats(::ArrayW<::GlobalNamespace::ySHadabAZpnXZfjCkazzVDXNbzdBB*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hats = value;
}
constexpr ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_accelerometers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerometers;
}
constexpr ::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_accelerometers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerometers;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_accelerometers(::ArrayW<::GlobalNamespace::PbhVAcyPodjfjgtOYIEQAsvuaNXtA*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelerometers = value;
}
constexpr ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_gyroscopes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gyroscopes;
}
constexpr ::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_gyroscopes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gyroscopes;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_gyroscopes(::ArrayW<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gyroscopes = value;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_touchpads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchpads;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_touchpads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchpads;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_touchpads(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchpads = value;
}
constexpr ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_vibrationMotors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationMotors;
}
constexpr ::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_vibrationMotors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationMotors;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_vibrationMotors(::ArrayW<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationMotors = value;
}
constexpr ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*> const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_lights(::ArrayW<::GlobalNamespace::FWwFwKvxnHcZRvKSIQSWcnkGdYQt*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr bool& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_lgorxKnhAhLnFgwEWVCAomrnVLHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lgorxKnhAhLnFgwEWVCAomrnVLHA;
}
constexpr bool const& Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_get_lgorxKnhAhLnFgwEWVCAomrnVLHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lgorxKnhAhLnFgwEWVCAomrnVLHA;
}
constexpr void Rewired::HID::Drivers::HIDDeviceDriver::__cordl_internal_set_lgorxKnhAhLnFgwEWVCAomrnVLHA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lgorxKnhAhLnFgwEWVCAomrnVLHA = value;
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_AxisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_AxisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_ButtonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_ButtonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_HatCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_HatCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_AccelerometerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_AccelerometerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_GyroscopeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_GyroscopeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_TouchpadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_TouchpadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_LightCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_LightCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::HIDDeviceDriver::get_VibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_VibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline bool Rewired::HID::Drivers::HIDDeviceDriver::ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputReportPtr, inputReportLength, timestamp);
}
inline ::Rewired::Controller_Extension* Rewired::HID::Drivers::HIDDeviceDriver::CreateControllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline ::Rewired::HID::Drivers::HIDDeviceDriver* Rewired::HID::Drivers::HIDDeviceDriver::GetDriver(::Rewired::HID::Drivers::HIDDeviceDriver_DriverType  driverId, ::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  hidDriverInitArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"GetDriver", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_DriverType>(), ::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::HIDDeviceDriver*>(nullptr, ___internal_method, driverId, hidDriverInitArgs);
}
inline ::Rewired::HID::Drivers::HIDDeviceDriver_DriverType Rewired::HID::Drivers::HIDDeviceDriver::FindDriverId(int32_t  vendorId, int32_t  productId, ::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  exclusions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"FindDriverId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::HIDDeviceDriver_DriverType>(nullptr, ___internal_method, vendorId, productId, exclusions);
}
inline bool Rewired::HID::Drivers::HIDDeviceDriver::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"get_disposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::HIDDeviceDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::HIDDeviceDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::HID::Drivers::HIDDeviceDriver* Rewired::HID::Drivers::HIDDeviceDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::HIDDeviceDriver*>());
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::HIDDeviceDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::HIDDeviceDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::HID::Drivers::HIDDeviceDriver::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::HID::Drivers::HIDDeviceDriver::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver::HIDDeviceDriver()   {
}
