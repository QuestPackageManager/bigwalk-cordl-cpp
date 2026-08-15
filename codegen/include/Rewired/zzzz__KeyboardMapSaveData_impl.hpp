#pragma once
// IWYU pragma private; include "Rewired/KeyboardMapSaveData.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_impl.hpp"
#include "Rewired/zzzz__KeyboardMapSaveData_def.hpp"
#include "Rewired/zzzz__KeyboardMap_def.hpp"
#include "Rewired/zzzz__Keyboard_def.hpp"
//  Writing Method size for method: ::Rewired::KeyboardMapSaveData.get_keyboardMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::KeyboardMap* (::Rewired::KeyboardMapSaveData::*)()>(&::Rewired::KeyboardMapSaveData::get_keyboardMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819953d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMapSaveData*>(),
                        {"get_keyboardMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::KeyboardMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::KeyboardMapSaveData::*)(::Rewired::Keyboard*, ::Rewired::KeyboardMap*)>(&::Rewired::KeyboardMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181994ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Keyboard*>(), ::i2c::type_of<::Rewired::KeyboardMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::KeyboardMap* Rewired::KeyboardMapSaveData::get_keyboardMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMapSaveData*>(),
                        {"get_keyboardMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::KeyboardMap*>(this, ___internal_method);
}
inline void Rewired::KeyboardMapSaveData::_ctor(::Rewired::Keyboard*  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::KeyboardMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Keyboard*>(), ::i2c::type_of<::Rewired::KeyboardMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::KeyboardMapSaveData* Rewired::KeyboardMapSaveData::New_ctor(::Rewired::Keyboard*  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::KeyboardMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::KeyboardMapSaveData::KeyboardMapSaveData()   {
}
