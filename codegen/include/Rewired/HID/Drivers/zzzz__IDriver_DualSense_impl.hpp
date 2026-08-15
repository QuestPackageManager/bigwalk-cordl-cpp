#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_DualSense.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_DualSense_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseMicrophoneLightMode_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseOtherLightBrightness_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSensePlayerLightFlags_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectStates_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseVibrationMode_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_BatteryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_BatteryLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_BatteryCharging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_BatteryCharging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_vibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseVibrationMode (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_vibrationMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_vibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(::Rewired::ControllerExtensions::DualSenseVibrationMode)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_vibrationMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LeftMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LeftMotor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LeftMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LeftMotor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_RightMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_RightMotor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_RightMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_RightMotor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LightColorR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LightColorR)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LightColorR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LightColorR)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LightColorG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LightColorG)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LightColorG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LightColorG)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LightColorB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LightColorB)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LightColorB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LightColorB)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LightFlashOnDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LightFlashOnDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LightFlashOnDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LightFlashOnDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LightFlashOffDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LightFlashOffDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_LightFlashOffDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(float_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_LightFlashOffDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_microphoneLightMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_microphoneLightMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_microphoneLightMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_microphoneLightMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_otherLightBrightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_otherLightBrightness)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_otherLightBrightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_otherLightBrightness)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_playerLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSensePlayerLightFlags (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_playerLights)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.set_playerLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)(::Rewired::ControllerExtensions::DualSensePlayerLightFlags)>(&::Rewired::HID::Drivers::IDriver_DualSense::set_playerLights)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_AccelerometerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_AccelerometerValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_AccelerometerValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_AccelerometerValueRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_GyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_GyroscopeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_GyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_GyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LastGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LastGyroscopeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_LastGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_LastGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_Orientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_Orientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.ResetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::ResetOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.get_MaxTouches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::get_MaxTouches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.IsTouchingAtTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::IsTouchingAtTouchId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.IsTouchingAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::IsTouchingAtIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchIdAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t)>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchIdAtIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchPositionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionByIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchPositionByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionByTouchId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchPositionAbsoluteByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionAbsoluteByIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTouchPositionAbsoluteByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionAbsoluteByTouchId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.StopLightFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::StopLightFlash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::StopVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.SetTriggerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_DualSense::*)(::Rewired::ControllerExtensions::DualSenseTriggerType, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*)>(&::Rewired::HID::Drivers::IDriver_DualSense::SetTriggerEffect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_DualSense.GetTriggerEffectStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates (::Rewired::HID::Drivers::IDriver_DualSense::*)()>(&::Rewired::HID::Drivers::IDriver_DualSense::GetTriggerEffectStates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 44}
                ));
    return ___internal_method;
  }
};
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_BatteryLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::get_BatteryCharging()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::DualSenseVibrationMode Rewired::HID::Drivers::IDriver_DualSense::get_vibrationMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseVibrationMode>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_vibrationMode(::Rewired::ControllerExtensions::DualSenseVibrationMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LeftMotor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LeftMotor(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_RightMotor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_RightMotor(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LightColorR()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LightColorR(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LightColorG()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LightColorG(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LightColorB()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LightColorB(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LightFlashOnDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LightFlashOnDuration(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::HID::Drivers::IDriver_DualSense::get_LightFlashOffDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_LightFlashOffDuration(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode Rewired::HID::Drivers::IDriver_DualSense::get_microphoneLightMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_microphoneLightMode(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness Rewired::HID::Drivers::IDriver_DualSense::get_otherLightBrightness()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_otherLightBrightness(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSensePlayerLightFlags Rewired::HID::Drivers::IDriver_DualSense::get_playerLights()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSensePlayerLightFlags>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::set_playerLights(::Rewired::ControllerExtensions::DualSensePlayerLightFlags  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_AccelerometerValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_AccelerometerValueRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_GyroscopeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_GyroscopeValueRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_LastGyroscopeValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::HID::Drivers::IDriver_DualSense::get_LastGyroscopeValueRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Rewired::HID::Drivers::IDriver_DualSense::get_Orientation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::ResetOrientation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::IDriver_DualSense::get_MaxTouches()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::IDriver_DualSense::GetTouchCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::IsTouchingAtTouchId(int32_t  touchId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::IsTouchingAtIndex(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline int32_t Rewired::HID::Drivers::IDriver_DualSense::GetTouchIdAtIndex(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionByIndex(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, position);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, position);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionAbsoluteByIndex(int32_t  index, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, positionX, positionY);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, positionX, positionY);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::StopLightFlash()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_DualSense::StopVibration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::IDriver_DualSense::SetTriggerEffect(::Rewired::ControllerExtensions::DualSenseTriggerType  trigger, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*  effect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trigger, effect);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates Rewired::HID::Drivers::IDriver_DualSense::GetTriggerEffectStates()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::IDriver_DualSense::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::IDriver_DualSense::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::IDriver_DualSense::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::IDriver_DualSense::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
