#pragma once
// IWYU pragma private; include "Rewired/InputMapper.hpp"
#include "Rewired/zzzz__AxisRange_impl.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "Rewired/zzzz__ElementAssignment_impl.hpp"
#include "Rewired/zzzz__InputMapper_impl.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__InputMapper_def.hpp"
#include "Rewired/Utils/zzzz__SafeDelegate_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictInfo_def.hpp"
#include "Rewired/zzzz__ElementAssignmentInfo_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__InputMapper_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::Rewired::InputMapper_Context.get_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::get_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.set_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(int32_t)>(&::Rewired::InputMapper_Context::set_actionId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18199b120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.get_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::get_actionName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18199b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.set_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(::StringW)>(&::Rewired::InputMapper_Context::set_actionName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18199b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.get_controllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::get_controllerMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_controllerMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.set_controllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(::Rewired::ControllerMap*)>(&::Rewired::InputMapper_Context::set_controllerMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18199b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_controllerMap", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.get_actionElementMapToReplace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::get_actionElementMapToReplace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionElementMapToReplace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.set_actionElementMapToReplace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(::Rewired::ActionElementMap*)>(&::Rewired::InputMapper_Context::set_actionElementMapToReplace)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18199b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionElementMapToReplace", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.get_actionRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::get_actionRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.set_actionRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(::Rewired::AxisRange)>(&::Rewired::InputMapper_Context::set_actionRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18199b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18199b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)(::Rewired::InputMapper_Context*)>(&::Rewired::InputMapper_Context::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18199b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Context* (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::Clone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18199aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.udXpKVlIwYGLhBscxlkhWwjgNefgA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::udXpKVlIwYGLhBscxlkhWwjgNefgA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18199b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"udXpKVlIwYGLhBscxlkhWwjgNefgA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.SqZZrrulKHGEGVbIINfwjPyOvNKL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Context::*)()>(&::Rewired::InputMapper_Context::SqZZrrulKHGEGVbIINfwjPyOvNKL)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18199afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"SqZZrrulKHGEGVbIINfwjPyOvNKL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Context.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::InputMapper_Context*, ::Rewired::InputMapper_Context*)>(&::Rewired::InputMapper_Context::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18199af50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::InputMapper_Context::__cordl_internal_get_gLPcVOomQHadptdpLccHFpRhJvQU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gLPcVOomQHadptdpLccHFpRhJvQU;
}
constexpr int32_t const& Rewired::InputMapper_Context::__cordl_internal_get_gLPcVOomQHadptdpLccHFpRhJvQU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gLPcVOomQHadptdpLccHFpRhJvQU;
}
constexpr void Rewired::InputMapper_Context::__cordl_internal_set_gLPcVOomQHadptdpLccHFpRhJvQU(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gLPcVOomQHadptdpLccHFpRhJvQU = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::InputMapper_Context::__cordl_internal_get_HpiewOWjopuGClHQAQshAIPeWDvk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HpiewOWjopuGClHQAQshAIPeWDvk;
}
constexpr ::Rewired::ControllerMap* const& Rewired::InputMapper_Context::__cordl_internal_get_HpiewOWjopuGClHQAQshAIPeWDvk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HpiewOWjopuGClHQAQshAIPeWDvk;
}
constexpr void Rewired::InputMapper_Context::__cordl_internal_set_HpiewOWjopuGClHQAQshAIPeWDvk(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HpiewOWjopuGClHQAQshAIPeWDvk = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::InputMapper_Context::__cordl_internal_get_JGlvRHyOrieMfxIjsvgaHrrkbHik()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JGlvRHyOrieMfxIjsvgaHrrkbHik;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::InputMapper_Context::__cordl_internal_get_JGlvRHyOrieMfxIjsvgaHrrkbHik() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JGlvRHyOrieMfxIjsvgaHrrkbHik;
}
constexpr void Rewired::InputMapper_Context::__cordl_internal_set_JGlvRHyOrieMfxIjsvgaHrrkbHik(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JGlvRHyOrieMfxIjsvgaHrrkbHik = value;
}
constexpr ::Rewired::AxisRange& Rewired::InputMapper_Context::__cordl_internal_get_JyoUPMmNdbivscaZKRJjbRAYnjAeb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JyoUPMmNdbivscaZKRJjbRAYnjAeb;
}
constexpr ::Rewired::AxisRange const& Rewired::InputMapper_Context::__cordl_internal_get_JyoUPMmNdbivscaZKRJjbRAYnjAeb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JyoUPMmNdbivscaZKRJjbRAYnjAeb;
}
constexpr void Rewired::InputMapper_Context::__cordl_internal_set_JyoUPMmNdbivscaZKRJjbRAYnjAeb(::Rewired::AxisRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JyoUPMmNdbivscaZKRJjbRAYnjAeb = value;
}
constexpr bool& Rewired::InputMapper_Context::__cordl_internal_get_GeRveJTyTkMHqjYKdcSNAJHXrrif()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeRveJTyTkMHqjYKdcSNAJHXrrif;
}
constexpr bool const& Rewired::InputMapper_Context::__cordl_internal_get_GeRveJTyTkMHqjYKdcSNAJHXrrif() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GeRveJTyTkMHqjYKdcSNAJHXrrif;
}
constexpr void Rewired::InputMapper_Context::__cordl_internal_set_GeRveJTyTkMHqjYKdcSNAJHXrrif(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GeRveJTyTkMHqjYKdcSNAJHXrrif = value;
}
inline int32_t Rewired::InputMapper_Context::get_actionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::set_actionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::InputMapper_Context::get_actionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::set_actionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerMap* Rewired::InputMapper_Context::get_controllerMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_controllerMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::set_controllerMap(::Rewired::ControllerMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_controllerMap", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ActionElementMap* Rewired::InputMapper_Context::get_actionElementMapToReplace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionElementMapToReplace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::set_actionElementMapToReplace(::Rewired::ActionElementMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionElementMapToReplace", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisRange Rewired::InputMapper_Context::get_actionRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"get_actionRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::set_actionRange(::Rewired::AxisRange  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"set_actionRange", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper_Context::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::_ctor(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_Context* Rewired::InputMapper_Context::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Context*>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::udXpKVlIwYGLhBscxlkhWwjgNefgA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"udXpKVlIwYGLhBscxlkhWwjgNefgA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputMapper_Context::SqZZrrulKHGEGVbIINfwjPyOvNKL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"SqZZrrulKHGEGVbIINfwjPyOvNKL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Context::Copy(::Rewired::InputMapper_Context*  source, ::Rewired::InputMapper_Context*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Context*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
inline ::Rewired::InputMapper_Context* Rewired::InputMapper_Context::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_Context*>());
}
inline ::Rewired::InputMapper_Context* Rewired::InputMapper_Context::New_ctor(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_Context*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_Context::InputMapper_Context()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputMapper_ConflictResponse::InputMapper_ConflictResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_ConflictResponse::InputMapper_ConflictResponse()   {
}
constexpr ::Rewired::InputMapper_ConflictResponse  Rewired::InputMapper_ConflictResponse::Cancel{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputMapper_ConflictResponse  Rewired::InputMapper_ConflictResponse::Replace{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputMapper_ConflictResponse  Rewired::InputMapper_ConflictResponse::Add{static_cast<int32_t>(0x2)};
constexpr ::Rewired::InputMapper_ConflictResponse  Rewired::InputMapper_ConflictResponse::Ignore{static_cast<int32_t>(0x3)};
constexpr ::Rewired::InputMapper_ConflictResponse  Rewired::InputMapper_ConflictResponse::Swap{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::Rewired::InputMapper_EventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_EventData::*)(::Rewired::InputMapper*)>(&::Rewired::InputMapper_EventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_EventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputMapper*& Rewired::InputMapper_EventData::__cordl_internal_get_inputMapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMapper;
}
constexpr ::Rewired::InputMapper* const& Rewired::InputMapper_EventData::__cordl_internal_get_inputMapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMapper;
}
constexpr void Rewired::InputMapper_EventData::__cordl_internal_set_inputMapper(::Rewired::InputMapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMapper = value;
}
inline void Rewired::InputMapper_EventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_EventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_EventData* Rewired::InputMapper_EventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_EventData*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_EventData::InputMapper_EventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_InputMappedEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_InputMappedEventData::*)(::Rewired::InputMapper*, ::Rewired::ActionElementMap*)>(&::Rewired::InputMapper_InputMappedEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_InputMappedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ActionElementMap*& Rewired::InputMapper_InputMappedEventData::__cordl_internal_get_actionElementMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionElementMap;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::InputMapper_InputMappedEventData::__cordl_internal_get_actionElementMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionElementMap;
}
constexpr void Rewired::InputMapper_InputMappedEventData::__cordl_internal_set_actionElementMap(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionElementMap = value;
}
inline void Rewired::InputMapper_InputMappedEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_InputMappedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputMapper_InputMappedEventData* Rewired::InputMapper_InputMappedEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_InputMappedEventData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_InputMappedEventData::InputMapper_InputMappedEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_CanceledEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_CanceledEventData::*)(::Rewired::InputMapper*, ::StringW)>(&::Rewired::InputMapper_CanceledEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_CanceledEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::InputMapper_CanceledEventData::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Rewired::InputMapper_CanceledEventData::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Rewired::InputMapper_CanceledEventData::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Rewired::InputMapper_CanceledEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_CanceledEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputMapper_CanceledEventData* Rewired::InputMapper_CanceledEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_CanceledEventData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_CanceledEventData::InputMapper_CanceledEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_ErrorEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_ErrorEventData::*)(::Rewired::InputMapper*, ::StringW)>(&::Rewired::InputMapper_ErrorEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ErrorEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::InputMapper_ErrorEventData::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Rewired::InputMapper_ErrorEventData::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Rewired::InputMapper_ErrorEventData::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Rewired::InputMapper_ErrorEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ErrorEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputMapper_ErrorEventData* Rewired::InputMapper_ErrorEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_ErrorEventData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_ErrorEventData::InputMapper_ErrorEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_TimedOutEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_TimedOutEventData::*)(::Rewired::InputMapper*)>(&::Rewired::InputMapper_TimedOutEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_TimedOutEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::InputMapper_TimedOutEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_TimedOutEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_TimedOutEventData* Rewired::InputMapper_TimedOutEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_TimedOutEventData*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_TimedOutEventData::InputMapper_TimedOutEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_StartedEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_StartedEventData::*)(::Rewired::InputMapper*)>(&::Rewired::InputMapper_StartedEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_StartedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::InputMapper_StartedEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_StartedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_StartedEventData* Rewired::InputMapper_StartedEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_StartedEventData*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_StartedEventData::InputMapper_StartedEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_StoppedEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_StoppedEventData::*)(::Rewired::InputMapper*)>(&::Rewired::InputMapper_StoppedEventData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_StoppedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::InputMapper_StoppedEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_StoppedEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_StoppedEventData* Rewired::InputMapper_StoppedEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_StoppedEventData*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_StoppedEventData::InputMapper_StoppedEventData()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_ConflictFoundEventData.IsSwapAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_ConflictFoundEventData::*)(int32_t)>(&::Rewired::InputMapper_ConflictFoundEventData::IsSwapAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18199ae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ConflictFoundEventData*>(),
                        {"IsSwapAllowed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_ConflictFoundEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_ConflictFoundEventData::*)(::Rewired::InputMapper*, ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*, ::Rewired::ElementAssignmentInfo*, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*, bool, ::System::Func_2<int32_t,bool>*)>(&::Rewired::InputMapper_ConflictFoundEventData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18199ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ConflictFoundEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictResponse>*>(), ::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_responseCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseCallback;
}
constexpr ::System::Action_1<::Rewired::InputMapper_ConflictResponse>* const& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_responseCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseCallback;
}
constexpr void Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_set_responseCallback(::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseCallback = value;
}
constexpr ::Rewired::ElementAssignmentInfo*& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_assignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignment;
}
constexpr ::Rewired::ElementAssignmentInfo* const& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_assignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignment;
}
constexpr void Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_set_assignment(::Rewired::ElementAssignmentInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignment = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_conflicts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conflicts;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* const& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_conflicts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conflicts;
}
constexpr void Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_set_conflicts(::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conflicts = value;
}
constexpr bool& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_isProtected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isProtected;
}
constexpr bool const& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_isProtected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isProtected;
}
constexpr void Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_set_isProtected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isProtected = value;
}
constexpr ::System::Func_2<int32_t,bool>*& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_WBOlaLsJMzirogLlXNbzdpiDyaZhA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WBOlaLsJMzirogLlXNbzdpiDyaZhA;
}
constexpr ::System::Func_2<int32_t,bool>* const& Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_get_WBOlaLsJMzirogLlXNbzdpiDyaZhA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WBOlaLsJMzirogLlXNbzdpiDyaZhA;
}
constexpr void Rewired::InputMapper_ConflictFoundEventData::__cordl_internal_set_WBOlaLsJMzirogLlXNbzdpiDyaZhA(::System::Func_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WBOlaLsJMzirogLlXNbzdpiDyaZhA = value;
}
inline bool Rewired::InputMapper_ConflictFoundEventData::IsSwapAllowed(int32_t  maxInputFieldCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ConflictFoundEventData*>(),
                        {"IsSwapAllowed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, maxInputFieldCount);
}
inline void Rewired::InputMapper_ConflictFoundEventData::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, ::System::Func_2<int32_t,bool>*  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_ConflictFoundEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictResponse>*>(), ::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline ::Rewired::InputMapper_ConflictFoundEventData* Rewired::InputMapper_ConflictFoundEventData::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, ::System::Func_2<int32_t,bool>*  _cordl_fixed_empty_name_whitespace_param_5)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_ConflictFoundEventData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_ConflictFoundEventData::InputMapper_ConflictFoundEventData()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg()   {
}
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::InputMapped{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::Error{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::Canceled{static_cast<int32_t>(0x2)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::TimedOut{static_cast<int32_t>(0x3)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::Started{static_cast<int32_t>(0x4)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::Stopped{static_cast<int32_t>(0x5)};
constexpr ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg::ConflictsFound{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputMapper_Status::InputMapper_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_Status::InputMapper_Status()   {
}
constexpr ::Rewired::InputMapper_Status  Rewired::InputMapper_Status::Idle{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputMapper_Status  Rewired::InputMapper_Status::Listening{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputMapper_Status  Rewired::InputMapper_Status::AwaitingResponse{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab()   {
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab  Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab::Quit{static_cast<int32_t>(0x0)};
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab  Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab::Continue{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA()   {
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA::ConflictChecking{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.lamLUZbexqepslULteMCnWapISaM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::lamLUZbexqepslULteMCnWapISaM)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"lamLUZbexqepslULteMCnWapISaM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.YOQFyzewxulhvuapaETVClUNYbcK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::YOQFyzewxulhvuapaETVClUNYbcK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"YOQFyzewxulhvuapaETVClUNYbcK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.xTuxwDckeyEvxYMGqNGFCfvrBcPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Context* (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::xTuxwDckeyEvxYMGqNGFCfvrBcPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"xTuxwDckeyEvxYMGqNGFCfvrBcPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.xJxahfhPipuIHsrthRPMfwClLaqE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::xJxahfhPipuIHsrthRPMfwClLaqE)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"xJxahfhPipuIHsrthRPMfwClLaqE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.btigKwIbUQamLbkLgBTrPHQsGHFlc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::btigKwIbUQamLbkLgBTrPHQsGHFlc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"btigKwIbUQamLbkLgBTrPHQsGHFlc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.ujqOrAgNKsGEnDzEnavLdZRpFkBL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::ujqOrAgNKsGEnDzEnavLdZRpFkBL)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e1080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"ujqOrAgNKsGEnDzEnavLdZRpFkBL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.DEBrcYLlsFsWJyGLxLPtCGyqwPGU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::DEBrcYLlsFsWJyGLxLPtCGyqwPGU)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"DEBrcYLlsFsWJyGLxLPtCGyqwPGU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.MZLyxTGLgydQfKBRVMtvWxBkeWFI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisRange (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::MZLyxTGLgydQfKBRVMtvWxBkeWFI)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819b8410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"MZLyxTGLgydQfKBRVMtvWxBkeWFI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.scvoKYJbFGGKGsVZtdRoVhPtAffl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::scvoKYJbFGGKGsVZtdRoVhPtAffl)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819b8670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"scvoKYJbFGGKGsVZtdRoVhPtAffl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.zTSapAJxADCTUbDuDDHadoMPggwjA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)(::Rewired::Player*, ::Rewired::InputMapper_Context*)>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::zTSapAJxADCTUbDuDDHadoMPggwjA)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819b8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"zTSapAJxADCTUbDuDDHadoMPggwjA", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.qLnGbwGUwiXmjdZJuYQtpzuABVgQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::qLnGbwGUwiXmjdZJuYQtpzuABVgQA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819b8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"qLnGbwGUwiXmjdZJuYQtpzuABVgQA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.bRoxHhylipoREPAjVHPQEsiYlncfb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)(::Rewired::ControllerPollingInfo)>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::bRoxHhylipoREPAjVHPQEsiYlncfb)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819b85a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"bRoxHhylipoREPAjVHPQEsiYlncfb", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.DBlDGBXnqCuEiBYUlfMhZNDSKcif
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)(::Rewired::ControllerPollingInfo, ::Rewired::ModifierKeyFlags)>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::DBlDGBXnqCuEiBYUlfMhZNDSKcif)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819b83a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"DBlDGBXnqCuEiBYUlfMhZNDSKcif", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA.atxfFbDCJXiJDcVZGWzHbiNJFnsoB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignment (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::atxfFbDCJXiJDcVZGWzHbiNJFnsoB)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1819b8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"atxfFbDCJXiJDcVZGWzHbiNJFnsoB", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Player*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_ZEyCASCNWLRQYtfWnysJeSfnVhoK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZEyCASCNWLRQYtfWnysJeSfnVhoK;
}
constexpr ::Rewired::Player* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_ZEyCASCNWLRQYtfWnysJeSfnVhoK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZEyCASCNWLRQYtfWnysJeSfnVhoK;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_ZEyCASCNWLRQYtfWnysJeSfnVhoK(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZEyCASCNWLRQYtfWnysJeSfnVhoK = value;
}
constexpr int32_t& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_mQsddhgGZRAsbjfTQhwOtRChfadfb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mQsddhgGZRAsbjfTQhwOtRChfadfb;
}
constexpr int32_t const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_mQsddhgGZRAsbjfTQhwOtRChfadfb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mQsddhgGZRAsbjfTQhwOtRChfadfb;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_mQsddhgGZRAsbjfTQhwOtRChfadfb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mQsddhgGZRAsbjfTQhwOtRChfadfb = value;
}
constexpr ::Rewired::InputMapper_Context*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_XntyhWVWRDwjyiRLTMtWYeNcgIRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XntyhWVWRDwjyiRLTMtWYeNcgIRC;
}
constexpr ::Rewired::InputMapper_Context* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_XntyhWVWRDwjyiRLTMtWYeNcgIRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XntyhWVWRDwjyiRLTMtWYeNcgIRC;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_XntyhWVWRDwjyiRLTMtWYeNcgIRC(::Rewired::InputMapper_Context*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XntyhWVWRDwjyiRLTMtWYeNcgIRC = value;
}
constexpr ::Rewired::ControllerType& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_rSCWqKMqQeuOCHcVEvGTIAFxEGCW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rSCWqKMqQeuOCHcVEvGTIAFxEGCW;
}
constexpr ::Rewired::ControllerType const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_rSCWqKMqQeuOCHcVEvGTIAFxEGCW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rSCWqKMqQeuOCHcVEvGTIAFxEGCW;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_rSCWqKMqQeuOCHcVEvGTIAFxEGCW(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rSCWqKMqQeuOCHcVEvGTIAFxEGCW = value;
}
constexpr int32_t& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_nXmrTFKPRxdycbVyLSapcWaAGVID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nXmrTFKPRxdycbVyLSapcWaAGVID;
}
constexpr int32_t const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_nXmrTFKPRxdycbVyLSapcWaAGVID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nXmrTFKPRxdycbVyLSapcWaAGVID;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_nXmrTFKPRxdycbVyLSapcWaAGVID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nXmrTFKPRxdycbVyLSapcWaAGVID = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_XwKaSYFoetvBnEnIagkzoRysMgzuA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XwKaSYFoetvBnEnIagkzoRysMgzuA;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_XwKaSYFoetvBnEnIagkzoRysMgzuA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XwKaSYFoetvBnEnIagkzoRysMgzuA;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_XwKaSYFoetvBnEnIagkzoRysMgzuA(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XwKaSYFoetvBnEnIagkzoRysMgzuA = value;
}
constexpr ::Rewired::ModifierKeyFlags& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_OZSREDBtUlIqzhIpnfulBhLmeItRA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OZSREDBtUlIqzhIpnfulBhLmeItRA;
}
constexpr ::Rewired::ModifierKeyFlags const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_get_OZSREDBtUlIqzhIpnfulBhLmeItRA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OZSREDBtUlIqzhIpnfulBhLmeItRA;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::__cordl_internal_set_OZSREDBtUlIqzhIpnfulBhLmeItRA(::Rewired::ModifierKeyFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OZSREDBtUlIqzhIpnfulBhLmeItRA = value;
}
inline ::Rewired::Player* Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::lamLUZbexqepslULteMCnWapISaM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"lamLUZbexqepslULteMCnWapISaM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline int32_t Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::YOQFyzewxulhvuapaETVClUNYbcK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"YOQFyzewxulhvuapaETVClUNYbcK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::InputMapper_Context* Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::xTuxwDckeyEvxYMGqNGFCfvrBcPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"xTuxwDckeyEvxYMGqNGFCfvrBcPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Context*>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::xJxahfhPipuIHsrthRPMfwClLaqE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"xJxahfhPipuIHsrthRPMfwClLaqE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline int32_t Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::btigKwIbUQamLbkLgBTrPHQsGHFlc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"btigKwIbUQamLbkLgBTrPHQsGHFlc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::ujqOrAgNKsGEnDzEnavLdZRpFkBL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"ujqOrAgNKsGEnDzEnavLdZRpFkBL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::Rewired::ModifierKeyFlags Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::DEBrcYLlsFsWJyGLxLPtCGyqwPGU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"DEBrcYLlsFsWJyGLxLPtCGyqwPGU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(this, ___internal_method);
}
inline ::Rewired::AxisRange Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::MZLyxTGLgydQfKBRVMtvWxBkeWFI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"MZLyxTGLgydQfKBRVMtvWxBkeWFI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisRange>(this, ___internal_method);
}
inline ::StringW Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::scvoKYJbFGGKGsVZtdRoVhPtAffl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"scvoKYJbFGGKGsVZtdRoVhPtAffl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::zTSapAJxADCTUbDuDDHadoMPggwjA(::Rewired::Player*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"zTSapAJxADCTUbDuDDHadoMPggwjA", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::qLnGbwGUwiXmjdZJuYQtpzuABVgQA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"qLnGbwGUwiXmjdZJuYQtpzuABVgQA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ElementAssignment Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::bRoxHhylipoREPAjVHPQEsiYlncfb(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"bRoxHhylipoREPAjVHPQEsiYlncfb", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ElementAssignment Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::DBlDGBXnqCuEiBYUlfMhZNDSKcif(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"DBlDGBXnqCuEiBYUlfMhZNDSKcif", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ElementAssignment Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::atxfFbDCJXiJDcVZGWzHbiNJFnsoB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(),
                        {"atxfFbDCJXiJDcVZGWzHbiNJFnsoB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignment>(this, ___internal_method);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA* Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>());
}
// Ctor Parameters []
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA()   {
}
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA.FdMrDljItVOLQytXkSQluxnNvlMJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::*)(::Rewired::ElementAssignmentConflictInfo)>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::FdMrDljItVOLQytXkSQluxnNvlMJ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819c2820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*>(),
                        {"FdMrDljItVOLQytXkSQluxnNvlMJ", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ActionElementMap*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::__cordl_internal_get_SmgQUGFRkvKomoHqaJWOkwQuuOCl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmgQUGFRkvKomoHqaJWOkwQuuOCl;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::__cordl_internal_get_SmgQUGFRkvKomoHqaJWOkwQuuOCl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SmgQUGFRkvKomoHqaJWOkwQuuOCl;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::__cordl_internal_set_SmgQUGFRkvKomoHqaJWOkwQuuOCl(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SmgQUGFRkvKomoHqaJWOkwQuuOCl = value;
}
inline void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::FdMrDljItVOLQytXkSQluxnNvlMJ(::Rewired::ElementAssignmentConflictInfo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*>(),
                        {"FdMrDljItVOLQytXkSQluxnNvlMJ", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA* Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*>());
}
// Ctor Parameters []
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA()   {
}
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::*)()>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp.SDbUlzDPejdZAMvdKomxxpJfOELH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::*)(int32_t)>(&::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::SDbUlzDPejdZAMvdKomxxpJfOELH)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*>(),
                        {"SDbUlzDPejdZAMvdKomxxpJfOELH", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_aJblbBlOFfhQuaeFgqpzLpWtpgEuA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aJblbBlOFfhQuaeFgqpzLpWtpgEuA;
}
constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_aJblbBlOFfhQuaeFgqpzLpWtpgEuA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aJblbBlOFfhQuaeFgqpzLpWtpgEuA;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_set_aJblbBlOFfhQuaeFgqpzLpWtpgEuA(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aJblbBlOFfhQuaeFgqpzLpWtpgEuA = value;
}
constexpr ::Rewired::ElementAssignmentInfo*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_aLrWCPDKgSmMDPzjUarajmXjjnbI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aLrWCPDKgSmMDPzjUarajmXjjnbI;
}
constexpr ::Rewired::ElementAssignmentInfo* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_aLrWCPDKgSmMDPzjUarajmXjjnbI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aLrWCPDKgSmMDPzjUarajmXjjnbI;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_set_aLrWCPDKgSmMDPzjUarajmXjjnbI(::Rewired::ElementAssignmentInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aLrWCPDKgSmMDPzjUarajmXjjnbI = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_VXYiUbHpyLqBuHGysHZYykmdjEdw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXYiUbHpyLqBuHGysHZYykmdjEdw;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_VXYiUbHpyLqBuHGysHZYykmdjEdw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXYiUbHpyLqBuHGysHZYykmdjEdw;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_set_VXYiUbHpyLqBuHGysHZYykmdjEdw(::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VXYiUbHpyLqBuHGysHZYykmdjEdw = value;
}
constexpr bool& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_EGGgzVjXRdKlnOrokuudymupuDJv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EGGgzVjXRdKlnOrokuudymupuDJv;
}
constexpr bool const& Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_get_EGGgzVjXRdKlnOrokuudymupuDJv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EGGgzVjXRdKlnOrokuudymupuDJv;
}
constexpr void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::__cordl_internal_set_EGGgzVjXRdKlnOrokuudymupuDJv(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EGGgzVjXRdKlnOrokuudymupuDJv = value;
}
inline void Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::SDbUlzDPejdZAMvdKomxxpJfOELH(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*>(),
                        {"SDbUlzDPejdZAMvdKomxxpJfOELH", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp* Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*>());
}
// Ctor Parameters []
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.AbYCyopvHHgBLfAomjjPksbIDlVT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Status (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::AbYCyopvHHgBLfAomjjPksbIDlVT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"AbYCyopvHHgBLfAomjjPksbIDlVT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.ZRHRTtPToWjHRuSfnNnIWieIkdec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ZRHRTtPToWjHRuSfnNnIWieIkdec)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819ab690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ZRHRTtPToWjHRuSfnNnIWieIkdec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.gyhVPexpbnDApepIYqgKyIhtEdaz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Context* (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::gyhVPexpbnDApepIYqgKyIhtEdaz)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819ac210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"gyhVPexpbnDApepIYqgKyIhtEdaz", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.jHEfOhuwNKdsdhpBISpZcufStlHdb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jHEfOhuwNKdsdhpBISpZcufStlHdb)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819ac240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jHEfOhuwNKdsdhpBISpZcufStlHdb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper*, ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819ab720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.HFpGCvYFfmRlNFmuBDnWiVqNNHJaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::HFpGCvYFfmRlNFmuBDnWiVqNNHJaA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                    {::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.aCAIkQedIipwdGJTLRAMhxBtxqmWA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_Context*, ::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aCAIkQedIipwdGJTLRAMhxBtxqmWA)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1819ab850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aCAIkQedIipwdGJTLRAMhxBtxqmWA", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.HOEKAXscZTeyScDTVPDVprhuBVMbb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::StringW)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::HOEKAXscZTeyScDTVPDVprhuBVMbb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819a9cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"HOEKAXscZTeyScDTVPDVprhuBVMbb", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.zBIXSgYHqUBopHcKoJoepLyyuCZV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::UpdateLoopType)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zBIXSgYHqUBopHcKoJoepLyyuCZV)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1819ad680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zBIXSgYHqUBopHcKoJoepLyyuCZV", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.QRRETLNTXibqLyBWgGxJFyYnkrWJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::QRRETLNTXibqLyBWgGxJFyYnkrWJ)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819aa980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"QRRETLNTXibqLyBWgGxJFyYnkrWJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.QETpeqeHAflZJhThZJnXsMnDIkGdA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::QETpeqeHAflZJhThZJnXsMnDIkGdA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819aa8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"QETpeqeHAflZJhThZJnXsMnDIkGdA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.VSfrykVoPJOAhRLhaLJUlUHlTfgO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::by_ref<::Rewired::ElementAssignment>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::VSfrykVoPJOAhRLhaLJUlUHlTfgO)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1819aaef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"VSfrykVoPJOAhRLhaLJUlUHlTfgO", {}, {::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.UTMgblTjYncbuDGLLufOkhXtuttDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::by_ref<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>, ::by_ref<::Rewired::ModifierKeyFlags>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::UTMgblTjYncbuDGLLufOkhXtuttDA)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1819aaac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"UTMgblTjYncbuDGLLufOkhXtuttDA", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.oBonKlaJCdXwbbYkPHAFMGOUaLRx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::by_ref<::Rewired::ModifierKeyFlags>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::oBonKlaJCdXwbbYkPHAFMGOUaLRx)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1819ac800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"oBonKlaJCdXwbbYkPHAFMGOUaLRx", {}, {::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.ezzUkpLgsJbWmEYCngKCCxHTotIKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_Options*, ::by_ref<::Rewired::ModifierKeyFlags>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ezzUkpLgsJbWmEYCngKCCxHTotIKA)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819abff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ezzUkpLgsJbWmEYCngKCCxHTotIKA", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.sxUkOgfzGKVEzyUVXFVvTnRUDvHZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (*)(::Rewired::InputMapper_Options*, ::by_ref<bool>, ::by_ref<::Rewired::ModifierKeyFlags>, ::by_ref<::StringW>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::sxUkOgfzGKVEzyUVXFVvTnRUDvHZ)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1819acb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"sxUkOgfzGKVEzyUVXFVvTnRUDvHZ", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.wQrACkRuKxBJmfkymCjkaVLEandfb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerPollingInfo, ::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::wQrACkRuKxBJmfkymCjkaVLEandfb)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819ad3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"wQrACkRuKxBJmfkymCjkaVLEandfb", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.LVRiXbnRfzSFBoSNtHWWOndCtSVS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ControllerPollingInfo, ::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LVRiXbnRfzSFBoSNtHWWOndCtSVS)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819a9f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LVRiXbnRfzSFBoSNtHWWOndCtSVS", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.jMxqwJSnlJSeowpAeIZPpmIEoOkh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jMxqwJSnlJSeowpAeIZPpmIEoOkh)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1819ac280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jMxqwJSnlJSeowpAeIZPpmIEoOkh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.BsSFVTDhXRUJuubxiJooTRbTLjzk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ElementAssignment)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::BsSFVTDhXRUJuubxiJooTRbTLjzk)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1819a9a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"BsSFVTDhXRUJuubxiJooTRbTLjzk", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.kGXATKjTLwMMWvRnKugXYzXXxWGD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, ::System::Collections::Generic::List_1<::Rewired::Player*>*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::kGXATKjTLwMMWvRnKugXYzXXxWGD)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819ac6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"kGXATKjTLwMMWvRnKugXYzXXxWGD", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.XaCCvJeJeBozyoZyzdEpqOdnrDsv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, ::System::Collections::Generic::List_1<::Rewired::Player*>*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::XaCCvJeJeBozyoZyzdEpqOdnrDsv)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1819ab330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"XaCCvJeJeBozyoZyzdEpqOdnrDsv", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.dKHeobyUiakYHFFjxVnlfHyWEcUL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, ::System::Collections::Generic::List_1<::Rewired::Player*>*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::dKHeobyUiakYHFFjxVnlfHyWEcUL)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1819abd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"dKHeobyUiakYHFFjxVnlfHyWEcUL", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.sHlAhgtKjqWUCSTmZFqbLGskwXDe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, ::by_ref<::Rewired::ElementAssignmentConflictCheck>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::sHlAhgtKjqWUCSTmZFqbLGskwXDe)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819aca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"sHlAhgtKjqWUCSTmZFqbLGskwXDe", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignmentConflictCheck>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.aPGnfiXLZVJHFVHSAOMMLttZtJot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, ::System::Collections::Generic::List_1<::Rewired::Player*>*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aPGnfiXLZVJHFVHSAOMMLttZtJot)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1819abac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aPGnfiXLZVJHFVHSAOMMLttZtJot", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.DUcAMbWfHCGItxpKvictGTYcQsYY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::DUcAMbWfHCGItxpKvictGTYcQsYY)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"DUcAMbWfHCGItxpKvictGTYcQsYY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.LZcpHEsDattrkYURJTSEzkNhhTAJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LZcpHEsDattrkYURJTSEzkNhhTAJA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LZcpHEsDattrkYURJTSEzkNhhTAJA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.fmOdEKVSMiPEahzwdpKcqewZBLay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::fmOdEKVSMiPEahzwdpKcqewZBLay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819ac1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"fmOdEKVSMiPEahzwdpKcqewZBLay", {}, {::i2c::type_of<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.RqfNdNIDuOpfXssvQopKpPDggRbiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::RqfNdNIDuOpfXssvQopKpPDggRbiA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819aaa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"RqfNdNIDuOpfXssvQopKpPDggRbiA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.JKdMIclhwWnaNIeJRDZdcSVUElQTA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::JKdMIclhwWnaNIeJRDZdcSVUElQTA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181511d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"JKdMIclhwWnaNIeJRDZdcSVUElQTA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.LiiyYiKAExDtnZzFGTDNqYhKrNIe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ElementAssignmentInfo*, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*, bool, int32_t)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LiiyYiKAExDtnZzFGTDNqYhKrNIe)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x1819aa070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LiiyYiKAExDtnZzFGTDNqYhKrNIe", {}, {::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.zSkKBaYefpqNpUvXjYDPniMiidMp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, ::Rewired::ElementAssignment, bool, ::by_ref<::StringW>)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zSkKBaYefpqNpUvXjYDPniMiidMp)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1819ada40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zSkKBaYefpqNpUvXjYDPniMiidMp", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.NCNRvGZvNzdbJujkdRdypgdXUsgB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerElementType, ::Rewired::AxisRange, ::Rewired::Pole, ::Rewired::ControllerElementType, ::Rewired::AxisRange, ::Rewired::Pole)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::NCNRvGZvNzdbJujkdRdypgdXUsgB)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819aa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"NCNRvGZvNzdbJujkdRdypgdXUsgB", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.LcLvVFDJIYixCjpPmWMqZJwocVuV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ActionElementMap*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LcLvVFDJIYixCjpPmWMqZJwocVuV)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819a9fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LcLvVFDJIYixCjpPmWMqZJwocVuV", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.ITaMVJKluJAcdflIJSJxujZNTPV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::StringW)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ITaMVJKluJAcdflIJSJxujZNTPV)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819a9d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ITaMVJKluJAcdflIJSJxujZNTPV", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.BKEeBrHDClnVjzPMZQLqvUrdbPVD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ElementAssignment)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::BKEeBrHDClnVjzPMZQLqvUrdbPVD)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1819a9710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"BKEeBrHDClnVjzPMZQLqvUrdbPVD", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.wBBgZLbtGMCWjMlOFNLuebpdmwSEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_ConflictResponse, ::Rewired::ElementAssignment)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::wBBgZLbtGMCWjMlOFNLuebpdmwSEA)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1819ad210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"wBBgZLbtGMCWjMlOFNLuebpdmwSEA", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>(), ::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.OcoPSmdgzMOztJoNRfFwiJBmxTDy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_ConflictResponse, ::Rewired::ElementAssignment, bool)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::OcoPSmdgzMOztJoNRfFwiJBmxTDy)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1819aa790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"OcoPSmdgzMOztJoNRfFwiJBmxTDy", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.jpOpHIskMCjVzfWwEYtUrPlCKhPi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jpOpHIskMCjVzfWwEYtUrPlCKhPi)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819ac630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jpOpHIskMCjVzfWwEYtUrPlCKhPi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.ucUDluvdixfNkmerQbGgJuBVXbgtA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::StringW)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ucUDluvdixfNkmerQbGgJuBVXbgtA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819ad140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ucUDluvdixfNkmerQbGgJuBVXbgtA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.KqPQoTUlxiQShVRbVGHhGreXmFhC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::KqPQoTUlxiQShVRbVGHhGreXmFhC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a9e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"KqPQoTUlxiQShVRbVGHhGreXmFhC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.ZPmhZLyHLwQsAYhmdbfxnsuheEckA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ZPmhZLyHLwQsAYhmdbfxnsuheEckA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819ab630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ZPmhZLyHLwQsAYhmdbfxnsuheEckA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.yxRgrwNAjsMCXRnFGkaZsORKuiOU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ElementAssignment)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::yxRgrwNAjsMCXRnFGkaZsORKuiOU)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1819ad540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"yxRgrwNAjsMCXRnFGkaZsORKuiOU", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.fVNayPIbxeYBnFGeiRgRONGLzVRk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ActionElementMap*)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::fVNayPIbxeYBnFGeiRgRONGLzVRk)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819ac100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"fVNayPIbxeYBnFGeiRgRONGLzVRk", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.aasteOnNbNeuDVAOebnpyOSktRmV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aasteOnNbNeuDVAOebnpyOSktRmV)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819abc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aasteOnNbNeuDVAOebnpyOSktRmV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.xHcOCeNHRZddNzseytxoXwtQubAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::StringW)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::xHcOCeNHRZddNzseytxoXwtQubAA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819ad480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"xHcOCeNHRZddNzseytxoXwtQubAA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.IYecJdJvSIkYTKKgtcZlIJZtbOIJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::StringW)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::IYecJdJvSIkYTKKgtcZlIJZtbOIJ)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819a9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"IYecJdJvSIkYTKKgtcZlIJZtbOIJ", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.zjQsgKkevXcLNBqbAgvMAQrCbxYib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::ElementAssignmentInfo*, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*, bool)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zjQsgKkevXcLNBqbAgvMAQrCbxYib)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1819ade40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zjQsgKkevXcLNBqbAgvMAQrCbxYib", {}, {::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.YaTvoeBxrXKWPquqUeLYEHGIYquw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::YaTvoeBxrXKWPquqUeLYEHGIYquw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819ab580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"YaTvoeBxrXKWPquqUeLYEHGIYquw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.qVasuIpNPueKYHLjKajLPanVVRNaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)()>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::qVasuIpNPueKYHLjKajLPanVVRNaA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819ac9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"qVasuIpNPueKYHLjKajLPanVVRNaA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs.WXyGFvZhpYcjFIVCTdNxkAZGuyxr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::*)(::Rewired::InputMapper_ConflictResponse)>(&::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::WXyGFvZhpYcjFIVCTdNxkAZGuyxr)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819ab230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"WXyGFvZhpYcjFIVCTdNxkAZGuyxr", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputMapper*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_PzyRZlWVHxLeHuNWRzkBgLKEZTmH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PzyRZlWVHxLeHuNWRzkBgLKEZTmH;
}
constexpr ::Rewired::InputMapper* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_PzyRZlWVHxLeHuNWRzkBgLKEZTmH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PzyRZlWVHxLeHuNWRzkBgLKEZTmH;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_PzyRZlWVHxLeHuNWRzkBgLKEZTmH(::Rewired::InputMapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PzyRZlWVHxLeHuNWRzkBgLKEZTmH = value;
}
constexpr ::Rewired::InputMapper_Options*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_QglVwkutmtlXNsctFCoIDGSBgboQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QglVwkutmtlXNsctFCoIDGSBgboQ;
}
constexpr ::Rewired::InputMapper_Options* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_QglVwkutmtlXNsctFCoIDGSBgboQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QglVwkutmtlXNsctFCoIDGSBgboQ;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_QglVwkutmtlXNsctFCoIDGSBgboQ(::Rewired::InputMapper_Options*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QglVwkutmtlXNsctFCoIDGSBgboQ = value;
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_hzAIybsdltoooGmWBqliriBMoJsv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hzAIybsdltoooGmWBqliriBMoJsv;
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_hzAIybsdltoooGmWBqliriBMoJsv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hzAIybsdltoooGmWBqliriBMoJsv;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_hzAIybsdltoooGmWBqliriBMoJsv(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hzAIybsdltoooGmWBqliriBMoJsv = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_OeycipqVSKKCeeEhvLqFXMxwIMkw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OeycipqVSKKCeeEhvLqFXMxwIMkw;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_OeycipqVSKKCeeEhvLqFXMxwIMkw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OeycipqVSKKCeeEhvLqFXMxwIMkw;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_OeycipqVSKKCeeEhvLqFXMxwIMkw(::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OeycipqVSKKCeeEhvLqFXMxwIMkw = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_CtxTlCmVPbhHdyedeGJBJIQXLpmM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CtxTlCmVPbhHdyedeGJBJIQXLpmM;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_CtxTlCmVPbhHdyedeGJBJIQXLpmM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CtxTlCmVPbhHdyedeGJBJIQXLpmM;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_CtxTlCmVPbhHdyedeGJBJIQXLpmM(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CtxTlCmVPbhHdyedeGJBJIQXLpmM = value;
}
constexpr ::Rewired::InputMapper_Status& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_zzEokIJtrhIOMHhHIebmDNoaeimk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zzEokIJtrhIOMHhHIebmDNoaeimk;
}
constexpr ::Rewired::InputMapper_Status const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_zzEokIJtrhIOMHhHIebmDNoaeimk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zzEokIJtrhIOMHhHIebmDNoaeimk;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_zzEokIJtrhIOMHhHIebmDNoaeimk(::Rewired::InputMapper_Status  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zzEokIJtrhIOMHhHIebmDNoaeimk = value;
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_sOmHWJDYMReeiaTCdkhYgWWrHbsA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sOmHWJDYMReeiaTCdkhYgWWrHbsA;
}
constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_sOmHWJDYMReeiaTCdkhYgWWrHbsA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sOmHWJDYMReeiaTCdkhYgWWrHbsA;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_sOmHWJDYMReeiaTCdkhYgWWrHbsA(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sOmHWJDYMReeiaTCdkhYgWWrHbsA = value;
}
constexpr double_t& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_ZJnUBlTMbZQNvUtRSXXtFjxsfydA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZJnUBlTMbZQNvUtRSXXtFjxsfydA;
}
constexpr double_t const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_ZJnUBlTMbZQNvUtRSXXtFjxsfydA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZJnUBlTMbZQNvUtRSXXtFjxsfydA;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_ZJnUBlTMbZQNvUtRSXXtFjxsfydA(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZJnUBlTMbZQNvUtRSXXtFjxsfydA = value;
}
constexpr bool& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_rFXWhJKwZdmmcZJcGEZfiTJVeIaO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rFXWhJKwZdmmcZJcGEZfiTJVeIaO;
}
constexpr bool const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_rFXWhJKwZdmmcZJcGEZfiTJVeIaO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rFXWhJKwZdmmcZJcGEZfiTJVeIaO;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_rFXWhJKwZdmmcZJcGEZfiTJVeIaO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rFXWhJKwZdmmcZJcGEZfiTJVeIaO = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Player*>*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_vrbhlNOOddXsmtPuYbUydXETxvXAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrbhlNOOddXsmtPuYbUydXETxvXAA;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Player*>* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_vrbhlNOOddXsmtPuYbUydXETxvXAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrbhlNOOddXsmtPuYbUydXETxvXAA;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_vrbhlNOOddXsmtPuYbUydXETxvXAA(::System::Collections::Generic::List_1<::Rewired::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrbhlNOOddXsmtPuYbUydXETxvXAA = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_hzatymNpEnCVyuiofrgLaPZCViRu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hzatymNpEnCVyuiofrgLaPZCViRu;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>* const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_hzatymNpEnCVyuiofrgLaPZCViRu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hzatymNpEnCVyuiofrgLaPZCViRu;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_hzatymNpEnCVyuiofrgLaPZCViRu(::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hzatymNpEnCVyuiofrgLaPZCViRu = value;
}
constexpr ::Rewired::ElementAssignment& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_aQimApvdrndeegOztnBRPdKqquEJA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQimApvdrndeegOztnBRPdKqquEJA;
}
constexpr ::Rewired::ElementAssignment const& Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_get_aQimApvdrndeegOztnBRPdKqquEJA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQimApvdrndeegOztnBRPdKqquEJA;
}
constexpr void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::__cordl_internal_set_aQimApvdrndeegOztnBRPdKqquEJA(::Rewired::ElementAssignment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aQimApvdrndeegOztnBRPdKqquEJA = value;
}
inline ::Rewired::InputMapper_Status Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::AbYCyopvHHgBLfAomjjPksbIDlVT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"AbYCyopvHHgBLfAomjjPksbIDlVT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Status>(this, ___internal_method);
}
inline float_t Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ZRHRTtPToWjHRuSfnNnIWieIkdec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ZRHRTtPToWjHRuSfnNnIWieIkdec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Rewired::InputMapper_Context* Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::gyhVPexpbnDApepIYqgKyIhtEdaz()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"gyhVPexpbnDApepIYqgKyIhtEdaz", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Context*>(this, ___internal_method);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jHEfOhuwNKdsdhpBISpZcufStlHdb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jHEfOhuwNKdsdhpBISpZcufStlHdb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::HFpGCvYFfmRlNFmuBDnWiVqNNHJaA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aCAIkQedIipwdGJTLRAMhxBtxqmWA(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aCAIkQedIipwdGJTLRAMhxBtxqmWA", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::HOEKAXscZTeyScDTVPDVprhuBVMbb(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"HOEKAXscZTeyScDTVPDVprhuBVMbb", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zBIXSgYHqUBopHcKoJoepLyyuCZV(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zBIXSgYHqUBopHcKoJoepLyyuCZV", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::QRRETLNTXibqLyBWgGxJFyYnkrWJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"QRRETLNTXibqLyBWgGxJFyYnkrWJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::QETpeqeHAflZJhThZJnXsMnDIkGdA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"QETpeqeHAflZJhThZJnXsMnDIkGdA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::VSfrykVoPJOAhRLhaLJUlUHlTfgO(::by_ref<::Rewired::ElementAssignment>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"VSfrykVoPJOAhRLhaLJUlUHlTfgO", {}, {::i2c::type_of<::by_ref<::Rewired::ElementAssignment>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::UTMgblTjYncbuDGLLufOkhXtuttDA(::by_ref<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"UTMgblTjYncbuDGLLufOkhXtuttDA", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::oBonKlaJCdXwbbYkPHAFMGOUaLRx(::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"oBonKlaJCdXwbbYkPHAFMGOUaLRx", {}, {::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerPollingInfo Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ezzUkpLgsJbWmEYCngKCCxHTotIKA(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ezzUkpLgsJbWmEYCngKCCxHTotIKA", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerPollingInfo Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::sxUkOgfzGKVEzyUVXFVvTnRUDvHZ(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"sxUkOgfzGKVEzyUVXFVvTnRUDvHZ", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Rewired::ModifierKeyFlags>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::wQrACkRuKxBJmfkymCjkaVLEandfb(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"wQrACkRuKxBJmfkymCjkaVLEandfb", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LVRiXbnRfzSFBoSNtHWWOndCtSVS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LVRiXbnRfzSFBoSNtHWWOndCtSVS", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ControllerPollingInfo>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jMxqwJSnlJSeowpAeIZPpmIEoOkh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jMxqwJSnlJSeowpAeIZPpmIEoOkh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::BsSFVTDhXRUJuubxiJooTRbTLjzk(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"BsSFVTDhXRUJuubxiJooTRbTLjzk", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::kGXATKjTLwMMWvRnKugXYzXXxWGD(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"kGXATKjTLwMMWvRnKugXYzXXxWGD", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::XaCCvJeJeBozyoZyzdEpqOdnrDsv(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"XaCCvJeJeBozyoZyzdEpqOdnrDsv", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::dKHeobyUiakYHFFjxVnlfHyWEcUL(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"dKHeobyUiakYHFFjxVnlfHyWEcUL", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::sHlAhgtKjqWUCSTmZFqbLGskwXDe(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::ElementAssignmentConflictCheck>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"sHlAhgtKjqWUCSTmZFqbLGskwXDe", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ElementAssignmentConflictCheck>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aPGnfiXLZVJHFVHSAOMMLttZtJot(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aPGnfiXLZVJHFVHSAOMMLttZtJot", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::DUcAMbWfHCGItxpKvictGTYcQsYY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"DUcAMbWfHCGItxpKvictGTYcQsYY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LZcpHEsDattrkYURJTSEzkNhhTAJA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LZcpHEsDattrkYURJTSEzkNhhTAJA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::fmOdEKVSMiPEahzwdpKcqewZBLay(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"fmOdEKVSMiPEahzwdpKcqewZBLay", {}, {::i2c::type_of<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename >
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::YfootQJXNiRAYHuYqbdtPIQZyFrI(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                    {"YfootQJXNiRAYHuYqbdtPIQZyFrI", {::i2c::class_of<>()}, {::i2c::type_of<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg>(), ::i2c::type_of<>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::RqfNdNIDuOpfXssvQopKpPDggRbiA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"RqfNdNIDuOpfXssvQopKpPDggRbiA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::JKdMIclhwWnaNIeJRDZdcSVUElQTA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"JKdMIclhwWnaNIeJRDZdcSVUElQTA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LiiyYiKAExDtnZzFGTDNqYhKrNIe(::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LiiyYiKAExDtnZzFGTDNqYhKrNIe", {}, {::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zSkKBaYefpqNpUvXjYDPniMiidMp(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zSkKBaYefpqNpUvXjYDPniMiidMp", {}, {::i2c::type_of<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::NCNRvGZvNzdbJujkdRdypgdXUsgB(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"NCNRvGZvNzdbJujkdRdypgdXUsgB", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::LcLvVFDJIYixCjpPmWMqZJwocVuV(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"LcLvVFDJIYixCjpPmWMqZJwocVuV", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ITaMVJKluJAcdflIJSJxujZNTPV(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ITaMVJKluJAcdflIJSJxujZNTPV", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::BKEeBrHDClnVjzPMZQLqvUrdbPVD(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"BKEeBrHDClnVjzPMZQLqvUrdbPVD", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::wBBgZLbtGMCWjMlOFNLuebpdmwSEA(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"wBBgZLbtGMCWjMlOFNLuebpdmwSEA", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>(), ::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::OcoPSmdgzMOztJoNRfFwiJBmxTDy(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"OcoPSmdgzMOztJoNRfFwiJBmxTDy", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>(), ::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::jpOpHIskMCjVzfWwEYtUrPlCKhPi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"jpOpHIskMCjVzfWwEYtUrPlCKhPi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ucUDluvdixfNkmerQbGgJuBVXbgtA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ucUDluvdixfNkmerQbGgJuBVXbgtA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::KqPQoTUlxiQShVRbVGHhGreXmFhC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"KqPQoTUlxiQShVRbVGHhGreXmFhC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::ZPmhZLyHLwQsAYhmdbfxnsuheEckA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"ZPmhZLyHLwQsAYhmdbfxnsuheEckA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::yxRgrwNAjsMCXRnFGkaZsORKuiOU(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"yxRgrwNAjsMCXRnFGkaZsORKuiOU", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::fVNayPIbxeYBnFGeiRgRONGLzVRk(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"fVNayPIbxeYBnFGeiRgRONGLzVRk", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::aasteOnNbNeuDVAOebnpyOSktRmV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"aasteOnNbNeuDVAOebnpyOSktRmV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::xHcOCeNHRZddNzseytxoXwtQubAA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"xHcOCeNHRZddNzseytxoXwtQubAA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::IYecJdJvSIkYTKKgtcZlIJZtbOIJ(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"IYecJdJvSIkYTKKgtcZlIJZtbOIJ", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::zjQsgKkevXcLNBqbAgvMAQrCbxYib(::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"zjQsgKkevXcLNBqbAgvMAQrCbxYib", {}, {::i2c::type_of<::Rewired::ElementAssignmentInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::YaTvoeBxrXKWPquqUeLYEHGIYquw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"YaTvoeBxrXKWPquqUeLYEHGIYquw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::qVasuIpNPueKYHLjKajLPanVVRNaA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"qVasuIpNPueKYHLjKajLPanVVRNaA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::WXyGFvZhpYcjFIVCTdNxkAZGuyxr(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(),
                        {"WXyGFvZhpYcjFIVCTdNxkAZGuyxr", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs()   {
}
//  Writing Method size for method: ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::*)()>(&::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA.pdSHRNsfeGDrizowZnAjdGdLbnag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::*)(::System::Exception*)>(&::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::pdSHRNsfeGDrizowZnAjdGdLbnag)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c2890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(),
                        {"pdSHRNsfeGDrizowZnAjdGdLbnag", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::setStaticF___9(::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*  value)  {
::cordl_internals::setStaticField<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*, "<>9", ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(std::forward<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(value));
}
inline ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA* Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*, "<>9", ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>();
}
inline void Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::setStaticF___9__64_0(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__64_0", ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::getStaticF___9__64_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__64_0", ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>();
}
inline void Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::pdSHRNsfeGDrizowZnAjdGdLbnag(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>(),
                        {"pdSHRNsfeGDrizowZnAjdGdLbnag", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA* Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*>());
}
// Ctor Parameters []
constexpr ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_allowAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_allowAxes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_allowAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_allowAxes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowAxes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_allowButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_allowButtons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_allowButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_allowButtons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowButtons", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_allowButtonsOnFullAxisAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_allowButtonsOnFullAxisAssignment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180e837b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowButtonsOnFullAxisAssignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_allowButtonsOnFullAxisAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_allowButtonsOnFullAxisAssignment)> {
  constexpr static std::size_t size = 0x2de0;
  constexpr static std::size_t addrs = 0x181014340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowButtonsOnFullAxisAssignment", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_timeout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_timeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(float_t)>(&::Rewired::InputMapper_Options::set_timeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819b9650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_timeout", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_checkForConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_checkForConflicts)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflicts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_checkForConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_checkForConflicts)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflicts", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_checkForConflictsWithAllPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_checkForConflictsWithAllPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithAllPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_checkForConflictsWithAllPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_checkForConflictsWithAllPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818376c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithAllPlayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_checkForConflictsWithSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_checkForConflictsWithSelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithSelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_checkForConflictsWithSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_checkForConflictsWithSelf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithSelf", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_checkForConflictsWithSystemPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_checkForConflictsWithSystemPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithSystemPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_checkForConflictsWithSystemPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_checkForConflictsWithSystemPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithSystemPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_checkForConflictsWithPlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_checkForConflictsWithPlayerIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithPlayerIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_checkForConflictsWithPlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(::ArrayW<int32_t>)>(&::Rewired::InputMapper_Options::set_checkForConflictsWithPlayerIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithPlayerIds", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_defaultActionWhenConflictFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_ConflictResponse (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_defaultActionWhenConflictFound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_defaultActionWhenConflictFound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_defaultActionWhenConflictFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(::Rewired::InputMapper_ConflictResponse)>(&::Rewired::InputMapper_Options::set_defaultActionWhenConflictFound)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_defaultActionWhenConflictFound", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_ignoreMouseXAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_ignoreMouseXAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_ignoreMouseXAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_ignoreMouseXAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_ignoreMouseXAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_ignoreMouseXAxis", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_ignoreMouseYAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_ignoreMouseYAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_ignoreMouseYAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_ignoreMouseYAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_ignoreMouseYAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_ignoreMouseYAxis", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_allowKeyboardKeysWithModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_allowKeyboardKeysWithModifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowKeyboardKeysWithModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_allowKeyboardKeysWithModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_allowKeyboardKeysWithModifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b94f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowKeyboardKeysWithModifiers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_allowKeyboardModifierKeyAsPrimary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_allowKeyboardModifierKeyAsPrimary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowKeyboardModifierKeyAsPrimary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_allowKeyboardModifierKeyAsPrimary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(bool)>(&::Rewired::InputMapper_Options::set_allowKeyboardModifierKeyAsPrimary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowKeyboardModifierKeyAsPrimary", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_holdDurationToMapKeyboardModifierKeyAsPrimary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_holdDurationToMapKeyboardModifierKeyAsPrimary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_holdDurationToMapKeyboardModifierKeyAsPrimary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_holdDurationToMapKeyboardModifierKeyAsPrimary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(float_t)>(&::Rewired::InputMapper_Options::set_holdDurationToMapKeyboardModifierKeyAsPrimary)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819b9520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_holdDurationToMapKeyboardModifierKeyAsPrimary", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.get_isElementAllowedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Predicate_1<::Rewired::ControllerPollingInfo>* (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::get_isElementAllowedCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819b9470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_isElementAllowedCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.set_isElementAllowedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(::System::Predicate_1<::Rewired::ControllerPollingInfo>*)>(&::Rewired::InputMapper_Options::set_isElementAllowedCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819b9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_isElementAllowedCallback", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ControllerPollingInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1819b91b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)(::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper_Options::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1819b8fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Options* (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::Clone)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1819b8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::ToString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1819b8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                    {::i2c::class_of<::Rewired::InputMapper_Options*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.aOdMjQeQvhrIYjIfHZJeroswVvxI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_Options::*)()>(&::Rewired::InputMapper_Options::aOdMjQeQvhrIYjIfHZJeroswVvxI)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819b9330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"aOdMjQeQvhrIYjIfHZJeroswVvxI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_Options.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::InputMapper_Options*, ::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper_Options::Copy)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1819b8a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_bxpKgyzlyJprLPqLmqnBFHEtIcaP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bxpKgyzlyJprLPqLmqnBFHEtIcaP;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_bxpKgyzlyJprLPqLmqnBFHEtIcaP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bxpKgyzlyJprLPqLmqnBFHEtIcaP;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_bxpKgyzlyJprLPqLmqnBFHEtIcaP(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bxpKgyzlyJprLPqLmqnBFHEtIcaP = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_ujwAldesPearzIkFzPlwRejZCHlm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ujwAldesPearzIkFzPlwRejZCHlm;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_ujwAldesPearzIkFzPlwRejZCHlm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ujwAldesPearzIkFzPlwRejZCHlm;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_ujwAldesPearzIkFzPlwRejZCHlm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ujwAldesPearzIkFzPlwRejZCHlm = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_OtHEBtpPgJxsqXWzBBnpdSctVvxU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OtHEBtpPgJxsqXWzBBnpdSctVvxU;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_OtHEBtpPgJxsqXWzBBnpdSctVvxU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OtHEBtpPgJxsqXWzBBnpdSctVvxU;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_OtHEBtpPgJxsqXWzBBnpdSctVvxU(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OtHEBtpPgJxsqXWzBBnpdSctVvxU = value;
}
constexpr float_t& Rewired::InputMapper_Options::__cordl_internal_get_dpMEbjkjhtsUlbdskqgzgtjMKwJbb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpMEbjkjhtsUlbdskqgzgtjMKwJbb;
}
constexpr float_t const& Rewired::InputMapper_Options::__cordl_internal_get_dpMEbjkjhtsUlbdskqgzgtjMKwJbb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpMEbjkjhtsUlbdskqgzgtjMKwJbb;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_dpMEbjkjhtsUlbdskqgzgtjMKwJbb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpMEbjkjhtsUlbdskqgzgtjMKwJbb = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_VKFOpPwhEkFDbYfYGAscKKxiqNIDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VKFOpPwhEkFDbYfYGAscKKxiqNIDb;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_VKFOpPwhEkFDbYfYGAscKKxiqNIDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VKFOpPwhEkFDbYfYGAscKKxiqNIDb;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_VKFOpPwhEkFDbYfYGAscKKxiqNIDb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VKFOpPwhEkFDbYfYGAscKKxiqNIDb = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_LdusojErgbWllycEKxWyyBAPMwgE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LdusojErgbWllycEKxWyyBAPMwgE;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_LdusojErgbWllycEKxWyyBAPMwgE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LdusojErgbWllycEKxWyyBAPMwgE;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_LdusojErgbWllycEKxWyyBAPMwgE(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LdusojErgbWllycEKxWyyBAPMwgE = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_CHfCPojorPEmKSdQWLYjGNFKxCMB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CHfCPojorPEmKSdQWLYjGNFKxCMB;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_CHfCPojorPEmKSdQWLYjGNFKxCMB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CHfCPojorPEmKSdQWLYjGNFKxCMB;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_CHfCPojorPEmKSdQWLYjGNFKxCMB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CHfCPojorPEmKSdQWLYjGNFKxCMB = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_ugwJjATsbAskhWkeIpWEnfubiiQm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ugwJjATsbAskhWkeIpWEnfubiiQm;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_ugwJjATsbAskhWkeIpWEnfubiiQm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ugwJjATsbAskhWkeIpWEnfubiiQm;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_ugwJjATsbAskhWkeIpWEnfubiiQm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ugwJjATsbAskhWkeIpWEnfubiiQm = value;
}
constexpr ::ArrayW<int32_t>& Rewired::InputMapper_Options::__cordl_internal_get_LIfZRMiArInpDYtntFbgsXRnbIBu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LIfZRMiArInpDYtntFbgsXRnbIBu;
}
constexpr ::ArrayW<int32_t> const& Rewired::InputMapper_Options::__cordl_internal_get_LIfZRMiArInpDYtntFbgsXRnbIBu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LIfZRMiArInpDYtntFbgsXRnbIBu;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_LIfZRMiArInpDYtntFbgsXRnbIBu(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LIfZRMiArInpDYtntFbgsXRnbIBu = value;
}
constexpr ::Rewired::InputMapper_ConflictResponse& Rewired::InputMapper_Options::__cordl_internal_get_lMBGfsFZseUSZQWjDpzeTiXWfEUXA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lMBGfsFZseUSZQWjDpzeTiXWfEUXA;
}
constexpr ::Rewired::InputMapper_ConflictResponse const& Rewired::InputMapper_Options::__cordl_internal_get_lMBGfsFZseUSZQWjDpzeTiXWfEUXA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lMBGfsFZseUSZQWjDpzeTiXWfEUXA;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_lMBGfsFZseUSZQWjDpzeTiXWfEUXA(::Rewired::InputMapper_ConflictResponse  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lMBGfsFZseUSZQWjDpzeTiXWfEUXA = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_lcsVoWkBzCqHfRAxbodJvdgxydak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lcsVoWkBzCqHfRAxbodJvdgxydak;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_lcsVoWkBzCqHfRAxbodJvdgxydak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lcsVoWkBzCqHfRAxbodJvdgxydak;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_lcsVoWkBzCqHfRAxbodJvdgxydak(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lcsVoWkBzCqHfRAxbodJvdgxydak = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_rHmKQNmXjGLWzTeWAJmgWimmAVZv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rHmKQNmXjGLWzTeWAJmgWimmAVZv;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_rHmKQNmXjGLWzTeWAJmgWimmAVZv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rHmKQNmXjGLWzTeWAJmgWimmAVZv;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_rHmKQNmXjGLWzTeWAJmgWimmAVZv(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rHmKQNmXjGLWzTeWAJmgWimmAVZv = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_USFDyfswlodIurpooUJGwnRfVCld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___USFDyfswlodIurpooUJGwnRfVCld;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_USFDyfswlodIurpooUJGwnRfVCld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___USFDyfswlodIurpooUJGwnRfVCld;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_USFDyfswlodIurpooUJGwnRfVCld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___USFDyfswlodIurpooUJGwnRfVCld = value;
}
constexpr bool& Rewired::InputMapper_Options::__cordl_internal_get_BvOeOQfyLCHIQhSsMFVidAAahtadB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BvOeOQfyLCHIQhSsMFVidAAahtadB;
}
constexpr bool const& Rewired::InputMapper_Options::__cordl_internal_get_BvOeOQfyLCHIQhSsMFVidAAahtadB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BvOeOQfyLCHIQhSsMFVidAAahtadB;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_BvOeOQfyLCHIQhSsMFVidAAahtadB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BvOeOQfyLCHIQhSsMFVidAAahtadB = value;
}
constexpr float_t& Rewired::InputMapper_Options::__cordl_internal_get_LBhUhLakRaWRptYmbFdIwnAxuwTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LBhUhLakRaWRptYmbFdIwnAxuwTs;
}
constexpr float_t const& Rewired::InputMapper_Options::__cordl_internal_get_LBhUhLakRaWRptYmbFdIwnAxuwTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LBhUhLakRaWRptYmbFdIwnAxuwTs;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_LBhUhLakRaWRptYmbFdIwnAxuwTs(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LBhUhLakRaWRptYmbFdIwnAxuwTs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*& Rewired::InputMapper_Options::__cordl_internal_get_YPhrUJhemZJvtmovkklhoJOTkgUr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YPhrUJhemZJvtmovkklhoJOTkgUr;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>* const& Rewired::InputMapper_Options::__cordl_internal_get_YPhrUJhemZJvtmovkklhoJOTkgUr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YPhrUJhemZJvtmovkklhoJOTkgUr;
}
constexpr void Rewired::InputMapper_Options::__cordl_internal_set_YPhrUJhemZJvtmovkklhoJOTkgUr(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YPhrUJhemZJvtmovkklhoJOTkgUr = value;
}
inline bool Rewired::InputMapper_Options::get_allowAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_allowAxes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowAxes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_allowButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_allowButtons(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowButtons", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_allowButtonsOnFullAxisAssignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowButtonsOnFullAxisAssignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_allowButtonsOnFullAxisAssignment(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowButtonsOnFullAxisAssignment", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputMapper_Options::get_timeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_timeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_timeout(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_timeout", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_checkForConflicts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflicts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_checkForConflicts(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflicts", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_checkForConflictsWithAllPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithAllPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_checkForConflictsWithAllPlayers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithAllPlayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_checkForConflictsWithSelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithSelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_checkForConflictsWithSelf(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithSelf", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_checkForConflictsWithSystemPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithSystemPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_checkForConflictsWithSystemPlayer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithSystemPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> Rewired::InputMapper_Options::get_checkForConflictsWithPlayerIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_checkForConflictsWithPlayerIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_checkForConflictsWithPlayerIds(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_checkForConflictsWithPlayerIds", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::InputMapper_ConflictResponse Rewired::InputMapper_Options::get_defaultActionWhenConflictFound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_defaultActionWhenConflictFound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_ConflictResponse>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_defaultActionWhenConflictFound(::Rewired::InputMapper_ConflictResponse  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_defaultActionWhenConflictFound", {}, {::i2c::type_of<::Rewired::InputMapper_ConflictResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_ignoreMouseXAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_ignoreMouseXAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_ignoreMouseXAxis(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_ignoreMouseXAxis", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_ignoreMouseYAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_ignoreMouseYAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_ignoreMouseYAxis(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_ignoreMouseYAxis", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_allowKeyboardKeysWithModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowKeyboardKeysWithModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_allowKeyboardKeysWithModifiers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowKeyboardKeysWithModifiers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputMapper_Options::get_allowKeyboardModifierKeyAsPrimary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_allowKeyboardModifierKeyAsPrimary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_allowKeyboardModifierKeyAsPrimary(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_allowKeyboardModifierKeyAsPrimary", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputMapper_Options::get_holdDurationToMapKeyboardModifierKeyAsPrimary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_holdDurationToMapKeyboardModifierKeyAsPrimary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_holdDurationToMapKeyboardModifierKeyAsPrimary(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_holdDurationToMapKeyboardModifierKeyAsPrimary", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Predicate_1<::Rewired::ControllerPollingInfo>* Rewired::InputMapper_Options::get_isElementAllowedCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"get_isElementAllowedCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Predicate_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::set_isElementAllowedCallback(::System::Predicate_1<::Rewired::ControllerPollingInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"set_isElementAllowedCallback", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ControllerPollingInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename >
inline  Rewired::InputMapper_Options::thqGvKOZQsVeCFAMAeQDxghtYjoQ(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                    {"thqGvKOZQsVeCFAMAeQDxghtYjoQ", {::i2c::class_of<>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_Options::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::_ctor(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_Options* Rewired::InputMapper_Options::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Options*>(this, ___internal_method);
}
inline ::StringW Rewired::InputMapper_Options::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputMapper_Options*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::aOdMjQeQvhrIYjIfHZJeroswVvxI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"aOdMjQeQvhrIYjIfHZJeroswVvxI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_Options::Copy(::Rewired::InputMapper_Options*  source, ::Rewired::InputMapper_Options*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_Options*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
inline ::Rewired::InputMapper_Options* Rewired::InputMapper_Options::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_Options*>());
}
inline ::Rewired::InputMapper_Options* Rewired::InputMapper_Options::New_ctor(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_Options*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_Options::InputMapper_Options()   {
}
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)()>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.RnLGwfTBRmGxDGzMxvMQRAujJIHYA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::RnLGwfTBRmGxDGzMxvMQRAujJIHYA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c26e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"RnLGwfTBRmGxDGzMxvMQRAujJIHYA", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.mENoIjXfsEXWiBcohVURoOdPmzAf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::mENoIjXfsEXWiBcohVURoOdPmzAf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c27e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"mENoIjXfsEXWiBcohVURoOdPmzAf", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.CXIFXQxegglprMuARzjMBkJKYJHJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::CXIFXQxegglprMuARzjMBkJKYJHJ)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c2620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"CXIFXQxegglprMuARzjMBkJKYJHJ", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.lLWiyoJHlVOzJASKaDwcNcKfmRGS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::lLWiyoJHlVOzJASKaDwcNcKfmRGS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"lLWiyoJHlVOzJASKaDwcNcKfmRGS", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.NAfWdiSQdWKfARKavQDNNhtJrfZO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::NAfWdiSQdWKfARKavQDNNhtJrfZO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"NAfWdiSQdWKfARKavQDNNhtJrfZO", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.GtquEEDXuiuVsqJBrgdoouCccxVF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::GtquEEDXuiuVsqJBrgdoouCccxVF)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c2660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"GtquEEDXuiuVsqJBrgdoouCccxVF", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC.lxoPWDjWmBkQuWfnaBKYIGZQkMdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::*)(::System::Exception*)>(&::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::lxoPWDjWmBkQuWfnaBKYIGZQkMdd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819c27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"lxoPWDjWmBkQuWfnaBKYIGZQkMdd", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9(::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*  value)  {
::cordl_internals::setStaticField<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*, "<>9", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(value));
}
inline ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*, "<>9", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_0(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_0", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_0", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_1(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_1", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_1", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_2(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_2", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_2", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_3(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_3", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_3", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_4(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_4", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_4", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_5(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_5", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_5()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_5", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::setStaticF___9__54_6(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_6", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::getStaticF___9__54_6()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__54_6", ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>();
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::RnLGwfTBRmGxDGzMxvMQRAujJIHYA(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"RnLGwfTBRmGxDGzMxvMQRAujJIHYA", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::mENoIjXfsEXWiBcohVURoOdPmzAf(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"mENoIjXfsEXWiBcohVURoOdPmzAf", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::CXIFXQxegglprMuARzjMBkJKYJHJ(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"CXIFXQxegglprMuARzjMBkJKYJHJ", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::lLWiyoJHlVOzJASKaDwcNcKfmRGS(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"lLWiyoJHlVOzJASKaDwcNcKfmRGS", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::NAfWdiSQdWKfARKavQDNNhtJrfZO(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"NAfWdiSQdWKfARKavQDNNhtJrfZO", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::GtquEEDXuiuVsqJBrgdoouCccxVF(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"GtquEEDXuiuVsqJBrgdoouCccxVF", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::lxoPWDjWmBkQuWfnaBKYIGZQkMdd(::System::Exception*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>(),
                        {"lxoPWDjWmBkQuWfnaBKYIGZQkMdd", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC* Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC()   {
}
//  Writing Method size for method: ::Rewired::InputMapper.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper* (*)()>(&::Rewired::InputMapper::get_Default)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819a6800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.bsBXlINYCexEFIFnJWLzMTyvqihr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::InputMapper::bsBXlINYCexEFIFnJWLzMTyvqihr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819a67c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"bsBXlINYCexEFIFnJWLzMTyvqihr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.get_options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Options* (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::get_options)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819a68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.set_options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper::set_options)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"set_options", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.get_mappingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Context* (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::get_mappingContext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819a6870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_mappingContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputMapper_Status (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::get_status)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a6950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.get_timeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::get_timeRemaining)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a6970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_timeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.gGTdilRKJxMoRFqYbbSBeOuQeJTlA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::gGTdilRKJxMoRFqYbbSBeOuQeJTlA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"gGTdilRKJxMoRFqYbbSBeOuQeJTlA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_InputMappedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*)>(&::Rewired::InputMapper::add_InputMappedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_InputMappedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_InputMappedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*)>(&::Rewired::InputMapper::remove_InputMappedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_InputMappedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_ErrorEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*)>(&::Rewired::InputMapper::add_ErrorEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a64f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_ErrorEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_ErrorEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*)>(&::Rewired::InputMapper::remove_ErrorEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_ErrorEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_CanceledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*)>(&::Rewired::InputMapper::add_CanceledEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_CanceledEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_CanceledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*)>(&::Rewired::InputMapper::remove_CanceledEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_CanceledEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_TimedOutEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*)>(&::Rewired::InputMapper::add_TimedOutEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_TimedOutEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_TimedOutEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*)>(&::Rewired::InputMapper::remove_TimedOutEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_TimedOutEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_StartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*)>(&::Rewired::InputMapper::add_StartedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_StartedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StartedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_StartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*)>(&::Rewired::InputMapper::remove_StartedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_StartedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StartedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_StoppedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*)>(&::Rewired::InputMapper::add_StoppedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_StoppedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_StoppedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*)>(&::Rewired::InputMapper::remove_StoppedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_StoppedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.add_ConflictFoundEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*)>(&::Rewired::InputMapper::add_ConflictFoundEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_ConflictFoundEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.remove_ConflictFoundEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*)>(&::Rewired::InputMapper::remove_ConflictFoundEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_ConflictFoundEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819a6380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(bool)>(&::Rewired::InputMapper::_ctor)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1819a5d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.RemoveEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Object*)>(&::Rewired::InputMapper::RemoveEventListeners)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819a5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"RemoveEventListeners", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.RemoveAllEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::RemoveAllEventListeners)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819a5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"RemoveAllEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.wGxyNGZalyfNREIVWJwOZpksqKLn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)(::System::Object*)>(&::Rewired::InputMapper::wGxyNGZalyfNREIVWJwOZpksqKLn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"wGxyNGZalyfNREIVWJwOZpksqKLn", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.hyEBOpfNboNMoSqzGspOBzUldnGrA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::hyEBOpfNboNMoSqzGspOBzUldnGrA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"hyEBOpfNboNMoSqzGspOBzUldnGrA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper::*)(::Rewired::InputMapper_Context*)>(&::Rewired::InputMapper::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Start", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819a5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputMapper::*)()>(&::Rewired::InputMapper::Clear)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819a5930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputMapper.ZakupbELCJGTGUIKTrnVSjuHtNML
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputMapper::*)(::Rewired::InputMapper_Context*, ::Rewired::InputMapper_Options*)>(&::Rewired::InputMapper::ZakupbELCJGTGUIKTrnVSjuHtNML)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819a5c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"ZakupbELCJGTGUIKTrnVSjuHtNML", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::InputMapper::__cordl_internal_get_pHQMtVDAbzDepjkEioPhTWAOqGno()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pHQMtVDAbzDepjkEioPhTWAOqGno;
}
constexpr int32_t const& Rewired::InputMapper::__cordl_internal_get_pHQMtVDAbzDepjkEioPhTWAOqGno() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pHQMtVDAbzDepjkEioPhTWAOqGno;
}
constexpr void Rewired::InputMapper::__cordl_internal_set_pHQMtVDAbzDepjkEioPhTWAOqGno(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pHQMtVDAbzDepjkEioPhTWAOqGno = value;
}
constexpr bool& Rewired::InputMapper::__cordl_internal_get_dCybEuFhpPQLyzEIHepXzabpTZxr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dCybEuFhpPQLyzEIHepXzabpTZxr;
}
constexpr bool const& Rewired::InputMapper::__cordl_internal_get_dCybEuFhpPQLyzEIHepXzabpTZxr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dCybEuFhpPQLyzEIHepXzabpTZxr;
}
constexpr void Rewired::InputMapper::__cordl_internal_set_dCybEuFhpPQLyzEIHepXzabpTZxr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dCybEuFhpPQLyzEIHepXzabpTZxr = value;
}
constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*& Rewired::InputMapper::__cordl_internal_get_FRqxfXAzStOQrxLPfwrfROiwDMRFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FRqxfXAzStOQrxLPfwrfROiwDMRFA;
}
constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* const& Rewired::InputMapper::__cordl_internal_get_FRqxfXAzStOQrxLPfwrfROiwDMRFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FRqxfXAzStOQrxLPfwrfROiwDMRFA;
}
constexpr void Rewired::InputMapper::__cordl_internal_set_FRqxfXAzStOQrxLPfwrfROiwDMRFA(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FRqxfXAzStOQrxLPfwrfROiwDMRFA = value;
}
constexpr ::Rewired::InputMapper_Options*& Rewired::InputMapper::__cordl_internal_get_RPzEOKzBvxzAKdpCQMAYcGfsbEGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPzEOKzBvxzAKdpCQMAYcGfsbEGA;
}
constexpr ::Rewired::InputMapper_Options* const& Rewired::InputMapper::__cordl_internal_get_RPzEOKzBvxzAKdpCQMAYcGfsbEGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RPzEOKzBvxzAKdpCQMAYcGfsbEGA;
}
constexpr void Rewired::InputMapper::__cordl_internal_set_RPzEOKzBvxzAKdpCQMAYcGfsbEGA(::Rewired::InputMapper_Options*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RPzEOKzBvxzAKdpCQMAYcGfsbEGA = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*& Rewired::InputMapper::__cordl_internal_get_yTvbBLkpPUcqoZRhWeaKgfChxhOkA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yTvbBLkpPUcqoZRhWeaKgfChxhOkA;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>* const& Rewired::InputMapper::__cordl_internal_get_yTvbBLkpPUcqoZRhWeaKgfChxhOkA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yTvbBLkpPUcqoZRhWeaKgfChxhOkA;
}
constexpr void Rewired::InputMapper::__cordl_internal_set_yTvbBLkpPUcqoZRhWeaKgfChxhOkA(::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yTvbBLkpPUcqoZRhWeaKgfChxhOkA = value;
}
inline void Rewired::InputMapper::setStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB(::Rewired::InputMapper*  value)  {
::cordl_internals::setStaticField<::Rewired::InputMapper*, "cPPfORIqVDoHpQsjEAHdjwfgiFUeB", ::Rewired::InputMapper*>(std::forward<::Rewired::InputMapper*>(value));
}
inline ::Rewired::InputMapper* Rewired::InputMapper::getStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB()  {
return ::cordl_internals::getStaticField<::Rewired::InputMapper*, "cPPfORIqVDoHpQsjEAHdjwfgiFUeB", ::Rewired::InputMapper*>();
}
inline void Rewired::InputMapper::setStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OTThzSdTAGaJlmgRLujSoMPeMZtb", ::Rewired::InputMapper*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::InputMapper::getStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb()  {
return ::cordl_internals::getStaticField<int32_t, "OTThzSdTAGaJlmgRLujSoMPeMZtb", ::Rewired::InputMapper*>();
}
inline ::Rewired::InputMapper* Rewired::InputMapper::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper*>(nullptr, ___internal_method);
}
inline int32_t Rewired::InputMapper::bsBXlINYCexEFIFnJWLzMTyvqihr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"bsBXlINYCexEFIFnJWLzMTyvqihr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Rewired::InputMapper_Options* Rewired::InputMapper::get_options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Options*>(this, ___internal_method);
}
inline void Rewired::InputMapper::set_options(::Rewired::InputMapper_Options*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"set_options", {}, {::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::InputMapper_Context* Rewired::InputMapper::get_mappingContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_mappingContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Context*>(this, ___internal_method);
}
inline ::Rewired::InputMapper_Status Rewired::InputMapper::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputMapper_Status>(this, ___internal_method);
}
inline float_t Rewired::InputMapper::get_timeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"get_timeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Rewired::InputMapper::gGTdilRKJxMoRFqYbbSBeOuQeJTlA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"gGTdilRKJxMoRFqYbbSBeOuQeJTlA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputMapper::add_InputMappedEvent(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_InputMappedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_InputMappedEvent(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_InputMappedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_ErrorEvent(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_ErrorEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_ErrorEvent(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_ErrorEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_CanceledEvent(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_CanceledEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_CanceledEvent(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_CanceledEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_TimedOutEvent(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_TimedOutEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_TimedOutEvent(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_TimedOutEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_StartedEvent(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_StartedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StartedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_StartedEvent(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_StartedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StartedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_StoppedEvent(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_StoppedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_StoppedEvent(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_StoppedEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::add_ConflictFoundEvent(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"add_ConflictFoundEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::remove_ConflictFoundEvent(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"remove_ConflictFoundEvent", {}, {::i2c::type_of<::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper::_ctor(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper::RemoveEventListeners(::System::Object*  listenerOrParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"RemoveEventListeners", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listenerOrParent);
}
inline void Rewired::InputMapper::RemoveAllEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"RemoveAllEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper::wGxyNGZalyfNREIVWJwOZpksqKLn(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"wGxyNGZalyfNREIVWJwOZpksqKLn", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputMapper::hyEBOpfNboNMoSqzGspOBzUldnGrA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"hyEBOpfNboNMoSqzGspOBzUldnGrA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputMapper::Start(::Rewired::InputMapper_Context*  mappingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Start", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mappingContext);
}
inline void Rewired::InputMapper::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputMapper::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputMapper::ZakupbELCJGTGUIKTrnVSjuHtNML(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputMapper*>(),
                        {"ZakupbELCJGTGUIKTrnVSjuHtNML", {}, {::i2c::type_of<::Rewired::InputMapper_Context*>(), ::i2c::type_of<::Rewired::InputMapper_Options*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::InputMapper* Rewired::InputMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper*>());
}
inline ::Rewired::InputMapper* Rewired::InputMapper::New_ctor(bool  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputMapper*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputMapper::InputMapper()   {
}
