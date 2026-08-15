#pragma once
// IWYU pragma private; include "Rewired/CustomControllerMapSaveData.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_impl.hpp"
#include "Rewired/zzzz__CustomControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__CustomControllerMap_def.hpp"
#include "Rewired/zzzz__CustomController_def.hpp"
//  Writing Method size for method: ::Rewired::CustomControllerMapSaveData.get_customController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CustomController* (::Rewired::CustomControllerMapSaveData::*)()>(&::Rewired::CustomControllerMapSaveData::get_customController)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181995120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMapSaveData.get_customControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CustomControllerMap* (::Rewired::CustomControllerMapSaveData::*)()>(&::Rewired::CustomControllerMapSaveData::get_customControllerMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181995000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customControllerMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMapSaveData.get_customControllerSourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::CustomControllerMapSaveData::*)()>(&::Rewired::CustomControllerMapSaveData::get_customControllerSourceId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181995070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customControllerSourceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CustomControllerMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomControllerMapSaveData::*)(::Rewired::CustomController*, ::Rewired::CustomControllerMap*)>(&::Rewired::CustomControllerMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181994ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CustomController*>(), ::i2c::type_of<::Rewired::CustomControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::CustomController* Rewired::CustomControllerMapSaveData::get_customController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CustomController*>(this, ___internal_method);
}
inline ::Rewired::CustomControllerMap* Rewired::CustomControllerMapSaveData::get_customControllerMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customControllerMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CustomControllerMap*>(this, ___internal_method);
}
inline int32_t Rewired::CustomControllerMapSaveData::get_customControllerSourceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {"get_customControllerSourceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::CustomControllerMapSaveData::_ctor(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomControllerMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CustomController*>(), ::i2c::type_of<::Rewired::CustomControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::CustomControllerMapSaveData* Rewired::CustomControllerMapSaveData::New_ctor(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomControllerMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::CustomControllerMapSaveData::CustomControllerMapSaveData()   {
}
