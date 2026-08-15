#pragma once
// IWYU pragma private; include "Rewired/InputActionSourceData.hpp"
#include "Rewired/zzzz__InputActionSourceData_def.hpp"
#include "GlobalNamespace/zzzz__bhChVCsoZfXwOtSMCrjHRmszBFgBA_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::InputActionSourceData.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::InputActionSourceData::*)()>(&::Rewired::InputActionSourceData::get_controller)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::InputActionSourceData::*)()>(&::Rewired::InputActionSourceData::get_controllerType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181844700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData.get_controllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::InputActionSourceData::*)()>(&::Rewired::InputActionSourceData::get_controllerMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controllerMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData.get_actionElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::InputActionSourceData::*)()>(&::Rewired::InputActionSourceData::get_actionElementMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_actionElementMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData.get_elementIdentifierName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputActionSourceData::*)()>(&::Rewired::InputActionSourceData::get_elementIdentifierName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181844730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_elementIdentifierName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionSourceData::*)(::Rewired::Controller*, ::Rewired::ControllerMap*, ::Rewired::ActionElementMap*)>(&::Rewired::InputActionSourceData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18053eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputActionSourceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputActionSourceData::*)(::GlobalNamespace::bhChVCsoZfXwOtSMCrjHRmszBFgBA*)>(&::Rewired::InputActionSourceData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818446a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::bhChVCsoZfXwOtSMCrjHRmszBFgBA*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::Controller* Rewired::InputActionSourceData::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(*this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::InputActionSourceData::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(*this, ___internal_method);
}
inline ::Rewired::ControllerMap* Rewired::InputActionSourceData::get_controllerMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_controllerMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(*this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::InputActionSourceData::get_actionElementMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_actionElementMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(*this, ___internal_method);
}
inline ::StringW Rewired::InputActionSourceData::get_elementIdentifierName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {"get_elementIdentifierName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Rewired::InputActionSourceData::_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputActionSourceData::_ctor(::GlobalNamespace::bhChVCsoZfXwOtSMCrjHRmszBFgBA*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputActionSourceData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::bhChVCsoZfXwOtSMCrjHRmszBFgBA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters [CppParam { name: "oeyeJYJlBDMxxeazcJeWXXCmLptM", ty: "::Rewired::Controller*", modifiers: "", def_value: Some("{}") }, CppParam { name: "dQmQsVKAkwjVkvMKDMGZHQxZIMqW", ty: "::Rewired::ControllerMap*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IWvstEEFRApViCSnMTIUDvlQfqUO", ty: "::Rewired::ActionElementMap*", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputActionSourceData::InputActionSourceData(::Rewired::Controller*  oeyeJYJlBDMxxeazcJeWXXCmLptM, ::Rewired::ControllerMap*  dQmQsVKAkwjVkvMKDMGZHQxZIMqW, ::Rewired::ActionElementMap*  IWvstEEFRApViCSnMTIUDvlQfqUO) noexcept  {
this->oeyeJYJlBDMxxeazcJeWXXCmLptM = oeyeJYJlBDMxxeazcJeWXXCmLptM;
this->dQmQsVKAkwjVkvMKDMGZHQxZIMqW = dQmQsVKAkwjVkvMKDMGZHQxZIMqW;
this->IWvstEEFRApViCSnMTIUDvlQfqUO = IWvstEEFRApViCSnMTIUDvlQfqUO;
}
// Ctor Parameters []
constexpr ::Rewired::InputActionSourceData::InputActionSourceData()   {
}
