#pragma once
// IWYU pragma private; include "Rewired/JoystickMapSaveData.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_impl.hpp"
#include "Rewired/zzzz__JoystickMapSaveData_def.hpp"
#include "Rewired/zzzz__JoystickMap_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::JoystickMapSaveData.get_joystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::JoystickMapSaveData::*)()>(&::Rewired::JoystickMapSaveData::get_joystick)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181995330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMapSaveData.get_joystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::JoystickMap* (::Rewired::JoystickMapSaveData::*)()>(&::Rewired::JoystickMapSaveData::get_joystickMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819952c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystickMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMapSaveData.get_joystickHardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::JoystickMapSaveData::*)()>(&::Rewired::JoystickMapSaveData::get_joystickHardwareTypeGuid)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystickHardwareTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::JoystickMapSaveData::*)(::Rewired::Joystick*, ::Rewired::JoystickMap*)>(&::Rewired::JoystickMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181994ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<::Rewired::JoystickMap*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::Joystick* Rewired::JoystickMapSaveData::get_joystick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline ::Rewired::JoystickMap* Rewired::JoystickMapSaveData::get_joystickMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystickMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::JoystickMap*>(this, ___internal_method);
}
inline ::System::Guid Rewired::JoystickMapSaveData::get_joystickHardwareTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {"get_joystickHardwareTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::JoystickMapSaveData::_ctor(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<::Rewired::JoystickMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::JoystickMapSaveData* Rewired::JoystickMapSaveData::New_ctor(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::JoystickMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::JoystickMapSaveData::JoystickMapSaveData()   {
}
