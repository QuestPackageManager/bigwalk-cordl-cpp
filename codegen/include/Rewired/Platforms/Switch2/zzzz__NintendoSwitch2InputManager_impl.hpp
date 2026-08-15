#pragma once
// IWYU pragma private; include "Rewired/Platforms/Switch2/NintendoSwitch2InputManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/Platforms/Switch2/zzzz__NintendoSwitch2InputManager_def.hpp"
#include "Rewired/Platforms/Switch2/zzzz__NintendoSwitch2InputManager_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalInputManager_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IKeyedData_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_allowedNpadStyles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_allowedNpadStyles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_allowedNpadStyles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_allowedNpadStyles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_allowedNpadStyles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_allowedNpadStyles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_joyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_joyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_adjustIMUsForGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_adjustIMUsForGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_adjustIMUsForGripStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_adjustIMUsForGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_adjustIMUsForGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_adjustIMUsForGripStyle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_handheldActivationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_handheldActivationMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_handheldActivationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_handheldActivationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_handheldActivationMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_handheldActivationMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_assignJoysticksByNpadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_assignJoysticksByNpadId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_assignJoysticksByNpadId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_assignJoysticksByNpadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_assignJoysticksByNpadId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_assignJoysticksByNpadId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_useVibrationThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_useVibrationThread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_useVibrationThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_useVibrationThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_useVibrationThread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_useVibrationThread", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_autoStartIMUs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_autoStartIMUs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_autoStartIMUs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_autoStartIMUs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_autoStartIMUs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_autoStartIMUs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_autoStartJoyConMouseSensors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_autoStartJoyConMouseSensors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_autoStartJoyConMouseSensors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_autoStartJoyConMouseSensors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_autoStartJoyConMouseSensors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_autoStartJoyConMouseSensors", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_allowJoyConMouseRebindPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_allowJoyConMouseRebindPolling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_allowJoyConMouseRebindPolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_allowJoyConMouseRebindPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_allowJoyConMouseRebindPolling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_allowJoyConMouseRebindPolling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_supportJoyConMouseSensors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_supportJoyConMouseSensors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_supportJoyConMouseSensors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_supportJoyConMouseSensors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_supportJoyConMouseSensors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_supportJoyConMouseSensors", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayAllowedGuestNpadStyles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayAllowedGuestNpadStyles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayAllowedGuestNpadStyles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_streamPlayAllowedGuestNpadStyles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayAllowedGuestNpadStyles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayAllowedGuestNpadStyles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayGuestJoyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuestJoyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuestJoyConGripStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_streamPlayGuestJoyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayGuestJoyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayGuestJoyConGripStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayGuestSupportedHidFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuestSupportedHidFeatures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuestSupportedHidFeatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.set_streamPlayGuestSupportedHidFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayGuestSupportedHidFeatures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayGuestSupportedHidFeatures", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo7)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadNo8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_npadHandheld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadHandheld)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadHandheld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_debugPad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_debugPad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_debugPad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayGuest1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayGuest2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_streamPlayGuest3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData.get_delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_delegates)> {
  constexpr static std::size_t size = 0xe90;
  constexpr static std::size_t addrs = 0x1803a7800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803a7540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_5", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_7)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_9)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_9", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_10)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_11)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_12)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_13)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_13", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_14)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_14", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_15)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_15", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_16)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_17)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_17", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_18)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_18", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_19
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_19)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_19", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_20
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_20)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_20", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_21
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_21)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_21", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_22
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_22)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_22", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_23
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_23)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_23", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_24)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_24", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_25
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_25)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_25", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_26
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_26)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_26", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_27
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_27)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_27", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_28
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_28)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_28", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_29
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_29)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_29", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_30
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_30)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_30", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_31
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_31)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_31", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_33
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_33)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_33", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_34
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_34)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_34", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_35
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_35)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_35", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_36
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_36)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_36", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_37
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_37)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_37", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_38
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_38)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_38", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_39
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_39)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_39", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData._get_delegates_b__95_40
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_40)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_40", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__allowedNpadStyles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedNpadStyles;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__allowedNpadStyles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedNpadStyles;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__allowedNpadStyles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowedNpadStyles = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__joyConGripStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joyConGripStyle;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__joyConGripStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joyConGripStyle;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__joyConGripStyle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joyConGripStyle = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__adjustIMUsForGripStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustIMUsForGripStyle;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__adjustIMUsForGripStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustIMUsForGripStyle;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__adjustIMUsForGripStyle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____adjustIMUsForGripStyle = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__handheldActivationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handheldActivationMode;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__handheldActivationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handheldActivationMode;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__handheldActivationMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handheldActivationMode = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__assignJoysticksByNpadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignJoysticksByNpadId;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__assignJoysticksByNpadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignJoysticksByNpadId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__assignJoysticksByNpadId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assignJoysticksByNpadId = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__useVibrationThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useVibrationThread;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__useVibrationThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useVibrationThread;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__useVibrationThread(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useVibrationThread = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__autoStartIMUs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartIMUs;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__autoStartIMUs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartIMUs;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__autoStartIMUs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoStartIMUs = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__autoStartJoyConMouseSensors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartJoyConMouseSensors;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__autoStartJoyConMouseSensors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartJoyConMouseSensors;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__autoStartJoyConMouseSensors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoStartJoyConMouseSensors = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__allowJoyConMouseRebindPolling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowJoyConMouseRebindPolling;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__allowJoyConMouseRebindPolling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowJoyConMouseRebindPolling;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__allowJoyConMouseRebindPolling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowJoyConMouseRebindPolling = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__initializeJcms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeJcms;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__initializeJcms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeJcms;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__initializeJcms(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializeJcms = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__supportJoyConMouseSensors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportJoyConMouseSensors;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__supportJoyConMouseSensors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportJoyConMouseSensors;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__supportJoyConMouseSensors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportJoyConMouseSensors = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayAllowedGuestNpadStyles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayAllowedGuestNpadStyles;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayAllowedGuestNpadStyles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayAllowedGuestNpadStyles;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayAllowedGuestNpadStyles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayAllowedGuestNpadStyles = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuestJoyConGripStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuestJoyConGripStyle;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuestJoyConGripStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuestJoyConGripStyle;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayGuestJoyConGripStyle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayGuestJoyConGripStyle = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuestSupportedHidFeatures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuestSupportedHidFeatures;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuestSupportedHidFeatures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuestSupportedHidFeatures;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayGuestSupportedHidFeatures(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayGuestSupportedHidFeatures = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo1;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo1;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo1 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo2;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo2;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo2 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo3;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo3;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo3 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo4;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo4;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo4(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo4 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo5;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo5;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo5(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo5 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo6;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo6;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo6(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo6 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo7;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo7;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo7(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo7 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo8;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadNo8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo8;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadNo8(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo8 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadHandheld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadHandheld;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__npadHandheld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadHandheld;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__npadHandheld(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadHandheld = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__debugPad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugPad;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__debugPad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugPad;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__debugPad(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugPad = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest1;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest1;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayGuest1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayGuest1 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest2;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest2;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayGuest2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayGuest2 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest3;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get__streamPlayGuest3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPlayGuest3;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set__streamPlayGuest3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPlayGuest3 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get___delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_get___delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::__cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____delegates = value;
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_allowedNpadStyles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_allowedNpadStyles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_allowedNpadStyles(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_allowedNpadStyles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_joyConGripStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_joyConGripStyle(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_adjustIMUsForGripStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_adjustIMUsForGripStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_adjustIMUsForGripStyle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_adjustIMUsForGripStyle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_handheldActivationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_handheldActivationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_handheldActivationMode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_handheldActivationMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_assignJoysticksByNpadId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_assignJoysticksByNpadId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_assignJoysticksByNpadId(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_assignJoysticksByNpadId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_useVibrationThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_useVibrationThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_useVibrationThread(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_useVibrationThread", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_autoStartIMUs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_autoStartIMUs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_autoStartIMUs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_autoStartIMUs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_autoStartJoyConMouseSensors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_autoStartJoyConMouseSensors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_autoStartJoyConMouseSensors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_autoStartJoyConMouseSensors", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_allowJoyConMouseRebindPolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_allowJoyConMouseRebindPolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_allowJoyConMouseRebindPolling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_allowJoyConMouseRebindPolling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_supportJoyConMouseSensors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_supportJoyConMouseSensors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_supportJoyConMouseSensors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_supportJoyConMouseSensors", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayAllowedGuestNpadStyles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayAllowedGuestNpadStyles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayAllowedGuestNpadStyles(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayAllowedGuestNpadStyles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuestJoyConGripStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuestJoyConGripStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayGuestJoyConGripStyle(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayGuestJoyConGripStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuestSupportedHidFeatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuestSupportedHidFeatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::set_streamPlayGuestSupportedHidFeatures(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"set_streamPlayGuestSupportedHidFeatures", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadNo8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadNo8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_npadHandheld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_npadHandheld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_debugPad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_debugPad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_streamPlayGuest3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_streamPlayGuest3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"get_delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_1(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_3(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_5(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_5", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_7(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_9(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_9", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_13()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_13", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_14()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_14", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_15()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_15", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_17()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_17", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_18()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_18", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_19()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_19", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_20()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_20", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_21(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_21", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_22()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_22", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_23(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_23", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_24()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_24", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_25(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_25", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_26()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_26", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_27(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_27", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_28()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_28", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_29(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_29", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_30()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_30", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_31(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_31", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_33(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_33", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_34()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_34", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_35(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_35", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_36()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_36", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_37(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_37", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_38()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_38", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_39()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_39", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::_get_delegates_b__95_40()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>(),
                        {"<get_delegates>b__95_40", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*>());
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::operator ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData::NintendoSwitch2InputManager_UserData()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.get_isAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_isAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_isAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.set_isAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_isAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_isAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.get_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.set_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.get_joyConAssignmentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_joyConAssignmentMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_joyConAssignmentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.set_joyConAssignmentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_joyConAssignmentMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_joyConAssignmentMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803954d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal.get_delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_delegates)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1803954e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal._get_delegates_b__15_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__isAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAllowed;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__isAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAllowed;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_set__isAllowed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAllowed = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__rewiredPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__rewiredPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_set__rewiredPlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rewiredPlayerId = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__joyConAssignmentMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joyConAssignmentMode;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get__joyConAssignmentMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joyConAssignmentMode;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_set__joyConAssignmentMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joyConAssignmentMode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get___delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_get___delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::__cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____delegates = value;
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_isAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_isAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_isAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_isAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_rewiredPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_rewiredPlayerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_joyConAssignmentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_joyConAssignmentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::set_joyConAssignmentMode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"set_joyConAssignmentMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_ctor(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_1(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_3(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::_get_delegates_b__15_5(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(),
                        {"<get_delegates>b__15_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::New_ctor(int32_t  playerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*>(playerId));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::operator ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal::NintendoSwitch2InputManager_NpadSettings_Internal()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal.get_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::get_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal.set_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::set_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)(int32_t, int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18039ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal.get_delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::get_delegates)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x18039ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_7)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_9)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_10)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal._get_delegates_b__17_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_11)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__guestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guestId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__guestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guestId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__guestId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guestId = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__rewiredPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__rewiredPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__rewiredPlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rewiredPlayerId = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo1;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo1;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo1 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo2;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo2;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo2 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo3;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo3;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo3 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo4;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo4;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo4(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo4 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo5;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo5;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo5(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo5 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo6;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo6;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo6(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo6 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo7;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo7;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo7(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo7 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo8;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadNo8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadNo8;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadNo8(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadNo8 = value;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadHandheld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadHandheld;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get__npadHandheld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadHandheld;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set__npadHandheld(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadHandheld = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get___delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_get___delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::__cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____delegates = value;
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::get_rewiredPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::set_rewiredPlayerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_ctor(int32_t  guestId, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guestId, playerId);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_2(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::_get_delegates_b__17_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(),
                        {"<get_delegates>b__17_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::New_ctor(int32_t  guestId, int32_t  playerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*>(guestId, playerId));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::operator ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal.get_overrideParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_overrideParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_overrideParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal.set_overrideParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::set_overrideParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"set_overrideParent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal.get_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal.set_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::set_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal.get_delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_delegates)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18039e7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._get_delegates_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._get_delegates_b__12_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._get_delegates_b__12_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._get_delegates_b__12_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal._get_delegates_b__12_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_4", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__npadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__npadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____npadId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_set__npadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____npadId = value;
}
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__overrideParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideParent;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__overrideParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideParent;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_set__overrideParent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overrideParent = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__rewiredPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get__rewiredPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_set__rewiredPlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rewiredPlayerId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get___delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_get___delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::__cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____delegates = value;
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_overrideParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_overrideParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::set_overrideParent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"set_overrideParent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_rewiredPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::set_rewiredPlayerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_ctor(int32_t  npadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npadId);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_2(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::_get_delegates_b__12_4(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(),
                        {"<get_delegates>b__12_4", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::New_ctor(int32_t  npadId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*>(npadId));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::operator ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal.get_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal.set_rewiredPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::set_rewiredPlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal.get_delegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_delegates)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803924d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal._get_delegates_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal._get_delegates_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)(bool)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal._get_delegates_b__11_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal._get_delegates_b__11_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::*)(int32_t)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr int32_t& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get__rewiredPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr int32_t const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get__rewiredPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rewiredPlayerId;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_set__rewiredPlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rewiredPlayerId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get___delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_get___delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____delegates;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::__cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____delegates = value;
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_rewiredPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_rewiredPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::set_rewiredPlayerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"set_rewiredPlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_ctor(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::get_delegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"get_delegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(this, ___internal_method);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T>
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                    {"Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline bool Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_1(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::_get_delegates_b__11_3(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(),
                        {"<get_delegates>b__11_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::New_ctor(int32_t  playerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*>(playerId));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::operator ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal::NintendoSwitch2InputManager_DebugPadSettings_Internal()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager.Rewired_Utils_Interfaces_IExternalInputManager_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::*)(::Rewired::Platforms::Platform, ::System::Object*)>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::Rewired_Utils_Interfaces_IExternalInputManager_Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {"Rewired.Utils.Interfaces.IExternalInputManager.Initialize", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager.Rewired_Utils_Interfaces_IExternalInputManager_Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::Rewired_Utils_Interfaces_IExternalInputManager_Deinitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {"Rewired.Utils.Interfaces.IExternalInputManager.Deinitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::*)()>(&::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180395480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*& Rewired::Platforms::Switch2::NintendoSwitch2InputManager::__cordl_internal_get__userData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData;
}
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData* const& Rewired::Platforms::Switch2::NintendoSwitch2InputManager::__cordl_internal_get__userData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData;
}
constexpr void Rewired::Platforms::Switch2::NintendoSwitch2InputManager::__cordl_internal_set__userData(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userData = value;
}
inline ::System::Object* Rewired::Platforms::Switch2::NintendoSwitch2InputManager::Rewired_Utils_Interfaces_IExternalInputManager_Initialize(::Rewired::Platforms::Platform  platform, ::System::Object*  configVars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {"Rewired.Utils.Interfaces.IExternalInputManager.Initialize", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, platform, configVars);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager::Rewired_Utils_Interfaces_IExternalInputManager_Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {"Rewired.Utils.Interfaces.IExternalInputManager.Deinitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Switch2::NintendoSwitch2InputManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager* Rewired::Platforms::Switch2::NintendoSwitch2InputManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*>());
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExternalInputManager"
constexpr  Rewired::Platforms::Switch2::NintendoSwitch2InputManager::operator ::Rewired::Utils::Interfaces::IExternalInputManager*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExternalInputManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IExternalInputManager"
constexpr ::Rewired::Utils::Interfaces::IExternalInputManager* Rewired::Platforms::Switch2::NintendoSwitch2InputManager::i___Rewired__Utils__Interfaces__IExternalInputManager() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExternalInputManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager::NintendoSwitch2InputManager()   {
}
