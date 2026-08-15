#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateElementTarget.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateElementTarget_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElement_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateElementTarget::*)(::Rewired::IControllerTemplateElement*, ::Rewired::AxisRange)>(&::Rewired::ControllerTemplateElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819178c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::IControllerTemplateElement*>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateElementTarget::*)(::Rewired::ControllerTemplateElementTarget)>(&::Rewired::ControllerTemplateElementTarget::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181916180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementTarget>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_axisRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.set_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateElementTarget::*)(::Rewired::AxisRange)>(&::Rewired::ControllerTemplateElementTarget::set_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementType (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_elementType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181917b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_descriptiveName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181917910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_descriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplateElement* (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_element)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_element", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.set_element
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateElementTarget::*)(::Rewired::IControllerTemplateElement*)>(&::Rewired::ControllerTemplateElementTarget::set_element)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"set_element", {}, {::i2c::type_of<::Rewired::IControllerTemplateElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_template
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplate* (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_template)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181917b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_template", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateElementTarget.get_hasTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerTemplateElementTarget::*)()>(&::Rewired::ControllerTemplateElementTarget::get_hasTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18175b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_hasTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerTemplateElementTarget::_ctor(::Rewired::IControllerTemplateElement*  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::IControllerTemplateElement*>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ControllerTemplateElementTarget::_ctor(::Rewired::ControllerTemplateElementTarget  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerTemplateElementTarget>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::AxisRange Rewired::ControllerTemplateElementTarget::get_axisRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_axisRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(*this, ___internal_method);
}
inline void Rewired::ControllerTemplateElementTarget::set_axisRange(::Rewired::AxisRange  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"set_axisRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::ControllerTemplateElementType Rewired::ControllerTemplateElementTarget::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementType>(*this, ___internal_method);
}
inline ::StringW Rewired::ControllerTemplateElementTarget::get_descriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_descriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::IControllerTemplateElement* Rewired::ControllerTemplateElementTarget::get_element()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_element", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplateElement*>(*this, ___internal_method);
}
inline void Rewired::ControllerTemplateElementTarget::set_element(::Rewired::IControllerTemplateElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"set_element", {}, {::i2c::type_of<::Rewired::IControllerTemplateElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Rewired::IControllerTemplate* Rewired::ControllerTemplateElementTarget::get_template()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_template", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplate*>(*this, ___internal_method);
}
inline bool Rewired::ControllerTemplateElementTarget::get_hasTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateElementTarget>(),
                        {"get_hasTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "LSDUqAgahVbGzHFXERnIbuWIkeUSA", ty: "::Rewired::IControllerTemplateElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "VYbSQxGVnSgTEjuJwcgnMCKlEaWt", ty: "::Rewired::AxisRange", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerTemplateElementTarget::ControllerTemplateElementTarget(::Rewired::IControllerTemplateElement*  LSDUqAgahVbGzHFXERnIbuWIkeUSA, ::Rewired::AxisRange  VYbSQxGVnSgTEjuJwcgnMCKlEaWt) noexcept  {
this->LSDUqAgahVbGzHFXERnIbuWIkeUSA = LSDUqAgahVbGzHFXERnIbuWIkeUSA;
this->VYbSQxGVnSgTEjuJwcgnMCKlEaWt = VYbSQxGVnSgTEjuJwcgnMCKlEaWt;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateElementTarget::ControllerTemplateElementTarget()   {
}
