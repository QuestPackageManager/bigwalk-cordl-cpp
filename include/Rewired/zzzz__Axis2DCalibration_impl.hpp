#pragma once
// IWYU pragma private; include "Rewired/Axis2DCalibration.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_impl.hpp"
#include "Rewired/zzzz__DeadZone2DType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__Axis2DCalibration_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Axis2DCalibration.get_deadZoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::DeadZone2DType (::Rewired::Axis2DCalibration::*)()>(&::Rewired::Axis2DCalibration::get_deadZoneType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration.set_deadZoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2DCalibration::*)(::Rewired::DeadZone2DType)>(&::Rewired::Axis2DCalibration::set_deadZoneType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"set_deadZoneType", {}, {::i2c::type_of<::Rewired::DeadZone2DType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration.get_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisSensitivity2DType (::Rewired::Axis2DCalibration::*)()>(&::Rewired::Axis2DCalibration::get_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration.set_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2DCalibration::*)(::Rewired::AxisSensitivity2DType)>(&::Rewired::Axis2DCalibration::set_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2DCalibration::*)()>(&::Rewired::Axis2DCalibration::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181659530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration.GetCalibrated2DValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Axis2DCalibration::*)(float_t, float_t, ::Rewired::AxisCalibration*, ::Rewired::AxisCalibration*)>(&::Rewired::Axis2DCalibration::GetCalibrated2DValue)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x181981360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::AxisCalibration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2DCalibration.GetCalibrated2DValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, ::Rewired::AxisCalibration*, ::Rewired::AxisCalibration*, ::Rewired::DeadZone2DType, ::Rewired::AxisSensitivity2DType)>(&::Rewired::Axis2DCalibration::GetCalibrated2DValue)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181980e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::DeadZone2DType>(), ::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::DeadZone2DType& Rewired::Axis2DCalibration::__cordl_internal_get__deadZoneType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZoneType;
}
constexpr ::Rewired::DeadZone2DType const& Rewired::Axis2DCalibration::__cordl_internal_get__deadZoneType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZoneType;
}
constexpr void Rewired::Axis2DCalibration::__cordl_internal_set__deadZoneType(::Rewired::DeadZone2DType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZoneType = value;
}
constexpr ::Rewired::AxisSensitivity2DType& Rewired::Axis2DCalibration::__cordl_internal_get__sensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr ::Rewired::AxisSensitivity2DType const& Rewired::Axis2DCalibration::__cordl_internal_get__sensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr void Rewired::Axis2DCalibration::__cordl_internal_set__sensitivityType(::Rewired::AxisSensitivity2DType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivityType = value;
}
inline ::Rewired::DeadZone2DType Rewired::Axis2DCalibration::get_deadZoneType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::DeadZone2DType>(this, ___internal_method);
}
inline void Rewired::Axis2DCalibration::set_deadZoneType(::Rewired::DeadZone2DType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"set_deadZoneType", {}, {::i2c::type_of<::Rewired::DeadZone2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisSensitivity2DType Rewired::Axis2DCalibration::get_sensitivityType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisSensitivity2DType>(this, ___internal_method);
}
inline void Rewired::Axis2DCalibration::set_sensitivityType(::Rewired::AxisSensitivity2DType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Axis2DCalibration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Axis2DCalibration::GetCalibrated2DValue(float_t  valueRawX, float_t  valueRawY, ::Rewired::AxisCalibration*  xAxis, ::Rewired::AxisCalibration*  yAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::AxisCalibration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, valueRawX, valueRawY, xAxis, yAxis);
}
inline ::UnityEngine::Vector2 Rewired::Axis2DCalibration::GetCalibrated2DValue(float_t  valueRawX, float_t  valueRawY, ::Rewired::AxisCalibration*  xAxis, ::Rewired::AxisCalibration*  yAxis, ::Rewired::DeadZone2DType  deadZoneType, ::Rewired::AxisSensitivity2DType  sensitivityType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2DCalibration*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::AxisCalibration*>(), ::i2c::type_of<::Rewired::DeadZone2DType>(), ::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, valueRawX, valueRawY, xAxis, yAxis, deadZoneType, sensitivityType);
}
inline ::Rewired::Axis2DCalibration* Rewired::Axis2DCalibration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Axis2DCalibration*>());
}
// Ctor Parameters []
constexpr ::Rewired::Axis2DCalibration::Axis2DCalibration()   {
}
