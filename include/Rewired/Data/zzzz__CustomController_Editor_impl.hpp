#pragma once
// IWYU pragma private; include "Rewired/Data/CustomController_Editor.hpp"
#include "Rewired/Data/zzzz__CustomController_Editor_impl.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__CustomController_Editor_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareAxisInfo_def.hpp"
#include "Rewired/Data/zzzz__CustomController_Editor_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Element._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Element::*)()>(&::Rewired::Data::CustomController_Editor_Element::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Element._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Element::*)(::StringW, int32_t)>(&::Rewired::Data::CustomController_Editor_Element::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Element.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::CustomController_Editor_Element* (::Rewired::Data::CustomController_Editor_Element::*)()>(&::Rewired::Data::CustomController_Editor_Element::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(),
                    {::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::CustomController_Editor_Element::__cordl_internal_get_elementIdentifierId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierId;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor_Element::__cordl_internal_get_elementIdentifierId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierId;
}
constexpr void Rewired::Data::CustomController_Editor_Element::__cordl_internal_set_elementIdentifierId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifierId = value;
}
constexpr ::StringW& Rewired::Data::CustomController_Editor_Element::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::Data::CustomController_Editor_Element::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::Data::CustomController_Editor_Element::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Rewired::Data::CustomController_Editor_Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor_Element::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor_Element::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::CustomController_Editor_Element*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::CustomController_Editor_Element*>(this, ___internal_method);
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor_Element::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Element*>());
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor_Element::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Element*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Data::CustomController_Editor_Element::CustomController_Editor_Element()   {
}
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Button::*)()>(&::Rewired::Data::CustomController_Editor_Button::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Button::*)(::StringW)>(&::Rewired::Data::CustomController_Editor_Button::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Button::*)(::StringW, int32_t)>(&::Rewired::Data::CustomController_Editor_Button::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Button::*)(::Rewired::Data::CustomController_Editor_Button*)>(&::Rewired::Data::CustomController_Editor_Button::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18188ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor_Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Button.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::CustomController_Editor_Element* (::Rewired::Data::CustomController_Editor_Button::*)()>(&::Rewired::Data::CustomController_Editor_Button::Clone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                    {::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Data::CustomController_Editor_Button::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor_Button::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::CustomController_Editor_Button::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Data::CustomController_Editor_Button::_ctor(::Rewired::Data::CustomController_Editor_Button*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor_Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor_Button::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::CustomController_Editor_Button*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::CustomController_Editor_Element*>(this, ___internal_method);
}
inline ::Rewired::Data::CustomController_Editor_Button* Rewired::Data::CustomController_Editor_Button::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Button*>());
}
inline ::Rewired::Data::CustomController_Editor_Button* Rewired::Data::CustomController_Editor_Button::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Button*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Data::CustomController_Editor_Button* Rewired::Data::CustomController_Editor_Button::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Button*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
inline ::Rewired::Data::CustomController_Editor_Button* Rewired::Data::CustomController_Editor_Button::New_ctor(::Rewired::Data::CustomController_Editor_Button*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Button*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::CustomController_Editor_Button::CustomController_Editor_Button()   {
}
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Axis::*)()>(&::Rewired::Data::CustomController_Editor_Axis::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Axis::*)(::StringW)>(&::Rewired::Data::CustomController_Editor_Axis::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18188ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Axis::*)(::StringW, ::StringW, ::StringW, int32_t, ::Rewired::AxisRange, bool, float_t, float_t, float_t, float_t, bool, ::Rewired::Data::Mapping::HardwareAxisInfo*)>(&::Rewired::Data::CustomController_Editor_Axis::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18188ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareAxisInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_Axis::*)(::Rewired::Data::CustomController_Editor_Axis*)>(&::Rewired::Data::CustomController_Editor_Axis::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18188a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor_Axis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_Axis.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::CustomController_Editor_Element* (::Rewired::Data::CustomController_Editor_Axis::*)()>(&::Rewired::Data::CustomController_Editor_Axis::Clone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18188a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                    {::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::AxisRange& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr ::Rewired::AxisRange const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_range(::Rewired::AxisRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr bool& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_invert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invert;
}
constexpr bool const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_invert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invert;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_invert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invert = value;
}
constexpr float_t& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZone;
}
constexpr float_t const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deadZone;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deadZone = value;
}
constexpr float_t& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_zero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zero;
}
constexpr float_t const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_zero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zero;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_zero(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zero = value;
}
constexpr float_t& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr bool& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_doNotCalibrateRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotCalibrateRange;
}
constexpr bool const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_doNotCalibrateRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotCalibrateRange;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_doNotCalibrateRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doNotCalibrateRange = value;
}
constexpr ::Rewired::AxisSensitivityType& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivityType;
}
constexpr ::Rewired::AxisSensitivityType const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivityType;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_sensitivityType(::Rewired::AxisSensitivityType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivityType = value;
}
constexpr float_t& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr float_t const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivity = value;
}
constexpr ::UnityEngine::AnimationCurve*& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_sensitivityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivityCurve;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_sensitivityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivityCurve = value;
}
constexpr ::Rewired::Data::Mapping::HardwareAxisInfo*& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_axisInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisInfo;
}
constexpr ::Rewired::Data::Mapping::HardwareAxisInfo* const& Rewired::Data::CustomController_Editor_Axis::__cordl_internal_get_axisInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisInfo;
}
constexpr void Rewired::Data::CustomController_Editor_Axis::__cordl_internal_set_axisInfo(::Rewired::Data::Mapping::HardwareAxisInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisInfo = value;
}
inline void Rewired::Data::CustomController_Editor_Axis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor_Axis::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::CustomController_Editor_Axis::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, bool  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareAxisInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void Rewired::Data::CustomController_Editor_Axis::_ctor(::Rewired::Data::CustomController_Editor_Axis*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor_Axis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor_Axis::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::CustomController_Editor_Axis*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::CustomController_Editor_Element*>(this, ___internal_method);
}
inline ::Rewired::Data::CustomController_Editor_Axis* Rewired::Data::CustomController_Editor_Axis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Axis*>());
}
inline ::Rewired::Data::CustomController_Editor_Axis* Rewired::Data::CustomController_Editor_Axis::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Axis*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Data::CustomController_Editor_Axis* Rewired::Data::CustomController_Editor_Axis::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, bool  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_11)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Axis*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11));
}
inline ::Rewired::Data::CustomController_Editor_Axis* Rewired::Data::CustomController_Editor_Axis::New_ctor(::Rewired::Data::CustomController_Editor_Axis*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_Axis*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::CustomController_Editor_Axis::CustomController_Editor_Axis()   {
}
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)(int32_t)>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18189f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerElementIdentifier>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_Collections_Generic_IEnumerable_Rewired_ControllerElementIdentifier__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>* (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_Generic_IEnumerable_Rewired_ControllerElementIdentifier__GetEnumerator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18189fa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerElementIdentifier>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::*)()>(&::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18189fa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_tUEruUNPdWYHfiFLxTSHlSeuogYi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tUEruUNPdWYHfiFLxTSHlSeuogYi;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_tUEruUNPdWYHfiFLxTSHlSeuogYi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tUEruUNPdWYHfiFLxTSHlSeuogYi;
}
constexpr void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_set_tUEruUNPdWYHfiFLxTSHlSeuogYi(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tUEruUNPdWYHfiFLxTSHlSeuogYi = value;
}
constexpr ::Rewired::ControllerElementIdentifier*& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_iBSUReteIMhEFuVqacdGhVifRRAJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iBSUReteIMhEFuVqacdGhVifRRAJ;
}
constexpr ::Rewired::ControllerElementIdentifier* const& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_iBSUReteIMhEFuVqacdGhVifRRAJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iBSUReteIMhEFuVqacdGhVifRRAJ;
}
constexpr void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_set_iBSUReteIMhEFuVqacdGhVifRRAJ(::Rewired::ControllerElementIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iBSUReteIMhEFuVqacdGhVifRRAJ = value;
}
constexpr int32_t& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_qOZfyKHfJcnODySPccVlFkPNxbefb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qOZfyKHfJcnODySPccVlFkPNxbefb;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_qOZfyKHfJcnODySPccVlFkPNxbefb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qOZfyKHfJcnODySPccVlFkPNxbefb;
}
constexpr void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_set_qOZfyKHfJcnODySPccVlFkPNxbefb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qOZfyKHfJcnODySPccVlFkPNxbefb = value;
}
constexpr ::Rewired::Data::CustomController_Editor*& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_ubIczptbjqIdfILNHvcfSqnIXEcKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ubIczptbjqIdfILNHvcfSqnIXEcKA;
}
constexpr ::Rewired::Data::CustomController_Editor* const& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_ubIczptbjqIdfILNHvcfSqnIXEcKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ubIczptbjqIdfILNHvcfSqnIXEcKA;
}
constexpr void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_set_ubIczptbjqIdfILNHvcfSqnIXEcKA(::Rewired::Data::CustomController_Editor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ubIczptbjqIdfILNHvcfSqnIXEcKA = value;
}
constexpr int32_t& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_JlLePNKeyzznpmlLlRnrWsrIsSIk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JlLePNKeyzznpmlLlRnrWsrIsSIk;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_get_JlLePNKeyzznpmlLlRnrWsrIsSIk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JlLePNKeyzznpmlLlRnrWsrIsSIk;
}
constexpr void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::__cordl_internal_set_JlLePNKeyzznpmlLlRnrWsrIsSIk(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JlLePNKeyzznpmlLlRnrWsrIsSIk = value;
}
inline void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_Generic_IEnumerator_Rewired_ControllerElementIdentifier__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerElementIdentifier>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_Generic_IEnumerable_Rewired_ControllerElementIdentifier__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerElementIdentifier>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>"
constexpr  Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerElementIdentifier__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>"
constexpr  Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerElementIdentifier__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO::CustomController_Editor_uszbcWIEZHyvvDMGEXkfUwtbWekO()   {
}
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::StringW)>(&::Rewired::Data::CustomController_Editor::set_name)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_descriptiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_descriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_descriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::StringW)>(&::Rewired::Data::CustomController_Editor::set_descriptiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_descriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::set_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_typeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_typeGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_typeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_typeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::System::Guid)>(&::Rewired::Data::CustomController_Editor::set_typeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_typeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_typeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_typeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_typeGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_typeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::StringW)>(&::Rewired::Data::CustomController_Editor::set_typeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_typeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::StringW)>(&::Rewired::Data::CustomController_Editor::set_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_key", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_elementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_elementIdentifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_elementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.set_elementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*)>(&::Rewired::Data::CustomController_Editor::set_elementIdentifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_elementIdentifiers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_axes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_axes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_buttons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_buttons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_buttons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_buttonCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_axisCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.get_ElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::get_ElementIdentifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_ElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18188d290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::Rewired::Data::CustomController_Editor*)>(&::Rewired::Data::CustomController_Editor::_ctor)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18188cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::CustomController_Editor* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18188b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifierNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetElementIdentifierNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18188c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetElementIdentifierIds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188c5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifierNamesTypeSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetElementIdentifierNamesTypeSorted)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18188c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierNamesTypeSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifierIdsTypeSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetElementIdentifierIdsTypeSorted)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18188c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierIdsTypeSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifiersTypeSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ControllerElementIdentifier*> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetElementIdentifiersTypeSorted)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18188c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifiersTypeSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.ContainsElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::ContainsElementIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18188b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"ContainsElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.IndexOfElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::IndexOfElementIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18188cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"IndexOfElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::GetElementIdentifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18188c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetEffectiveElementIdentifierType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::GetEffectiveElementIdentifierType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18188c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetEffectiveElementIdentifierType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetEffectiveAxisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::CustomController_Editor::*)(int32_t, ::by_ref<::Rewired::AxisRange>)>(&::Rewired::Data::CustomController_Editor::GetEffectiveAxisRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18188c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetEffectiveAxisRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::AxisRange>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetButtonNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetButtonNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18188c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetButtonNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetButtonElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetButtonElementIdentifierIds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetButtonElementIdentifierIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetAxisNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetAxisNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18188bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetAxisNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetAxisElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::GetAxisElementIdentifierIds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetAxisElementIdentifierIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType)>(&::Rewired::Data::CustomController_Editor::GetElementNames)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementNames", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.GetElementElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType)>(&::Rewired::Data::CustomController_Editor::GetElementElementIdentifierIds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18188c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementElementIdentifierIds", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.AddElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType)>(&::Rewired::Data::CustomController_Editor::AddElement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18188b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.AddAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::AddAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18188b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::AddButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18188b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.InsertElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType, int32_t)>(&::Rewired::Data::CustomController_Editor::InsertElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18188cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.InsertAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::InsertAxis)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.InsertButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(int32_t)>(&::Rewired::Data::CustomController_Editor::InsertButton)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188ccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.DeleteElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType, int32_t)>(&::Rewired::Data::CustomController_Editor::DeleteElement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18188bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"DeleteElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.ReorderElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType, int32_t, bool, bool)>(&::Rewired::Data::CustomController_Editor::ReorderElement)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18188ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"ReorderElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.DuplicateElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType, int32_t)>(&::Rewired::Data::CustomController_Editor::DuplicateElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"DuplicateElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.sZmMoICjGFeINIXYGxOJNeEZTQFfA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::Data::CustomController_Editor::*)(int32_t, ::StringW)>(&::Rewired::Data::CustomController_Editor::sZmMoICjGFeINIXYGxOJNeEZTQFfA)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18188d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"sZmMoICjGFeINIXYGxOJNeEZTQFfA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.vBFuXvsVbpPlaYIZCWaKHEWfoeeV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::CustomController_Editor_Element* (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType)>(&::Rewired::Data::CustomController_Editor::vBFuXvsVbpPlaYIZCWaKHEWfoeeV)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18188d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"vBFuXvsVbpPlaYIZCWaKHEWfoeeV", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.xletMqHDXntmZFgNXiUyCUKfmoYXA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::Data::CustomController_Editor::*)(::Rewired::ControllerElementType, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Rewired::Data::CustomController_Editor::xletMqHDXntmZFgNXiUyCUKfmoYXA)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18188d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"xletMqHDXntmZFgNXiUyCUKfmoYXA", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::CustomController_Editor.CreateGameHardwareMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (::Rewired::Data::CustomController_Editor::*)()>(&::Rewired::Data::CustomController_Editor::CreateGameHardwareMap)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x18188b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"CreateGameHardwareMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::CustomController_Editor::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Rewired::Data::CustomController_Editor::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& Rewired::Data::CustomController_Editor::__cordl_internal_get__descriptiveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descriptiveName;
}
constexpr ::StringW const& Rewired::Data::CustomController_Editor::__cordl_internal_get__descriptiveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descriptiveName;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__descriptiveName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____descriptiveName = value;
}
constexpr int32_t& Rewired::Data::CustomController_Editor::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& Rewired::Data::CustomController_Editor::__cordl_internal_get__typeGuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeGuidString;
}
constexpr ::StringW const& Rewired::Data::CustomController_Editor::__cordl_internal_get__typeGuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeGuidString;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__typeGuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeGuidString = value;
}
constexpr ::StringW& Rewired::Data::CustomController_Editor::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::StringW const& Rewired::Data::CustomController_Editor::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*& Rewired::Data::CustomController_Editor::__cordl_internal_get__elementIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIdentifiers;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>* const& Rewired::Data::CustomController_Editor::__cordl_internal_get__elementIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIdentifiers;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__elementIdentifiers(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementIdentifiers = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*& Rewired::Data::CustomController_Editor::__cordl_internal_get__axes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axes;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>* const& Rewired::Data::CustomController_Editor::__cordl_internal_get__axes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axes;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__axes(::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axes = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*& Rewired::Data::CustomController_Editor::__cordl_internal_get__buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttons;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>* const& Rewired::Data::CustomController_Editor::__cordl_internal_get__buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttons;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__buttons(::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttons = value;
}
constexpr int32_t& Rewired::Data::CustomController_Editor::__cordl_internal_get__elementIdentifierIdCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIdentifierIdCounter;
}
constexpr int32_t const& Rewired::Data::CustomController_Editor::__cordl_internal_get__elementIdentifierIdCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementIdentifierIdCounter;
}
constexpr void Rewired::Data::CustomController_Editor::__cordl_internal_set__elementIdentifierIdCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementIdentifierIdCounter = value;
}
inline ::StringW Rewired::Data::CustomController_Editor::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::CustomController_Editor::get_descriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_descriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_descriptiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_descriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Data::CustomController_Editor::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::Data::CustomController_Editor::get_typeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_typeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_typeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_typeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::CustomController_Editor::get_typeGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_typeGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_typeGuidString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_typeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::CustomController_Editor::get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_key(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_key", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>* Rewired::Data::CustomController_Editor::get_elementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_elementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::set_elementIdentifiers(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"set_elementIdentifiers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>* Rewired::Data::CustomController_Editor::get_axes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_axes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Axis*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>* Rewired::Data::CustomController_Editor::get_buttons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_buttons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::Data::CustomController_Editor_Button*>*>(this, ___internal_method);
}
inline int32_t Rewired::Data::CustomController_Editor::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Data::CustomController_Editor::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>* Rewired::Data::CustomController_Editor::get_ElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"get_ElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerElementIdentifier*>*>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::_ctor(::Rewired::Data::CustomController_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::CustomController_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::CustomController_Editor* Rewired::Data::CustomController_Editor::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::CustomController_Editor*>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetElementIdentifierNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::CustomController_Editor::GetElementIdentifierIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetElementIdentifierNamesTypeSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierNamesTypeSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::CustomController_Editor::GetElementIdentifierIdsTypeSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifierIdsTypeSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier*> Rewired::Data::CustomController_Editor::GetElementIdentifiersTypeSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifiersTypeSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ControllerElementIdentifier*>>(this, ___internal_method);
}
inline bool Rewired::Data::CustomController_Editor::ContainsElementIdentifier(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"ContainsElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline int32_t Rewired::Data::CustomController_Editor::IndexOfElementIdentifier(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"IndexOfElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::Data::CustomController_Editor::GetElementIdentifier(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, id);
}
inline ::Rewired::ControllerElementType Rewired::Data::CustomController_Editor::GetEffectiveElementIdentifierType(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetEffectiveElementIdentifierType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method, elementIdentifierId);
}
inline bool Rewired::Data::CustomController_Editor::GetEffectiveAxisRange(int32_t  elementIdentifierId, ::by_ref<::Rewired::AxisRange>  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetEffectiveAxisRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::AxisRange>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementIdentifierId, axisRange);
}
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetButtonNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetButtonNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::CustomController_Editor::GetButtonElementIdentifierIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetButtonElementIdentifierIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetAxisNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetAxisNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::CustomController_Editor::GetAxisElementIdentifierIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetAxisElementIdentifierIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetElementNames()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                    {"GetElementNames", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::CustomController_Editor::GetElementNames(::Rewired::ControllerElementType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementNames", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, type);
}
inline ::ArrayW<int32_t> Rewired::Data::CustomController_Editor::GetElementElementIdentifierIds(::Rewired::ControllerElementType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"GetElementElementIdentifierIds", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, type);
}
template<typename T>
inline T Rewired::Data::CustomController_Editor::GetElement(int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                    {"GetElement", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
inline void Rewired::Data::CustomController_Editor::AddElement(::Rewired::ControllerElementType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Rewired::Data::CustomController_Editor::AddAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::AddButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"AddButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::CustomController_Editor::InsertElement(::Rewired::ControllerElementType  type, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, index);
}
inline void Rewired::Data::CustomController_Editor::InsertAxis(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Rewired::Data::CustomController_Editor::InsertButton(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"InsertButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Rewired::Data::CustomController_Editor::DeleteElement(::Rewired::ControllerElementType  type, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"DeleteElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, index);
}
template<typename T>
inline void Rewired::Data::CustomController_Editor::DeleteElement(int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                    {"DeleteElement", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool Rewired::Data::CustomController_Editor::ReorderElement(::Rewired::ControllerElementType  type, int32_t  index, bool  offsetDown, bool  offsetNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"ReorderElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, index, offsetDown, offsetNow);
}
inline void Rewired::Data::CustomController_Editor::DuplicateElement(::Rewired::ControllerElementType  type, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"DuplicateElement", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, index);
}
template<typename >
inline void Rewired::Data::CustomController_Editor::uemmJivCTMqgDqKMJkzAqZgfNhOy(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                    {"uemmJivCTMqgDqKMJkzAqZgfNhOy", {::i2c::class_of<>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::Data::CustomController_Editor::sZmMoICjGFeINIXYGxOJNeEZTQFfA(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"sZmMoICjGFeINIXYGxOJNeEZTQFfA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Data::CustomController_Editor_Element* Rewired::Data::CustomController_Editor::vBFuXvsVbpPlaYIZCWaKHEWfoeeV(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"vBFuXvsVbpPlaYIZCWaKHEWfoeeV", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::CustomController_Editor_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::Data::CustomController_Editor::xletMqHDXntmZFgNXiUyCUKfmoYXA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"xletMqHDXntmZFgNXiUyCUKfmoYXA", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::Data::CustomController_Editor::CreateGameHardwareMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::CustomController_Editor*>(),
                        {"CreateGameHardwareMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(this, ___internal_method);
}
inline ::Rewired::Data::CustomController_Editor* Rewired::Data::CustomController_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor*>());
}
inline ::Rewired::Data::CustomController_Editor* Rewired::Data::CustomController_Editor::New_ctor(::Rewired::Data::CustomController_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::CustomController_Editor*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::CustomController_Editor::CustomController_Editor()   {
}
