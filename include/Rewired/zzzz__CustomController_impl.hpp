#pragma once
// IWYU pragma private; include "Rewired/CustomController.hpp"
#include "Rewired/zzzz__ControllerWithAxes_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__CustomController_def.hpp"
#include "GlobalNamespace/zzzz__wYHtGvFmfcHjitltWJMQfHrcikUR_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::CustomController.get_sourceControllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::CustomController::*)()>(&::Rewired::CustomController::get_sourceControllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181858260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"get_sourceControllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::CustomController::*)()>(&::Rewired::CustomController::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818581d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::CustomController*>(),
                    {::i2c::class_of<::Rewired::CustomController*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*)>(&::Rewired::CustomController::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181857d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t, int32_t, ::System::Guid, ::Rewired::InputSource, ::StringW, ::StringW, ::StringW, int32_t, int32_t, ::Rewired::HardwareControllerMap_Game*, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::CustomController::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181857f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.dlXklalsZBFgXMkzqYrOxvchvvRI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)()>(&::Rewired::CustomController::dlXklalsZBFgXMkzqYrOxvchvvRI)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818580a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"dlXklalsZBFgXMkzqYrOxvchvvRI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t, float_t)>(&::Rewired::CustomController::SetAxisValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181857830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::StringW, float_t)>(&::Rewired::CustomController::SetAxisValue)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818576e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetAxisValueById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t, float_t)>(&::Rewired::CustomController::SetAxisValueById)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818575c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValueById", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t, bool)>(&::Rewired::CustomController::SetButtonValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181857af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::StringW, bool)>(&::Rewired::CustomController::SetButtonValue)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181857c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetButtonValueById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t, bool)>(&::Rewired::CustomController::SetButtonValueById)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818579d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValueById", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetAxisUpdateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::System::Func_2<int32_t,float_t>*)>(&::Rewired::CustomController::SetAxisUpdateCallback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181857530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisUpdateCallback", {}, {::i2c::type_of<::System::Func_2<int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.SetButtonUpdateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::System::Func_2<int32_t,bool>*)>(&::Rewired::CustomController::SetButtonUpdateCallback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181857940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonUpdateCallback", {}, {::i2c::type_of<::System::Func_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t)>(&::Rewired::CustomController::ClearAxisValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181856fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::StringW)>(&::Rewired::CustomController::ClearAxisValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818570e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearAxisValueById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t)>(&::Rewired::CustomController::ClearAxisValueById)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181856ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValueById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t)>(&::Rewired::CustomController::ClearButtonValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181857410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(::StringW)>(&::Rewired::CustomController::ClearButtonValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818572f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomController.ClearButtonValueById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomController::*)(int32_t)>(&::Rewired::CustomController::ClearButtonValueById)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181857200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValueById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::CustomController::__cordl_internal_get_lCNzrkrismRRGFhiYFeoOMCeWghi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lCNzrkrismRRGFhiYFeoOMCeWghi;
}
constexpr int32_t const& Rewired::CustomController::__cordl_internal_get_lCNzrkrismRRGFhiYFeoOMCeWghi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lCNzrkrismRRGFhiYFeoOMCeWghi;
}
constexpr void Rewired::CustomController::__cordl_internal_set_lCNzrkrismRRGFhiYFeoOMCeWghi(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lCNzrkrismRRGFhiYFeoOMCeWghi = value;
}
constexpr ::System::Func_2<int32_t,float_t>*& Rewired::CustomController::__cordl_internal_get_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSdWVSTJUDEOtcOmSHVjUXqVnJGRA;
}
constexpr ::System::Func_2<int32_t,float_t>* const& Rewired::CustomController::__cordl_internal_get_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSdWVSTJUDEOtcOmSHVjUXqVnJGRA;
}
constexpr void Rewired::CustomController::__cordl_internal_set_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA(::System::Func_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cSdWVSTJUDEOtcOmSHVjUXqVnJGRA = value;
}
constexpr ::System::Func_2<int32_t,bool>*& Rewired::CustomController::__cordl_internal_get_nukstQsJIpLFcVWCUFMzntOmoqRL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nukstQsJIpLFcVWCUFMzntOmoqRL;
}
constexpr ::System::Func_2<int32_t,bool>* const& Rewired::CustomController::__cordl_internal_get_nukstQsJIpLFcVWCUFMzntOmoqRL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nukstQsJIpLFcVWCUFMzntOmoqRL;
}
constexpr void Rewired::CustomController::__cordl_internal_set_nukstQsJIpLFcVWCUFMzntOmoqRL(::System::Func_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nukstQsJIpLFcVWCUFMzntOmoqRL = value;
}
constexpr bool& Rewired::CustomController::__cordl_internal_get_uAYqubfidolxwAFlUcygiKARHaiK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uAYqubfidolxwAFlUcygiKARHaiK;
}
constexpr bool const& Rewired::CustomController::__cordl_internal_get_uAYqubfidolxwAFlUcygiKARHaiK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uAYqubfidolxwAFlUcygiKARHaiK;
}
constexpr void Rewired::CustomController::__cordl_internal_set_uAYqubfidolxwAFlUcygiKARHaiK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uAYqubfidolxwAFlUcygiKARHaiK = value;
}
constexpr ::System::Guid& Rewired::CustomController::__cordl_internal_get_txyYPhBrqLwJBCNoRAVcNIeSFhqGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___txyYPhBrqLwJBCNoRAVcNIeSFhqGA;
}
constexpr ::System::Guid const& Rewired::CustomController::__cordl_internal_get_txyYPhBrqLwJBCNoRAVcNIeSFhqGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___txyYPhBrqLwJBCNoRAVcNIeSFhqGA;
}
constexpr void Rewired::CustomController::__cordl_internal_set_txyYPhBrqLwJBCNoRAVcNIeSFhqGA(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___txyYPhBrqLwJBCNoRAVcNIeSFhqGA = value;
}
inline int32_t Rewired::CustomController::get_sourceControllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"get_sourceControllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid Rewired::CustomController::get_deviceInstanceGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::CustomController*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::CustomController::_ctor(::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::CustomController::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void Rewired::CustomController::dlXklalsZBFgXMkzqYrOxvchvvRI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"dlXklalsZBFgXMkzqYrOxvchvvRI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::CustomController::SetAxisValue(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::CustomController::SetAxisValue(::StringW  elementName, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName, value);
}
inline void Rewired::CustomController::SetAxisValueById(int32_t  elementId, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisValueById", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementId, value);
}
inline void Rewired::CustomController::SetButtonValue(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::CustomController::SetButtonValue(::StringW  elementName, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName, value);
}
inline void Rewired::CustomController::SetButtonValueById(int32_t  elementId, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonValueById", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementId, value);
}
inline void Rewired::CustomController::SetAxisUpdateCallback(::System::Func_2<int32_t,float_t>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetAxisUpdateCallback", {}, {::i2c::type_of<::System::Func_2<int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Rewired::CustomController::SetButtonUpdateCallback(::System::Func_2<int32_t,bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"SetButtonUpdateCallback", {}, {::i2c::type_of<::System::Func_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Rewired::CustomController::ClearAxisValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Rewired::CustomController::ClearAxisValue(::StringW  elementName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline void Rewired::CustomController::ClearAxisValueById(int32_t  elementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearAxisValueById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementId);
}
inline void Rewired::CustomController::ClearButtonValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Rewired::CustomController::ClearButtonValue(::StringW  elementName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName);
}
inline void Rewired::CustomController::ClearButtonValueById(int32_t  elementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomController*>(),
                        {"ClearButtonValueById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementId);
}
inline ::Rewired::CustomController* Rewired::CustomController::New_ctor(::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomController*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::CustomController* Rewired::CustomController::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomController*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11));
}
// Ctor Parameters []
constexpr ::Rewired::CustomController::CustomController()   {
}
