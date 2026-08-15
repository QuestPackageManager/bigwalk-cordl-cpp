#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IAndroidFallbackPlatformHelper.hpp"
#include "Rewired/Interfaces/zzzz__IAndroidFallbackPlatformHelper_def.hpp"
#include "Rewired/Interfaces/zzzz__IAndroidFallbackDS4Helper_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackPlatformHelper.add_DeviceChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IAndroidFallbackPlatformHelper::*)(::System::Action*)>(&::Rewired::Interfaces::IAndroidFallbackPlatformHelper::add_DeviceChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackPlatformHelper.remove_DeviceChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IAndroidFallbackPlatformHelper::*)(::System::Action*)>(&::Rewired::Interfaces::IAndroidFallbackPlatformHelper::remove_DeviceChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackPlatformHelper.get_ds4Helper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IAndroidFallbackDS4Helper* (::Rewired::Interfaces::IAndroidFallbackPlatformHelper::*)()>(&::Rewired::Interfaces::IAndroidFallbackPlatformHelper::get_ds4Helper)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IAndroidFallbackPlatformHelper.GetUniqueDeviceIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::IAndroidFallbackPlatformHelper::*)(::StringW, int32_t)>(&::Rewired::Interfaces::IAndroidFallbackPlatformHelper::GetUniqueDeviceIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Interfaces::IAndroidFallbackPlatformHelper::add_DeviceChangedEvent(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Interfaces::IAndroidFallbackPlatformHelper::remove_DeviceChangedEvent(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Interfaces::IAndroidFallbackDS4Helper* Rewired::Interfaces::IAndroidFallbackPlatformHelper::get_ds4Helper()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IAndroidFallbackDS4Helper*>(this, ___internal_method);
}
inline ::StringW Rewired::Interfaces::IAndroidFallbackPlatformHelper::GetUniqueDeviceIdentifier(::StringW  unityJoystickName, int32_t  unityArrayIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, unityJoystickName, unityArrayIndex);
}
