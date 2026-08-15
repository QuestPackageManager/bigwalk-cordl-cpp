#pragma once
// IWYU pragma private; include "Rewired/CalibrationMap.hpp"
#include "Rewired/zzzz__AxisCalibration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__CalibrationMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__MappedArray_1_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::CalibrationMap.get_Axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>* (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::get_Axes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"get_Axes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::get_axisCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181973330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)(::ArrayW<::Rewired::AxisCalibrationData>, ::System::Func_2<int32_t,int32_t>*)>(&::Rewired::CalibrationMap::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181973050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::System::Func_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)(::ArrayW<::Rewired::AxisCalibration*>)>(&::Rewired::CalibrationMap::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181973250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::AxisCalibration*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181972cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::CalibrationMap::*)(int32_t)>(&::Rewired::CalibrationMap::GetAxis)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819728c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::CalibrationMap::*)(int32_t, float_t)>(&::Rewired::CalibrationMap::GetCalibratedValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819729d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.SetAxisData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::CalibrationMap::*)(int32_t, ::Rewired::AxisCalibrationData)>(&::Rewired::CalibrationMap::SetAxisData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181972d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"SetAxisData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.GetAxisData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibrationData (::Rewired::CalibrationMap::*)(int32_t)>(&::Rewired::CalibrationMap::GetAxisData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819727b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetAxisData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)(::Rewired::CalibrationMap*, bool)>(&::Rewired::CalibrationMap::CopyFrom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181972250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::ToXmlString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181972f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::ToJsonString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181972e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.ImportXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::CalibrationMap::*)(::StringW)>(&::Rewired::CalibrationMap::ImportXmlString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181972bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ImportXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.ImportJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::CalibrationMap::*)(::StringW)>(&::Rewired::CalibrationMap::ImportJsonString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181972aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ImportJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.DVfnWFiETStZKSTerVewbWsbTTvk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::CalibrationMap::*)()>(&::Rewired::CalibrationMap::DVfnWFiETStZKSTerVewbWsbTTvk)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x181972330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"DVfnWFiETStZKSTerVewbWsbTTvk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.BittZrhBnhuMtkgFJUdLYEEhkiXn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::CalibrationMap::BittZrhBnhuMtkgFJUdLYEEhkiXn)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1819720a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"BittZrhBnhuMtkgFJUdLYEEhkiXn", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMap.GetCalibrated2DValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::CalibrationMap::*)(int32_t, int32_t, float_t, float_t, ::Rewired::DeadZone2DType, ::Rewired::AxisSensitivity2DType)>(&::Rewired::CalibrationMap::GetCalibrated2DValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181972950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::DeadZone2DType>(), ::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Rewired::AxisCalibration*>& Rewired::CalibrationMap::__cordl_internal_get_UxdwlQnYVzTKOzkfEZbJvONLeNHr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UxdwlQnYVzTKOzkfEZbJvONLeNHr;
}
constexpr ::ArrayW<::Rewired::AxisCalibration*> const& Rewired::CalibrationMap::__cordl_internal_get_UxdwlQnYVzTKOzkfEZbJvONLeNHr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UxdwlQnYVzTKOzkfEZbJvONLeNHr;
}
constexpr void Rewired::CalibrationMap::__cordl_internal_set_UxdwlQnYVzTKOzkfEZbJvONLeNHr(::ArrayW<::Rewired::AxisCalibration*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UxdwlQnYVzTKOzkfEZbJvONLeNHr = value;
}
constexpr ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*& Rewired::CalibrationMap::__cordl_internal_get_gKiDrltyEsubUrOYDLrCDhdGNxuJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gKiDrltyEsubUrOYDLrCDhdGNxuJ;
}
constexpr ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>* const& Rewired::CalibrationMap::__cordl_internal_get_gKiDrltyEsubUrOYDLrCDhdGNxuJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gKiDrltyEsubUrOYDLrCDhdGNxuJ;
}
constexpr void Rewired::CalibrationMap::__cordl_internal_set_gKiDrltyEsubUrOYDLrCDhdGNxuJ(::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gKiDrltyEsubUrOYDLrCDhdGNxuJ = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*& Rewired::CalibrationMap::__cordl_internal_get_myROlDAhmtRTvmftZeuAUxWZthaK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myROlDAhmtRTvmftZeuAUxWZthaK;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>* const& Rewired::CalibrationMap::__cordl_internal_get_myROlDAhmtRTvmftZeuAUxWZthaK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myROlDAhmtRTvmftZeuAUxWZthaK;
}
constexpr void Rewired::CalibrationMap::__cordl_internal_set_myROlDAhmtRTvmftZeuAUxWZthaK(::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myROlDAhmtRTvmftZeuAUxWZthaK = value;
}
constexpr int32_t& Rewired::CalibrationMap::__cordl_internal_get_HywPExzOwUbVcxQTYihxCnJyGtaGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HywPExzOwUbVcxQTYihxCnJyGtaGA;
}
constexpr int32_t const& Rewired::CalibrationMap::__cordl_internal_get_HywPExzOwUbVcxQTYihxCnJyGtaGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HywPExzOwUbVcxQTYihxCnJyGtaGA;
}
constexpr void Rewired::CalibrationMap::__cordl_internal_set_HywPExzOwUbVcxQTYihxCnJyGtaGA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HywPExzOwUbVcxQTYihxCnJyGtaGA = value;
}
inline ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>* Rewired::CalibrationMap::get_Axes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"get_Axes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*>(this, ___internal_method);
}
inline int32_t Rewired::CalibrationMap::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::CalibrationMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::CalibrationMap::_ctor(::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::AxisCalibrationData>>(), ::i2c::type_of<::System::Func_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::CalibrationMap::_ctor(::ArrayW<::Rewired::AxisCalibration*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::AxisCalibration*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::CalibrationMap::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::CalibrationMap::GetAxis(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method, index);
}
inline float_t Rewired::CalibrationMap::GetCalibratedValue(int32_t  axisIndex, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axisIndex, value);
}
inline bool Rewired::CalibrationMap::SetAxisData(int32_t  index, ::Rewired::AxisCalibrationData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"SetAxisData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, data);
}
inline ::Rewired::AxisCalibrationData Rewired::CalibrationMap::GetAxisData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetAxisData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibrationData>(this, ___internal_method, index);
}
inline void Rewired::CalibrationMap::CopyFrom(::Rewired::CalibrationMap*  map, bool  copyHardwareDeadzone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, copyHardwareDeadzone);
}
inline ::StringW Rewired::CalibrationMap::ToXmlString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::CalibrationMap::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::CalibrationMap::ImportXmlString(::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ImportXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlString);
}
inline bool Rewired::CalibrationMap::ImportJsonString(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"ImportJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jsonString);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::CalibrationMap::DVfnWFiETStZKSTerVewbWsbTTvk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"DVfnWFiETStZKSTerVewbWsbTTvk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::CalibrationMap::BittZrhBnhuMtkgFJUdLYEEhkiXn(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"BittZrhBnhuMtkgFJUdLYEEhkiXn", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Vector2 Rewired::CalibrationMap::GetCalibrated2DValue(int32_t  xAxisIndex, int32_t  yAxisIndex, float_t  valueRawX, float_t  valueRawY, ::Rewired::DeadZone2DType  deadZoneType, ::Rewired::AxisSensitivity2DType  sensitivityType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMap*>(),
                        {"GetCalibrated2DValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::DeadZone2DType>(), ::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, xAxisIndex, yAxisIndex, valueRawX, valueRawY, deadZoneType, sensitivityType);
}
inline ::Rewired::CalibrationMap* Rewired::CalibrationMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CalibrationMap*>());
}
inline ::Rewired::CalibrationMap* Rewired::CalibrationMap::New_ctor(::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CalibrationMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
inline ::Rewired::CalibrationMap* Rewired::CalibrationMap::New_ctor(::ArrayW<::Rewired::AxisCalibration*>  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CalibrationMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::CalibrationMap::CalibrationMap()   {
}
