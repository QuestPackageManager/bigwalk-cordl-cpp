#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/AxisCalibrationInfo.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__AxisCalibrationInfo_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__AxisCalibrationData_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_applyRangeCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_applyRangeCalibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_applyRangeCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_applyRangeCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(bool)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_applyRangeCalibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_applyRangeCalibration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(bool)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_deadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_deadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_deadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_zero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_zero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_zero", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_min)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_min)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_min", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_max)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_max)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_max", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisSensitivityType (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_sensitivityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(::Rewired::AxisSensitivityType)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_sensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_sensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.get_sensitivityCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivityCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.set_sensitivityCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(::UnityEngine::AnimationCurve*)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivityCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::AxisCalibrationInfo::*)(float_t, float_t, float_t, float_t, bool, bool, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818c89b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::Mapping::AxisCalibrationInfo::*)()>(&::Rewired::Data::Mapping::AxisCalibrationInfo::DeepClone)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818c88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.fjYdWnGjJQWWySSDdSRbQDKroIQtA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibrationData (*)(::Rewired::Data::Mapping::AxisCalibrationInfo*)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::fjYdWnGjJQWWySSDdSRbQDKroIQtA)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818c8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"fjYdWnGjJQWWySSDdSRbQDKroIQtA", {}, {::i2c::type_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::AxisCalibrationInfo.pGruEvbQvywsrXRZuQCflKbuJHWK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::AxisCalibrationInfo* (*)(::Rewired::AxisCalibrationData)>(&::Rewired::Data::Mapping::AxisCalibrationInfo::pGruEvbQvywsrXRZuQCflKbuJHWK)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818c8b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"pGruEvbQvywsrXRZuQCflKbuJHWK", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__applyRangeCalibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyRangeCalibration;
}
constexpr bool const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__applyRangeCalibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyRangeCalibration;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__applyRangeCalibration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyRangeCalibration = value;
}
constexpr bool& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__invert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr bool const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__invert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invert;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__invert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invert = value;
}
constexpr float_t& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr float_t const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZone = value;
}
constexpr float_t& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__zero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zero;
}
constexpr float_t const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__zero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zero;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__zero(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zero = value;
}
constexpr float_t& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr float_t const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____min = value;
}
constexpr float_t& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr float_t const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____max = value;
}
constexpr ::Rewired::AxisSensitivityType& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr ::Rewired::AxisSensitivityType const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityType;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__sensitivityType(::Rewired::AxisSensitivityType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivityType = value;
}
constexpr float_t& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr float_t const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivity;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivity = value;
}
constexpr ::UnityEngine::AnimationCurve*& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_get__sensitivityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sensitivityCurve;
}
constexpr void Rewired::Data::Mapping::AxisCalibrationInfo::__cordl_internal_set__sensitivityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sensitivityCurve = value;
}
inline bool Rewired::Data::Mapping::AxisCalibrationInfo::get_applyRangeCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_applyRangeCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_applyRangeCalibration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_applyRangeCalibration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::Mapping::AxisCalibrationInfo::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_invert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_invert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Data::Mapping::AxisCalibrationInfo::get_deadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_deadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_deadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Data::Mapping::AxisCalibrationInfo::get_zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_zero(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_zero", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Data::Mapping::AxisCalibrationInfo::get_min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_min(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_min", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Data::Mapping::AxisCalibrationInfo::get_max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_max(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_max", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisSensitivityType Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivityType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisSensitivityType>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityType(::Rewired::AxisSensitivityType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivityType", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Rewired::Data::Mapping::AxisCalibrationInfo::get_sensitivityCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"get_sensitivityCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::set_sensitivityCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"set_sensitivityCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::AxisCalibrationInfo::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
inline ::System::Object* Rewired::Data::Mapping::AxisCalibrationInfo::DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::AxisCalibrationData Rewired::Data::Mapping::AxisCalibrationInfo::fjYdWnGjJQWWySSDdSRbQDKroIQtA(::Rewired::Data::Mapping::AxisCalibrationInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"fjYdWnGjJQWWySSDdSRbQDKroIQtA", {}, {::i2c::type_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibrationData>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired::Data::Mapping::AxisCalibrationInfo::pGruEvbQvywsrXRZuQCflKbuJHWK(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::AxisCalibrationInfo*>(),
                        {"pGruEvbQvywsrXRZuQCflKbuJHWK", {}, {::i2c::type_of<::Rewired::AxisCalibrationData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::AxisCalibrationInfo*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired::Data::Mapping::AxisCalibrationInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::AxisCalibrationInfo*>());
}
inline ::Rewired::Data::Mapping::AxisCalibrationInfo* Rewired::Data::Mapping::AxisCalibrationInfo::New_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_8)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::AxisCalibrationInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::Mapping::AxisCalibrationInfo::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::Mapping::AxisCalibrationInfo::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::AxisCalibrationInfo::AxisCalibrationInfo()   {
}
