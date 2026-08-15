#pragma once
// IWYU pragma private; include "Rewired/JoystickCalibrationMapSaveData.hpp"
#include "Rewired/zzzz__CalibrationMapSaveData_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__JoystickCalibrationMapSaveData_def.hpp"
#include "Rewired/zzzz__CalibrationMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::JoystickCalibrationMapSaveData.get_joystickHardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::JoystickCalibrationMapSaveData::*)()>(&::Rewired::JoystickCalibrationMapSaveData::get_joystickHardwareTypeGuid)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x180a26490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickCalibrationMapSaveData*>(),
                        {"get_joystickHardwareTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::JoystickCalibrationMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::JoystickCalibrationMapSaveData::*)(::Rewired::CalibrationMap*, ::Rewired::ControllerType, ::StringW, ::System::Guid)>(&::Rewired::JoystickCalibrationMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181973bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickCalibrationMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Rewired::JoystickCalibrationMapSaveData::__cordl_internal_get_pQkQjGGuLCOYLlBLZlZQggznEBpt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pQkQjGGuLCOYLlBLZlZQggznEBpt;
}
constexpr ::System::Guid const& Rewired::JoystickCalibrationMapSaveData::__cordl_internal_get_pQkQjGGuLCOYLlBLZlZQggznEBpt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pQkQjGGuLCOYLlBLZlZQggznEBpt;
}
constexpr void Rewired::JoystickCalibrationMapSaveData::__cordl_internal_set_pQkQjGGuLCOYLlBLZlZQggznEBpt(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pQkQjGGuLCOYLlBLZlZQggznEBpt = value;
}
inline ::System::Guid Rewired::JoystickCalibrationMapSaveData::get_joystickHardwareTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickCalibrationMapSaveData*>(),
                        {"get_joystickHardwareTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::JoystickCalibrationMapSaveData::_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::JoystickCalibrationMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::JoystickCalibrationMapSaveData* Rewired::JoystickCalibrationMapSaveData::New_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::JoystickCalibrationMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::JoystickCalibrationMapSaveData::JoystickCalibrationMapSaveData()   {
}
