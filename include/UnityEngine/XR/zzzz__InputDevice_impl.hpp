#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevice.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::InputDevice::*)(uint64_t)>(&::UnityEngine::XR::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.get_deviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::get_deviceId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_deviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::System::Object*)>(&::UnityEngine::XR::InputDevice::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18254e1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                    {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::InputDevice::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18254e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                    {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 2}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevice::_ctor(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deviceId);
}
inline uint64_t UnityEngine::XR::InputDevice::get_deviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_deviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputDevice::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::XR::InputDevice::Equals(::UnityEngine::XR::InputDevice  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::InputDevice::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr  UnityEngine::XR::InputDevice::operator ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputDevice>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevice::i___System__IEquatable_1___UnityEngine__XR__InputDevice_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputDevice>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputDevice::InputDevice(uint64_t  m_DeviceId, bool  m_Initialized) noexcept  {
this->m_DeviceId = m_DeviceId;
this->m_Initialized = m_Initialized;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevice::InputDevice()   {
}
