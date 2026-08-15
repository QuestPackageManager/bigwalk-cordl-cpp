#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioOutputDeviceInfo.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioOutputDeviceInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.get_DefaultDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)()>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DefaultDevice)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DefaultDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.set_DefaultDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)(bool)>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DefaultDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DefaultDevice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.get_DeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)()>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DeviceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DeviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.set_DeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DeviceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DeviceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.get_DeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)()>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DeviceName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DeviceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo.set_DeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DeviceName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DeviceName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DefaultDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DefaultDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DefaultDevice(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DefaultDevice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DeviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DeviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DeviceId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DeviceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::get_DeviceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"get_DeviceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::set_DeviceName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>(),
                        {"set_DeviceName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DefaultDevice_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DeviceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DeviceName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::AudioOutputDeviceInfo(bool  _DefaultDevice_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceName_k__BackingField) noexcept  {
this->_DefaultDevice_k__BackingField = _DefaultDevice_k__BackingField;
this->_DeviceId_k__BackingField = _DeviceId_k__BackingField;
this->_DeviceName_k__BackingField = _DeviceName_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo::AudioOutputDeviceInfo()   {
}
