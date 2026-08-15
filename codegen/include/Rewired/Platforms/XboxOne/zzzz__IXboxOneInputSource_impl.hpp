#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/IXboxOneInputSource.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__IXboxOneInputSource_def.hpp"
#include "GlobalNamespace/zzzz__tHsESWDQOdxcIkhJvKlfiYcSCTyD_def.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__XboxOneGamepadMotorType_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::IXboxOneInputSource.GetXboxOneUserIdFromUnityJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::XboxOne::IXboxOneInputSource::*)(int32_t)>(&::Rewired::Platforms::XboxOne::IXboxOneInputSource::GetXboxOneUserIdFromUnityJoystick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::IXboxOneInputSource.SetXboxOneVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::IXboxOneInputSource::*)(uint64_t, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD)>(&::Rewired::Platforms::XboxOne::IXboxOneInputSource::SetXboxOneVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::IXboxOneInputSource.PulseVibrateMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::IXboxOneInputSource::*)(uint64_t, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType, float_t, float_t, float_t)>(&::Rewired::Platforms::XboxOne::IXboxOneInputSource::PulseVibrateMotor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::Platforms::XboxOne::IXboxOneInputSource::GetXboxOneUserIdFromUnityJoystick(int32_t  unityJoystickId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unityJoystickId);
}
inline bool Rewired::Platforms::XboxOne::IXboxOneInputSource::SetXboxOneVibration(uint64_t  xboxOneJoystickId, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  vibration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xboxOneJoystickId, vibration);
}
inline void Rewired::Platforms::XboxOne::IXboxOneInputSource::PulseVibrateMotor(uint64_t  xboxOneJoystickId, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  startLevel, float_t  endLevel, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xboxOneJoystickId, motor, startLevel, endLevel, duration);
}
