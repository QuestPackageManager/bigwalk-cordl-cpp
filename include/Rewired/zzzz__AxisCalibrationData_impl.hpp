#pragma once
// IWYU pragma private; include "Rewired/AxisCalibrationData.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/Data/Mapping/zzzz__AxisCalibrationInfo_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Rewired::AxisCalibrationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibrationData::*)(bool, float_t, float_t, float_t, float_t, bool, bool)>(&::Rewired::AxisCalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181981840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibrationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibrationData::*)(bool, float_t, float_t, float_t, float_t, bool, bool, float_t)>(&::Rewired::AxisCalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181981a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibrationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::AxisCalibrationData::*)(bool, float_t, float_t, float_t, float_t, bool, bool, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::AxisCalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181981970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibrationData.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibrationData (*)()>(&::Rewired::AxisCalibrationData::get_Default)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181981b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::AxisCalibrationData.get_Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibrationData (*)()>(&::Rewired::AxisCalibrationData::get_Raw)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181981c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {"get_Raw", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::AxisCalibrationData::_ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::AxisCalibrationData::_ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void Rewired::AxisCalibrationData::_ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_9)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9);
}
inline ::Rewired::AxisCalibrationData Rewired::AxisCalibrationData::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibrationData>(nullptr, ___internal_method);
}
inline ::Rewired::AxisCalibrationData Rewired::AxisCalibrationData::get_Raw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::AxisCalibrationData>(),
                        {"get_Raw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibrationData>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "deadZone", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zero", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sensitivityType", ty: "::Rewired::AxisSensitivityType", modifiers: "", def_value: Some("{}") }, CppParam { name: "sensitivity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sensitivityCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}") }, CppParam { name: "applyRangeCalibration", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "calibrations", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::AxisCalibrationData::AxisCalibrationData(bool  enabled, float_t  deadZone, float_t  zero, float_t  min, float_t  max, bool  invert, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve, bool  applyRangeCalibration, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  calibrations) noexcept  {
this->enabled = enabled;
this->deadZone = deadZone;
this->zero = zero;
this->min = min;
this->max = max;
this->invert = invert;
this->sensitivityType = sensitivityType;
this->sensitivity = sensitivity;
this->sensitivityCurve = sensitivityCurve;
this->applyRangeCalibration = applyRangeCalibration;
this->calibrations = calibrations;
}
// Ctor Parameters []
constexpr ::Rewired::AxisCalibrationData::AxisCalibrationData()   {
}
