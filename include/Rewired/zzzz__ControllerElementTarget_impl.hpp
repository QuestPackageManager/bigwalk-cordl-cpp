#pragma once
// IWYU pragma private; include "Rewired/ControllerElementTarget.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerElementTarget_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementTarget::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181916070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementTarget::*)(::Rewired::ControllerElementTarget)>(&::Rewired::ControllerElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181916180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementTarget::*)(::Rewired::IControllerElementTarget*)>(&::Rewired::ControllerElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819161d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_elementIdentifierId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819162e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_axisRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.set_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementTarget::*)(::Rewired::AxisRange)>(&::Rewired::ControllerElementTarget::set_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_hasTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_hasTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18175b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_hasTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_elementType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181916300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_descriptiveName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181916270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_descriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_controller)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181916250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.get_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Element* (::Rewired::ControllerElementTarget::*)()>(&::Rewired::ControllerElementTarget::get_element)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_element", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.set_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementTarget::*)(::Rewired::Controller_Element*)>(&::Rewired::ControllerElementTarget::set_element)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"set_element", {}, {::i2c::type_of<::Rewired::Controller_Element*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementTarget.op_Implicit___Rewired__ControllerElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementTarget (*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerElementTarget::op_Implicit___Rewired__ControllerElementTarget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181916320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerElementTarget::_ctor(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerElementTarget::_ctor(::Rewired::ControllerElementTarget  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerElementTarget::_ctor(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerElementTarget::get_elementIdentifierId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Rewired::AxisRange Rewired::ControllerElementTarget::get_axisRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_axisRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(*this, ___internal_method);
}
inline void Rewired::ControllerElementTarget::set_axisRange(::Rewired::AxisRange  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Rewired::ControllerElementTarget::get_hasTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_hasTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::ControllerElementTarget::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(*this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementTarget::get_descriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_descriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ControllerElementTarget::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(*this, ___internal_method);
}
inline ::Rewired::Controller_Element* Rewired::ControllerElementTarget::get_element()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"get_element", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Element*>(*this, ___internal_method);
}
inline void Rewired::ControllerElementTarget::set_element(::Rewired::Controller_Element*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"set_element", {}, {::i2c::type_of<::Rewired::Controller_Element*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerElementTarget Rewired::ControllerElementTarget::op_Implicit___Rewired__ControllerElementTarget(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementTarget>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementTarget>(nullptr, ___internal_method, actionElementMap);
}
// Ctor Parameters [CppParam { name: "QvVnHwXchFYTFaWBdpqKkmaMFAYn", ty: "::Rewired::Controller_Element*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ELTlOtkncZnTAWCuomTdddKSNbED", ty: "::Rewired::AxisRange", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerElementTarget::ControllerElementTarget(::Rewired::Controller_Element*  QvVnHwXchFYTFaWBdpqKkmaMFAYn, ::Rewired::AxisRange  ELTlOtkncZnTAWCuomTdddKSNbED) noexcept  {
this->QvVnHwXchFYTFaWBdpqKkmaMFAYn = QvVnHwXchFYTFaWBdpqKkmaMFAYn;
this->ELTlOtkncZnTAWCuomTdddKSNbED = ELTlOtkncZnTAWCuomTdddKSNbED;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementTarget::ControllerElementTarget()   {
}
