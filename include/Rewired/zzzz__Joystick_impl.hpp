#pragma once
// IWYU pragma private; include "Rewired/Joystick.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_impl.hpp"
#include "Rewired/zzzz__ControllerWithAxes_impl.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "Rewired/zzzz__JoystickType_impl.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystickPublic_def.hpp"
#include "Rewired/zzzz__BridgedController_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__JoystickCalibrationMapSaveData_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
#include "Rewired/zzzz__UpdateControllerInfoEventArgs_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Rewired::Joystick.YsdTFgsoMRBiybdxbizcgpnpisxl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::JoystickType>* (::Rewired::Joystick::*)()>(&::Rewired::Joystick::YsdTFgsoMRBiybdxbizcgpnpisxl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18185aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"YsdTFgsoMRBiybdxbizcgpnpisxl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_systemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_systemId)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18185c480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_systemId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_unityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_unityId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18185c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_unityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18185c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Joystick*>(),
                    {::i2c::class_of<::Rewired::Joystick*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_supportsVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_supportsVibration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18185c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_supportsVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_vibrationLeftMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_vibrationLeftMotor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18185c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationLeftMotor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.set_vibrationLeftMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(float_t)>(&::Rewired::Joystick::set_vibrationLeftMotor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18185cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"set_vibrationLeftMotor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_vibrationRightMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_vibrationRightMotor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18185c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationRightMotor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.set_vibrationRightMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(float_t)>(&::Rewired::Joystick::set_vibrationRightMotor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18185cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"set_vibrationRightMotor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18185c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_hatCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_hatCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18185c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_hatCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_Hats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Controller_Hat*>* (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_Hats)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18185c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_Hats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_directionalPadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_directionalPadCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18185c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_directionalPadCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.get_DirectionalPads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Controller_DirectionalPad*>* (::Rewired::Joystick::*)()>(&::Rewired::Joystick::get_DirectionalPads)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18185c160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_DirectionalPads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.EprIaWyviAgdsZSowXqnqouPTyaD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Joystick::*)()>(&::Rewired::Joystick::EprIaWyviAgdsZSowXqnqouPTyaD)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18185a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"EprIaWyviAgdsZSowXqnqouPTyaD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.EfneuiyFlDuybCLKNMSjmxdEZwFC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMapIdentifier (::Rewired::Joystick::*)()>(&::Rewired::Joystick::EfneuiyFlDuybCLKNMSjmxdEZwFC)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181859fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"EfneuiyFlDuybCLKNMSjmxdEZwFC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(::Rewired::BridgedController*)>(&::Rewired::Joystick::_ctor)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x18185af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, ::Rewired::InputSource, ::StringW, ::StringW, ::StringW, ::System::Guid, int32_t, int32_t, ::ArrayW<bool>, ::Rewired::HardwareControllerMap_Game*, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::Joystick::_ctor)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x18185b560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.UZSyUmEICIFSXEFvUfFNCdClXHaeA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Joystick::*)(::Rewired::JoystickType)>(&::Rewired::Joystick::UZSyUmEICIFSXEFvUfFNCdClXHaeA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18185adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"UZSyUmEICIFSXEFvUfFNCdClXHaeA", {}, {::i2c::type_of<::Rewired::JoystickType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.GetCalibrationMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::JoystickCalibrationMapSaveData* (::Rewired::Joystick::*)()>(&::Rewired::Joystick::GetCalibrationMapSaveData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18185a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"GetCalibrationMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(float_t, float_t)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18185abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(float_t, float_t, float_t, float_t)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18185a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, float_t)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18185aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, float_t, float_t)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18185a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, float_t, bool)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18185ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, float_t, float_t, bool)>(&::Rewired::Joystick::SetVibration)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18185a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Joystick::*)(int32_t)>(&::Rewired::Joystick::GetVibration)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18185a1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::StopVibration)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18185ac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.HQHaaeQfupUFFFNyAyppUkuzVlZM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(::Rewired::UpdateLoopType)>(&::Rewired::Joystick::HQHaaeQfupUFFFNyAyppUkuzVlZM)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18185a2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Joystick*>(),
                    {::i2c::class_of<::Rewired::Joystick*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.BkXZBVwiTBBWQlKhLSoSzavMQbju
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(::Rewired::UpdateControllerInfoEventArgs*)>(&::Rewired::Joystick::BkXZBVwiTBBWQlKhLSoSzavMQbju)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"BkXZBVwiTBBWQlKhLSoSzavMQbju", {}, {::i2c::type_of<::Rewired::UpdateControllerInfoEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.QLedQRFGQNUTbrAAtnwFEwpNZnPmA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(::Rewired::BridgedController*)>(&::Rewired::Joystick::QLedQRFGQNUTbrAAtnwFEwpNZnPmA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18185a570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"QLedQRFGQNUTbrAAtnwFEwpNZnPmA", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.xnlDJhpBFqGkQLiGSohhXOfKWnwB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(::Rewired::Interfaces::IInputManagerJoystickPublic*)>(&::Rewired::Joystick::xnlDJhpBFqGkQLiGSohhXOfKWnwB)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18185cf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"xnlDJhpBFqGkQLiGSohhXOfKWnwB", {}, {::i2c::type_of<::Rewired::Interfaces::IInputManagerJoystickPublic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.PZQYbMqGeVDkemQyZKdcDJmwwLmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::PZQYbMqGeVDkemQyZKdcDJmwwLmp)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18185a450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Joystick*>(),
                    {::i2c::class_of<::Rewired::Joystick*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.DYNLQmvajoibEMQwaBAQvrBNAMfAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(bool)>(&::Rewired::Joystick::DYNLQmvajoibEMQwaBAQvrBNAMfAA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181859de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Joystick*>(),
                    {::i2c::class_of<::Rewired::Joystick*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.Disconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::Disconnected)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181859e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Joystick*>(),
                    {::i2c::class_of<::Rewired::Joystick*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.qjjBPWebzUjOkRgxJzAtCxXIMfTL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::qjjBPWebzUjOkRgxJzAtCxXIMfTL)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18185c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"qjjBPWebzUjOkRgxJzAtCxXIMfTL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.RSTGaLAKGheBhgfXzDLabnteQglyb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)(int32_t, float_t, float_t, bool, bool)>(&::Rewired::Joystick::RSTGaLAKGheBhgfXzDLabnteQglyb)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18185a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"RSTGaLAKGheBhgfXzDLabnteQglyb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.rmwbNtAkFAOFOCLdTMpACCbDiKwQb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::rmwbNtAkFAOFOCLdTMpACCbDiKwQb)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18185ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"rmwbNtAkFAOFOCLdTMpACCbDiKwQb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.ZqMTGBRrcHjxTmXjobSyfvQAplmeA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Joystick::*)()>(&::Rewired::Joystick::ZqMTGBRrcHjxTmXjobSyfvQAplmeA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"ZqMTGBRrcHjxTmXjobSyfvQAplmeA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Joystick.tmAabPooCpbgwAUjiRvrqQJAvfGbA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Joystick*, ::Rewired::Joystick*)>(&::Rewired::Joystick::tmAabPooCpbgwAUjiRvrqQJAvfGbA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18185ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"tmAabPooCpbgwAUjiRvrqQJAvfGbA", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& Rewired::Joystick::__cordl_internal_get_OBdhyEPRiXGJeHORIzicGUrBurUh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OBdhyEPRiXGJeHORIzicGUrBurUh;
}
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& Rewired::Joystick::__cordl_internal_get_OBdhyEPRiXGJeHORIzicGUrBurUh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OBdhyEPRiXGJeHORIzicGUrBurUh;
}
constexpr void Rewired::Joystick::__cordl_internal_set_OBdhyEPRiXGJeHORIzicGUrBurUh(::Rewired::Interfaces::IInputManagerJoystickPublic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OBdhyEPRiXGJeHORIzicGUrBurUh = value;
}
constexpr ::ArrayW<::Rewired::JoystickType>& Rewired::Joystick::__cordl_internal_get_OcfdOxjlyxUpYOphqxQDgpSZlHJpA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcfdOxjlyxUpYOphqxQDgpSZlHJpA;
}
constexpr ::ArrayW<::Rewired::JoystickType> const& Rewired::Joystick::__cordl_internal_get_OcfdOxjlyxUpYOphqxQDgpSZlHJpA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcfdOxjlyxUpYOphqxQDgpSZlHJpA;
}
constexpr void Rewired::Joystick::__cordl_internal_set_OcfdOxjlyxUpYOphqxQDgpSZlHJpA(::ArrayW<::Rewired::JoystickType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcfdOxjlyxUpYOphqxQDgpSZlHJpA = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*& Rewired::Joystick::__cordl_internal_get_mjZbXNcyjXoRmbHSvLAHTsuCSppjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mjZbXNcyjXoRmbHSvLAHTsuCSppjA;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>* const& Rewired::Joystick::__cordl_internal_get_mjZbXNcyjXoRmbHSvLAHTsuCSppjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mjZbXNcyjXoRmbHSvLAHTsuCSppjA;
}
constexpr void Rewired::Joystick::__cordl_internal_set_mjZbXNcyjXoRmbHSvLAHTsuCSppjA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mjZbXNcyjXoRmbHSvLAHTsuCSppjA = value;
}
constexpr bool& Rewired::Joystick::__cordl_internal_get_XxNBtPCTSiCQESHxZKdvrgsscdGB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XxNBtPCTSiCQESHxZKdvrgsscdGB;
}
constexpr bool const& Rewired::Joystick::__cordl_internal_get_XxNBtPCTSiCQESHxZKdvrgsscdGB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XxNBtPCTSiCQESHxZKdvrgsscdGB;
}
constexpr void Rewired::Joystick::__cordl_internal_set_XxNBtPCTSiCQESHxZKdvrgsscdGB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XxNBtPCTSiCQESHxZKdvrgsscdGB = value;
}
constexpr bool& Rewired::Joystick::__cordl_internal_get_GyaFiSYqfRCPDZJNneDtJLZKnnsb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GyaFiSYqfRCPDZJNneDtJLZKnnsb;
}
constexpr bool const& Rewired::Joystick::__cordl_internal_get_GyaFiSYqfRCPDZJNneDtJLZKnnsb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GyaFiSYqfRCPDZJNneDtJLZKnnsb;
}
constexpr void Rewired::Joystick::__cordl_internal_set_GyaFiSYqfRCPDZJNneDtJLZKnnsb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GyaFiSYqfRCPDZJNneDtJLZKnnsb = value;
}
constexpr bool& Rewired::Joystick::__cordl_internal_get_fwQeWUWNfaElYiiAyhQZViWSbHpi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fwQeWUWNfaElYiiAyhQZViWSbHpi;
}
constexpr bool const& Rewired::Joystick::__cordl_internal_get_fwQeWUWNfaElYiiAyhQZViWSbHpi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fwQeWUWNfaElYiiAyhQZViWSbHpi;
}
constexpr void Rewired::Joystick::__cordl_internal_set_fwQeWUWNfaElYiiAyhQZViWSbHpi(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fwQeWUWNfaElYiiAyhQZViWSbHpi = value;
}
constexpr int32_t& Rewired::Joystick::__cordl_internal_get_YnAaYzicpDEzmDyNqAgSXatmaxbS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YnAaYzicpDEzmDyNqAgSXatmaxbS;
}
constexpr int32_t const& Rewired::Joystick::__cordl_internal_get_YnAaYzicpDEzmDyNqAgSXatmaxbS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YnAaYzicpDEzmDyNqAgSXatmaxbS;
}
constexpr void Rewired::Joystick::__cordl_internal_set_YnAaYzicpDEzmDyNqAgSXatmaxbS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YnAaYzicpDEzmDyNqAgSXatmaxbS = value;
}
constexpr ::ArrayW<float_t>& Rewired::Joystick::__cordl_internal_get_zvHRuDMuoqhJkLBGIVFYDdApbaoH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zvHRuDMuoqhJkLBGIVFYDdApbaoH;
}
constexpr ::ArrayW<float_t> const& Rewired::Joystick::__cordl_internal_get_zvHRuDMuoqhJkLBGIVFYDdApbaoH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zvHRuDMuoqhJkLBGIVFYDdApbaoH;
}
constexpr void Rewired::Joystick::__cordl_internal_set_zvHRuDMuoqhJkLBGIVFYDdApbaoH(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zvHRuDMuoqhJkLBGIVFYDdApbaoH = value;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& Rewired::Joystick::__cordl_internal_get_UOwefxBIyJFqsWdqCaOEfGetmKMb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UOwefxBIyJFqsWdqCaOEfGetmKMb;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& Rewired::Joystick::__cordl_internal_get_UOwefxBIyJFqsWdqCaOEfGetmKMb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UOwefxBIyJFqsWdqCaOEfGetmKMb;
}
constexpr void Rewired::Joystick::__cordl_internal_set_UOwefxBIyJFqsWdqCaOEfGetmKMb(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UOwefxBIyJFqsWdqCaOEfGetmKMb = value;
}
constexpr int32_t& Rewired::Joystick::__cordl_internal_get_EQjbQUmEGYtoLIwyrUVkrXJagWbE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EQjbQUmEGYtoLIwyrUVkrXJagWbE;
}
constexpr int32_t const& Rewired::Joystick::__cordl_internal_get_EQjbQUmEGYtoLIwyrUVkrXJagWbE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EQjbQUmEGYtoLIwyrUVkrXJagWbE;
}
constexpr void Rewired::Joystick::__cordl_internal_set_EQjbQUmEGYtoLIwyrUVkrXJagWbE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EQjbQUmEGYtoLIwyrUVkrXJagWbE = value;
}
constexpr ::ArrayW<::Rewired::Controller_Hat*>& Rewired::Joystick::__cordl_internal_get_QINyBnVnMgFeaqXmgwsdrKoKopdy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QINyBnVnMgFeaqXmgwsdrKoKopdy;
}
constexpr ::ArrayW<::Rewired::Controller_Hat*> const& Rewired::Joystick::__cordl_internal_get_QINyBnVnMgFeaqXmgwsdrKoKopdy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QINyBnVnMgFeaqXmgwsdrKoKopdy;
}
constexpr void Rewired::Joystick::__cordl_internal_set_QINyBnVnMgFeaqXmgwsdrKoKopdy(::ArrayW<::Rewired::Controller_Hat*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QINyBnVnMgFeaqXmgwsdrKoKopdy = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*& Rewired::Joystick::__cordl_internal_get_JUiiGqfvDFtKLVjRAXlJvjNbXyft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JUiiGqfvDFtKLVjRAXlJvjNbXyft;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>* const& Rewired::Joystick::__cordl_internal_get_JUiiGqfvDFtKLVjRAXlJvjNbXyft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JUiiGqfvDFtKLVjRAXlJvjNbXyft;
}
constexpr void Rewired::Joystick::__cordl_internal_set_JUiiGqfvDFtKLVjRAXlJvjNbXyft(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JUiiGqfvDFtKLVjRAXlJvjNbXyft = value;
}
constexpr int32_t& Rewired::Joystick::__cordl_internal_get_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QGPcQgCYmdnoRkMBVSEUjhJpWMYJ;
}
constexpr int32_t const& Rewired::Joystick::__cordl_internal_get_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QGPcQgCYmdnoRkMBVSEUjhJpWMYJ;
}
constexpr void Rewired::Joystick::__cordl_internal_set_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QGPcQgCYmdnoRkMBVSEUjhJpWMYJ = value;
}
constexpr ::ArrayW<::Rewired::Controller_DirectionalPad*>& Rewired::Joystick::__cordl_internal_get_sBCOebTHopxRIIgKofmLJuFncjjE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sBCOebTHopxRIIgKofmLJuFncjjE;
}
constexpr ::ArrayW<::Rewired::Controller_DirectionalPad*> const& Rewired::Joystick::__cordl_internal_get_sBCOebTHopxRIIgKofmLJuFncjjE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sBCOebTHopxRIIgKofmLJuFncjjE;
}
constexpr void Rewired::Joystick::__cordl_internal_set_sBCOebTHopxRIIgKofmLJuFncjjE(::ArrayW<::Rewired::Controller_DirectionalPad*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sBCOebTHopxRIIgKofmLJuFncjjE = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*& Rewired::Joystick::__cordl_internal_get_puKUKhMfRtaPdyHwFFKdGFSUhozs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puKUKhMfRtaPdyHwFFKdGFSUhozs;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>* const& Rewired::Joystick::__cordl_internal_get_puKUKhMfRtaPdyHwFFKdGFSUhozs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___puKUKhMfRtaPdyHwFFKdGFSUhozs;
}
constexpr void Rewired::Joystick::__cordl_internal_set_puKUKhMfRtaPdyHwFFKdGFSUhozs(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___puKUKhMfRtaPdyHwFFKdGFSUhozs = value;
}
inline ::System::Collections::Generic::IList_1<::Rewired::JoystickType>* Rewired::Joystick::YsdTFgsoMRBiybdxbizcgpnpisxl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"YsdTFgsoMRBiybdxbizcgpnpisxl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::JoystickType>*>(this, ___internal_method);
}
inline ::System::Nullable_1<int64_t> Rewired::Joystick::get_systemId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_systemId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline int32_t Rewired::Joystick::get_unityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_unityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid Rewired::Joystick::get_deviceInstanceGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Joystick*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool Rewired::Joystick::get_supportsVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_supportsVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Joystick::get_vibrationLeftMotor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationLeftMotor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Joystick::set_vibrationLeftMotor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"set_vibrationLeftMotor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Joystick::get_vibrationRightMotor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationRightMotor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Joystick::set_vibrationRightMotor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"set_vibrationRightMotor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Joystick::get_vibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Joystick::get_hatCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_hatCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Hat*>* Rewired::Joystick::get_Hats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_Hats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Controller_Hat*>*>(this, ___internal_method);
}
inline int32_t Rewired::Joystick::get_directionalPadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_directionalPadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_DirectionalPad*>* Rewired::Joystick::get_DirectionalPads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"get_DirectionalPads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Controller_DirectionalPad*>*>(this, ___internal_method);
}
inline int32_t Rewired::Joystick::EprIaWyviAgdsZSowXqnqouPTyaD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"EprIaWyviAgdsZSowXqnqouPTyaD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::HardwareControllerMapIdentifier Rewired::Joystick::EfneuiyFlDuybCLKNMSjmxdEZwFC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"EfneuiyFlDuybCLKNMSjmxdEZwFC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMapIdentifier>(this, ___internal_method);
}
inline void Rewired::Joystick::_ctor(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline bool Rewired::Joystick::UZSyUmEICIFSXEFvUfFNCdClXHaeA(::Rewired::JoystickType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"UZSyUmEICIFSXEFvUfFNCdClXHaeA", {}, {::i2c::type_of<::Rewired::JoystickType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::JoystickCalibrationMapSaveData* Rewired::Joystick::GetCalibrationMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"GetCalibrationMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::JoystickCalibrationMapSaveData*>(this, ___internal_method);
}
inline void Rewired::Joystick::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel);
}
inline void Rewired::Joystick::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel, leftMotorDuration, rightMotorDuration);
}
inline void Rewired::Joystick::SetVibration(int32_t  motorIndex, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel);
}
inline void Rewired::Joystick::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration);
}
inline void Rewired::Joystick::SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, stopOtherMotors);
}
inline void Rewired::Joystick::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration, stopOtherMotors);
}
inline float_t Rewired::Joystick::GetVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motorIndex);
}
inline void Rewired::Joystick::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Joystick::HQHaaeQfupUFFFNyAyppUkuzVlZM(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Joystick*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::BkXZBVwiTBBWQlKhLSoSzavMQbju(::Rewired::UpdateControllerInfoEventArgs*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"BkXZBVwiTBBWQlKhLSoSzavMQbju", {}, {::i2c::type_of<::Rewired::UpdateControllerInfoEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::QLedQRFGQNUTbrAAtnwFEwpNZnPmA(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"QLedQRFGQNUTbrAAtnwFEwpNZnPmA", {}, {::i2c::type_of<::Rewired::BridgedController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::xnlDJhpBFqGkQLiGSohhXOfKWnwB(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"xnlDJhpBFqGkQLiGSohhXOfKWnwB", {}, {::i2c::type_of<::Rewired::Interfaces::IInputManagerJoystickPublic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::PZQYbMqGeVDkemQyZKdcDJmwwLmp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Joystick*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Joystick::DYNLQmvajoibEMQwaBAQvrBNAMfAA(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Joystick*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Joystick::Disconnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Joystick*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Joystick::qjjBPWebzUjOkRgxJzAtCxXIMfTL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"qjjBPWebzUjOkRgxJzAtCxXIMfTL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Joystick::RSTGaLAKGheBhgfXzDLabnteQglyb(int32_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"RSTGaLAKGheBhgfXzDLabnteQglyb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::Joystick::rmwbNtAkFAOFOCLdTMpACCbDiKwQb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"rmwbNtAkFAOFOCLdTMpACCbDiKwQb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Joystick::ZqMTGBRrcHjxTmXjobSyfvQAplmeA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"ZqMTGBRrcHjxTmXjobSyfvQAplmeA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::Joystick::tmAabPooCpbgwAUjiRvrqQJAvfGbA(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Joystick*>(),
                        {"tmAabPooCpbgwAUjiRvrqQJAvfGbA", {}, {::i2c::type_of<::Rewired::Joystick*>(), ::i2c::type_of<::Rewired::Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Joystick* Rewired::Joystick::New_ctor(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Joystick*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Joystick* Rewired::Joystick::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Joystick*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11));
}
// Ctor Parameters []
constexpr ::Rewired::Joystick::Joystick()   {
}
