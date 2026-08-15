#pragma once
// IWYU pragma private; include "Rewired/ControllerMapSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_map
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_map)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819887b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_map", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_categoryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_categoryId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181988450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_categoryId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_layoutId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_layoutId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181988630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_layoutId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_mapType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_mapType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181988740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_mapType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_mapTypeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_mapTypeString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819886c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_mapTypeString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_controller)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819885d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_controllerType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181988560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.get_controllerHardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerMapSaveData::*)()>(&::Rewired::ControllerMapSaveData::get_controllerHardwareIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819884e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controllerHardwareIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMapSaveData::*)(::Rewired::Controller*, ::Rewired::ControllerMap*)>(&::Rewired::ControllerMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819883d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMapSaveData.JYDdmddxhOWomTeRfZKiLpnSyrze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMapSaveData* (*)(::Rewired::Controller*, ::Rewired::ControllerMap*)>(&::Rewired::ControllerMapSaveData::JYDdmddxhOWomTeRfZKiLpnSyrze)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1819881b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"JYDdmddxhOWomTeRfZKiLpnSyrze", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Controller*& Rewired::ControllerMapSaveData::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::Rewired::Controller* const& Rewired::ControllerMapSaveData::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Rewired::ControllerMapSaveData::__cordl_internal_set__controller(::Rewired::Controller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMapSaveData::__cordl_internal_get__map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMapSaveData::__cordl_internal_get__map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr void Rewired::ControllerMapSaveData::__cordl_internal_set__map(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____map = value;
}
constexpr int32_t& Rewired::ControllerMapSaveData::__cordl_internal_get_YPDhKrkxqVIfoGNDQfOlHnsClddbA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YPDhKrkxqVIfoGNDQfOlHnsClddbA;
}
constexpr int32_t const& Rewired::ControllerMapSaveData::__cordl_internal_get_YPDhKrkxqVIfoGNDQfOlHnsClddbA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YPDhKrkxqVIfoGNDQfOlHnsClddbA;
}
constexpr void Rewired::ControllerMapSaveData::__cordl_internal_set_YPDhKrkxqVIfoGNDQfOlHnsClddbA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YPDhKrkxqVIfoGNDQfOlHnsClddbA = value;
}
inline ::Rewired::ControllerMap* Rewired::ControllerMapSaveData::get_map()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_map", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMapSaveData::get_categoryId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_categoryId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMapSaveData::get_layoutId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_layoutId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* Rewired::ControllerMapSaveData::get_mapType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_mapType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerMapSaveData::get_mapTypeString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_mapTypeString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ControllerMapSaveData::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::ControllerMapSaveData::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerMapSaveData::get_controllerHardwareIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"get_controllerHardwareIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline T Rewired::ControllerMapSaveData::GetMap()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                    {"GetMap", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void Rewired::ControllerMapSaveData::_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename >
inline  Rewired::ControllerMapSaveData::JYDdmddxhOWomTeRfZKiLpnSyrze(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                    {"JYDdmddxhOWomTeRfZKiLpnSyrze", {::i2c::class_of<>()}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerMapSaveData* Rewired::ControllerMapSaveData::JYDdmddxhOWomTeRfZKiLpnSyrze(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMapSaveData*>(),
                        {"JYDdmddxhOWomTeRfZKiLpnSyrze", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMapSaveData*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerMapSaveData* Rewired::ControllerMapSaveData::New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMapSaveData::ControllerMapSaveData()   {
}
