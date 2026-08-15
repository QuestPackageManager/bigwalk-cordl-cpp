#pragma once
// IWYU pragma private; include "Rewired/Utils/InputTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__InputTools_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HatType_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::InputTools.TransformAxis2DComponentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::Rewired::Utils::InputTools::TransformAxis2DComponentValue)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181905b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"TransformAxis2DComponentValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.GetCalibratedAxisValueClamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t, bool, bool, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::InputTools::GetCalibratedAxisValueClamped)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181905620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"GetCalibratedAxisValueClamped", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.GetCalibratedAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, bool, bool, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::InputTools::GetCalibratedAxisValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819058b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"GetCalibratedAxisValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.ApplyRadialDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::Rewired::Utils::InputTools::ApplyRadialDeadZone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181905080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplyRadialDeadZone", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.ApplySensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::InputTools::ApplySensitivity)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1819052d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplySensitivity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.geERJyJlBOedUAmtQvHoelhFQBJIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::InputTools::geERJyJlBOedUAmtQvHoelhFQBJIA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181905d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"geERJyJlBOedUAmtQvHoelhFQBJIA", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.ApplyRadialSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>, ::Rewired::AxisSensitivityType, float_t, ::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::InputTools::ApplyRadialSensitivity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819051b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplyRadialSensitivity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.FormatHardwareIdentifierString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Rewired::Utils::InputTools::FormatHardwareIdentifierString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819055b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"FormatHardwareIdentifierString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.InvertAxisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (*)(::Rewired::AxisRange)>(&::Rewired::Utils::InputTools::InvertAxisRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181905a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"InvertAxisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.CompareLastActiveController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, ::by_ref<::Rewired::Controller*>, ::by_ref<double_t>)>(&::Rewired::Utils::InputTools::CompareLastActiveController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181905530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"CompareLastActiveController", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::by_ref<::Rewired::Controller*>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.IsMappableControllerElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Rewired::Utils::InputTools::IsMappableControllerElementType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181905a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableControllerElementType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.IsMappableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerElementType)>(&::Rewired::Utils::InputTools::IsMappableType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181905b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableType", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.IsMappableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerTemplateElementType)>(&::Rewired::Utils::InputTools::IsMappableType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181905b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableType", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.HandleForced4WayHatsOnUnknownControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Rewired::Data::Mapping::HatType>)>(&::Rewired::Utils::InputTools::HandleForced4WayHatsOnUnknownControllers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819059a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"HandleForced4WayHatsOnUnknownControllers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HatType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.AxisToDigitalValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Rewired::Utils::InputTools::AxisToDigitalValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819054d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"AxisToDigitalValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::InputTools.AxisToDigitalValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Rewired::Utils::InputTools::AxisToDigitalValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181905480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"AxisToDigitalValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Rewired::Utils::InputTools::TransformAxis2DComponentValue(float_t  value, float_t  zero, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"TransformAxis2DComponentValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, zero, min, max);
}
inline float_t Rewired::Utils::InputTools::GetCalibratedAxisValueClamped(float_t  value, float_t  zero, float_t  min, float_t  max, float_t  deadZone, bool  invert, bool  applySensitivity, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"GetCalibratedAxisValueClamped", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, zero, min, max, deadZone, invert, applySensitivity, sensitivityType, sensitivity, sensitivityCurve);
}
inline float_t Rewired::Utils::InputTools::GetCalibratedAxisValue(float_t  value, float_t  deadZone, bool  invert, bool  applySensitivity, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"GetCalibratedAxisValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, deadZone, invert, applySensitivity, sensitivityType, sensitivity, sensitivityCurve);
}
inline ::UnityEngine::Vector2 Rewired::Utils::InputTools::ApplyRadialDeadZone(float_t  xValue, float_t  yValue, float_t  deadzone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplyRadialDeadZone", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, xValue, yValue, deadzone);
}
inline float_t Rewired::Utils::InputTools::ApplySensitivity(float_t  value, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplySensitivity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, sensitivityType, sensitivity, sensitivityCurve);
}
inline bool Rewired::Utils::InputTools::geERJyJlBOedUAmtQvHoelhFQBJIA(::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"geERJyJlBOedUAmtQvHoelhFQBJIA", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::InputTools::ApplyRadialSensitivity(::by_ref<::UnityEngine::Vector2>  value, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"ApplyRadialSensitivity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::Rewired::AxisSensitivityType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, sensitivityType, sensitivity, sensitivityCurve);
}
inline ::StringW Rewired::Utils::InputTools::FormatHardwareIdentifierString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"FormatHardwareIdentifierString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::Rewired::AxisRange Rewired::Utils::InputTools::InvertAxisRange(::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"InvertAxisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(nullptr, ___internal_method, axisRange);
}
inline void Rewired::Utils::InputTools::CompareLastActiveController(::Rewired::Controller*  controller, ::by_ref<::Rewired::Controller*>  lastController, ::by_ref<double_t>  lastTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"CompareLastActiveController", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::by_ref<::Rewired::Controller*>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, lastController, lastTime);
}
inline bool Rewired::Utils::InputTools::IsMappableControllerElementType(::System::Object*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableControllerElementType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::InputTools::IsMappableType(::Rewired::ControllerElementType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableType", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::InputTools::IsMappableType(::Rewired::ControllerTemplateElementType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"IsMappableType", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::Utils::InputTools::HandleForced4WayHatsOnUnknownControllers(int32_t  direction, ::by_ref<::Rewired::Data::Mapping::HatType>  hatType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"HandleForced4WayHatsOnUnknownControllers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HatType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, direction, hatType);
}
inline float_t Rewired::Utils::InputTools::AxisToDigitalValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"AxisToDigitalValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Rewired::Utils::InputTools::AxisToDigitalValue(float_t  value, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::InputTools*>(),
                        {"AxisToDigitalValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, threshold);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::InputTools::InputTools()   {
}
