#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateActionAxisMap.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateActionElementMap_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateActionAxisMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
#include "Rewired/zzzz__IControllerTemplateElementSource_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionAxisMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181916890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)(int32_t, ::Rewired::AxisRange, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerTemplateActionAxisMap::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181916810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)(int32_t, int32_t, ::Rewired::AxisRange, ::Rewired::Pole, bool, bool)>(&::Rewired::ControllerTemplateActionAxisMap::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819168f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.get_axisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::ControllerTemplateActionAxisMap::*)()>(&::Rewired::ControllerTemplateActionAxisMap::get_axisRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_axisRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.get_axisContribution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Pole (::Rewired::ControllerTemplateActionAxisMap::*)()>(&::Rewired::ControllerTemplateActionAxisMap::get_axisContribution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_axisContribution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.get_invert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerTemplateActionAxisMap::*)()>(&::Rewired::ControllerTemplateActionAxisMap::get_invert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_invert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.uLNIVnshxLJeyFklVzBLtaBbAcgGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionAxisMap::uLNIVnshxLJeyFklVzBLtaBbAcgGA)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181916a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.gyFgWZIOkYxRXQFisRfqeYALZruF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerTemplateActionAxisMap::gyFgWZIOkYxRXQFisRfqeYALZruF)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181916950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.kyEwxmZNagZYfYRfDZtzJIqAPCoG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerTemplateActionAxisMap::*)()>(&::Rewired::ControllerTemplateActionAxisMap::kyEwxmZNagZYfYRfDZtzJIqAPCoG)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181916a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.ARuZrxUPPFhtXqfoDVjTWqfyXXxh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::IControllerTemplateElementSource*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerTemplateActionAxisMap::ARuZrxUPPFhtXqfoDVjTWqfyXXxh)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181916390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                    {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.FHxCFGWfaMxWjoMWTTAknCLQgXnj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::IControllerElementTarget*, ::Rewired::AxisRange, ::Rewired::Pole)>(&::Rewired::ControllerTemplateActionAxisMap::FHxCFGWfaMxWjoMWTTAknCLQgXnj)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181916590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"FHxCFGWfaMxWjoMWTTAknCLQgXnj", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerTemplateActionAxisMap.WRijltyEtMlrFVbiYDEbdameLNuq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerTemplateActionAxisMap::*)(::Rewired::IControllerElementTarget*, ::Rewired::Pole, ::Rewired::Pole)>(&::Rewired::ControllerTemplateActionAxisMap::WRijltyEtMlrFVbiYDEbdameLNuq)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819166e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"WRijltyEtMlrFVbiYDEbdameLNuq", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::AxisRange& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_yzHVCsQOKnZqGaSONvtuffXEvQXR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzHVCsQOKnZqGaSONvtuffXEvQXR;
}
constexpr ::Rewired::AxisRange const& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_yzHVCsQOKnZqGaSONvtuffXEvQXR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzHVCsQOKnZqGaSONvtuffXEvQXR;
}
constexpr void Rewired::ControllerTemplateActionAxisMap::__cordl_internal_set_yzHVCsQOKnZqGaSONvtuffXEvQXR(::Rewired::AxisRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yzHVCsQOKnZqGaSONvtuffXEvQXR = value;
}
constexpr ::Rewired::Pole& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_ZGIiCoDHReuPmZvWiKFFHJQFGBQp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZGIiCoDHReuPmZvWiKFFHJQFGBQp;
}
constexpr ::Rewired::Pole const& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_ZGIiCoDHReuPmZvWiKFFHJQFGBQp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZGIiCoDHReuPmZvWiKFFHJQFGBQp;
}
constexpr void Rewired::ControllerTemplateActionAxisMap::__cordl_internal_set_ZGIiCoDHReuPmZvWiKFFHJQFGBQp(::Rewired::Pole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZGIiCoDHReuPmZvWiKFFHJQFGBQp = value;
}
constexpr bool& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_knNbdcvlCnWNttoTwRpSUNSJkoIP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knNbdcvlCnWNttoTwRpSUNSJkoIP;
}
constexpr bool const& Rewired::ControllerTemplateActionAxisMap::__cordl_internal_get_knNbdcvlCnWNttoTwRpSUNSJkoIP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knNbdcvlCnWNttoTwRpSUNSJkoIP;
}
constexpr void Rewired::ControllerTemplateActionAxisMap::__cordl_internal_set_knNbdcvlCnWNttoTwRpSUNSJkoIP(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knNbdcvlCnWNttoTwRpSUNSJkoIP = value;
}
inline void Rewired::ControllerTemplateActionAxisMap::_ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionAxisMap::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ControllerTemplateActionAxisMap::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline ::Rewired::AxisRange Rewired::ControllerTemplateActionAxisMap::get_axisRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_axisRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(this, ___internal_method);
}
inline ::Rewired::Pole Rewired::ControllerTemplateActionAxisMap::get_axisContribution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_axisContribution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Pole>(this, ___internal_method);
}
inline bool Rewired::ControllerTemplateActionAxisMap::get_invert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"get_invert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerTemplateActionAxisMap::uLNIVnshxLJeyFklVzBLtaBbAcgGA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionAxisMap::gyFgWZIOkYxRXQFisRfqeYALZruF(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerTemplateActionAxisMap::kyEwxmZNagZYfYRfDZtzJIqAPCoG()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerTemplateActionAxisMap::ARuZrxUPPFhtXqfoDVjTWqfyXXxh(::Rewired::IControllerTemplateElementSource*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerTemplateActionAxisMap::FHxCFGWfaMxWjoMWTTAknCLQgXnj(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"FHxCFGWfaMxWjoMWTTAknCLQgXnj", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerTemplateActionAxisMap::WRijltyEtMlrFVbiYDEbdameLNuq(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerTemplateActionAxisMap*>(),
                        {"WRijltyEtMlrFVbiYDEbdameLNuq", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerTemplateActionAxisMap* Rewired::ControllerTemplateActionAxisMap::New_ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionAxisMap*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerTemplateActionAxisMap* Rewired::ControllerTemplateActionAxisMap::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionAxisMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
inline ::Rewired::ControllerTemplateActionAxisMap* Rewired::ControllerTemplateActionAxisMap::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerTemplateActionAxisMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerTemplateActionAxisMap::ControllerTemplateActionAxisMap()   {
}
