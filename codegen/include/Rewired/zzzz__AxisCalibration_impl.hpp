#pragma once
// IWYU pragma private; include "Rewired/AxisCalibration.hpp"
#include "Rewired/Data/Mapping/zzzz__AlternateAxisCalibrationType_impl.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "Rewired/Data/Mapping/zzzz__AlternateAxisCalibrationType_def.hpp"
#include "Rewired/Data/Mapping/zzzz__AxisCalibrationInfo_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Rewired::AxisCalibration.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(bool)>(&::Rewired::AxisCalibration::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_deadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_deadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::set_deadZone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181983200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_calibratedZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_calibratedZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedZero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_calibratedZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::set_calibratedZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedZero", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_calibratedMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_calibratedMin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_calibratedMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::set_calibratedMin)> {
  constexpr static std::size_t size = 0x3450;
  constexpr static std::size_t addrs = 0x180bb44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedMin", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_calibratedMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_calibratedMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_calibratedMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::set_calibratedMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedMax", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(bool)>(&::Rewired::AxisCalibration::set_invert)> {
  constexpr static std::size_t size = 0x2090;
  constexpr static std::size_t addrs = 0x180c29b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisSensitivityType (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::AxisSensitivityType)>(&::Rewired::AxisCalibration::set_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_sensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_sensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_sensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::set_sensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_sensitivityCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_sensitivityCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivityCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_sensitivityCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::UnityEngine::AnimationCurve*)>(&::Rewired::AxisCalibration::set_sensitivityCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivityCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_applyRangeCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_applyRangeCalibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_applyRangeCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_applyRangeCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(bool)>(&::Rewired::AxisCalibration::set_applyRangeCalibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_applyRangeCalibration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.get_calibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::AlternateAxisCalibrationType (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::get_calibrationMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibrationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.set_calibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::Data::Mapping::AlternateAxisCalibrationType)>(&::Rewired::AxisCalibration::set_calibrationMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819831f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibrationMode", {}, {::i2c::type_of<::Rewired::Data::Mapping::AlternateAxisCalibrationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181982e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(bool, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*, float_t, float_t, float_t, float_t, bool, bool, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::AxisCalibration::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181982ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::AxisCalibrationData)>(&::Rewired::AxisCalibration::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181982d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::AxisCalibration*, bool)>(&::Rewired::AxisCalibration::CopyFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181981da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)(float_t)>(&::Rewired::AxisCalibration::GetCalibratedValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819825a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)(float_t, float_t, bool, bool)>(&::Rewired::AxisCalibration::GetCalibratedValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819823a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)(float_t, ::Rewired::AxisRange)>(&::Rewired::AxisCalibration::GetCalibratedValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181982660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::AxisCalibration::*)(float_t, ::Rewired::AxisRange, float_t, bool, bool)>(&::Rewired::AxisCalibration::GetCalibratedValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181982480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibrationData (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::GetData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181982780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::AxisCalibrationData)>(&::Rewired::AxisCalibration::SetData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181982cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"SetData", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::Reset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181982ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.ExportData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::ExportData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181982220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"ExportData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::AxisCalibration::Import)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1819828f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.InitHardwareCalibrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*, ::Rewired::AxisCalibrationData)>(&::Rewired::AxisCalibration::InitHardwareCalibrations)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181982a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"InitHardwareCalibrations", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*>(), ::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.CreateDefaultHardwareCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibration::*)(::Rewired::AxisCalibrationData)>(&::Rewired::AxisCalibration::CreateDefaultHardwareCalibration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181981e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CreateDefaultHardwareCalibration", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.GetHardwareDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::AxisCalibrationInfo* (::Rewired::AxisCalibration::*)()>(&::Rewired::AxisCalibration::GetHardwareDefault)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181982830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetHardwareDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibration.CreateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (*)()>(&::Rewired::AxisCalibration::CreateRelative)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181981ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CreateRelative", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::Mapping::AlternateAxisCalibrationType& Rewired::AxisCalibration::__cordl_internal_get__calibrationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibrationMode;
}
constexpr ::Rewired::Data::Mapping::AlternateAxisCalibrationType const& Rewired::AxisCalibration::__cordl_internal_get__calibrationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibrationMode;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__calibrationMode(::Rewired::Data::Mapping::AlternateAxisCalibrationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibrationMode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*& Rewired::AxisCalibration::__cordl_internal_get__hardwareCalibrations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareCalibrations;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>* const& Rewired::AxisCalibration::__cordl_internal_get__hardwareCalibrations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareCalibrations;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__hardwareCalibrations(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardwareCalibrations = value;
}
constexpr bool& Rewired::AxisCalibration::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Rewired::AxisCalibration::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr float_t& Rewired::AxisCalibration::__cordl_internal_get__deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr float_t const& Rewired::AxisCalibration::__cordl_internal_get__deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZone = value;
}
constexpr float_t& Rewired::AxisCalibration::__cordl_internal_get__calibratedZero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedZero;
}
constexpr float_t const& Rewired::AxisCalibration::__cordl_internal_get__calibratedZero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedZero;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__calibratedZero(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibratedZero = value;
}
constexpr float_t& Rewired::AxisCalibration::__cordl_internal_get__calibratedMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedMin;
}
constexpr float_t const& Rewired::AxisCalibration::__cordl_internal_get__calibratedMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedMin;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__calibratedMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibratedMin = value;
}
constexpr float_t& Rewired::AxisCalibration::__cordl_internal_get__calibratedMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedMax;
}
constexpr float_t const& Rewired::AxisCalibration::__cordl_internal_get__calibratedMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibratedMax;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__calibratedMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibratedMax = value;
}
constexpr bool& Rewired::AxisCalibration::__cordl_internal_get__invert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr bool const& Rewired::AxisCalibration::__cordl_internal_get__invert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__invert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invert = value;
}
constexpr ::Rewired::AxisSensitivityType& Rewired::AxisCalibration::__cordl_internal_get__sensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr ::Rewired::AxisSensitivityType const& Rewired::AxisCalibration::__cordl_internal_get__sensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__sensitivityType(::Rewired::AxisSensitivityType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivityType = value;
}
constexpr float_t& Rewired::AxisCalibration::__cordl_internal_get__sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr float_t const& Rewired::AxisCalibration::__cordl_internal_get__sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivity = value;
}
constexpr ::UnityEngine::AnimationCurve*& Rewired::AxisCalibration::__cordl_internal_get__sensitivityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Rewired::AxisCalibration::__cordl_internal_get__sensitivityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityCurve;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__sensitivityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivityCurve = value;
}
constexpr bool& Rewired::AxisCalibration::__cordl_internal_get__applyRangeCalibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyRangeCalibration;
}
constexpr bool const& Rewired::AxisCalibration::__cordl_internal_get__applyRangeCalibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyRangeCalibration;
}
constexpr void Rewired::AxisCalibration::__cordl_internal_set__applyRangeCalibration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyRangeCalibration = value;
}
inline bool Rewired::AxisCalibration::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::get_deadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_deadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_deadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::get_calibratedZero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedZero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_calibratedZero(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedZero", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::get_calibratedMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_calibratedMin(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedMin", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::get_calibratedMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibratedMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_calibratedMax(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibratedMax", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::AxisCalibration::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_invert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisSensitivityType Rewired::AxisCalibration::get_sensitivityType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisSensitivityType>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_sensitivityType(::Rewired::AxisSensitivityType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::get_sensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_sensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Rewired::AxisCalibration::get_sensitivityCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_sensitivityCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_sensitivityCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_sensitivityCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::AxisCalibration::get_applyRangeCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_applyRangeCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_applyRangeCalibration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_applyRangeCalibration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Data::Mapping::AlternateAxisCalibrationType Rewired::AxisCalibration::get_calibrationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"get_calibrationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::AlternateAxisCalibrationType>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::set_calibrationMode(::Rewired::Data::Mapping::AlternateAxisCalibrationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"set_calibrationMode", {}, {::i2c::type_of<::Rewired::Data::Mapping::AlternateAxisCalibrationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::AxisCalibration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::_ctor(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, float_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_10)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void Rewired::AxisCalibration::_ctor(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::AxisCalibration::CopyFrom(::Rewired::AxisCalibration*  data, bool  copyHardwareData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, copyHardwareData);
}
inline float_t Rewired::AxisCalibration::GetCalibratedValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t Rewired::AxisCalibration::GetCalibratedValue(float_t  value, float_t  customDeadzone, bool  applySensitivity, bool  applyInversion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, customDeadzone, applySensitivity, applyInversion);
}
inline float_t Rewired::AxisCalibration::GetCalibratedValue(float_t  value, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, axisRange);
}
inline float_t Rewired::AxisCalibration::GetCalibratedValue(float_t  value, ::Rewired::AxisRange  axisRange, float_t  customDeadzone, bool  applySensitivity, bool  applyInversion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, axisRange, customDeadzone, applySensitivity, applyInversion);
}
inline ::Rewired::AxisCalibrationData Rewired::AxisCalibration::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibrationData>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::SetData(::Rewired::AxisCalibrationData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"SetData", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Rewired::AxisCalibration::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::AxisCalibration::ExportData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"ExportData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::AxisCalibration::Import(::Rewired::Utils::Classes::Data::SerializedObject*  serializedObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedObject);
}
inline void Rewired::AxisCalibration::InitHardwareCalibrations(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  hardwareCalibrations, ::Rewired::AxisCalibrationData  defaultData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"InitHardwareCalibrations", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*>(), ::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hardwareCalibrations, defaultData);
}
inline void Rewired::AxisCalibration::CreateDefaultHardwareCalibration(::Rewired::AxisCalibrationData  defaultData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CreateDefaultHardwareCalibration", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultData);
}
inline ::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired::AxisCalibration::GetHardwareDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"GetHardwareDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::AxisCalibrationInfo*>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::AxisCalibration::CreateRelative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibration*>(),
                        {"CreateRelative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(nullptr, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::AxisCalibration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::AxisCalibration*>());
}
inline ::Rewired::AxisCalibration* Rewired::AxisCalibration::New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, float_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_10)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::AxisCalibration*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10));
}
inline ::Rewired::AxisCalibration* Rewired::AxisCalibration::New_ctor(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::AxisCalibration*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::AxisCalibration::AxisCalibration()   {
}
