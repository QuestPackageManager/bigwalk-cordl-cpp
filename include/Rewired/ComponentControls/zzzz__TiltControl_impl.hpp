#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TiltControl.hpp"
#include "Rewired/ComponentControls/zzzz__CustomControllerControl_impl.hpp"
#include "Rewired/ComponentControls/zzzz__TiltControl_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForFloat_def.hpp"
#include "Rewired/ComponentControls/zzzz__TiltControl_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis2D_def.hpp"
#include "Rewired/zzzz__Axis2DCalibration_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection::TiltControl_TiltDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection::TiltControl_TiltDirection()   {
}
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection  Rewired::ComponentControls::TiltControl_TiltDirection::Both{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection  Rewired::ComponentControls::TiltControl_TiltDirection::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection  Rewired::ComponentControls::TiltControl_TiltDirection::Forward{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TiltControl_TiltDirection (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_axesToUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_axesToUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.set_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(::Rewired::ComponentControls::TiltControl_TiltDirection)>(&::Rewired::ComponentControls::TiltControl::set_axesToUse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e0e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TiltControl_TiltDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_horizontalTiltCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_horizontalTiltCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalTiltCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_horizontalTiltLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_horizontalTiltLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalTiltLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.set_horizontalTiltLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(float_t)>(&::Rewired::ComponentControls::TiltControl::set_horizontalTiltLimit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e0f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_horizontalTiltLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_horizontalRestAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_horizontalRestAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalRestAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.set_horizontalRestAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(float_t)>(&::Rewired::ComponentControls::TiltControl::set_horizontalRestAngle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_horizontalRestAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_forwardTiltCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_forwardTiltCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardTiltCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_forwardTiltLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_forwardTiltLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardTiltLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.set_forwardTiltLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(float_t)>(&::Rewired::ComponentControls::TiltControl::set_forwardTiltLimit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e0ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_forwardTiltLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_forwardRestAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_forwardRestAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardRestAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.set_forwardRestAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(float_t)>(&::Rewired::ComponentControls::TiltControl::set_forwardRestAngle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e0e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_forwardRestAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_horizontalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_horizontalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e0b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_verticalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_verticalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_deadZoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_deadZoneType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181808040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.get_axis2DCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::get_axis2DCalibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181808040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.BizNgBmbqrHgVPILYECeZjVnilAD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis2D* (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::BizNgBmbqrHgVPILYECeZjVnilAD)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"BizNgBmbqrHgVPILYECeZjVnilAD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.ysmeNYPaCJghbjvvmVZRTIJLWYQpA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::ysmeNYPaCJghbjvvmVZRTIJLWYQpA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e0fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"ysmeNYPaCJghbjvvmVZRTIJLWYQpA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e0a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.SetAccelerationSourceCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(::System::Func_1<::UnityEngine::Vector3>*)>(&::Rewired::ComponentControls::TiltControl::SetAccelerationSourceCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"SetAccelerationSourceCallback", {}, {::i2c::type_of<::System::Func_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.SetRestOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::SetRestOrientation)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818e0840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"SetRestOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::OnValidate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e0800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.NHKUOXTKuSPxihqrqGGzcwJdfgFQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::NHKUOXTKuSPxihqrqGGzcwJdfgFQ)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e07a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.bPhPSQjBqCDsWMjmuHYSRsMtIPqR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::bPhPSQjBqCDsWMjmuHYSRsMtIPqR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.VNRzFlJPQQlMrAJxIDqFNtiYbFBGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::VNRzFlJPQQlMrAJxIDqFNtiYbFBGA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818e0970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.ClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::ClearValue)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1818e0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.IRwGfSVCICMmcoCGZSIDPlXUKbCC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::IRwGfSVCICMmcoCGZSIDPlXUKbCC)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1818e0450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"IRwGfSVCICMmcoCGZSIDPlXUKbCC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.pihKEZDYJKmyuRUvdKSeLFxxIKsG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)()>(&::Rewired::ComponentControls::TiltControl::pihKEZDYJKmyuRUvdKSeLFxxIKsG)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818e0cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"pihKEZDYJKmyuRUvdKSeLFxxIKsG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TiltControl.jIuVaGMWsljKRmfnpoQpXiuYdUAH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TiltControl::*)(::Rewired::ComponentControls::TiltControl_TiltDirection)>(&::Rewired::ComponentControls::TiltControl::jIuVaGMWsljKRmfnpoQpXiuYdUAH)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"jIuVaGMWsljKRmfnpoQpXiuYdUAH", {}, {::i2c::type_of<::Rewired::ComponentControls::TiltControl_TiltDirection>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection& Rewired::ComponentControls::TiltControl::__cordl_internal_get__allowedTiltDirections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedTiltDirections;
}
constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__allowedTiltDirections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedTiltDirections;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__allowedTiltDirections(::Rewired::ComponentControls::TiltControl_TiltDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowedTiltDirections = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalTiltCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalTiltCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalTiltCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalTiltCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__horizontalTiltCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalTiltCustomControllerElement = value;
}
constexpr float_t& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalTiltLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalTiltLimit;
}
constexpr float_t const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalTiltLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalTiltLimit;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__horizontalTiltLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalTiltLimit = value;
}
constexpr float_t& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalRestAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalRestAngle;
}
constexpr float_t const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__horizontalRestAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalRestAngle;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__horizontalRestAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalRestAngle = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardTiltCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTiltCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardTiltCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTiltCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__forwardTiltCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardTiltCustomControllerElement = value;
}
constexpr float_t& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardTiltLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTiltLimit;
}
constexpr float_t const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardTiltLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTiltLimit;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__forwardTiltLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardTiltLimit = value;
}
constexpr float_t& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardRestAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardRestAngle;
}
constexpr float_t const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__forwardRestAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardRestAngle;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__forwardRestAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardRestAngle = value;
}
constexpr ::Rewired::Internal::StandaloneAxis2D*& Rewired::ComponentControls::TiltControl::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::Rewired::Internal::StandaloneAxis2D* const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
constexpr bool& Rewired::ComponentControls::TiltControl::__cordl_internal_get__useHAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHAxis;
}
constexpr bool const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__useHAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHAxis;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__useHAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHAxis = value;
}
constexpr bool& Rewired::ComponentControls::TiltControl::__cordl_internal_get__useFAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useFAxis;
}
constexpr bool const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__useFAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useFAxis;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__useFAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useFAxis = value;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>*& Rewired::ComponentControls::TiltControl::__cordl_internal_get__getAccelerationValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getAccelerationValue;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>* const& Rewired::ComponentControls::TiltControl::__cordl_internal_get__getAccelerationValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getAccelerationValue;
}
constexpr void Rewired::ComponentControls::TiltControl::__cordl_internal_set__getAccelerationValue(::System::Func_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getAccelerationValue = value;
}
inline ::Rewired::ComponentControls::TiltControl_TiltDirection Rewired::ComponentControls::TiltControl::get_axesToUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_axesToUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TiltControl_TiltDirection>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::set_axesToUse(::Rewired::ComponentControls::TiltControl_TiltDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TiltControl_TiltDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TiltControl::get_horizontalTiltCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalTiltCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TiltControl::get_horizontalTiltLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalTiltLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::set_horizontalTiltLimit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_horizontalTiltLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TiltControl::get_horizontalRestAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalRestAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::set_horizontalRestAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_horizontalRestAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TiltControl::get_forwardTiltCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardTiltCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TiltControl::get_forwardTiltLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardTiltLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::set_forwardTiltLimit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_forwardTiltLimit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TiltControl::get_forwardRestAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_forwardRestAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::set_forwardRestAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"set_forwardRestAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TiltControl::get_horizontalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TiltControl::get_verticalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::Axis2DCalibration* Rewired::ComponentControls::TiltControl::get_deadZoneType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_deadZoneType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline ::Rewired::Axis2DCalibration* Rewired::ComponentControls::TiltControl::get_axis2DCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::ComponentControls::TiltControl::BizNgBmbqrHgVPILYECeZjVnilAD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"BizNgBmbqrHgVPILYECeZjVnilAD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis2D*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ComponentControls::TiltControl::ysmeNYPaCJghbjvvmVZRTIJLWYQpA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"ysmeNYPaCJghbjvvmVZRTIJLWYQpA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::SetAccelerationSourceCallback(::System::Func_1<::UnityEngine::Vector3>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"SetAccelerationSourceCallback", {}, {::i2c::type_of<::System::Func_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Rewired::ComponentControls::TiltControl::SetRestOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"SetRestOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TiltControl::NHKUOXTKuSPxihqrqGGzcwJdfgFQ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::bPhPSQjBqCDsWMjmuHYSRsMtIPqR()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::VNRzFlJPQQlMrAJxIDqFNtiYbFBGA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::ClearValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::IRwGfSVCICMmcoCGZSIDPlXUKbCC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"IRwGfSVCICMmcoCGZSIDPlXUKbCC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::pihKEZDYJKmyuRUvdKSeLFxxIKsG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"pihKEZDYJKmyuRUvdKSeLFxxIKsG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TiltControl::jIuVaGMWsljKRmfnpoQpXiuYdUAH(::Rewired::ComponentControls::TiltControl_TiltDirection  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TiltControl*>(),
                        {"jIuVaGMWsljKRmfnpoQpXiuYdUAH", {}, {::i2c::type_of<::Rewired::ComponentControls::TiltControl_TiltDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ComponentControls::TiltControl* Rewired::ComponentControls::TiltControl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TiltControl*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TiltControl::TiltControl()   {
}
