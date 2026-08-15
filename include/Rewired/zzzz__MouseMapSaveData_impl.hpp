#pragma once
// IWYU pragma private; include "Rewired/MouseMapSaveData.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_impl.hpp"
#include "Rewired/zzzz__MouseMapSaveData_def.hpp"
#include "Rewired/zzzz__MouseMap_def.hpp"
#include "Rewired/zzzz__Mouse_def.hpp"
//  Writing Method size for method: ::Rewired::MouseMapSaveData.get_keyboardMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseMap* (::Rewired::MouseMapSaveData::*)()>(&::Rewired::MouseMapSaveData::get_keyboardMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181995450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMapSaveData*>(),
                        {"get_keyboardMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseMapSaveData::*)(::Rewired::Mouse*, ::Rewired::MouseMap*)>(&::Rewired::MouseMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181994ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Mouse*>(), ::i2c::type_of<::Rewired::MouseMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::MouseMap* Rewired::MouseMapSaveData::get_keyboardMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMapSaveData*>(),
                        {"get_keyboardMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseMap*>(this, ___internal_method);
}
inline void Rewired::MouseMapSaveData::_ctor(::Rewired::Mouse*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Mouse*>(), ::i2c::type_of<::Rewired::MouseMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::MouseMapSaveData* Rewired::MouseMapSaveData::New_ctor(::Rewired::Mouse*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::MouseMapSaveData::MouseMapSaveData()   {
}
